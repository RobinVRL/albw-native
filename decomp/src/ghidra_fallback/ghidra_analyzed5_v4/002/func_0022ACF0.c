#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00229E24(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022ae30;
extern float DAT_0022ae34;
extern float DAT_0022ae38;
extern int DAT_0022ae3c;

// USA 0022ACF0 <- EU 0022ACF0 (Ghidra, non-matching)
// GLOBAL DAT_0022ae30 float
// GLOBAL DAT_0022ae34 float
// GLOBAL DAT_0022ae38 float
// GLOBAL DAT_0022ae3c int

undefined4 func_0022ACF0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float fparam_0;
  float fVar5;
  
  func_00229E24(param_1);
  fVar1 = DAT_0022ae30;
  fVar5 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
               *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
  if (DAT_0022ae34 < -fVar5) {
    fparam_0 = fVar5 + DAT_0022ae34;
  }
  else {
    fparam_0 = DAT_0022ae30;
    if (-fVar5 < DAT_0022ae38) {
      fparam_0 = fVar5 - DAT_0022ae34;
    }
  }
  if ((int)ALBW_AS_U32(fparam_0) < DAT_0022ae3c) {
    *(float *)(param_1 + 0x3dc) = DAT_0022ae30;
    *(float *)(param_1 + 0x3e0) = fVar1;
    *(float *)(param_1 + 0x3e4) = fVar1;
  }
  else {
    func_00115DC8((float *)(param_1 + 0x3dc));
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fparam_0);
  }
  if (*(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74)) {
    *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) + 1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa7c);
    puVar4 = (undefined4 *)(param_1 + 0x8fc);
    if (uVar2 < *(uint *)(param_1 + 0xa80)) {
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0xa7c) = uVar2;
    }
    if (uVar2 < *(uint *)(param_1 + 0xa80)) {
      return func_0065E8B8(puVar4,0x12);
    }
    iVar3 = func_0058A8F0(param_1);
    if (iVar3 != 0) {
      uVar2 = *(uint *)(param_1 + 0xa88);
      if (uVar2 < *(uint *)(param_1 + 0xa8c)) {
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0xa88) = uVar2;
      }
      if (uVar2 < *(uint *)(param_1 + 0xa8c)) {
        return func_0065E8B8(puVar4,0x11);
      }
      func_0065E8B8(puVar4,0xc);
    }
  }
  return 0;
}

