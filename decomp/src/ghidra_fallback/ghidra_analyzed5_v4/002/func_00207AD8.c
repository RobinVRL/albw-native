#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_001B9374(int param_1,uint param_2,int param_3);
extern int func_002084C4(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_00387FEC(int param_1,int param_2);
extern int func_004FC8D8(int param_1,int param_2);
extern int *DAT_00207c90;
extern undefined4 DAT_00207c94;
extern int DAT_00207c98;
extern uint DAT_00207c9c;
extern undefined4 *DAT_00207ca0;
extern int *DAT_00207ca4;

// USA 00207AD8 <- EU 00207AD8 (Ghidra, non-matching)
// GLOBAL DAT_00207c90 int *
// GLOBAL DAT_00207c94 undefined4
// GLOBAL DAT_00207c98 int
// GLOBAL DAT_00207c9c uint
// GLOBAL DAT_00207ca0 undefined4 *
// GLOBAL DAT_00207ca4 int *

undefined4 func_00207AD8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define iStack_88 (*(int *)(albw_frame + 0x8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_80 (*(int *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined1 *)(albw_frame + 0x24))
  #define local_6b (*(undefined1 *)(albw_frame + 0x25))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x40))
  #define local_4f (*(undefined1 *)(albw_frame + 0x41))
  #define local_4c ((int *)(albw_frame + 0x44))
  local_78 = func_001B9374(*DAT_00207c90,7,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1cc));
  iVar8 = 1;
  iStack_88 = DAT_00207c98;
  uStack_84 = DAT_00207c94;
  iStack_80 = DAT_00207c98;
  uStack_7c = DAT_00207c94;
  local_50 = 1;
  local_58 = 0;
  local_74 = 0;
  local_70 = 0;
  local_54 = 0;
  local_64 = 0;
  local_68 = 0;
  local_5c = 0;
  local_60 = 0;
  local_6b = 1;
  local_4f = 0xc4;
  local_6c = 1;
  piVar2 = func_002C2D00(&iStack_88);
  uVar6 = DAT_00207c9c;
  uVar11 = (ulonglong)DAT_00207c9c;
  *(int **)(param_1 + 0xd58) = piVar2;
  piVar2[0x4d] = uVar6;
  *(uint *)(*(int *)(param_1 + 0xd58) + 0x138) = uVar6;
  func_00387FEC(*(int *)(*(int *)(param_1 + 0x41c) + 0x1c),*(int *)(param_1 + 0xd58));
  func_0036D0C8((int *)(param_1 + 0xd74),0);
  puVar1 = DAT_00207ca0;
  iVar5 = *(int *)(param_1 + 0xd74);
  if (iVar5 != 0) {
    iVar8 = func_0010983C(*DAT_00207ca0,iVar5);
  }
  piVar2 = DAT_00207ca4;
  local_4c[5] = param_1 + 0xd8c;
  local_4c[6] = param_1 + 0xd90;
  local_4c[0] = param_1 + 0xd78;
  local_4c[1] = param_1 + 0xd7c;
  local_4c[2] = param_1 + 0xd80;
  local_4c[3] = param_1 + 0xd84;
  local_4c[4] = param_1 + 0xd88;
  uVar6 = 0;
  do {
    piVar7 = (int *)local_4c[uVar6];
    puVar3 = (undefined4 *)func_0010BAB4(0x20);
    piVar4 = (int *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = func_0015137C(puVar3,param_1,0);
    }
    *piVar7 = (int)piVar4;
    iVar5 = piVar2[1];
    iVar9 = piVar2[2];
    piVar4[4] = *piVar2;
    piVar4[5] = iVar5;
    piVar4[6] = iVar9;
    func_00151358(piVar4);
    iVar5 = *piVar7;
    uVar10 = (undefined4)uVar11;
    *(undefined4 *)(iVar5 + 4) = uVar10;
    *(undefined4 *)(iVar5 + 8) = uVar10;
    *(undefined4 *)(iVar5 + 0xc) = uVar10;
    func_004FC8D8(param_1 + 0x5a8,*piVar7);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 7);
  if (iVar8 != 1) {
    func_0010983C(*puVar1,iVar8);
  }
  return func_002084C4(param_1);
}

