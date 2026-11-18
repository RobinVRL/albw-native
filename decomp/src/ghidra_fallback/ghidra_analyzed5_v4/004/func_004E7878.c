#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_002ACC68(undefined4 *param_1);
extern int func_004E7200(int param_1);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0052107C(int param_1);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern int func_0068C690(float *param_1);
extern float DAT_004e7ac0;
extern float DAT_004e7ac4;
extern int *DAT_004e7ac8;
extern int *DAT_004e7acc;
extern float DAT_004e7ad0;
extern float DAT_004e7ad4;
extern undefined4 DAT_004e7ad8;
extern int *DAT_004e7adc;
extern float DAT_004e7ae0;
extern float DAT_004e7ae4;
extern int DAT_004e7ae8;

// USA 004E7878 <- EU 004E7850 (Ghidra, non-matching)
// GLOBAL DAT_004e7ac0 float
// GLOBAL DAT_004e7ac4 float
// GLOBAL DAT_004e7ac8 int *
// GLOBAL DAT_004e7acc int *
// GLOBAL DAT_004e7ad0 float
// GLOBAL DAT_004e7ad4 float
// GLOBAL DAT_004e7ad8 undefined4
// GLOBAL DAT_004e7adc int *
// GLOBAL DAT_004e7ae0 float
// GLOBAL DAT_004e7ae4 float
// GLOBAL DAT_004e7ae8 int

undefined4 func_004E7878(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar5 = (float *)func_00520FC0();
  fVar10 = *pfVar5 - *(float *)(param_1 + 8);
  fVar11 = pfVar5[2] - *(float *)(param_1 + 0x10);
  if (fVar10 * fVar10 + fVar11 * fVar11 < *(float *)(param_1 + 0x548) * *(float *)(param_1 + 0x548))
  {
    local_50 = *(float *)(param_1 + 0x3d0);
    uStack_48 = *(undefined4 *)(param_1 + 0x3d8);
    local_4c = *(float *)(param_1 + 0x3d4) + DAT_004e7ac0;
    func_001DDDE8(*DAT_004e7ac8,&local_50,2,DAT_004e7ac4);
  }
  if (*(uint *)(param_1 + 0x518) < *(uint *)(param_1 + 0x51c)) {
    *(uint *)(param_1 + 0x518) = *(uint *)(param_1 + 0x518) + 1;
  }
  pfVar5 = (float *)(param_1 + 0x528);
  func_00115C70(&local_50,pfVar5,(float *)(param_1 + 0x3d0));
  local_3c = local_50;
  fStack_38 = local_4c;
  uStack_34 = uStack_48;
  iVar6 = func_0068C690(&local_3c);
  sVar2 = *(short *)(param_1 + 0x2e);
  piVar7 = DAT_004e7acc;
  if ((sVar2 == 0) && (piVar7 = DAT_004e7adc, *(char *)(param_1 + 0x560) != '\0')) {
    iVar8 = *DAT_004e7acc;
    iVar9 = iVar6 - *(int *)(param_1 + 1000);
    bVar4 = SBORROW4(iVar9,iVar8);
    iVar1 = iVar9 - iVar8;
    iVar3 = iVar8;
    if (iVar9 <= iVar8) {
      iVar3 = -iVar8;
      bVar4 = SBORROW4(iVar3,iVar9);
      iVar1 = iVar3 - iVar9;
    }
    if (iVar9 == iVar3 || iVar1 < 0 != bVar4) {
      *(int *)(param_1 + 1000) = iVar6;
    }
    else {
      if (*(char *)(param_1 + 0x55f) != '\0') {
        iVar8 = -iVar8;
      }
      *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + iVar8;
    }
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 1000);
  }
  else {
    func_0051D27C((int *)(param_1 + 1000),iVar6,*piVar7);
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 1000);
  }
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_004e7ad0);
  bVar4 = func_0052107C(param_1);
  fVar10 = DAT_004e7ad4;
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x3e0) = DAT_004e7ad8;
  }
  else {
    fVar11 = DAT_004e7ae0;
    if ((*(short *)(param_1 + 0x2e) != 0) &&
       (bVar4 = func_002ACC68((undefined4 *)(param_1 + 0x3d0)), bVar4)) {
      fVar11 = fVar10;
    }
    *(float *)(param_1 + 0x3e0) = fVar11;
  }
  func_00688C34((float *)(param_1 + 0x540),fVar10,DAT_004e7ae4);
  if (sVar2 == 0) {
    if ((*(uint *)(param_1 + 0x518) < *(uint *)(param_1 + 0x51c)) &&
       (fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar5,
       fVar11 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x530),
       DAT_004e7ae8 <= (int)ALBW_AS_U32((fVar10 * fVar10 + fVar11 * fVar11)))) {
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x518) < *(uint *)(param_1 + 0x51c)) &&
          (fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar5,
          fVar11 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x530),
          DAT_004e7ae8 <= (int)ALBW_AS_U32((fVar10 * fVar10 + fVar11 * fVar11)))) {
    if (*(char *)(param_1 + 0x55c) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x55d) != '\0') {
      return 0;
    }
  }
  return func_004E7200(param_1);
}

