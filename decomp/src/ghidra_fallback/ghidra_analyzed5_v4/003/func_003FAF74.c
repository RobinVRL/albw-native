#include "ghidra_types.h"

extern undefined4 DAT_003fafb4;

// USA 003FAF74 <- EU 003FAF54 (Ghidra, non-matching)
// GLOBAL DAT_003fafb4 undefined4

int * func_003FAF74(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_s0;
  
  if (param_3 != 0) {
    in_s0 = DAT_003fafb4;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = uVar1 + 1;
      *(undefined4 *)(*param_1 + uVar1 * 0x20 + 8) = in_s0;
      *(undefined4 *)(*param_1 + uVar1 * 0x20 + 0xc) = in_s0;
      *(undefined4 *)(*param_1 + uVar1 * 0x20) = 0;
      *(undefined4 *)(*param_1 + uVar1 * 0x20 + 4) = 0;
      uVar1 = uVar2;
    } while (uVar2 < param_3);
  }
  return param_1;
}

