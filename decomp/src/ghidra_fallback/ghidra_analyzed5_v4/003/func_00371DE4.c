// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00172210(int param_1);
extern int func_00172380(int param_1,int param_2);
extern int func_001723A0(int param_1);
extern int func_00255980(int param_1);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_00255B88(int param_1);
extern int func_003725D4(int param_1,uint param_2);
extern int func_003C5604(int param_1);
extern int func_0051BD68(int param_1,byte param_2);
extern int func_0051C378(int param_1,float fparam_0);
extern int func_0051C3A0(int param_1);
extern int func_0051C3B4(int param_1);
extern float func_00523848(int param_1);
extern int func_005568D4(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0058DCB8(int param_1);
extern int func_0058E108(int param_1);
extern int func_0058E1FC(int param_1);
extern int func_0058E214(int param_1);
extern int func_0058E22C(int param_1);
extern int *DAT_003720cc;
extern int *DAT_003720d0;
extern int *DAT_003720d4;
extern int *DAT_003720d8;
extern float DAT_003720dc;
extern float DAT_003720e0;
extern float DAT_003720e4;
extern int *DAT_003720e8;
extern int DAT_003720ec;
extern float DAT_003720f0;
extern int DAT_003720f4;

// USA 00371DE4 <- EU 00371DC0 (Ghidra, non-matching)
// GLOBAL DAT_003720cc int *
// GLOBAL DAT_003720d0 int *
// GLOBAL DAT_003720d4 int *
// GLOBAL DAT_003720d8 int *
// GLOBAL DAT_003720dc float
// GLOBAL DAT_003720e0 float
// GLOBAL DAT_003720e4 float
// GLOBAL DAT_003720e8 int *
// GLOBAL DAT_003720ec int
// GLOBAL DAT_003720f0 float
// GLOBAL DAT_003720f4 int

undefined4 func_00371DE4(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  fVar4 = DAT_003720e4;
  fVar13 = DAT_003720e0;
  fVar14 = DAT_003720dc;
  piVar3 = DAT_003720d8;
  piVar2 = DAT_003720d4;
  piVar7 = DAT_003720d0;
  piVar1 = DAT_003720cc;
  puVar12 = (uint *)(param_1 + 0x268);
  if (param_1[0x267] != param_2) {
    param_1[0x267] = param_2;
    param_1[0x268] = 0;
  }
  iVar6 = *piVar1;
  iVar11 = *piVar7;
  iVar10 = *piVar2;
  switch(param_2) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x989) = 1;
    break;
  case 1:
    if (param_1[0x268] == 0) {
      *puVar12 = 1;
      iVar6 = *(int *)(iVar6 + 0x130);
      *(byte *)(iVar6 + 0x74) = *(byte *)(iVar6 + 0x74) | 1;
      *(undefined1 *)((int)param_1 + 0x9d2) = 1;
      func_001723A0(*piVar2);
      uVar5 = func_005568D4(*piVar7);
      param_1[0x264] = (uint)uVar5;
      func_00255B88(*piVar7);
      iVar6 = *DAT_003720e8;
      uVar8 = func_003C5604(0x230);
      piVar7 = (int *)func_005841A8(iVar6,uVar8,*(int **)(DAT_003720ec + iVar6));
      piVar7 = (int *)*piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x30))(piVar7,1);
      }
      if (param_1[0x268] == 0) {
        return 1;
      }
    }
    iVar6 = func_0058DCB8(*piVar1);
    goto joined_r0x00372040;
  case 2:
    if (param_1[0x268] == 0) {
      *puVar12 = 1;
      iVar6 = func_00255980(iVar11);
      param_1[0x265] = iVar6;
      func_00172380(*piVar2,iVar6);
      if (*(char *)(*piVar2 + 0x70) != '\t') {
        func_00172210(*piVar2);
      }
      iVar6 = (**(code **)(*param_1 + 0x58))(param_1,0,0,4);
      uVar9 = param_1[0x265];
      iVar10 = *piVar2;
      if (((*(char *)(iVar10 + 0x2ee) != '\0') || ((int)uVar9 < 0)) ||
         (iVar6 <= (int)(uint)(*(char *)(*piVar3 + 0x18) != '\0'))) {
        uVar9 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x9d1) = 0;
      if (*(char *)(iVar10 + 0x2ee) == '\0') {
        fVar13 = func_00523848(iVar10);
        fVar14 = DAT_003720f0;
        if ((int)ALBW_AS_U32((DAT_003720f0 - fVar13)) <= DAT_003720f4) {
          *(undefined1 *)((int)param_1 + 0x9d1) = 1;
        }
        fVar13 = func_00523848(*piVar2);
        if ((int)ALBW_AS_U32((fVar14 - fVar13)) < 0x3f800001) {
          *(undefined1 *)((int)param_1 + 0x9d1) = 2;
        }
      }
      func_003725D4((int)param_1,uVar9);
      iVar6 = *DAT_003720e8;
      uVar8 = func_003C5604(0x230);
      piVar7 = (int *)func_005841A8(iVar6,uVar8,*(int **)(DAT_003720ec + iVar6));
      piVar7 = (int *)*piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x30))(piVar7,0);
      }
      if (param_1[0x268] == 0) {
        return 1;
      }
    }
    iVar6 = func_0058DCB8(*piVar1);
