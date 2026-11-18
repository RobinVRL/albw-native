#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_004a6908;
extern undefined *DAT_004a690c;
extern undefined4 DAT_004a6910;

// USA 004A6868 <- EU 004A6840 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_004a6908 int
// GLOBAL DAT_004a690c undefined *
// GLOBAL DAT_004a6910 undefined4

undefined4 *
func_004A6868(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = param_1 + 0xf;
  param_1[0x10] = puVar2;
  param_1[0x11] = 0;
  *puVar2 = puVar2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[0x12] = 0xffffffff;
  param_1[4] = *(undefined4 *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    iVar4 = DAT_004a6908;
  }
  param_1[5] = iVar4;
  param_1[6] = *(undefined4 *)(param_2 + 0xc);
  param_1[10] = *(undefined4 *)(param_2 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x14);
  iVar5 = param_1[10];
  iVar3 = func_0010CEE0(iVar5 * 0xc,param_5,4);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_00100118(iVar3,DAT_004a690c,0xc,iVar5);
  }
  param_1[9] = iVar4;
  uVar1 = DAT_004a6910;
  param_1[7] = DAT_004a6910;
  param_1[8] = uVar1;
  param_1[0x12] = 0;
  return param_1;
}

