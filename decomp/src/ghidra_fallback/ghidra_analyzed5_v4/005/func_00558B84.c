#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int *DAT_00558bc0;
extern int *DAT_00558bc4;

// USA 00558B84 <- EU 00558B5C (Ghidra, non-matching)
// GLOBAL DAT_00558bc0 int *
// GLOBAL DAT_00558bc4 int *

undefined4 func_00558B84(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = func_00588BE4(param_2);
  if ((iVar1 == *DAT_00558bc0) || (iVar1 = func_00588BE4(param_2), iVar1 == *DAT_00558bc4)) {
    uVar2 = 1;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    uVar2 = 0;
    if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00558bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*puVar3)(puVar3,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

