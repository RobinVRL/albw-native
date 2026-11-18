#include "ghidra_types.h"

extern int func_003E2298(float *param_1,float *param_2,float *param_3);
extern int func_003FBE8C(float *param_1,float *param_2);
extern float DAT_003fb730;
extern float DAT_003fb734;

// USA 003FB5B0 <- EU 003FB590 (Ghidra, non-matching)
// GLOBAL DAT_003fb730 float
// GLOBAL DAT_003fb734 float

void func_003FB5B0(float *param_1,float *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x24);
  local_24 = *param_2 * fVar2 + param_2[1] * fVar3 + param_2[2] * fVar4;
  local_20 = param_2[4] * fVar2 + param_2[5] * fVar3 + param_2[6] * fVar4;
  local_1c = param_2[8] * fVar2 + param_2[9] * fVar3 + param_2[10] * fVar4;
  local_30 = -param_1[0xb];
  local_34 = -param_1[7];
  local_38 = -param_1[3];
  bVar1 = func_003FBE8C(&local_38,&local_38);
  if (!bVar1) {
    local_38 = DAT_003fb734;
    local_34 = DAT_003fb734;
    local_30 = DAT_003fb730;
  }
  fVar2 = DAT_003fb734;
  fVar3 = DAT_003fb730;
  func_003E2298(&local_48,&local_24,&local_38);
  bVar1 = func_003FBE8C(&local_48,&local_48);
  if (!bVar1) {
    local_40 = -local_38;
    fVar4 = local_30 * local_30 + local_40 * local_40;
    local_44 = fVar2;
    if (fVar4 == fVar2) {
      local_1c = -local_34;
      local_48 = fVar3;
      local_40 = fVar2;
      local_24 = fVar2;
      local_20 = fVar2;
      goto LAB_003fb6e4;
    }
    fVar3 = fVar3 / SQRT(fVar4);
    local_48 = local_30 * fVar3;
    local_40 = local_40 * fVar3;
  }
  func_003E2298(&local_24,&local_38,&local_48);
LAB_003fb6e4:
  param_1[2] = local_38;
  param_1[4] = local_44;
  *param_1 = local_48;
  param_1[1] = local_24;
  param_1[5] = local_20;
  param_1[6] = local_34;
  param_1[8] = local_40;
  param_1[9] = local_1c;
  param_1[10] = local_30;
  return;
}

