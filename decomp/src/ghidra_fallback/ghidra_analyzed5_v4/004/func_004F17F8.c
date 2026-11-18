#include "ghidra_types.h"

extern int func_002978FC(int param_1,int param_2,int param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int DAT_004f1924;
extern int DAT_004f1928;
extern undefined4 DAT_004f192c;
extern int DAT_004f1930;
extern undefined4 DAT_004f1934;
extern undefined4 DAT_004f1938;
extern undefined4 DAT_004f193c;
extern undefined4 DAT_004f1940;

// USA 004F17F8 <- EU 004F17D0 (Ghidra, non-matching)
// GLOBAL DAT_004f1924 int
// GLOBAL DAT_004f1928 int
// GLOBAL DAT_004f192c undefined4
// GLOBAL DAT_004f1930 int
// GLOBAL DAT_004f1934 undefined4
// GLOBAL DAT_004f1938 undefined4
// GLOBAL DAT_004f193c undefined4
// GLOBAL DAT_004f1940 undefined4

undefined4 func_004F17F8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = 0;
  param_1[8] = -1;
  param_1[10] = 0;
  param_1[9] = -1;
  iVar1 = DAT_004f1924;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = iVar1;
  param_1[0xd] = iVar1 + 0x3c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar1 = DAT_004f1928;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = iVar1;
  param_1[0x13] = iVar1;
  local_2c = DAT_004f192c;
  param_1[0x14] = iVar1;
  iVar1 = DAT_004f1930;
  local_30 = DAT_004f1930;
  puVar4 = func_00689A2C(param_1 + 0x15,param_1 + 0x18,0x1e);
  uVar2 = DAT_004f1934;
  *puVar4 = DAT_004f1934;
  func_00689894((int)puVar4,&local_30,0xffffffff);
  local_24 = DAT_004f193c;
  uVar3 = DAT_004f1938;
  *puVar4 = DAT_004f1938;
  local_28 = iVar1;
  puVar4 = func_00689A2C(puVar4 + 0xb,puVar4 + 0xe,0x1e);
  *puVar4 = uVar2;
  func_00689894((int)puVar4,&local_28,0xffffffff);
  *puVar4 = uVar3;
  puVar4 = func_003529C0(puVar4 + 0xb);
  puVar4[0x10] = 0;
  pvVar5 = func_002978FC((int)(puVar4 + 0x12),(int)(puVar4 + -0x1e),0);
  uVar2 = DAT_004f1940;
  *(undefined4 *)((int)pvVar5 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar5 + 0x20) = 0xffffffff;
  *(undefined4 *)((int)pvVar5 + 0x24) = uVar2;
  *(undefined1 *)((int)pvVar5 + 0x28) = 0;
  *(undefined1 *)((int)pvVar5 + 0x29) = 1;
  *(undefined4 *)((int)pvVar5 + 0x2c) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x30) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x34) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  *(undefined4 *)((int)pvVar5 + 0x3c) = 0;
  *(undefined1 *)((int)pvVar5 + 0x40) = 0;
  return (undefined4)param_1;
}

