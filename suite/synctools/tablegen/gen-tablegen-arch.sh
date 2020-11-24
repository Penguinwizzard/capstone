#!/bin/sh
# Generate raw .inc files for non-x86 architectures of Capstone, by Nguyen Anh Quynh

# Syntax: gen-tablegen-arch.sh <path-to-llvm-tblgen> <arch> <path-to-llvm-repo-include>

# Example: ./gen-tablegen-arch.sh ~/projects/llvm-project/llvm/build/bin ARM ~/projects/llvm-project/llvm/include ~/projects/llvm-project/llvm/lib/Target/PowerPC/

TBLGEN_PATH=$1
ARCH=$2
INCLUDE_PATH=$3
DIR_TD=$4

echo "Using llvm-tblgen from ${TBLGEN_PATH}"
echo "Using llvm includes from ${INCLUDE_PATH}"
echo "Using table defs from ${DIR_TD}"

echo "Generating ${ARCH}GenInstrInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-instr-info -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenInstrInfo.inc"

echo "Generating ${ARCH}GenRegisterInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-register-info -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenRegisterInfo.inc"

echo "Generating ${ARCH}GenAsmMatcher.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-asm-matcher -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenAsmMatcher.inc"

echo "Generating ${ARCH}GenDisassemblerTables.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-disassembler -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenDisassemblerTables.inc"

echo "Generating ${ARCH}GenAsmWriter.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-asm-writer -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenAsmWriter.inc"

echo "Generating ${ARCH}GenSubtargetInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-subtarget -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenSubtargetInfo.inc"

case $2 in
  ARM)
  # for ARM only
  echo "Generating ${ARCH}GenAsmWriter-digit.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-asm-writer -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}-digit.td" -o "${ARCH}GenAsmWriter-digit.inc"
  echo "Generating ${ARCH}GenSystemRegister.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-searchable-tables -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenSystemRegister.inc"
  ;;
  AArch64)
  echo "Generating ${ARCH}GenSystemOperands.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-searchable-tables -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}.td" -o "${ARCH}GenSystemOperands.inc"
  ;;
esac

