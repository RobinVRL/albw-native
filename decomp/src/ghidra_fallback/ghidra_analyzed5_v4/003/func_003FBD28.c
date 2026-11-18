#include "ghidra_types.h"

extern int func_003E2298(float *param_1,float *param_2,float *param_3);
extern int func_003FBE8C(float *param_1,float *param_2);
extern float DAT_003fbe64;
extern float DAT_003fbe68;

// USA 003FBD28 <- EU 003FBD08 (Ghidra, non-matching)
// GLOBAL DAT_003fbe64 float
// GLOBAL DAT_003fbe68 float

void func_003FBD28(float *param_1,float *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x24);
  local_30 = *param_2 * fVar2 + param_2[1] * fVar3 + param_2[2] * fVar4;
  local_2c = param_2[4] * fVar2 + param_2[5] * fVar3 + param_2[6] * fVar4;
  local_28 = param_2[8] * fVar2 + param_2[9] * fVar3 + param_2[10] * fVar4;
  local_20 = -local_30;
  local_1c = DAT_003fbe64;
  fVar2 = DAT_003fbe64;
  local_24 = local_2c;
  bVar1 = func_003FBE8C(&local_30,&local_30);
  if (!bVar1) {
    local_2c = DAT_003fbe68;
    local_24 = DAT_003fbe68;
    local_30 = fVar2;
    local_28 = fVar2;
    local_20 = fVar2;
  }
  fVar3 = local_24 * local_24 + local_20 * local_20;
  local_1c = fVar2;
  if (fVar3 == fVar2) {
    local_24 = DAT_003fbe68;
    local_38 = -local_28;
    local_3c = fVar2;
    local_34 = fVar2;
    local_20 = fVar2;
  }
  else {
    fVar2 = DAT_003fbe68 / SQRT(fVar3);
    local_20 = local_20 * fVar2;
    local_24 = local_24 * fVar2;
    func_003E2298(&local_3c,&local_24,&local_30);
  }
  *param_1 = local_24;
  param_1[1] = local_30;
  param_1[2] = local_3c;
  param_1[4] = local_20;
  param_1[5] = local_2c;
  param_1[6] = local_38;
  param_1[8] = local_1c;
  param_1[9] = local_28;
  param_1[10] = local_34;
  return;
}

