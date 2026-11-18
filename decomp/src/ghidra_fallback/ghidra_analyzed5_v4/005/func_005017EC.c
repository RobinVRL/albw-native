#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_00151358(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float fRam00501ad4;
extern float DAT_00501acc;
extern float DAT_00501ad0;
extern float DAT_00501bf0;
extern float DAT_00501bf4;
extern int DAT_00501bf8;

// USA 005017EC <- EU 005017C4 (Ghidra, non-matching)
// GLOBAL DAT_00501acc float
// GLOBAL DAT_00501ad0 float
// GLOBAL DAT_00501bf0 float
// GLOBAL DAT_00501bf4 float
// GLOBAL DAT_00501bf8 int
// GLOBAL UNK_00501ad4 float

void func_005017EC(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  undefined1 uVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 ((float *)(albw_frame + 0xc))
  #define local_3c (*(float *)(albw_frame + 0x14))
  func_001512E8(*(int **)(param_1 + 0x8f0));
  fVar8 = DAT_00501acc;
  iVar5 = param_1 + 0x8f4;
  uVar19 = (ulonglong)(uint)ALBW_AS_U32(DAT_00501acc);
  if (param_2 != 0) {
    iVar16 = 0;
    do {
      pfVar12 = (float *)(iVar5 + iVar16 * 0x18);
      pfVar12[1] = *(float *)(param_1 + 0x3d4);
      fVar8 = pfVar12[3];
      *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) | 0x40000000;
      func_004D8AEC((float *)((int)ALBW_AS_U32(fVar8) + 0x80),(uint)ALBW_AS_U32(pfVar12[5]),pfVar12);
      fVar8 = pfVar12[3];
      iVar9 = *(int *)(param_1 + 0x40c);
      *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar8) + 0x164) | 0x40000000;
      *(undefined4 *)((int)ALBW_AS_U32(fVar8) + 0x74) = *(undefined4 *)(iVar9 + 0x74);
      *(undefined4 *)((int)ALBW_AS_U32(fVar8) + 0x78) = *(undefined4 *)(iVar9 + 0x78);
      *(undefined4 *)((int)ALBW_AS_U32(fVar8) + 0x7c) = *(undefined4 *)(iVar9 + 0x7c);
      func_004CEAF0((int)ALBW_AS_U32(pfVar12[3]));
      func_001512B4((int)ALBW_AS_U32(pfVar12[4]),pfVar12);
      fVar8 = ALBW_AS_F32(uVar19);
      iVar16 = iVar16 + 1;
    } while (iVar16 != 2);
    goto LAB_00501b08;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x510) + 4);
  if (((cVar1 == '\x13') || (cVar1 == '\x05' || cVar1 == '\x06')) ||
     (cVar1 == '\x02' || cVar1 == '\v')) {
    uVar4 = 1;
LAB_005018d0:
    uVar17 = uVar4;
    bVar2 = true;
  }
  else {
    uVar17 = 0;
    uVar4 = 0;
    if (*(char *)(param_1 + 0xa74) != '\0') goto LAB_005018d0;
    bVar2 = false;
  }
  uVar13 = *(int *)(param_1 + 0xa70) + 1;
  *(uint *)(param_1 + 0xa70) = uVar13;
  if (0xf < uVar13) {
    *(undefined4 *)(param_1 + 0xa70) = 0;
  }
  pfVar12 = (float *)(param_1 + 0x924);
  if (!bVar2) {
    uVar13 = *(int *)(param_1 + 0xa6c) + 1;
    *(uint *)(param_1 + 0xa6c) = uVar13;
    if (0xf < uVar13) {
      *(undefined4 *)(param_1 + 0xa6c) = 0;
    }
    pfVar6 = pfVar12;
    if (*(uint *)(param_1 + 0xa6c) < 0x10) {
      pfVar6 = pfVar12 + *(uint *)(param_1 + 0xa6c) * 5;
    }
    *pfVar6 = *(float *)(param_1 + 0x3d0);
    pfVar6[1] = *(float *)(param_1 + 0x3d4);
    pfVar6[2] = *(float *)(param_1 + 0x3d8);
    pfVar6 = pfVar12;
    if (*(uint *)(param_1 + 0xa6c) < 0x10) {
      pfVar6 = pfVar12 + *(uint *)(param_1 + 0xa6c) * 5;
    }
    pfVar6[3] = *(float *)(param_1 + 1000);
  }
  pfVar6 = pfVar12;
  if (*(uint *)(param_1 + 0xa70) < 0x10) {
    pfVar6 = pfVar12 + *(uint *)(param_1 + 0xa70) * 5;
  }
  pfVar6[4] = *(float *)(param_1 + 0x3d4);
  if ((*(float *)(param_1 + 0x3d0) == *(float *)(param_1 + 0xa78)) &&
     (*(float *)(param_1 + 0x3d8) == *(float *)(param_1 + 0xa80))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  func_00115C70(local_44,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0xa78));
  if ((bool)(bVar2 & bVar3)) {
    iVar9 = 0;
    iVar16 = 0;
    do {
      pfVar6 = pfVar12 + iVar16 * 5;
      if (*(int *)(param_1 + 0xa6c) != iVar9) {
        *pfVar6 = *(float *)(param_1 + 0x3d0);
        pfVar6[1] = *(float *)(param_1 + 0x3d4);
        pfVar6[2] = *(float *)(param_1 + 0x3d8);
      }
      iVar16 = iVar16 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar16 != 0x10);
  }
  if (bVar2) {
    uVar13 = *(uint *)(param_1 + 0xa70);
    fVar20 = DAT_00501ad0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xa6c);
    fVar20 = fRam00501ad4;
  }
  iVar16 = 0;
  uVar13 = uVar13 & 0xf;
  do {
    iVar9 = 0;
    if (0 < (int)fVar20) {
      do {
        uVar13 = uVar13 - 1;
        if ((int)uVar13 < 0) {
          uVar13 = 0xf;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)fVar20);
    }
    fVar20 = fVar20 * fVar8;
    pfVar6 = pfVar12;
    if (uVar13 < 0x10) {
      pfVar6 = pfVar12 + uVar13 * 5;
    }
    pfVar14 = (float *)(iVar5 + iVar16 * 0x18);
    if (bVar2) {
      pfVar14[1] = pfVar6[4];
      if (bVar3) {
        *pfVar14 = *pfVar14 + local_44[0];
        pfVar14[2] = pfVar14[2] + local_3c;
      }
    }
    else {
      *pfVar14 = *pfVar6;
      pfVar14[1] = pfVar6[1];
      pfVar14[2] = pfVar6[2];
      pfVar14[5] = pfVar6[3];
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 2);
  *(undefined1 *)(param_1 + 0xa74) = uVar17;
LAB_00501b08:
  iVar9 = 0;
  iVar18 = 0;
  fVar20 = DAT_00501bf0;
  iVar16 = DAT_00501bf8;
  fVar21 = DAT_00501bf4;
  do {
    iVar15 = *(int *)(param_1 + 0x40c);
    pfVar12 = (float *)(iVar5 + iVar9 * 0x18);
    fVar7 = pfVar12[3];
    if (iVar18 == 0) {
      fVar20 = fVar20 * fVar8;
    }
    *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) = *(uint *)((int)ALBW_AS_U32(fVar7) + 0x164) | 0x40000000;
    if (iVar18 != 0) {
      fVar20 = fVar20 * fVar21;
    }
    *(undefined4 *)((int)ALBW_AS_U32(fVar7) + 0x74) = *(undefined4 *)(iVar15 + 0x74);
    *(undefined4 *)((int)ALBW_AS_U32(fVar7) + 0x78) = *(undefined4 *)(iVar15 + 0x78);
    *(undefined4 *)((int)ALBW_AS_U32(fVar7) + 0x7c) = *(undefined4 *)(iVar15 + 0x7c);
    piVar10 = (int *)ALBW_PTR_BITS(pfVar12[4]);
    fVar7 = *(float *)(*(int *)(param_1 + 0x40c) + 0x7c);
    piVar10[4] = (int)ALBW_AS_U32((*(float *)(*(int *)(param_1 + 0x40c) + 0x74) * fVar20));
    piVar10[5] = iVar16;
    piVar10[6] = (int)ALBW_AS_U32((fVar7 * fVar20));
    func_00151358(piVar10);
    fVar7 = pfVar12[3];
    puVar11 = (uint *)((int)ALBW_AS_U32(fVar7) + 0x164);
    *puVar11 = *puVar11 | 0x40000000;
    func_004D8AEC((float *)((int)ALBW_AS_U32(fVar7) + 0x80),(uint)ALBW_AS_U32(pfVar12[5]),pfVar12);
    func_004CEAF0((int)ALBW_AS_U32(pfVar12[3]));
    func_001512B4((int)ALBW_AS_U32(pfVar12[4]),pfVar12);
    iVar9 = iVar9 + 1;
    iVar18 = iVar18 + 1;
  } while (iVar9 != 2);
  return;
}

