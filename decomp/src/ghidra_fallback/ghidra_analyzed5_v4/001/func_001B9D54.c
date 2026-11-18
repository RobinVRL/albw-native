#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern float DAT_001ba128;
extern float DAT_001ba12c;
extern float DAT_001ba130;
extern float *DAT_001ba134;
extern float DAT_001ba138;
extern int DAT_001ba1e8;

// USA 001B9D54 <- EU 001B9D54 (Ghidra, non-matching)
// GLOBAL DAT_001ba128 float
// GLOBAL DAT_001ba12c float
// GLOBAL DAT_001ba130 float
// GLOBAL DAT_001ba134 float *
// GLOBAL DAT_001ba138 float
// GLOBAL DAT_001ba1e8 int

undefined4 func_001B9D54(int param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint extraout_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  float *pfVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  (**(code **)(**(int **)(param_1 + 0x3a8) + 4))(*(int **)(param_1 + 0x3a8));
  iVar3 = *(int *)(param_1 + 0x3a8);
  pfVar9 = (float *)(iVar3 + 0x2c);
  fVar13 = DAT_001ba128;
  uVar14 = func_00114608((uint)ALBW_AS_U32((*param_3 * DAT_001ba128)),extraout_r1);
  uVar15 = func_00114608((uint)ALBW_AS_U32((param_3[1] * fVar13)),(uint)((ulonglong)uVar14 >> 0x20));
  uVar16 = func_00114608((uint)ALBW_AS_U32((param_3[2] * fVar13)),(uint)((ulonglong)uVar15 >> 0x20));
  func_00491624(pfVar9,(uint)uVar14,(uint)uVar15,(uint)uVar16);
  iVar4 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar4 + 0x80),pfVar9,param_4);
  iVar4 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(float *)(iVar4 + 0x74) = *param_2;
  *(float *)(iVar4 + 0x78) = param_2[1];
  *(float *)(iVar4 + 0x7c) = param_2[2];
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  fVar1 = DAT_001ba130;
  fVar13 = DAT_001ba12c;
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  *(undefined4 *)(param_1 + 0x3d0) = *param_4;
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar7;
  pfVar2 = DAT_001ba134;
  piVar8 = *(int **)(*(int *)(param_1 + 0x410) + 0x14);
  fVar12 = *param_2 - ALBW_AS_F32(piVar8[1]);
  bVar11 = fVar1 == fVar12;
  bVar10 = fVar12 <= fVar1;
  if (!bVar10 || bVar11) {
    bVar11 = fVar12 == fVar13;
    bVar10 = fVar13 <= fVar12;
  }
  if (bVar10 && !bVar11) {
LAB_001b9eb8:
    bVar11 = false;
  }
  else {
    fVar12 = param_2[1] - ALBW_AS_F32(piVar8[2]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001b9eb8;
    fVar12 = param_2[2] - ALBW_AS_F32(piVar8[3]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001b9eb8;
    bVar11 = true;
  }
  if (!bVar11) {
    *(byte *)(piVar8 + 0x2a) = *(byte *)(piVar8 + 0x2a) | 8;
    fVar12 = *param_2 - *pfVar2;
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) {
LAB_001b9f68:
      piVar8[1] = (int)ALBW_AS_U32(*param_2);
      piVar8[2] = (int)ALBW_AS_U32(param_2[1]);
      piVar8[3] = (int)ALBW_AS_U32(param_2[2]);
      bVar5 = *(byte *)(piVar8 + 0x2a) | 2;
    }
    else {
      fVar12 = param_2[1] - pfVar2[1];
      bVar11 = fVar1 == fVar12;
      bVar10 = fVar12 <= fVar1;
      if (!bVar10 || bVar11) {
        bVar11 = fVar12 == fVar13;
        bVar10 = fVar13 <= fVar12;
      }
      if (bVar10 && !bVar11) goto LAB_001b9f68;
      fVar12 = param_2[2] - pfVar2[2];
      bVar11 = fVar1 == fVar12;
      bVar10 = fVar12 <= fVar1;
      if (!bVar10 || bVar11) {
        bVar11 = fVar12 == fVar13;
        bVar10 = fVar13 <= fVar12;
      }
      if (bVar10 && !bVar11) goto LAB_001b9f68;
      piVar8[1] = (int)ALBW_AS_U32(*pfVar2);
      piVar8[2] = (int)ALBW_AS_U32(pfVar2[1]);
      piVar8[3] = (int)ALBW_AS_U32(pfVar2[2]);
      bVar5 = *(byte *)(piVar8 + 0x2a) & 0xfd;
    }
    *(byte *)(piVar8 + 0x2a) = bVar5;
  }
  fVar12 = *pfVar9 - ALBW_AS_F32(piVar8[6]);
  bVar11 = fVar1 == fVar12;
  bVar10 = fVar12 <= fVar1;
  if (!bVar10 || bVar11) {
    bVar11 = fVar12 == fVar13;
    bVar10 = fVar13 <= fVar12;
  }
  if (bVar10 && !bVar11) {
LAB_001ba0d4:
    bVar11 = false;
  }
  else {
    fVar12 = *(float *)(iVar3 + 0x30) - ALBW_AS_F32(piVar8[7]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x34) - ALBW_AS_F32(piVar8[8]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x38) - ALBW_AS_F32(piVar8[9]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x3c) - ALBW_AS_F32(piVar8[10]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x40) - ALBW_AS_F32(piVar8[0xb]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x44) - ALBW_AS_F32(piVar8[0xc]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x48) - ALBW_AS_F32(piVar8[0xd]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    fVar12 = *(float *)(iVar3 + 0x4c) - ALBW_AS_F32(piVar8[0xe]);
    bVar11 = fVar1 == fVar12;
    bVar10 = fVar12 <= fVar1;
    if (!bVar10 || bVar11) {
      bVar11 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar11) goto LAB_001ba0d4;
    bVar11 = true;
  }
  if (bVar11) goto LAB_001ba194;
  *(byte *)(piVar8 + 0x2a) = *(byte *)(piVar8 + 0x2a) | 8;
  iVar4 = DAT_001ba1e8;
  fVar13 = DAT_001ba138;
  if (*pfVar9 == 1.0) {
    bVar11 = false;
    if (*(float *)(iVar3 + 0x30) == DAT_001ba138) {
      bVar11 = *(float *)(iVar3 + 0x34) == DAT_001ba138;
    }
    if (!bVar11) goto LAB_001ba17c;
    bVar11 = false;
    if (*(float *)(iVar3 + 0x38) == DAT_001ba138) {
      bVar11 = *(int *)(iVar3 + 0x3c) == 0x3f800000;
    }
    if (!bVar11) goto LAB_001ba17c;
    bVar11 = false;
    if (*(float *)(iVar3 + 0x40) == DAT_001ba138) {
      bVar11 = *(float *)(iVar3 + 0x44) == DAT_001ba138;
    }
    if (!bVar11) goto LAB_001ba17c;
    bVar11 = false;
    if (*(float *)(iVar3 + 0x48) == DAT_001ba138) {
      bVar11 = *(int *)(iVar3 + 0x4c) == 0x3f800000;
    }
    if (!bVar11) goto LAB_001ba17c;
    piVar8[6] = DAT_001ba1e8;
    piVar8[7] = (int)ALBW_AS_U32(fVar13);
    piVar8[8] = (int)ALBW_AS_U32(fVar13);
    piVar8[9] = (int)ALBW_AS_U32(fVar13);
    piVar8[10] = iVar4;
    piVar8[0xb] = (int)ALBW_AS_U32(fVar13);
    piVar8[0xc] = (int)ALBW_AS_U32(fVar13);
    piVar8[0xd] = (int)ALBW_AS_U32(fVar13);
    piVar8[0xe] = iVar4;
    bVar5 = *(byte *)(piVar8 + 0x2a) & 0xfb;
  }
  else {
LAB_001ba17c:
    func_001151CC(piVar8 + 6,pfVar9);
    bVar5 = *(byte *)(piVar8 + 0x2a) | 4;
  }
  *(byte *)(piVar8 + 0x2a) = bVar5;
LAB_001ba194:
  func_0043625C(piVar8,(undefined4 *)(param_1 + 0x3d0));
  return func_004ED9C8(*(int *)(param_1 + 0x410));
}

