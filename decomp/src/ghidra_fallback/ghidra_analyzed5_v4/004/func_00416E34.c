#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00413384(undefined4 *param_1);
extern int func_00413788(undefined4 *param_1);
extern int func_0041D79C(undefined4 *param_1,int param_2,int param_3,int param_4);
extern undefined4 DAT_00416e84;
extern undefined *DAT_00416e88;

// USA 00416E34 <- EU 00416E14 (Ghidra, non-matching)
// GLOBAL DAT_00416e84 undefined4
// GLOBAL DAT_00416e88 undefined *

int func_00416E34(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = func_00413384(param_1 + 1);
  puVar1[4] = 0;
  puVar1 = func_00413788(puVar1 + 0x19);
  *puVar1 = DAT_00416e84;
  puVar1[9] = puVar1 + 9;
  puVar1[8] = 0;
  puVar1[10] = puVar1 + 9;
  puVar1[0xb] = 0;
  iVar2 = func_00100118((int)(puVar1 + 0xc),DAT_00416e88,0x50,0x20);
  func_0041D79C((undefined4 *)(iVar2 + -4),iVar2,0xa00,0x50);
  return iVar2 + -0x98;
}

