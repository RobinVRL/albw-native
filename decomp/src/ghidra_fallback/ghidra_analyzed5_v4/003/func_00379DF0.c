#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_00379fe0;
extern uint *DAT_00379fe4;
extern undefined4 DAT_00379fe8;
extern undefined4 *DAT_00379fec;

// USA 00379DF0 <- EU 00379DCC (Ghidra, non-matching)
// GLOBAL DAT_00379fe0 int *
// GLOBAL DAT_00379fe4 uint *
// GLOBAL DAT_00379fe8 undefined4
// GLOBAL DAT_00379fec undefined4 *

int func_00379DF0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int unaff_r9;
  int *piVar11;
  int *unaff_r11;
  float in_s0;
  
  iVar2 = *(int *)(param_1 + 0x4a8);
  piVar11 = *(int **)(iVar2 + 0x38);
  while (piVar11 != (int *)(iVar2 + 0x34)) {
    piVar10 = (int *)piVar11[1];
    func_0010F1F8(piVar11,in_s0);
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + -1;
    piVar11[-1] = *(int *)(iVar2 + 0x40);
    *(int **)(iVar2 + 0x40) = piVar11 + -1;
    piVar11 = piVar10;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40c)) {
    do {
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x414) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      *puVar4 = *(undefined4 *)(param_1 + 0x418);
      *(undefined4 **)(param_1 + 0x418) = puVar4;
    } while (iVar2 < *(int *)(param_1 + 0x40c));
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  uVar8 = (uint)*(byte *)(param_1 + 0x5c);
  iVar2 = 0;
  if (uVar8 != 0) {
    unaff_r9 = param_1 + 0x400;
    unaff_r11 = DAT_00379fe0;
  }
  iVar7 = 0;
  if (uVar8 != 0) {
    piVar11 = (int *)(unaff_r9 + 0xc);
    do {
      iVar5 = (int)*(short *)(param_1 + iVar7 * 6 + 0x5e);
      if (((0 < iVar5) && (iVar5 = func_0052FBDC(*unaff_r11 + 0x3dbbc,iVar5,0), iVar5 != 0)) &&
         (iVar3 = func_00230610(*(int *)(param_1 + 0x4a8),*(undefined4 *)(iVar5 + 0x2cc)),
         iVar3 != 0)) {
        uVar6 = *(undefined4 *)(iVar5 + 0x2cc);
        if (*piVar11 < *(int *)(unaff_r9 + 0x10)) {
          puVar4 = *(undefined4 **)(unaff_r9 + 0x18);
          if (puVar4 != (undefined4 *)0x0) {
            *(undefined4 *)(unaff_r9 + 0x18) = *puVar4;
            *puVar4 = uVar6;
          }
          if (*piVar11 < *(int *)(unaff_r9 + 0x10)) {
            *(undefined4 **)(*(int *)(unaff_r9 + 0x14) + *piVar11 * 4) = puVar4;
            *piVar11 = *piVar11 + 1;
          }
        }
        iVar2 = 1;
      }
      uVar6 = DAT_00379fe8;
      puVar1 = DAT_00379fe4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
    if (iVar2 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x414);
      puVar9 = puVar4 + *(int *)(param_1 + 0x40c);
      for (; puVar4 != puVar9; puVar4 = puVar4 + 1) {
        piVar11 = (int *)func_0052FBA0(*unaff_r11 + 0x3dbbc,*(uint *)*puVar4);
        if (piVar11 != (int *)0x0) {
          if (((*puVar1 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00379fe4), iVar7 != 0)) {
            *DAT_00379fec = uVar6;
          }
          iVar7 = (**(code **)*piVar11)(piVar11,DAT_00379fec);
          piVar10 = (int *)0x0;
          if (iVar7 != 0) {
            piVar10 = piVar11;
          }
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0x6c))(piVar10);
          }
        }
      }
    }
  }
  return iVar2;
}

