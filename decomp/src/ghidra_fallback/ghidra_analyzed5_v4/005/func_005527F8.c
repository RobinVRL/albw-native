#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_005528bc;
extern float DAT_005528c0;
extern float DAT_005528c4;

// USA 005527F8 <- EU 005527D0 (Ghidra, non-matching)
// GLOBAL DAT_005528bc float
// GLOBAL DAT_005528c0 float
// GLOBAL DAT_005528c4 float

undefined4 * func_005527F8(int param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define puStack_20 (*(undefined4 * *)(albw_frame + 0x20))
  func_00115C70(&local_28,(float *)(param_1 + 0x444),(float *)(param_1 + 0x450));
  local_34 = local_28;
  local_30 = fStack_24;
  local_2c = puStack_20;
  iVar2 = func_0068C690(&local_34);
  if (DAT_005528bc < *(float *)(param_1 + 0x3dc)) {
    iVar4 = -0x40000000;
  }
  else {
    iVar4 = 0x40000000;
  }
  fVar7 = DAT_005528bc;
  puVar3 = (undefined4 *)func_004D80A4(local_40,iVar4 + iVar2,DAT_005528c0);
  fVar1 = DAT_005528c4;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0x444);
    fVar5 = *(float *)(param_1 + 0x448);
    uVar6 = *(undefined4 *)(param_1 + 0x44c);
    *param_2 = *puVar3;
    param_2[1] = ALBW_AS_U32(fVar5 + fVar1);
    param_2[2] = uVar6;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_40[0];
    param_3[1] = fVar7;
    param_3[2] = ALBW_AS_F32(local_38);
    puVar3 = local_38;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = local_34;
    param_4[1] = local_30;
    param_4[2] = ALBW_AS_F32(local_2c);
    param_4[1] = fVar7;
    puVar3 = local_2c;
  }
  return puVar3;
}

