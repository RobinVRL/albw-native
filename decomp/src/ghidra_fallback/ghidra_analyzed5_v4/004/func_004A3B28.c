#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A2704(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4);
extern undefined4 DAT_004a3bc8;
extern undefined *DAT_004a3bcc;

// USA 004A3B28 <- EU 004A3B00 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 int
// GLOBAL DAT_004a3bc8 undefined4
// GLOBAL DAT_004a3bcc undefined *

undefined4 * func_004A3B28(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_004a3bc8;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  param_1[8] = param_2;
  param_1[10] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[6] = param_4;
  param_1[4] = 0;
  puVar1 = (undefined4 *)func_0010CEE0(param_4 * 0x40 + 8,param_3,4);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x40;
    puVar1[1] = param_4;
    iVar2 = func_00100118((int)(puVar1 + 2),DAT_004a3bcc,0x40,param_4);
  }
  param_1[5] = iVar2;
  param_1[7] = 0;
  puVar3 = (undefined4 *)func_0010CF28(0x10,param_3,4);
  puVar1 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = func_004A2704(puVar3,param_1,param_3,0x10);
  }
  param_1[0xb] = puVar1;
  return param_1;
}

