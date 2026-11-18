// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004FB070(int param_1,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00521184();
extern float func_0058AC14(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0022c91c;
extern int *DAT_0022c920;
extern int *DAT_0022c924;
extern float DAT_0022c928;
extern float DAT_0022c92c;
extern float DAT_0022c930;
extern float DAT_0022c934;
extern undefined4 *DAT_0022c938;
extern undefined4 *DAT_0022c93c;
extern int *DAT_0022c940;
extern float DAT_0022c944;
extern float DAT_0022c948;
extern float DAT_0022c94c;

// USA 0022C748 <- EU 0022C748 (Ghidra, non-matching)
// GLOBAL DAT_0022c91c int *
// GLOBAL DAT_0022c920 int *
// GLOBAL DAT_0022c924 int *
// GLOBAL DAT_0022c928 float
// GLOBAL DAT_0022c92c float
// GLOBAL DAT_0022c930 float
// GLOBAL DAT_0022c934 float
// GLOBAL DAT_0022c938 undefined4 *
// GLOBAL DAT_0022c93c undefined4 *
// GLOBAL DAT_0022c940 int *
// GLOBAL DAT_0022c944 float
// GLOBAL DAT_0022c948 float
// GLOBAL DAT_0022c94c float

void func_0022C748(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  if (*DAT_0022c91c == 0) {
    return;
  }
  local_18 = 0;
  if (*(char *)(param_1 + 0xd08) != '\0') {
    local_18 = func_00521184(param_1);
  }
  local_18 = local_18 - *(int *)(param_1 + 1000);
  uVar4 = func_0058E2B8(&local_18);
  if (0x3fffffff < uVar4) {
    local_18 = -0x80000000 - local_18;
  }
  piVar6 = (int *)(param_1 + 0xadc);
  if (*(char *)(param_1 + 0xd09) == '\0') {
    func_0051D27C(piVar6,local_18,*DAT_0022c940);
  }
  else {
    func_0051D27C(piVar6,local_18,*DAT_0022c920);
  }
  piVar2 = DAT_0022c924;
  func_0051D37C(piVar6,-*DAT_0022c924,*DAT_0022c924);
  fVar7 = func_0058AC14(param_1);
  fVar11 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat(*piVar6,(byte)(in_fpscr >> 0x15) & 3);
  func_004FB070(param_1,fVar7 * (DAT_0022c928 - (fVar10 / fVar11) * DAT_0022c928));
  pfVar5 = (float *)(param_1 + 0xae8);
  if (*(char *)(param_1 + 0xd0b) == '\0') {
    fVar7 = *pfVar5;
    fVar10 = -fVar7;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 < DAT_0022c948) << 0x1f |
            (uint)(fVar10 == DAT_0022c948) << 0x1e;
    bVar1 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar10) || NAN(DAT_0022c948))) {
      uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_0022c94c <= fVar10) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        *pfVar5 = DAT_0022c944;
        goto LAB_0022c878;
      }
      fVar7 = fVar7 - DAT_0022c948;
    }
    else {
      fVar7 = fVar7 + DAT_0022c948;
    }
  }
  else {
    fVar7 = *pfVar5;
    fVar10 = DAT_0022c92c - fVar7;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 < DAT_0022c930) << 0x1f |
            (uint)(fVar10 == DAT_0022c930) << 0x1e;
    bVar1 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar10) || NAN(DAT_0022c930))) {
      uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_0022c934 <= fVar10) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        *pfVar5 = DAT_0022c92c;
        goto LAB_0022c878;
      }
      fVar7 = fVar7 - DAT_0022c930;
    }
    else {
      fVar7 = fVar7 + DAT_0022c930;
    }
  }
  *pfVar5 = fVar7;
LAB_0022c878:
  puVar3 = DAT_0022c93c;
  fVar7 = (float)VectorSignedToFloat(*DAT_0022c938,(byte)(uVar4 >> 0x15) & 3);
  iVar8 = (int)(fVar7 * *(float *)(param_1 + 0xae8));
  *(int *)(param_1 + 0xae0) = iVar8;
  uVar9 = *puVar3;
  *(int *)(param_1 + 0x948) = iVar8;
  fVar7 = (float)VectorSignedToFloat(uVar9,(byte)(uVar4 >> 0x15) & 3);
  iVar8 = (int)(fVar7 * *(float *)(param_1 + 0xae8));
  *(int *)(param_1 + 0xae4) = iVar8;
  *(int *)(param_1 + 0x94c) = iVar8;
  return;
}

