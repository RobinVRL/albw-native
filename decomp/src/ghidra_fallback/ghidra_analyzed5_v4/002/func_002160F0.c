#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_002161f4;
extern float DAT_002161f8;
extern uint DAT_002161fc;
extern float DAT_00216200;
extern int *DAT_00216204;

// USA 002160F0 <- EU 002160F0 (Ghidra, non-matching)
// GLOBAL DAT_002161f4 float
// GLOBAL DAT_002161f8 float
// GLOBAL DAT_002161fc uint
// GLOBAL DAT_00216200 float
// GLOBAL DAT_00216204 int *

undefined4 func_002160F0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(int *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(undefined1 *)(albw_frame + 0x28))
  #define local_17 (*(undefined1 *)(albw_frame + 0x29))
  fVar4 = DAT_002161f4;
  local_20 = (undefined4 *)(param_1 + 0xa2c);
  *local_20 = *(undefined4 *)(param_1 + 0xa38);
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_1 + 0xa40);
  fVar5 = DAT_00216200;
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0xa38);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_1 + 0xa40);
  fVar1 = DAT_002161f8;
  uStack_30 = param_4 & 0xffff0000 | DAT_002161fc;
  *(float *)(param_1 + 0xa30) = *(float *)(param_1 + 0xa30) + fVar4;
  *(float *)(param_1 + 0xa24) = *(float *)(param_1 + 0xa24) - fVar1;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0;
  local_1c = fVar5;
  local_18 = 0;
  local_24 = param_1 + 0xa20;
  local_3c = param_1 + 0xb28;
  local_17 = 1;
  local_2c = 0x7f;
  iVar2 = func_004A8030(*DAT_00216204,&local_40,0xf);
  uVar3 = 0;
  if (iVar2 != 0) {
    fVar4 = *(float *)(param_1 + 0xa3c) - *(float *)(param_1 + 0xa24);
    if (fVar4 <= fVar5) {
      fVar4 = -fVar4;
    }
    if ((int)ALBW_AS_U32(fVar4) < 0x40000000) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

