#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_00569310(float *param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern float DAT_0047d618;
extern int DAT_0047d61c;
extern undefined4 DAT_0047d620;
extern float DAT_0047d624;
extern undefined4 DAT_0047d628;
extern int *DAT_0047d62c;
extern undefined DAT_0047d630;
extern int DAT_0047d648;
extern float DAT_0047d64c;
extern float DAT_0047d650;
extern float DAT_0047d654;
extern float DAT_0047d658;
extern float DAT_0047d65c;
extern float DAT_0047d660;
extern float DAT_0047d664;

// USA 0047D480 <- EU 0047D458 (Ghidra, non-matching)
// GLOBAL DAT_0047d618 float
// GLOBAL DAT_0047d61c int
// GLOBAL DAT_0047d620 undefined4
// GLOBAL DAT_0047d624 float
// GLOBAL DAT_0047d628 undefined4
// GLOBAL DAT_0047d62c int *
// GLOBAL DAT_0047d630 undefined
// GLOBAL DAT_0047d648 int
// GLOBAL DAT_0047d64c float
// GLOBAL DAT_0047d650 float
// GLOBAL DAT_0047d654 float
// GLOBAL DAT_0047d658 float
// GLOBAL DAT_0047d65c float
// GLOBAL DAT_0047d660 float
// GLOBAL DAT_0047d664 float

void func_0047D480(int param_1,int *param_2,int *param_3,float fparam_0,float fparam_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 in_d9;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 ((undefined2 *)(albw_frame + 0xc))
  #define local_46 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_40 ((float *)(albw_frame + 0x50))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_30 (*(undefined * *)(albw_frame + 0x60))
  #define local_2c (*(undefined4 *)(albw_frame + 0x64))
  #define local_28 (*(undefined4 *)(albw_frame + 0x68))
  #define local_24 (*(undefined4 *)(albw_frame + 0x6c))
  fVar7 = DAT_0047d618;
  *(float *)(param_1 + 0x5c) = fparam_0;
  *(float *)(param_1 + 0x60) = fparam_1;
  iVar3 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  *(float *)(iVar3 + 0x24) = fVar7;
  *(float *)(iVar3 + 0x1c) = fparam_0;
  *(float *)(iVar3 + 0x20) = fparam_1;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  fparam_0_00 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
  if (*(int *)(param_1 + 0x60) < DAT_0047d61c) {
    fparam_0_00 = fVar7;
  }
  uVar9 = DAT_0047d620;
  if (DAT_0047d61c <= *(int *)(param_1 + 0x60)) {
    uVar9 = DAT_0047d628;
    fparam_0_00 = DAT_0047d624;
  }
  if (*(int *)(param_1 + 100) != 0) {
    local_24 = 0xffffffff;
    local_30 = (undefined *)0x0;
    local_2c = 0;
    local_28 = 0;
    iVar3 = func_005826A4(*DAT_0047d62c,(int *)&local_30,param_2,param_3);
    if (iVar3 == 0) {
      local_30 = &DAT_0047d630;
    }
    local_8c = local_84;
    uStack_88 = 0x20;
    local_46 = 0;
    local_90 = DAT_0047d648;
    local_84[0] = 0;
    uVar4 = func_00583794((int *)&local_30,&local_90);
    piVar5 = *(int **)(param_1 + 100);
    (**(code **)(local_90 + 8))(&local_90);
    (**(code **)(*piVar5 + 0x60))(piVar5,local_8c,0,uVar4 & 0xffff);
    func_00569310(local_40,*(int *)(param_1 + 100));
    fVar2 = DAT_0047d65c;
    fVar8 = DAT_0047d658;
    fVar1 = DAT_0047d654;
    iVar3 = *(int *)(param_1 + 0x68);
    fVar6 = (local_38 - local_40[0]) + DAT_0047d64c;
    if (fVar6 < DAT_0047d650) {
      fVar6 = DAT_0047d650;
    }
    *(float *)(iVar3 + 0x3c) = fVar6;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    if ((uint)ALBW_AS_U32((((*(float *)(param_1 + 0x5c) - fVar6 * fVar1) - fVar8) - fVar2)) < (uint)ALBW_AS_U32(DAT_0047d660))
    {
      fVar8 = fVar8 - fVar6 * fVar1;
    }
    else {
      fparam_0_00 = fparam_0_00 + DAT_0047d664;
      fVar8 = fVar6 * fVar1 - fVar8;
    }
    func_002316CC(param_1 + 0x38,fparam_0_00);
    iVar3 = *(int *)(param_1 + 100);
    *(float *)(iVar3 + 0x24) = fVar7;
    *(float *)(iVar3 + 0x1c) = fVar8;
    *(undefined4 *)(iVar3 + 0x20) = uVar9;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  return;
}

