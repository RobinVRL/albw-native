#!/usr/bin/env bash
# make_eu_dis.sh <out dir>: the EU code disassembly used by tools/indirect_args_scan.py, verify_lost_word.py,
# armat.py / vsite.py (llvm-objdump of ../albw-decomp-ai/rom/eu_code.bin loaded at 0x100000)
set -e
O=${1:-.}; cd "$(dirname "$0")/../.."
llvm-objcopy -I binary -O elf32-littlearm -B arm ../albw-decomp-ai/rom/eu_code.bin "$O/eu.elf"
llvm-objdump --triple=armv6k-none-eabi --mattr=+vfp2 -d --adjust-vma=0x100000 "$O/eu.elf" > "$O/eu.dis"
echo "$O/eu.dis"
