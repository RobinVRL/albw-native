#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049CEC8(int param_1,int param_2,int param_3);
extern int func_0049D3D8(int param_1,undefined4 *param_2,int param_3);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int func_0049F9C8(int param_1,uint param_2,int param_3);
extern uint *DAT_0049d740;
extern undefined4 *DAT_0049d744;
extern undefined4 DAT_0049d748;

// USA 0049D4A0 <- EU 0049D478 (Ghidra, non-matching)
// GLOBAL DAT_0049d740 uint *
// GLOBAL DAT_0049d744 undefined4 *
// GLOBAL DAT_0049d748 undefined4

int * func_0049D4A0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *****pppppuVar10;
  undefined4 ****ppppuVar11;
  undefined4 *****pppppuVar12;
  undefined4 ***pppuVar13;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define ppppuStack_4c (*(undefined4 **** *)(albw_frame + 0x4))
  #define ppppuStack_48 (*(undefined4 **** *)(albw_frame + 0x8))
  #define iStack_44 (*(int *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  iVar3 = *(int *)(param_1 + 0x5c);
  func_0010C0B8(iVar3 + 4);
  iStack_2c = 0;
  uStack_30 = 0;
  func_0049CEC8(iVar3,(int)aiStack_40,param_2);
  piVar4 = (int *)func_0049D3D8(iVar3,(undefined4 *)param_2,(int)aiStack_40);
  puVar1 = DAT_0049d740;
  iVar5 = 0;
  uVar7 = *DAT_0049d740;
  if (0 < (int)uVar7) {
    do {
      if (piVar4[iVar5 + 0x11] != 0) {
        *(int *)(piVar4[iVar5 + 0x11] + 0x14) = piVar4[10];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar7);
  }
  if (*(code **)(param_2 + 0x7c) != (code *)0x0) {
    (**(code **)(param_2 + 0x7c))(piVar4);
  }
  *(undefined1 *)(piVar4 + 0x18) = 1;
  puVar2 = DAT_0049d744;
  if (aiStack_40[iStack_2c] == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_0049d744,aiStack_40[iStack_2c]);
  }
  (**(code **)(*piVar4 + 0x28))(piVar4);
  if (iVar5 != 1) {
    func_0010983C(*puVar2,iVar5);
  }
  uVar7 = *puVar1;
  uVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      iVar5 = param_2 + 8;
      if (uVar8 < uVar7) {
        iVar5 = param_2 + 8 + uVar8 * 0x14;
      }
      if (*(char *)(iVar5 + 0x10) != '\0') {
        func_0049F9C8((int)piVar4,uVar8,*(int *)(iVar5 + 0xc));
      }
      uVar7 = *puVar1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar7);
  }
  func_0049DA04(iVar3,piVar4,2);
  func_0049DA04(iVar3,piVar4,4);
  if (*(int *)(param_2 + 0x70) != 0) {
    ppppuStack_4c = &ppppuStack_4c;
    iStack_44 = 0;
    iVar5 = *(int *)(param_2 + 0x70);
    ppppuStack_48 = ppppuStack_4c;
    if (*(char *)(iVar5 + 0x38) != '\0') {
      iVar9 = *(int *)(iVar5 + 0x1c);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        func_0010F1F8((int *)(iVar5 + 0x10),in_s0);
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + -1;
      }
      *(undefined1 *)(iVar5 + 0x38) = 0;
    }
    iVar9 = *(int *)(iVar5 + 0x1c);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      func_0010F1F8((int *)(iVar5 + 0x10),in_s0);
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + -1;
    }
    *(undefined4 ******)(iVar5 + 0x1c) = &ppppuStack_4c;
    func_0010F1DC((int *)&ppppuStack_4c,(int *)(iVar5 + 0x10));
    iStack_44 = iStack_44 + 1;
    *(undefined1 *)(iVar5 + 0x38) = 1;
    pppppuVar6 = (undefined4 *****)ppppuStack_48;
    while (pppppuVar10 = (undefined4 *****)pppppuVar6[1],
          pppppuVar12 = (undefined4 *****)ppppuStack_48, pppppuVar6 != &ppppuStack_4c) {
      pppuVar13 = pppppuVar6[2][8];
      pppppuVar6 = pppppuVar10;
      if (pppuVar13 != (undefined4 ***)0x0) {
        (*(code *)**pppuVar13)(pppuVar13,piVar4);
      }
    }
    while (pppppuVar12 != &ppppuStack_4c) {
      ppppuVar11 = pppppuVar12[2];
      pppppuVar12 = (undefined4 *****)pppppuVar12[1];
      if (*(char *)(ppppuVar11 + 0xe) != '\0') {
        pppuVar13 = ppppuVar11[7];
        if (pppuVar13 != (undefined4 ***)0x0) {
          ppppuVar11[7] = (undefined4 ***)0x0;
          func_0010F1F8((int *)(ppppuVar11 + 4),in_s0);
          pppuVar13[2] = (undefined4 **)((int)pppuVar13[2] + -1);
        }
        *(undefined1 *)(ppppuVar11 + 0xe) = 0;
      }
    }
  }
  if (*(undefined4 **)(param_2 + 0x6c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_2 + 0x6c) = piVar4;
  }
  func_0010EEE0(iVar3 + 4);
  return piVar4;
}

