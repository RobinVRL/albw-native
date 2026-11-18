#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A6D24(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4);
extern undefined4 DAT_004a75cc;
extern undefined4 DAT_004a75d0;
extern undefined *DAT_004a75d4;

// USA 004A7548 <- EU 004A7520 (Ghidra, non-matching)
// GLOBAL DAT_004a75cc undefined4
// GLOBAL DAT_004a75d0 undefined4
// GLOBAL DAT_004a75d4 undefined *

undefined4 * func_004A7548(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = DAT_004a75cc;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  param_1[9] = 0;
  param_1[6] = 0x100;
  uVar1 = DAT_004a75d0;
  param_1[4] = 0;
  puVar2 = (undefined4 *)func_0010CEE0(uVar1,param_2,4);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x48;
    puVar2[1] = 0x100;
    iVar3 = func_00100118((int)(puVar2 + 2),DAT_004a75d4,0x48,0x100);
  }
  param_1[5] = iVar3;
  param_1[7] = 0;
  puVar4 = (undefined4 *)func_0010CF28(0x10,param_2,4);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_004A6D24(puVar4,param_1,param_2,0x10);
  }
  param_1[8] = puVar2;
  return param_1;
}

