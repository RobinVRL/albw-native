#include "ghidra_types.h"

extern int func_003E2298(float *param_1,float *param_2,float *param_3);
extern int func_003FBE8C(float *param_1,float *param_2);
extern float DAT_003fba48;
extern float DAT_003fba4c;

// USA 003FB904 <- EU 003FB8E4 (Ghidra, non-matching)
// GLOBAL DAT_003fba48 float
// GLOBAL DAT_003fba4c float

void func_003FB904(float *param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define local_14 (*(float *)(albw_frame + 0x2c))
  local_1c = *(float *)(param_2 + 4);
  local_18 = *(float *)(param_2 + 0x14);
  local_14 = DAT_003fba48;
  local_20 = -param_1[0xb];
  local_28 = -param_1[3];
  local_24 = -param_1[7];
  fVar4 = DAT_003fba48;
  bVar1 = func_003FBE8C(&local_28,&local_28);
  if (!bVar1) {
    local_20 = DAT_003fba4c;
    local_28 = fVar4;
    local_24 = fVar4;
  }
  fVar3 = DAT_003fba4c;
  func_003E2298(&local_3c,&local_1c,&local_28);
  bVar1 = func_003FBE8C(&local_3c,&local_3c);
  if (!bVar1) {
    fVar2 = local_20 * local_20 + fVar4 * fVar4;
    local_34 = fVar4;
    if (fVar2 == fVar4) {
      local_14 = -local_24;
      local_3c = fVar3;
      local_38 = fVar4;
      local_1c = fVar4;
      local_18 = fVar4;
      goto LAB_003fb9f4;
    }
    fVar3 = fVar3 / SQRT(fVar2);
    local_3c = local_20 * fVar3;
    local_38 = fVar4 * fVar3;
  }
  func_003E2298(&local_1c,&local_28,&local_3c);
LAB_003fb9f4:
  *param_1 = local_3c;
  param_1[1] = local_1c;
  param_1[2] = local_28;
  param_1[4] = local_38;
  param_1[5] = local_18;
  param_1[6] = local_24;
  param_1[8] = local_34;
  param_1[9] = local_14;
  param_1[10] = local_20;
  return;
}

