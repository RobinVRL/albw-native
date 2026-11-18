#include "ghidra_types.h"

extern int func_003E1DC8(float *param_1,float *param_2,int param_3);
extern float DAT_00678644;
extern float DAT_00678648;

// USA 006784F8 <- EU 006784D0 (Ghidra, non-matching)
// GLOBAL DAT_00678644 float
// GLOBAL DAT_00678648 float

undefined4 func_006784F8(uint *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  fVar1 = DAT_00678644;
  if (fparam_0 != DAT_00678644) {
    *param_1 = *param_1 & 0xfd7fffff;
    param_1[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[1]) / fparam_0));
    param_1[2] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[2]) / fparam_0));
    param_1[3] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[3]) / fparam_0));
  }
  if (fparam_2 != fVar1) {
    *param_1 = *param_1 & 0xf3ffffff;
    param_1[7] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[7]) / fparam_2));
    param_1[0xb] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0xb]) / fparam_2));
    param_1[0xf] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf]) / fparam_2));
  }
  fVar3 = DAT_00678648;
  if (fparam_1 != fVar1) {
    *param_1 = *param_1 & 0xf3ffffff;
    local_28 = ALBW_AS_F32(param_1[4]);
    local_24 = ALBW_AS_F32(param_1[5]);
    fStack_20 = ALBW_AS_F32(param_1[6]);
    local_1c = ALBW_AS_F32(param_1[8]);
    fVar2 = local_28 * local_28 + local_24 * local_24 + fStack_20 * fStack_20 + local_1c * local_1c;
    if (fVar2 == fVar1) {
      param_1[4] = (uint)ALBW_AS_U32(fVar3);
      param_1[5] = (uint)ALBW_AS_U32(fVar1);
      param_1[6] = (uint)ALBW_AS_U32(fVar1);
      param_1[8] = (uint)ALBW_AS_U32(fVar1);
      param_1[9] = (uint)ALBW_AS_U32(fVar3);
      param_1[10] = (uint)ALBW_AS_U32(fVar1);
      param_1[0xc] = (uint)ALBW_AS_U32(fVar1);
      param_1[0xd] = (uint)ALBW_AS_U32(fVar1);
      param_1[0xe] = (uint)ALBW_AS_U32(fVar3);
      return 0;
    }
    fVar3 = fVar3 / SQRT(fVar2);
    local_28 = local_28 * fVar3;
    local_24 = local_24 * fVar3;
    fStack_20 = fStack_20 * fVar3;
    local_1c = local_1c * fVar3;
    uVar6 = param_1[7];
    uVar5 = param_1[0xb];
    uVar4 = param_1[0xf];
    func_003E1DC8((float *)(param_1 + 4),&local_28,1);
    param_1[7] = uVar6;
    param_1[0xb] = uVar5;
    param_1[0xf] = uVar4;
  }
  return 1;
}

