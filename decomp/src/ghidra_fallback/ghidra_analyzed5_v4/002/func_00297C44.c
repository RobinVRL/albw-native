#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined DAT_00297de0;
extern int DAT_00297de4;
extern undefined4 DAT_00297de8;
extern undefined4 DAT_00297dec;
extern undefined4 DAT_00297df0;
extern uint DAT_00297e00;
extern char s_JP_Japanese_00297df4[];

// USA 00297C44 <- EU 00297CEC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00297de0 undefined
// GLOBAL DAT_00297de4 int
// GLOBAL DAT_00297de8 undefined4
// GLOBAL DAT_00297dec undefined4
// GLOBAL DAT_00297df0 undefined4
// GLOBAL DAT_00297e00 uint
// GLOBAL s_JP_Japanese_00297df4 string

undefined1 * func_00297C44(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar6 = (undefined4 *)(param_1 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  iVar1 = DAT_00297de4;
  local_2c = &DAT_00297de0;
  local_30 = DAT_00297de4;
  *(undefined4 *)(param_1 + 0x10) = 0x20;
  *(undefined1 **)(param_1 + 0xc) = param_1 + 0x14;
  uVar2 = DAT_00297dec;
  param_1[0x33] = 0;
  *puVar6 = uVar2;
  func_00689894((int)puVar6,&local_30,0xffffffff);
  uVar3 = DAT_00297df0;
  puVar5 = (undefined4 *)(param_1 + 0x34);
  *puVar6 = DAT_00297df0;
  local_24 = s_JP_Japanese_00297df4;
  local_28 = iVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined1 **)(param_1 + 0x38) = param_1 + 0x40;
  param_1[0x5f] = 0;
  *puVar5 = uVar2;
  func_00689894((int)puVar5,&local_28,0xffffffff);
  *puVar5 = uVar3;
  uVar4 = DAT_00297e00;
  *(undefined2 *)(param_1 + 0x62) = 0;
  func_00110490((undefined4 *)(param_1 + 100),uVar4);
  *(undefined4 *)(param_1 + 0x106c) = 0;
  *(undefined4 *)(param_1 + 0x1070) = 0;
  *(undefined4 *)(param_1 + 0x1074) = 0;
  *(undefined4 *)(param_1 + 0x1078) = 0;
  *(undefined4 *)(param_1 + 0x107c) = 0;
  *(undefined4 *)(param_1 + 0x1080) = 0;
  return param_1;
}

