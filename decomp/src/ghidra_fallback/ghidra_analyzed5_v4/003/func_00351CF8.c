#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00351d10;
extern undefined *DAT_00351d14;

// USA 00351CF8 <- EU 00351CD4 (Ghidra, non-matching)
// GLOBAL DAT_00351d10 undefined4
// GLOBAL DAT_00351d14 undefined *

int func_00351CF8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00351d10;
  *(undefined1 *)(puVar1 + 4) = 0;
  iVar2 = func_00100118((int)(puVar1 + 5),DAT_00351d14,0x18,2);
  return iVar2 + -0x14;
}

