#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521058(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A7D4(void);
extern float DAT_0012c124;
extern float DAT_0012c128;
extern int *DAT_0012c12c;
extern float DAT_0012c130;
extern float DAT_0012c134;
extern int DAT_0012c138;
extern float DAT_0012c13c;

// USA 0012BEA4 <- EU 0012BEA4 (Ghidra, non-matching)
// GLOBAL DAT_0012c124 float
// GLOBAL DAT_0012c128 float
// GLOBAL DAT_0012c12c int *
// GLOBAL DAT_0012c130 float
// GLOBAL DAT_0012c134 float
// GLOBAL DAT_0012c138 int
// GLOBAL DAT_0012c13c float

void func_0012BEA4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  
  fVar8 = DAT_0012c128;
  fVar9 = DAT_0012c124;
  uVar14 = (ulonglong)(uint)ALBW_AS_U32(DAT_0012c128);
  fVar13 = DAT_0012c128;
  if (*(int *)(param_1 + 0x908) == 0) {
    if (0x1e < *(int *)(param_1 + 0x8bc)) {
      pfVar4 = *(float **)(param_1 + 0x8f8);
      if (pfVar4 == (float *)0x0) {
        if (*(char *)(param_1 + 0x910) == '\0') {
          puVar2 = (uint *)func_0058A7D4();
          uVar3 = func_00111A64(puVar2);
          fVar8 = ALBW_AS_F32(uVar14);
          if (4 < (uint)((ulonglong)uVar3 * 100 >> 0x20)) goto LAB_0012c00c;
        }
        do {
          puVar2 = (uint *)func_0058A7D4();
          uVar3 = func_00111A64(puVar2);
          fVar8 = ALBW_AS_F32(uVar14);
          iVar6 = (int)((ulonglong)uVar3 * 4 >> 0x20) * 0x40000000;
        } while (iVar6 == *(int *)(param_1 + 0x8f4));
        *(int *)(param_1 + 0x8f4) = iVar6;
        *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
      }
      else {
        fVar7 = *pfVar4 - *(float *)(param_1 + 0x3d0);
        iVar6 = 0;
        fVar11 = pfVar4[2] - *(float *)(param_1 + 0x3d8);
        fVar10 = fVar7;
        if (fVar7 <= DAT_0012c124) {
          fVar10 = -fVar7;
        }
        fVar12 = fVar11;
        if (fVar11 <= DAT_0012c124) {
          fVar12 = -fVar11;
        }
        if (fVar10 <= fVar12) {
          if (fVar11 <= DAT_0012c124) {
            iVar6 = -0x80000000;
          }
        }
        else if (DAT_0012c124 < fVar7) {
          iVar6 = 0x40000000;
        }
        else {
          iVar6 = -0x40000000;
        }
        if (iVar6 != *(int *)(param_1 + 1000)) {
          *(int *)(param_1 + 0x908) = 1;
          *(int *)(param_1 + 0x8f4) = iVar6;
        }
      }
    }
  }
  else {
    fVar13 = DAT_0012c124;
    if ((*(int *)(param_1 + 0x908) == 1) &&
       (fVar13 = DAT_0012c128,
       bVar1 = func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0x8f4),*DAT_0012c12c), bVar1
       )) {
      *(undefined4 *)(param_1 + 0x908) = 0;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
    }
  }
LAB_0012c00c:
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fVar13);
  fVar8 = *(float *)(param_1 + 0x3e0) - fVar8;
  if (fVar8 < DAT_0012c130) {
    fVar8 = DAT_0012c130;
  }
  *(float *)(param_1 + 0x3e0) = fVar8;
  func_004FB0D8(param_1,(float *)(param_1 + 0x3e0));
  pfVar4 = *(float **)(param_1 + 0x8f8);
  if (pfVar4 != (float *)0x0) {
    if (pfVar4 == (float *)(param_1 + 8)) {
      fVar9 = *pfVar4 - *(float *)(param_1 + 0x3d0);
      fVar8 = pfVar4[2] - *(float *)(param_1 + 0x3d8);
      if (0x41ffffff < (int)ALBW_AS_U32((fVar9 * fVar9 + fVar8 * fVar8))) {
        return;
      }
    }
    else {
      iVar6 = func_005211F4(param_1,DAT_0012c13c,fVar9);
      if (iVar6 != 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    return;
  }
  iVar6 = func_005211F4(param_1,DAT_0012c134,fVar9);
  if (iVar6 == 0) {
    fVar9 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
    fVar8 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
    if (DAT_0012c138 < (int)ALBW_AS_U32((fVar9 * fVar9 + fVar8 * fVar8))) {
      *(int *)(param_1 + 0x8f8) = param_1 + 8;
    }
    return;
  }
  uVar5 = func_00521058();
  *(undefined4 *)(param_1 + 0x8f8) = uVar5;
  return;
}

