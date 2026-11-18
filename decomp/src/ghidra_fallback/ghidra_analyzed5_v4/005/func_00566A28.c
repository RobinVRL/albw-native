#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_003E6760(undefined4 *param_1);
extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);
extern int func_00566508(int param_1,int param_2,ushort *param_3);
extern uint DAT_00566bdc;
extern undefined *DAT_00566be0;
extern undefined *DAT_00566be4;

// USA 00566A28 <- EU 00566A00 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int *
// GLOBAL DAT_00566bdc uint
// GLOBAL DAT_00566be0 undefined *
// GLOBAL DAT_00566be4 undefined *

void func_00566A28(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int *param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 unaff_r5;
  uint uVar10;
  ushort *puVar11;
  undefined2 unaff_r11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define uStack_3c (*(uint *)(albw_frame + 0x14))
  #define piStack_34 (*(int * *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define puStack_2c (*(uint * *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  local_44 = *param_6 + param_4;
  local_48 = param_4;
  piStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  iStack_28 = param_4;
  func_003FB500(&local_40,&local_48,param_6[7],4);
  uVar10 = DAT_00566bdc;
  uVar8 = 0;
  *param_3 = local_40;
  uVar10 = (uint)((ulonglong)uStack_3c * (ulonglong)uVar10 >> 0x28);
  if (uVar10 != 0) {
    unaff_r5 = 0;
    unaff_r11 = 0x100;
  }
  param_3[1] = uVar10;
  uVar6 = 0;
  if (uVar10 != 0) {
    do {
      puVar3 = (undefined2 *)(*param_3 + uVar8 * 0x154);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = unaff_r11;
        uVar1 = (undefined1)unaff_r5;
        *(undefined1 *)(puVar3 + 1) = uVar1;
        *(undefined1 *)((int)puVar3 + 3) = uVar1;
        *(undefined4 *)(puVar3 + 2) = unaff_r5;
        *(undefined4 *)(puVar3 + 6) = unaff_r5;
        *(undefined4 *)(puVar3 + 8) = unaff_r5;
        *(undefined4 *)(puVar3 + 0xe) = unaff_r5;
        puVar3[0x10] = (short)unaff_r5;
        puVar3[0x11] = (short)unaff_r5;
        iVar4 = func_00100118((int)(puVar3 + 0x12),DAT_00566be0,4,0xb);
        puVar5 = func_003E6760((undefined4 *)(iVar4 + 0x2c));
        puVar2 = DAT_00566be4;
        *(undefined1 *)(puVar5 + 0x25) = uVar1;
        iVar4 = func_00100118((int)(puVar5 + 0x26),puVar2,0x18,3);
        iVar4 = func_00100118(iVar4 + 0x48,DAT_00566be0,4,3);
        *(undefined4 *)(iVar4 + 0xc) = unaff_r5;
        *(undefined4 *)(iVar4 + 0x10) = unaff_r5;
        *(undefined4 *)(iVar4 + 0x14) = unaff_r5;
        *(undefined4 *)(iVar4 + 0x18) = unaff_r5;
        *(undefined4 *)(iVar4 + 0x1c) = unaff_r5;
        *(undefined4 *)(iVar4 + 0x20) = unaff_r5;
        *(undefined4 *)(iVar4 + -0x11c) = unaff_r5;
        *(undefined4 *)(iVar4 + -0x118) = unaff_r5;
      }
      uVar6 = param_3[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  puVar9 = (ushort *)*param_3;
  uVar10 = 0;
  puVar11 = puVar9 + uVar6 * 0xaa;
  for (; puVar9 != puVar11; puVar9 = puVar9 + 0xaa) {
    uVar12 = func_00110710(param_6[9],param_6[8]);
    uVar6 = (uint)uVar12;
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = param_5 + 0xfU & 0xfffffff0;
      param_5 = uVar8 + uVar6;
    }
    *(uint *)(puVar9 + 2) = uVar6 >> 3;
    iVar4 = 0;
    do {
      if (*(int *)(puVar9 + 2) * 4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar8 + 0xf & 0xfffffff0;
        uVar8 = uVar6 + *(int *)(puVar9 + 2) * 4;
      }
      iVar7 = iVar4 + 1;
      *(uint *)(puVar9 + iVar4 * 2 + 10) = uVar6;
      iVar4 = iVar7;
    } while (iVar7 < 2);
    func_00566508(local_30,uVar10 & 0xffff,puVar9);
    uVar10 = uVar10 + 1;
  }
  *param_1 = local_48;
  param_1[1] = 0;
  return;
}

