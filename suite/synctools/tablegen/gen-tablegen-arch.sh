#!/bin/bash
# Generate raw .inc files for non-x86 architectures of Capstone, by Nguyen Anh Quynh

# Syntax: gen-tablegen-arch.sh <path-to-llvm-tblgen> <arch> <path-to-llvm-repo-include>

# Example: ./gen-tablegen-arch.sh PowerPC
set -eu
set -o pipefail

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
echo "script's current directory is ${SCRIPT_DIR}"
LLVM_DIR="${SCRIPT_DIR}/../llvm-project/llvm"
BUILD_DIR="${SCRIPT_DIR}/build"
TBLGEN_PATH="${BUILD_DIR}/bin/"

case "$1" in
   PPC)
   ARCH="PowerPC"
   ARCH_SHORT="PPC"
   ;;
   PowerPC)
   ARCH="PowerPC"
   ARCH_SHORT="PPC"
   ;;
esac
INCLUDE_PATH="${LLVM_DIR}/include"
DIR_TD="${LLVM_DIR}/lib/Target/${ARCH}/"

echo "Using LLVM from ${LLVM_DIR}"
cmake -S "${LLVM_DIR}" -B "${BUILD_DIR}"

echo "Building llvm-tblgen binary"
make -C "${BUILD_DIR}" llvm-tblgen

echo "Using llvm-tblgen from ${TBLGEN_PATH}"
echo "Using llvm includes from ${INCLUDE_PATH}"
echo "Using table defs from ${DIR_TD}"

echo "Generating ${ARCH}GenInstrInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-instr-info --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenInstrInfo.inc"

echo "Generating ${ARCH}GenRegisterInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-register-info --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenRegisterInfo.inc"

echo "Generating ${ARCH}GenAsmMatcher.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-asm-matcher --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenAsmMatcher.inc"

echo "Generating ${ARCH}GenDisassemblerTables.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-disassembler --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenDisassemblerTables.inc"

echo "Generating ${ARCH}GenAsmWriter.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-asm-writer --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenAsmWriter.inc"

echo "Generating ${ARCH}GenSubtargetInfo.inc"
"$TBLGEN_PATH/llvm-tblgen" -gen-subtarget --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenSubtargetInfo.inc"

case "$ARCH_SHORT" in
  ARM)
  # for ARM only
  echo "Generating ${ARCH}GenAsmWriter-digit.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-asm-writer --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH}-digit.td" -o "${ARCH}GenAsmWriter-digit.inc"
  echo "Generating ${ARCH}GenSystemRegister.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-searchable-tables --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenSystemRegister.inc"
  ;;
  AArch64)
  echo "Generating ${ARCH}GenSystemOperands.inc"
  "$TBLGEN_PATH/llvm-tblgen" -gen-searchable-tables --target-language=c -I "${INCLUDE_PATH}" -I "${DIR_TD}" "${DIR_TD}/${ARCH_SHORT}.td" -o "${ARCH}GenSystemOperands.inc"
  ;;
esac

