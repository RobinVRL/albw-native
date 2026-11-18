#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0024ADF4(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_0024aa5c;
extern float DAT_0024aa60;
extern float DAT_0024aa64;
extern float DAT_0024aa68;
extern float DAT_0024aa6c;
extern int *DAT_0024aa70;

// USA 0024A77C <- EU 0024A77C (Ghidra, non-matching)
// GLOBAL DAT_0024aa5c float
// GLOBAL DAT_0024aa60 float
// GLOBAL DAT_0024aa64 float
// GLOBAL DAT_0024aa68 float
// GLOBAL DAT_0024aa6c float
// GLOBAL DAT_0024aa70 int *

undefined4 func_0024A77C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_0024aa60;
  fVar6 = DAT_0024aa5c;
  iVar2 = *(int *)(param_1 + 0x444);
  if (iVar2 == 0) {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      return 0;
    }
    func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_0024aa64);
    *(float *)(param_1 + 0x3e0) = DAT_0024aa6c / (*(float *)(param_1 + 0x470) * DAT_0024aa68);
    func_0024ADF4(param_1,0,fVar8,fVar6);
    func_004CF478(*(int *)(param_1 + 0x40c),1);
    func_00151148(*(int *)(param_1 + 0x418),1);
    uVar3 = 1;
LAB_0024a8ec:
    *(undefined4 *)(param_1 + 0x444) = uVar3;
    return 0;
  }
  if (iVar2 == 1) {
    if (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0x468)) {
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x468);
      *(float *)(param_1 + 0x3e0) = fVar8;
    }
    fVar5 = *(float *)(param_1 + 0x464) - *(float *)(param_1 + 0x3d0);
    fVar7 = *(float *)(param_1 + 0x46c) - *(float *)(param_1 + 0x3d8);
    if (SQRT(fVar5 * fVar5 + fVar7 * fVar7) < *(float *)(param_1 + 0x470)) {
      return 0;
    }
    *(float *)(param_1 + 0x3dc) = fVar8;
    *(float *)(param_1 + 0x3e0) = fVar8;
    *(float *)(param_1 + 0x3e4) = fVar8;
    func_0024ADF4(param_1,2,fVar8,fVar6);
    uVar3 = 2;
    goto LAB_0024a8ec;
  }
  if (iVar2 == 2) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
    fVar6 = *(float *)(iVar2 + 0x14);
    fVar8 = *(float *)(iVar2 + 0xc);
    if (*(float *)(iVar2 + 8) < fVar8) {
      if ((fVar8 < fVar6) && (fVar8 < fVar6)) goto LAB_0024a990;
      if (fVar6 < DAT_0024aa60) {
        return 0;
      }
    }
    else if (fVar6 <= fVar8) {
      return 0;
    }
    if (*(float *)(iVar2 + 8) < fVar6) {
      return 0;
    }
LAB_0024a990:
    func_0024ADF4(param_1,3,DAT_0024aa60,DAT_0024aa5c);
    *(undefined4 *)(param_1 + 0x444) = 3;
    return 0;
  }
  if (iVar2 != 3) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  fVar8 = *(float *)(iVar2 + 0x14);
  fVar6 = *(float *)(iVar2 + 0xc);
  if (*(float *)(iVar2 + 8) < fVar6) {
    if ((fVar6 < fVar8) && (fVar6 < fVar8)) goto LAB_0024aa0c;
    if (fVar8 < DAT_0024aa60) {
      return 0;
    }
  }
  else if (fVar8 <= fVar6) {
    return 0;
  }
  if (*(float *)(iVar2 + 8) < fVar8) {
    return 0;
  }
LAB_0024aa0c:
  fVar6 = DAT_0024aa5c;
  fVar8 = DAT_0024aa60;
  uVar4 = func_00111A64((uint *)(*DAT_0024aa70 + 0x660));
  if ((uint)((ulonglong)uVar4 * 100 >> 0x20) < 0x32) {
    return func_0024ADF4(param_1,3,fVar8,fVar6);
  }
  return func_0024ADF4(param_1,4,fVar8,fVar6);
}

