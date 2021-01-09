#!/bin/sh
# generate all ARCH*.inc files for Capstone, by Nguyen Anh Quynh

# Syntax: genall-arch.sh <clean-old-Capstone-arch-ARCH-dir> <arch>

# ./genall-arch.sh ~/projects/capstone.git/arch/ARM ARM
# ./genall-arch.sh ~/projects/capstone.git/arch/ARM AArch64
# ./genall-arch.sh ~/projects/capstone.git/arch/ARM PowerPC

case "$2" in
   PPC)
   ARCH="PowerPC"
   ARCH_SHORT="PPC"
   ;;
   PowerPC)
   ARCH="PowerPC"
   ARCH_SHORT="PPC"
   ;;
esac

LLVM_TABLEGEN_INC_DIR=tablegen

echo "Generating ${ARCH_SHORT}GenAsmWriter.inc"
./asmwriter.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmWriter.inc" "${ARCH_SHORT}GenAsmWriter.inc" "${ARCH_SHORT}GenRegisterName.inc" "${ARCH_SHORT}"

echo "Generating ${ARCH_SHORT}MappingInsnName.inc"
./mapping_insn_name-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" > "${ARCH_SHORT}MappingInsnName.inc"
#./mapping_insn_name-arch.py tablegen/ARMGenAsmMatcher.inc

echo "Generating ${ARCH_SHORT}MappingInsn.inc"
./mapping_insn-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "$1/${ARCH_SHORT}MappingInsn.inc" > "${ARCH_SHORT}MappingInsn.inc"

echo "Generating ${ARCH_SHORT}GenInstrInfo.inc"
./instrinfo-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "${ARCH_SHORT}" > "${ARCH_SHORT}GenInstrInfo.inc"

echo "Generating ${ARCH_SHORT}GenDisassemblerTables.inc"
./disassemblertables-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenDisassemblerTables.inc" "${ARCH_SHORT}" > "${ARCH_SHORT}GenDisassemblerTables.inc"

echo "Generating ${ARCH_SHORT}GenRegisterInfo.inc"
./registerinfo.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenRegisterInfo.inc" "${ARCH_SHORT}" > "${ARCH_SHORT}GenRegisterInfo.inc"

echo "Generating ${ARCH_SHORT}GenSubtargetInfo.inc"
./subtargetinfo.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenSubtargetInfo.inc" "${ARCH_SHORT}" > "${ARCH_SHORT}GenSubtargetInfo.inc"

case "${ARCH}" in
  ARM)
  # for ARM only
  echo "Generating ${ARCH_SHORT}GenAsmWriter-digit.inc"
  ./asmwriter.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmWriter-digit.inc" "${ARCH_SHORT}GenAsmWriter.inc" "${ARCH_SHORT}GenRegisterName_digit.inc" "${ARCH_SHORT}"
  echo "Generating ${ARCH_SHORT}GenSystemRegister.inc"
  ./systemregister.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenSystemRegister.inc" > "${ARCH_SHORT}GenSystemRegister.inc"
  echo "Generating instruction enum in insn_list.txt (for include/capstone/<arch>.h)"
  ./insn.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "$1/${ARCH_SHORT}MappingInsn.inc" > insn_list.txt
  # then copy these instructions to include/capstone/<arch>.h
  echo "Generating ${ARCH_SHORT}MappingInsnOp.inc"
  ./mapping_insn_op-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc"  "$1/${ARCH_SHORT}MappingInsnOp.inc" > "${ARCH_SHORT}MappingInsnOp.inc" 
  echo "Generating ${ARCH_SHORT}GenSystemRegister.inc"
  ./systemregister.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenSystemRegister.inc" > "${ARCH_SHORT}GenSystemRegister.inc"
  ;;
  AArch64)
  echo "Generating ${ARCH_SHORT}GenSystemOperands.inc"
  ./systemoperand.py tablegen/AArch64GenSystemOperands.inc AArch64GenSystemOperands.inc AArch64GenSystemOperands_enum.inc
  echo "Generating instruction enum in insn_list.txt (for include/capstone/<arch>.h)"
  ./insn.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "$1/${ARCH_SHORT}MappingInsn.inc" > insn_list.txt
  # then copy these instructions to include/capstone/<arch>.h
  ./arm64_gen_vreg > AArch64GenRegisterV.inc
  echo "Generating ${ARCH_SHORT}MappingInsnOp.inc"
  ./mapping_insn_op-arch.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "$1/${ARCH_SHORT}MappingInsnOp.inc" > "${ARCH_SHORT}MappingInsnOp.inc"
  make arm64
  ;;
  PowerPC)
  # PowerPC
  echo "generating insn3 for PPC"
  ./insn3.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" > insn_list.txt
  # then copy these instructions to include/capstone/arch.h
  ;;
  *)
  echo "Generating instruction enum in insn_list.txt (for include/capstone/<arch>.h)"
  ./insn.py "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenAsmMatcher.inc" "${LLVM_TABLEGEN_INC_DIR}/${ARCH}GenInstrInfo.inc" "$1/${ARCH_SHORT}MappingInsn.inc" > insn_list.txt
  ;;
esac

