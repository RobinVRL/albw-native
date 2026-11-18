#include "ghidra_types.h"

extern uint DAT_00413f58;

// USA 00413F10 <- EU 00413EF0 (Ghidra, non-matching)
// GLOBAL DAT_00413f58 uint

uint func_00413F10(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = param_1 << 1;
    }
    else {
      uVar1 = 0;
      if (param_2 == 3) {
        iVar2 = param_1 + (uint)((ulonglong)DAT_00413f58 * (ulonglong)param_1 +
                                 (ulonglong)DAT_00413f58 >> 0x22) * -0xe;
        uVar1 = (uint)((ulonglong)DAT_00413f58 * (ulonglong)param_1 + (ulonglong)DAT_00413f58 >>
                      0x22) * 0x10;
        if (iVar2 != 0) {
          uVar1 = uVar1 + iVar2 + 2;
        }
        uVar1 = uVar1 >> 1;
      }
    }
  }
  return uVar1;
}

