#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001E8348(int param_1,undefined4 *param_2,undefined4 *param_3);
extern float DAT_003911a4;
extern float DAT_003911a8;
extern float DAT_003911ac;
extern float DAT_003911b0;
extern int DAT_003911b4;
extern float DAT_003911b8;
extern int *DAT_003911bc;

// USA 00391078 <- EU 00391054 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003911a4 float
// GLOBAL DAT_003911a8 float
// GLOBAL DAT_003911ac float
// GLOBAL DAT_003911b0 float
// GLOBAL DAT_003911b4 int
// GLOBAL DAT_003911b8 float
// GLOBAL DAT_003911bc int *

void func_00391078(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  fVar1 = DAT_003911a8;
  fVar12 = DAT_003911a4;
  iVar4 = *(int *)(param_1 + 0x4b4);
  iVar5 = iVar4 + 1;
  *(int *)(param_1 + 0x4b4) = iVar5;
  fVar10 = DAT_003911b0;
  fVar2 = DAT_003911ac;
  iVar6 = *(int *)(param_1 + 0x4b8);
  bVar7 = false;
  if (iVar5 < iVar6) {
    iVar4 = iVar4 + -0xb3;
    iVar8 = iVar5;
    if (0xb3 < iVar5) {
      iVar8 = iVar6 - iVar5;
      iVar4 = iVar8 + -0xb4;
    }
    iVar3 = *(int *)(DAT_003911b4 + 0xc);
    if (iVar4 < 0 != SBORROW4(iVar8,0xb4)) {
      if (0xb3 < iVar5) {
        iVar5 = iVar6 - iVar5;
      }
      fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)((fVar11 + fVar12) * fVar11 * fVar1),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar3 = (int)(fVar13 * fVar11 * DAT_003911ac);
    }
    bVar7 = true;
    *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + iVar3;
  }
  iVar4 = *(int *)(param_1 + 0x4b4);
  pfVar9 = (float *)(param_1 + 0x444);
  if (iVar4 < *(int *)(param_1 + 0x4bc)) {
    iVar5 = iVar4;
    if (0xb3 < iVar4) {
      iVar5 = *(int *)(param_1 + 0x4bc) - iVar4;
    }
    fStack_14 = DAT_003911b8;
    if (iVar5 < 0xb4) {
      if (0xb3 < iVar4) {
        iVar4 = *(int *)(param_1 + 0x4bc) - iVar4;
      }
      fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)((fVar11 + fVar12) * fVar11 * fVar1),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fStack_14 = fVar12 * fVar2 * DAT_003911b8;
    }
    local_18 = fVar10;
    local_10 = fVar10;
    func_00115C54(pfVar9,pfVar9,&local_18);
  }
  else if (!bVar7) {
    return;
  }
  func_001E8348(*(int *)(*DAT_003911bc + 0x18),pfVar9,(undefined4 *)(param_1 + 0x45c));
  return;
}

