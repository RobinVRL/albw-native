#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_0010aa38;
extern int *DAT_0010aa3c;

// USA 0010A9FC <- EU 0010A9FC (Ghidra, non-matching)
// GLOBAL DAT_0010aa38 int
// GLOBAL DAT_0010aa3c int *

int func_0010A9FC(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = DAT_0010aa38;
  if (iVar1 != 0) {
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar1 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar1 >> 0x1f),param_2,param_3);
    }
    *param_1 = *DAT_0010aa3c;
    iVar2 = iVar1;
  }
  return iVar2;
}

