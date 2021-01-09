#!/usr/bin/python
# convert LLVM GenDisassemblerTables.inc for Capstone disassembler.
# this just adds a header
# by Nguyen Anh Quynh, 2019

import sys

if len(sys.argv) == 1:
    print("Syntax: %s <GenDisassemblerTables.inc> <arch>" %sys.argv[0])
    sys.exit(1)

f = open(sys.argv[1])
lines = f.readlines()
f.close()

print("/* Capstone Disassembly Engine, http://www.capstone-engine.org */")
print("/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2019 */")
print("/* Automatically generated file, do not edit! */\n")
print('#include "../../MCInst.h"')
print('#include "../../LEB128.h"')
print("")


for line in lines:
    line2 = line.rstrip()

    print(line2)
