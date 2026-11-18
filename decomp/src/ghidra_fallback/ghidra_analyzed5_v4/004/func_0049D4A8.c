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

// USA 0049D4A8 <- EU 0049D480 (Ghidra, non-matching)
// GLOBAL DAT_0049d740 uint *
// GLOBAL DAT_0049d744 undefined4 *
// GLOBAL DAT_0049d748 undefined4

int * func_0049D4A8(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *****pppppuVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 ***pppuVar12;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(undefined4 **** *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 **** *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  func_0010C0B8(param_1 + 4);
  local_2c = 0;
  local_30 = 0;
  func_0049CEC8(param_1,(int)aiStack_40,(int)param_2);
  piVar2 = (int *)func_0049D3D8(param_1,param_2,(int)aiStack_40);
  puVar1 = DAT_0049d740;
  iVar3 = 0;
  uVar6 = *DAT_0049d740;
  if (0 < (int)uVar6) {
    do {
      if (piVar2[iVar3 + 0x11] != 0) {
        *(int *)(piVar2[iVar3 + 0x11] + 0x14) = piVar2[10];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar6);
  }
  if ((code *)param_2[0x1f] != (code *)0x0) {
    (*(code *)param_2[0x1f])(piVar2);
  }
  *(undefined1 *)(piVar2 + 0x18) = 1;
  puVar4 = DAT_0049d744;
  if (aiStack_40[local_2c] == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_0049d744,aiStack_40[local_2c]);
  }
  (**(code **)(*piVar2 + 0x28))(piVar2);
  if (iVar3 != 1) {
    func_0010983C(*puVar4,iVar3);
  }
  uVar6 = *puVar1;
  uVar7 = 0;
  if (0 < (int)uVar6) {
    do {
      puVar4 = param_2 + 2;
      if (uVar7 < uVar6) {
        puVar4 = param_2 + uVar7 * 5 + 2;
      }
      if (*(char *)(puVar4 + 4) != '\0') {
        func_0049F9C8((int)piVar2,uVar7,puVar4[3]);
      }
      uVar6 = *puVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar6);
  }
  func_0049DA04(param_1,piVar2,2);
  func_0049DA04(param_1,piVar2,4);
  if (param_2[0x1c] != 0) {
    local_4c = &local_4c;
    local_44 = 0;
    iVar3 = param_2[0x1c];
    local_48 = local_4c;
    if (*(char *)(iVar3 + 0x38) != '\0') {
      iVar8 = *(int *)(iVar3 + 0x1c);
      if (iVar8 != 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        func_0010F1F8((int *)(iVar3 + 0x10),in_s0);
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + -1;
      }
      *(undefined1 *)(iVar3 + 0x38) = 0;
    }
    iVar8 = *(int *)(iVar3 + 0x1c);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      func_0010F1F8((int *)(iVar3 + 0x10),in_s0);
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + -1;
    }
    *(undefined4 ******)(iVar3 + 0x1c) = &local_4c;
    func_0010F1DC((int *)&local_4c,(int *)(iVar3 + 0x10));
    local_44 = local_44 + 1;
    *(undefined1 *)(iVar3 + 0x38) = 1;
    pppppuVar5 = (undefined4 *****)local_48;
    while (pppppuVar9 = (undefined4 *****)pppppuVar5[1], pppppuVar11 = (undefined4 *****)local_48,
          pppppuVar5 != &local_4c) {
      pppuVar12 = pppppuVar5[2][8];
      pppppuVar5 = pppppuVar9;
      if (pppuVar12 != (undefined4 ***)0x0) {
        (*(code *)**pppuVar12)(pppuVar12,piVar2);
      }
    }
    while (pppppuVar11 != &local_4c) {
      ppppuVar10 = pppppuVar11[2];
      pppppuVar11 = (undefined4 *****)pppppuVar11[1];
      if (*(char *)(ppppuVar10 + 0xe) != '\0') {
        pppuVar12 = ppppuVar10[7];
        if (pppuVar12 != (undefined4 ***)0x0) {
          ppppuVar10[7] = (undefined4 ***)0x0;
          func_0010F1F8((int *)(ppppuVar10 + 4),in_s0);
          pppuVar12[2] = (undefined4 **)((int)pppuVar12[2] + -1);
        }
        *(undefined1 *)(ppppuVar10 + 0xe) = 0;
      }
    }
  }
  if ((undefined4 *)param_2[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_2[0x1b] = piVar2;
  }
  func_0010EEE0(param_1 + 4);
  return piVar2;
}

