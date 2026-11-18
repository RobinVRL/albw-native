#include "ghidra_types.h"

extern float func_005670A0(float *param_1,float fparam_0);

// USA 00690C88 <- EU 00690C60 (Ghidra, non-matching)

void func_00690C88(int param_1,undefined4 *param_2,float fparam_0)

{
  float fVar1;
  
  fVar1 = fparam_0;
  if ((*(uint *)(param_1 + 8) & 0x10000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0xc),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xc);
    }
    *param_2 = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x20000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x10),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x10);
    }
    param_2[1] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x14),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14);
    }
    param_2[2] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x80000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x18),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x18);
    }
    param_2[3] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x100000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x1c),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1c);
    }
    param_2[4] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x200000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x20),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x20);
    }
    param_2[5] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x400000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x24),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x24);
    }
    param_2[6] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x28),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x28);
    }
    param_2[7] = ALBW_AS_U32(fVar1);
  }
  if ((*(uint *)(param_1 + 8) & 0x1000000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fVar1 = func_005670A0(*(float **)(param_1 + 0x2c),fparam_0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x2c);
    }
    param_2[8] = ALBW_AS_U32(fVar1);
  }
  return;
}

