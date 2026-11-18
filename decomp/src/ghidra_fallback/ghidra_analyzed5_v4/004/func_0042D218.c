#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042d438;
extern float DAT_0042d43c;
extern undefined4 *DAT_0042d440;

// USA 0042D218 <- EU 0042D1F8 (Ghidra, non-matching)
// GLOBAL DAT_0042d438 float
// GLOBAL DAT_0042d43c float
// GLOBAL DAT_0042d440 undefined4 *

undefined4 func_0042D218(int param_1,float *param_2,float *param_3,int param_4,float fparam_0)

{
  undefined4 *puVar1;
  float fparam_0_00;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define fStack_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define fStack_58 (*(float *)(albw_frame + 0x28))
  #define fStack_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define fStack_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  #define fStack_3c (*(float *)(albw_frame + 0x44))
  #define afStack_38 ((float *)(albw_frame + 0x48))
  func_00115C70(&local_80,(float *)(param_1 + 4),param_2);
  fparam_0_00 = *param_3 * local_80 + param_3[1] * fStack_7c + param_3[2] * local_78;
  func_00115D70(afStack_38,param_3,fparam_0_00);
  func_00115C54(&local_5c,param_2,afStack_38);
  func_00115C70(&local_50,(float *)(param_1 + 4),&local_5c);
  fVar3 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x58);
  fVar2 = local_50 * local_50 + local_4c * local_4c + fStack_48 * fStack_48;
  if (fVar3 < fVar2) {
    return 0;
  }
  local_68 = local_5c;
  local_64 = fStack_58;
  local_60 = fStack_54;
  fVar4 = DAT_0042d438;
  if (DAT_0042d438 <= fparam_0_00) {
    if (fparam_0 < fparam_0_00) {
      func_00115D70(&local_44,param_3,fparam_0);
      local_78 = local_44;
      local_74 = local_40;
      fStack_70 = fStack_3c;
      func_00115C54(&local_44,param_2,&local_78);
      local_68 = local_44;
      local_64 = local_40;
      local_60 = fStack_3c;
      func_00115C70(&local_44,(float *)(param_1 + 4),&local_68);
      if (fVar3 < local_44 * local_44 + local_40 * local_40 + fStack_3c * fStack_3c) {
        return 0;
      }
    }
  }
  else {
    local_68 = *param_2;
    local_64 = param_2[1];
    local_60 = param_2[2];
    func_00115C70(&local_78,(float *)(param_1 + 4),&local_68);
    if (fVar3 < local_78 * local_78 + local_74 * local_74 + fStack_70 * fStack_70) {
      return 0;
    }
  }
  if (param_4 != 0) {
    func_00115C70(&local_44,(float *)(param_1 + 4),&local_68);
    *(float *)(param_4 + 0x10) = local_68;
    *(float *)(param_4 + 0x14) = local_64;
    *(float *)(param_4 + 0x18) = local_60;
    puVar1 = DAT_0042d440;
    if (fVar2 <= fVar4) {
      *(undefined4 *)(param_4 + 4) = *DAT_0042d440;
      *(undefined4 *)(param_4 + 8) = puVar1[1];
      *(undefined4 *)(param_4 + 0xc) = puVar1[2];
      *(float *)(param_4 + 0x1c) = fVar4;
    }
    else {
      fVar2 = SQRT(fVar2);
      func_00115D70(&local_78,&local_44,DAT_0042d43c / fVar2);
      *(float *)(param_4 + 4) = local_78;
      *(float *)(param_4 + 8) = local_74;
      *(float *)(param_4 + 0xc) = fStack_70;
      *(float *)(param_4 + 0x1c) = *(float *)(param_1 + 0x58) - fVar2;
    }
  }
  return 1;
}