joined_r0x00372040:
    if (iVar6 == 0) {
      return 0;
    }
    break;
  case 3:
    if (param_1[0x268] == 0) {
      *puVar12 = 1;
      func_0051BD68(iVar6,*(char *)((int)param_1 + 0x9d1) != '\0');
      if (param_1[0x268] == 0) {
        return 1;
      }
    }
    iVar6 = func_0058E214(*piVar1);
    if ((iVar6 == 0) && ((uint)param_1[0x268] < 0x14)) {
      return 0;
    }
    uVar9 = param_1[0x268] + 1;
    *puVar12 = uVar9;
    if (uVar9 < 0x14) {
      return 0;
    }
    if (uVar9 == 0x14) {
      func_0051C3B4(*piVar1);
    }
    if (*(char *)((int)param_1 + 0x9d1) != '\0') {
      uVar8 = func_0058E22C(*piVar1);
      return uVar8;
    }
    iVar6 = func_0058E108(*piVar1);
    goto joined_r0x00372260;
  case 4:
    uVar5 = func_005568D4(*piVar7);
    if (0 < (int)((uint)uVar5 - param_1[0x264])) {
      func_00255B48(*piVar7,-((uint)uVar5 - param_1[0x264]),iVar10);
    }
    break;
  case 5:
  case 6:
    iVar6 = param_1[0x265];
    if ((*(char *)(iVar10 + 0x2ee) != '\0') || (iVar6 < 0)) {
      iVar6 = 0;
    }
    if (param_1[0x268] == 0) {
      if (*(char *)((int)param_1 + 0x9d1) != '\x01') {
        fVar14 = fVar13;
      }
      fVar13 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      func_00255B48(iVar11,(int)((fVar14 - fVar4) * fVar13),iVar10);
      *puVar12 = param_1[0x268] + 1;
      func_0051C378(*piVar1,fVar14);
      fVar13 = (float)VectorSignedToFloat(param_1[0x265],(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x265] = (int)(fVar13 * fVar14);
      if (param_1[0x268] == 0) {
        return 1;
      }
    }
    iVar6 = func_0058E1FC(*piVar1);
    if ((iVar6 == 0) && ((uint)param_1[0x268] < 0x14)) {
      return 0;
    }
    uVar9 = param_1[0x268] + 1;
    *puVar12 = uVar9;
    if (uVar9 < 0x14) {
      return 0;
    }
    if (uVar9 == 0x14) {
      func_0051C3A0(*piVar1);
    }
    iVar6 = func_0058E108(*piVar1);
joined_r0x00372260:
    if (iVar6 == 0) {
      return 0;
    }
    *(byte *)(*(int *)(*piVar1 + 0x130) + 0x74) = *(byte *)(*(int *)(*piVar1 + 0x130) + 0x74) & 0xfe
    ;
    *(undefined1 *)((int)param_1 + 0x9d2) = 0;
    return 1;
  }
  return 1;
}

