#include "ghidra_types.h"

extern int func_004F8638(int *param_1,undefined1 param_2);
extern int *DAT_006546c4;
extern int DAT_006546c8;

// USA 006546A4 <- EU 0065467C (Ghidra, non-matching)
// GLOBAL DAT_006546c4 int *
// GLOBAL DAT_006546c8 int

undefined4 func_006546A4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)(*DAT_006546c4 + 0x3dbe8) + 0x10);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (iVar2 == param_1[0xb3])) {
    *piVar1 = 0;
  }
  iVar2 = DAT_006546c8;
  param_1[0xf7] = DAT_006546c8;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  return func_004F8638(param_1,0xff);
}

