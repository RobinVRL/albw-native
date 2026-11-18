#include "ghidra_types.h"

extern uint DAT_00413b80;

// USA 00413B34 <- EU 00413B14 (Ghidra, non-matching)
// GLOBAL DAT_00413b80 uint

uint func_00413B34(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = param_1 << 1;
    }
    else {
      uVar2 = 0;
      if (param_2 == 3) {
        uVar2 = (uint)((ulonglong)DAT_00413b80 * (ulonglong)param_1 + (ulonglong)DAT_00413b80 >>
                      0x22) * 8;
        iVar1 = param_1 + (uint)((ulonglong)DAT_00413b80 * (ulonglong)param_1 +
                                 (ulonglong)DAT_00413b80 >> 0x22) * -0xe;
        if (iVar1 != 0) {
          uVar2 = uVar2 + (iVar1 + 1U >> 1) + 1;
        }
      }
    }
  }
  return uVar2;
}

