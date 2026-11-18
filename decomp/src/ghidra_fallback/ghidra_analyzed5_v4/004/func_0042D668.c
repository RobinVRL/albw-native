#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042d758;
extern float DAT_0042d75c;
extern undefined4 *DAT_0042d760;

// USA 0042D668 <- EU 0042D648 (Ghidra, non-matching)
// GLOBAL DAT_0042d758 float
// GLOBAL DAT_0042d75c float
// GLOBAL DAT_0042d760 undefined4 *

undefined4 func_0042D668(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  func_00115C70(&local_40,(float *)(param_1 + 4),param_2);
  fVar1 = DAT_0042d758;
  local_2c = local_40;
  local_28 = local_3c;
  local_24 = local_38;
  fVar5 = *(float *)(param_1 + 0x58);
  fVar4 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar5 * fVar5 <= fVar4) {
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      fVar4 = SQRT(fVar4);
      *(float *)(param_3 + 0x1c) = fVar5 - fVar4;
      puVar2 = DAT_0042d760;
      if (fVar4 <= fVar1) {
        *(undefined4 *)(param_3 + 4) = *DAT_0042d760;
        *(undefined4 *)(param_3 + 8) = puVar2[1];
        *(undefined4 *)(param_3 + 0xc) = puVar2[2];
      }
      else {
        func_00115D70(&local_20,&local_2c,DAT_0042d75c / fVar4);
        *(float *)(param_3 + 4) = local_20;
        *(undefined4 *)(param_3 + 8) = uStack_1c;
        *(undefined4 *)(param_3 + 0xc) = uStack_18;
      }
      func_00115D70(&local_20,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
      local_3c = local_20;
      local_38 = ALBW_AS_F32(uStack_1c);
      uStack_34 = uStack_18;
      func_00115C70(&local_20,(float *)(param_1 + 4),&local_3c);
      *(float *)(param_3 + 0x10) = local_20;
      *(undefined4 *)(param_3 + 0x14) = uStack_1c;
      *(undefined4 *)(param_3 + 0x18) = uStack_18;
    }
    uVar3 = 1;
  }
  return uVar3;
}

