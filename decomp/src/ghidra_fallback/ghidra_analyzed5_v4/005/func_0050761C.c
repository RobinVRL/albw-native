#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001511F0(int *param_1);
extern int func_001512B4(int param_1,float *param_2);
extern float func_001D6794(int param_1,int param_2);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_002E0064(int *param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00506798(int param_1,int param_2,int param_3);
extern int func_005068F8(int param_1);
extern int func_00506B68(int param_1);
extern int func_00539A74(int param_1,int param_2);
extern int func_00539A98(undefined4 param_1,uint param_2,undefined4 param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int DAT_00507950;
extern int DAT_00507954;
extern int DAT_00507958;
extern int *DAT_0050795c;
extern int *DAT_00507960;

// USA 0050761C <- EU 005075F4 (Ghidra, non-matching)
// GLOBAL DAT_00507950 int
// GLOBAL DAT_00507954 int
// GLOBAL DAT_00507958 int
// GLOBAL DAT_0050795c int *
// GLOBAL DAT_00507960 int *

int * func_0050761C(undefined4 *param_1,uint *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  
  piVar4 = func_001E56CC(param_1,param_2);
  iVar11 = DAT_00507950;
  piVar4[200] = DAT_00507950 + 0x74;
  *piVar4 = iVar11;
  piVar4[0x187] = 0;
  piVar4[0x188] = 0;
  piVar4[0x191] = 0;
  iVar11 = DAT_00507954;
  piVar4[0x193] = 0;
  piVar4[0x194] = 0;
  iVar5 = DAT_00507958;
  piVar4[0x195] = iVar11;
  piVar4[0x196] = iVar11;
  piVar4[0x197] = iVar5;
  piVar4[0x198] = iVar11;
  piVar4[0x199] = 0;
  *(undefined1 *)(piVar4 + 0x19a) = 0;
  func_005068F8((int)piVar4);
  func_002E0064((int *)(*(int *)(*DAT_0050795c + 0x3dbe4) + 0x18),(int)param_2);
  uVar9 = 0;
  func_001E518C(piVar4,param_2,0,0,0);
  func_00506B68((int)piVar4);
  piVar12 = (int *)piVar4[0x120];
  uVar10 = 0;
  piVar13 = piVar12 + piVar4[0x11e];
  if (piVar12 != piVar13) {
    do {
      if (uVar10 < (uint)piVar4[0x187]) {
        iVar11 = piVar4[0x188] + uVar10 * 0x30;
      }
      else {
        iVar11 = piVar4[0x188];
      }
      iVar5 = func_0054D89C((int)piVar4,0);
      *(int *)(iVar11 + 0x24) = iVar5;
      if (iVar5 != 0) {
        func_001512B4(iVar5,(float *)(*piVar12 + 4));
        func_001511F0(*(int **)(iVar11 + 0x24));
        func_00151148(*(int *)(iVar11 + 0x24),1);
      }
      piVar12 = piVar12 + 1;
      uVar10 = uVar10 + 1;
    } while (piVar12 != piVar13);
  }
  piVar12 = (int *)piVar4[0x120];
  piVar13 = (int *)0x0;
  piVar14 = piVar12 + piVar4[0x11e];
  for (; piVar12 != piVar14; piVar12 = piVar12 + 1) {
    if (piVar13 < (int *)piVar4[0x187]) {
      iVar11 = piVar4[0x188] + (int)piVar13 * 0x30;
    }
    else {
      iVar11 = piVar4[0x188];
    }
    uVar1 = *(ushort *)(*piVar12 + 0x2a);
    uVar10 = uVar1 & 0xff;
    fVar19 = func_001D6794(uVar10,*(ushort *)(*piVar12 + 0x2c) & 0xff);
    *(char *)(iVar11 + 0x2c) = (char)uVar1;
    *(short *)(iVar11 + 0x2a) = (short)(int)fVar19;
    if ((uVar1 & 0xff) == 0) {
      *(undefined2 *)(iVar11 + 0x28) = 1;
    }
    else if (uVar10 == 1) {
      *(undefined2 *)(iVar11 + 0x28) = 5;
    }
    else {
      if (uVar10 == 2) {
        uVar3 = 0x14;
      }
      else {
        if (uVar10 != 3) goto LAB_005077c8;
        uVar3 = 0x32;
      }
      *(undefined2 *)(iVar11 + 0x28) = uVar3;
    }
LAB_005077c8:
    piVar13 = (int *)((int)piVar13 + 1);
  }
  iVar17 = piVar4[0x187];
  iVar5 = piVar4[0x188];
  iVar11 = 0;
  if (iVar17 != 0) {
    piVar13 = piVar4 + 0x100;
  }
  uVar10 = 0xffffffff;
  if (iVar17 != 0) {
    do {
      uVar10 = uVar10 + 1;
      iVar15 = *(int *)(iVar5 + iVar11 * 0x30 + 4);
      if (uVar10 < (uint)piVar13[0x1e]) {
        iVar16 = *(int *)(piVar13[0x20] + uVar10 * 4);
        iVar6 = *(int *)(piVar13[0x20] + uVar10 * 4);
      }
      else {
        iVar16 = 0;
        iVar6 = 0;
      }
      bVar2 = func_00539A74(iVar6,0);
      if (bVar2) {
        iVar15 = iVar5 + iVar11 * 0x30;
        func_004CF478(*(int *)(iVar15 + 4),0);
        func_00151148(*(int *)(iVar15 + 0x24),0);
        *(undefined1 *)(iVar5 + iVar11 * 0x30) = 2;
      }
      else {
        uVar7 = piVar4[0x11e];
        if (uVar10 < uVar7) {
          iVar6 = *(int *)(piVar4[0x120] + uVar10 * 4);
        }
        else {
          iVar6 = 0;
        }
        if (*(short *)(iVar6 + 0x34) != 0) {
          if (uVar10 < uVar7) {
            iVar6 = *(int *)(piVar4[0x120] + uVar10 * 4);
          }
          else {
            iVar6 = 0;
          }
          if (*(short *)(iVar6 + 0x2e) == 1) {
            if (uVar10 < uVar7) {
              iVar15 = *(int *)(piVar4[0x120] + uVar10 * 4);
              iVar16 = *(int *)(piVar4[0x120] + uVar10 * 4);
              uVar9 = *(undefined4 *)(piVar13[0x20] + uVar10 * 4);
            }
            else {
              iVar15 = 0;
              iVar16 = 0;
            }
            if (uVar7 <= uVar10) {
              uVar9 = 0;
            }
            bVar2 = func_00539A98(uVar9,(uint)*(ushort *)(iVar16 + 0x34),
                                  (uint)*(byte *)(iVar15 + 0x31));
            if (bVar2) {
              iVar15 = iVar5 + iVar11 * 0x30;
              func_004CF478(*(int *)(iVar15 + 4),1);
              func_00151148(*(int *)(iVar15 + 0x24),1);
              *(undefined1 *)(iVar5 + iVar11 * 0x30) = 0;
            }
            else {
              iVar15 = iVar5 + iVar11 * 0x30;
              func_004CF478(*(int *)(iVar15 + 4),0);
              func_00151148(*(int *)(iVar15 + 0x24),0);
              *(undefined1 *)(iVar5 + iVar11 * 0x30) = 3;
            }
            goto LAB_005078dc;
          }
        }
        *(uint *)(iVar15 + 0x164) = *(uint *)(iVar15 + 0x164) | 0x40000000;
        *(undefined4 *)(iVar15 + 0x8c) = *(undefined4 *)(iVar16 + 4);
        *(undefined4 *)(iVar15 + 0x9c) = *(undefined4 *)(iVar16 + 8);
        *(undefined4 *)(iVar15 + 0xac) = *(undefined4 *)(iVar16 + 0xc);
        func_004CEAF0(iVar15);
      }
LAB_005078dc:
      bVar2 = *(int *)(*DAT_00507960 + 0xf74) != 0;
      iVar15 = 0;
      if (bVar2) {
        iVar15 = *(int *)(*(int *)(*DAT_00507960 + 0xf74) + 0x20);
      }
      bVar18 = iVar15 != 0;
      if (bVar2 && bVar18) {
        iVar15 = *(int *)(iVar15 + 4);
      }
      if ((bVar2 && bVar18) && iVar15 != 0) {
        iVar15 = func_00506798((int)piVar4,iVar11,iVar5);
        if (iVar15 == 0) {
          uVar8 = 0;
          *(undefined1 *)(iVar5 + iVar11 * 0x30 + 0x2d) = 1;
        }
        else {
          *(undefined1 *)(iVar5 + iVar11 * 0x30 + 0x2d) = 0;
          uVar8 = 0xff000000;
        }
        iVar15 = *(int *)(iVar5 + iVar11 * 0x30 + 8);
        uVar9 = 0;
        *(undefined1 *)(iVar15 + 0x56) = 1;
        *(undefined4 *)(iVar15 + 0x52) = uVar8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar17);
  }
  return piVar4;
}

