#include "ghidra_types.h"

extern int func_0068FC18(float *param_1,float *param_2,float fparam_0);
extern int func_0068FD18(float *param_1,float *param_2,float fparam_0);
extern float DAT_006913f0;

// USA 006912A8 <- EU 00691280 (Ghidra, non-matching)
// GLOBAL DAT_006913f0 float

void func_006912A8(int param_1,int param_2,float fparam_0,float fparam_1)

{
  float *pfVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    pfVar1 = *(float **)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      func_0068FD18(*(float **)(param_1 + 0xc),local_28,fparam_0);
      pfVar1 = local_28;
    }
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + *pfVar1 * fparam_1;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + pfVar1[1] * fparam_1;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + pfVar1[2] * fparam_1;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    pfVar1 = *(float **)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      func_0068FC18(*(float **)(param_1 + 0x10),local_28,fparam_0);
      pfVar1 = local_28;
    }
    fVar2 = fparam_1;
    if (*(float *)(param_2 + 0x10) * *pfVar1 + *(float *)(param_2 + 0x14) * pfVar1[1] +
        *(float *)(param_2 + 0x18) * pfVar1[2] + *(float *)(param_2 + 0x20) * pfVar1[3] <
        DAT_006913f0) {
      fVar2 = -fparam_1;
    }
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + *pfVar1 * fVar2;
    *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + pfVar1[1] * fVar2;
    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + pfVar1[2] * fVar2;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) + pfVar1[3] * fVar2;
  }
  if ((*(uint *)(param_1 + 8) & 8) == 0) {
    pfVar1 = *(float **)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      func_0068FD18(*(float **)(param_1 + 0x14),local_28,fparam_0);
      pfVar1 = local_28;
    }
    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + *pfVar1 * fparam_1;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + pfVar1[1] * fparam_1;
    *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + pfVar1[2] * fparam_1;
  }
  return;
}

