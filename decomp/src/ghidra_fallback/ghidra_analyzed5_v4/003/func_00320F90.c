#include "ghidra_types.h"

extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010C864(undefined4 *param_1,float fparam_0);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void *func_0010E74C();
extern int func_00588A64(int param_1,uint param_2);
extern uint DAT_00321324;
extern int *DAT_00321328;
extern undefined8 *DAT_0032132c;
extern undefined4 DAT_00321330;

// USA 00320F90 <- EU 00320F6C (Ghidra, non-matching)
// GLOBAL DAT_00321324 uint
// GLOBAL DAT_00321328 int *
// GLOBAL DAT_0032132c undefined8 *
// GLOBAL DAT_00321330 undefined4

void func_00320F90(int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int extraout_r1;
  int iVar8;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar9;
  undefined4 uVar10;
  uint *in_r3;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *unaff_r10;
  float in_s0;
  ulonglong in_d8;
  undefined8 uVar16;
  
  uVar15 = *(uint *)(param_1 + 0x1c);
  if ((0 < (int)uVar15) && (iVar4 = func_0010CEE0(uVar15 * 0x1c,(int *)0x0,4), iVar4 != 0)) {
    unaff_r10 = (int *)(uVar15 - 1);
    puVar11 = in_r3;
    iVar8 = extraout_r1;
    if (0 < (int)unaff_r10) {
      iVar8 = 0;
      puVar11 = (uint *)(uVar15 - 1);
    }
    *(int *)(param_1 + 0x178) = iVar4;
    in_r3 = puVar11;
    if (0 < (int)unaff_r10) {
      do {
        puVar11 = (uint *)((int)puVar11 + -1);
        *(int *)(iVar4 + iVar8 * 4) = iVar4 + (iVar8 + 6) * 4;
        iVar8 = iVar8 + 6;
        in_r3 = (uint *)0x0;
      } while (puVar11 != (uint *)0x0);
    }
    *(undefined4 *)(iVar4 + (int)unaff_r10 * 0x18) = 0;
    *(int *)(param_1 + 0x17c) = iVar4;
    func_0010B3EC((undefined4 *)(param_1 + 0x16c),uVar15,iVar4 + uVar15 * 0x18);
  }
  iVar8 = 0;
  piVar14 = (int *)(param_1 + 0x16c);
  iVar4 = func_0010B3C0(piVar14,0,uVar15);
  if (iVar4 != 0) {
    if (0 < *piVar14) {
      in_r3 = *(uint **)(param_1 + 0x174);
      func_0010E74C(in_r3 + uVar15,in_r3,*piVar14 << 2,in_s0);
    }
    if (0 < (int)uVar15) {
      in_d8 = (ulonglong)DAT_00321324;
    }
    iVar4 = 0;
    if (0 < (int)uVar15) {
      do {
        puVar5 = *(undefined4 **)(param_1 + 0x178);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          in_s0 = ALBW_AS_F32(in_d8);
          *(undefined4 *)(param_1 + 0x178) = *puVar5;
          puVar6 = func_0010C864(puVar5,in_s0);
        }
        iVar12 = iVar4 + 1;
        *(undefined4 **)(*(int *)(param_1 + 0x174) + iVar4 * 4) = puVar6;
        iVar4 = iVar12;
      } while (iVar12 < (int)uVar15);
    }
    *piVar14 = *piVar14 + uVar15;
  }
  if ((0 < (int)uVar15) && (iVar8 = func_0010CEE0(uVar15 * 8,(int *)0x0,4), iVar8 != 0)) {
    unaff_r10 = (int *)(uVar15 - 1);
    puVar11 = in_r3;
    iVar4 = extraout_r1_00;
    if (0 < (int)unaff_r10) {
      iVar4 = 0;
      puVar11 = (uint *)(uVar15 - 1);
    }
    *(int *)(param_1 + 0x18c) = iVar8;
    in_r3 = puVar11;
    if (0 < (int)unaff_r10) {
      do {
        puVar11 = (uint *)((int)puVar11 + -1);
        *(int *)(iVar8 + iVar4 * 4) = iVar8 + (iVar4 + 1) * 4;
        iVar4 = iVar4 + 1;
        in_r3 = (uint *)0x0;
      } while (puVar11 != (uint *)0x0);
    }
    *(undefined4 *)(iVar8 + (int)unaff_r10 * 4) = 0;
    *(int *)(param_1 + 400) = iVar8;
    func_0010B3EC((undefined4 *)(param_1 + 0x180),uVar15,iVar8 + uVar15 * 4);
  }
  if (uVar15 != 0) {
    unaff_r10 = DAT_00321328;
  }
  uVar13 = 0;
  if (uVar15 != 0) {
    do {
      iVar8 = func_00588A64(*unaff_r10,uVar13);
      piVar14 = (int *)(param_1 + 0x180);
      iVar4 = func_0010B3C0(piVar14,uVar13,1);
      if (iVar4 != 0) {
        if ((int)uVar13 < *piVar14) {
          in_r3 = (uint *)(uVar13 * 4 + 4);
          func_0010E74C((uint *)(*(int *)(param_1 + 0x188) + (int)in_r3),
                                (uint *)(*(int *)(param_1 + 0x188) + uVar13 * 4),
                                (*piVar14 - uVar13) * 4,in_s0);
        }
        piVar7 = *(int **)(param_1 + 0x18c);
        if (piVar7 != (int *)0x0) {
          *(int *)(param_1 + 0x18c) = *piVar7;
          *piVar7 = iVar8;
        }
        *(int **)(*(int *)(param_1 + 0x188) + uVar13 * 4) = piVar7;
        *piVar14 = *piVar14 + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar15);
  }
  if ((0 < (int)uVar15) && (iVar8 = func_0010CEE0(uVar15 * 0x14,(int *)0x0,4), iVar8 != 0)) {
    iVar12 = uVar15 - 1;
    iVar4 = extraout_r1_01;
    if (0 < iVar12) {
      iVar4 = 0;
      in_r3 = (uint *)(uVar15 - 1);
    }
    *(int *)(param_1 + 0x1a0) = iVar8;
    if (0 < iVar12) {
      do {
        in_r3 = (uint *)((int)in_r3 + -1);
        *(int *)(iVar8 + iVar4 * 4) = iVar8 + (iVar4 + 4) * 4;
        iVar4 = iVar4 + 4;
      } while (in_r3 != (uint *)0x0);
    }
    *(undefined4 *)(iVar8 + iVar12 * 0x10) = 0;
    *(int *)(param_1 + 0x1a4) = iVar8;
    func_0010B3EC((undefined4 *)(param_1 + 0x194),uVar15,iVar8 + uVar15 * 0x10);
  }
  uVar3 = DAT_00321330;
  puVar2 = DAT_0032132c;
  uVar13 = 0;
  if (uVar15 != 0) {
    do {
      uVar9 = *(uint *)(param_1 + 0x180);
      piVar14 = (int *)(param_1 + 0x194);
      if (uVar13 < uVar9) {
        uVar1 = *(uint *)(param_1 + 0x188);
      }
      else {
        iVar8 = 0;
        uVar1 = uVar9;
      }
      uVar16 = *puVar2;
      if (uVar13 < uVar9) {
        iVar8 = *(int *)(uVar1 + uVar13 * 4);
      }
      iVar4 = func_0010B3C0(piVar14,uVar13,1);
      if (iVar4 != 0) {
        if ((int)uVar13 < *piVar14) {
          func_0010E74C((uint *)(*(int *)(param_1 + 0x19c) + uVar13 * 4 + 4),
                                (uint *)(*(int *)(param_1 + 0x19c) + uVar13 * 4),
                                (*piVar14 - uVar13) * 4,in_s0);
        }
        puVar6 = *(undefined4 **)(param_1 + 0x1a0);
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x1a0) = *puVar6;
          puVar6[1] = iVar8;
          puVar6[2] = (int)uVar16;
          puVar6[3] = (int)((ulonglong)uVar16 >> 0x20);
          *puVar6 = uVar3;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x19c) + uVar13 * 4) = puVar6;
        *piVar14 = *piVar14 + 1;
      }
      if (uVar13 < *(uint *)(param_1 + 0x16c)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x174) + uVar13 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (uVar13 < *(uint *)(param_1 + 0x194)) {
        uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x19c) + uVar13 * 4);
      }
      else {
        uVar10 = 0;
      }
      uVar13 = uVar13 + 1;
      *(undefined4 *)(iVar4 + 0x14) = uVar10;
    } while (uVar13 < uVar15);
  }
  return;
}

