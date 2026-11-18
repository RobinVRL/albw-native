#include "ghidra_types.h"

extern uint DAT_00563280;
extern uint DAT_00563284;

// USA 00563220 <- EU 005631F8 (Ghidra, non-matching)
// GLOBAL DAT_00563280 uint
// GLOBAL DAT_00563284 uint

uint * func_00563220(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = DAT_00563280;
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = uVar1;
    puVar2 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar2 = 0;
  }
  uVar1 = DAT_00563284;
  *param_2 = (uint)(*(char *)(param_1 + 0x1c) != '\x05') |
             (uint)(*(char *)(param_1 + 0x58) != '\0') << 1 |
             (uint)(*(char *)(param_1 + 0x7c) != '\0') << 2 | (uint)*(byte *)(param_1 + 0xa1) << 8 |
             (uint)(*(char *)(param_1 + 0xa0) != '\0') << 10 |
             (uint)(*(char *)(param_1 + 0x7d) != '\0') << 0xd | 0x11000;
  param_2[1] = uVar1;
  return param_2 + 2;
}

