#include "ghidra_types.h"

extern int func_004AAD4C(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,uint param_5, uint param_6,float fparam_0,float fparam_1);
extern float DAT_00327d18;
extern undefined4 *DAT_00327d1c;
extern undefined4 DAT_00327d20;
extern int *DAT_00327d24;

// USA 00327C50 <- EU 00327C2C (Ghidra, non-matching)
// GLOBAL DAT_00327d18 float
// GLOBAL DAT_00327d1c undefined4 *
// GLOBAL DAT_00327d20 undefined4
// GLOBAL DAT_00327d24 int *

undefined4 func_00327C50(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  **(undefined4 **)(param_1 + 0x424) = 0;
  fVar2 = DAT_00327d18;
  fVar3 = (*(float *)(param_1 + 0x410) + *(float *)(param_1 + 0x41c)) * DAT_00327d18;
  fVar4 = (*(float *)(param_1 + 0x414) + *(float *)(param_1 + 0x420)) * DAT_00327d18;
  *(float *)(param_1 + 0x428) =
       (*(float *)(param_1 + 0x40c) + *(float *)(param_1 + 0x418)) * DAT_00327d18;
  *(float *)(param_1 + 0x42c) = fVar3;
  *(float *)(param_1 + 0x430) = fVar4;
  puVar1 = DAT_00327d1c;
  fVar3 = (*(float *)(param_1 + 0x418) - *(float *)(param_1 + 0x40c)) * fVar2;
  fVar2 = (*(float *)(param_1 + 0x420) - *(float *)(param_1 + 0x414)) * fVar2;
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x434) = fVar3;
  uStack_10 = *puVar1;
  local_c = puVar1[1];
  local_18 = DAT_00327d20;
  iStack_14 = param_1;
  return func_004AAD4C(*DAT_00327d24,(float *)(param_1 + 0x428),&local_18,8,0xf,0,
                *(float *)(param_1 + 0x434),*(float *)(param_1 + 0x434));
}

