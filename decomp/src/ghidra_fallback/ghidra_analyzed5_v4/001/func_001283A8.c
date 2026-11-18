#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_00128514;
extern int *DAT_00128518;
extern int *DAT_0012851c;
extern int DAT_00128520;
extern float DAT_00128524;
extern undefined4 DAT_00128528;
extern float DAT_0012852c;

// USA 001283A8 <- EU 001283A8 (Ghidra, non-matching)
// GLOBAL DAT_00128514 float
// GLOBAL DAT_00128518 int *
// GLOBAL DAT_0012851c int *
// GLOBAL DAT_00128520 int
// GLOBAL DAT_00128524 float
// GLOBAL DAT_00128528 undefined4
// GLOBAL DAT_0012852c float

void func_001283A8(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  fVar6 = DAT_00128514;
  uVar9 = *(undefined4 *)(param_1 + 0x3e0);
  fVar5 = *(float *)(param_1 + 0x8f0);
  *(float *)(param_1 + 0x8f0) = fVar5 + (DAT_00128514 - fVar5) * DAT_00128514;
  func_00115C70(afStack_28,(float *)(param_1 + 0x8f8),(float *)(param_1 + 0x3d0));
  iVar1 = func_0068C690(afStack_28);
  func_0051D2F4((int *)(param_1 + 0x8f4),iVar1,DAT_00128518[-1],*DAT_00128518,fVar6);
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x8f4),DAT_00128520,*DAT_0012851c,
                DAT_00128524);
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x8f4),*(float *)(param_1 + 0x8f0));
  *(undefined4 *)(param_1 + 0x3e0) = uVar9;
  uVar9 = DAT_00128528;
  fVar6 = *(float *)(param_1 + 0x8f8) - *(float *)(param_1 + 0x3d0);
  fVar5 = *(float *)(param_1 + 0x900) - *(float *)(param_1 + 0x3d8);
  if (((int)ALBW_AS_U32((fVar6 * fVar6 + fVar5 * fVar5)) < 0x3f800000) ||
     (*(uint *)(param_1 + 0x8e4) <= *(uint *)(param_1 + 0x8e0))) {
    *(undefined4 *)(param_1 + 0x8e4) = 0x1e;
    *(undefined4 *)(param_1 + 0x8e8) = uVar9;
    *(undefined4 *)(param_1 + 0x8e0) = 0;
    *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
  }
  else {
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
  }
  fVar6 = DAT_0012852c;
  fVar7 = *(float *)(param_1 + 0x3d4);
  fVar5 = *(float *)(param_1 + 0x8fc);
  if (fVar7 != fVar5) {
    fVar8 = *(float *)(param_1 + 0x3e0);
    bVar2 = fVar8 < DAT_0012852c;
    bVar3 = fVar8 == DAT_0012852c;
    bVar4 = NAN(fVar8) || NAN(DAT_0012852c);
    if (!bVar3 && !bVar2) {
      bVar2 = fVar7 < fVar5;
      bVar3 = fVar7 == fVar5;
      bVar4 = NAN(fVar7) || NAN(fVar5);
    }
    if ((!bVar3 && bVar2 == bVar4) || (fVar8 < DAT_0012852c && fVar7 < fVar5)) {
      *(float *)(param_1 + 0x3d4) = fVar5;
      *(float *)(param_1 + 0x3e0) = fVar6;
    }
  }
  return;
}

