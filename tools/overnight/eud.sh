#!/bin/bash
# eud.sh <EU start hex> <EU stop hex>: disassemble the EU code.bin (loaded at 0x100000)
S=$(dirname "$0")
llvm-objdump --triple=armv6k-none-eabi --mattr=+vfp2 -d --adjust-vma=0x100000 --start-address=$(( $1 - 0x100000 )) --stop-address=$(( $2 - 0x100000 )) $S/eu_full.o | sed 's/ *<_binary[^>]*>//; s/@ imm = #[-0-9x]*//'
