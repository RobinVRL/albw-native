#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);
extern int *DAT_00655678;
extern int DAT_0065567c;

// USA 00655658 <- EU 00655630 (Ghidra, non-matching)
// GLOBAL DAT_00655678 int *
// GLOBAL DAT_0065567c int

undefined4 func_00655658(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)(*DAT_00655678 + 0x3dbe8) + 0x10);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (iVar2 == param_1[0xb3])) {
    *piVar1 = 0;
  }
  iVar2 = DAT_0065567c;
  param_1[0xf7] = DAT_0065567c;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  return func_004F8638(param_1,0xff);
}

