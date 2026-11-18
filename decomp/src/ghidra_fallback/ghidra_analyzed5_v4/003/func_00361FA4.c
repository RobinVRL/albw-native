#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern float DAT_003620d8;
extern float DAT_003620dc;

// USA 00361FA4 <- EU 00361F80 (Ghidra, non-matching)
// GLOBAL DAT_003620d8 float
// GLOBAL DAT_003620dc float

undefined4 func_00361FA4(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  fVar7 = DAT_003620dc;
  fVar3 = DAT_003620d8;
  func_00115C70(&local_2c,(float *)(param_1 + 0xd8),*(float **)(param_1 + 0x14));
  local_38 = local_2c;
  local_34 = fStack_28;
  local_30 = fStack_24;
  func_00115C70(&local_2c,(float *)(param_2 + 0x10),*(float **)(param_1 + 0x14));
  local_4c = local_2c;
  local_48 = fStack_28;
  local_44 = fStack_24;
  func_00115DC8(&local_38);
  func_00115DC8(&local_4c);
  fVar2 = local_38 * local_4c + local_34 * local_48 + local_30 * local_44;
  if ((fVar3 <= fVar2) && (fVar3 = fVar2, fVar7 < fVar2)) {
    fVar3 = fVar7;
  }
  fVar2 = *(float *)(param_1 + 0xd8) - *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_1 + 0xdc) - *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_1 + 0xe0) - *(float *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x398)) {
    puVar1 = *(undefined4 **)(param_1 + 0x3a0);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x3a0) = *puVar1;
      *puVar1 = uVar8;
      puVar1[1] = ALBW_AS_U32((fVar2 * fVar2 + fVar6 * fVar6 + fVar5 * fVar5) * (fVar7 - fVar3));
      puVar1[2] = uVar4;
    }
    if (*(int *)(param_1 + 0x394) < *(int *)(param_1 + 0x398)) {
      *(undefined4 **)(*(int *)(param_1 + 0x39c) + *(int *)(param_1 + 0x394) * 4) = puVar1;
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    }
  }
  return 0;
}

