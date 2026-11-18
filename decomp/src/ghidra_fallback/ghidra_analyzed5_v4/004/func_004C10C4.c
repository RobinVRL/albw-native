#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0058E2B8(int *param_1);
extern float DAT_004c1168;

// USA 004C10C4 <- EU 004C109C (Ghidra, non-matching)
// GLOBAL DAT_004c1168 float

undefined4
func_004C10C4(int param_1,float *param_2,uint param_3,int param_4,float fparam_0,float fparam_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 ((int *)(albw_frame + 0xc))
  fVar2 = param_2[1] - *(float *)(param_1 + 0x3d4);
  if (((-fparam_1 <= fVar2) && (fVar2 <= fparam_1)) &&
     (fVar2 = *(float *)(param_1 + 0x3d0) - *param_2,
     fVar3 = *(float *)(param_1 + 0x3d8) - param_2[2],
     fVar2 * fVar2 + fVar3 * fVar3 <= fparam_0 * fparam_0)) {
    if (param_3 < 0x80000000) {
      local_20 = DAT_004c1168;
      local_1c = DAT_004c1168;
      local_18 = DAT_004c1168;
      func_00115C70(&local_20,param_2,(float *)(param_1 + 0x3d0));
      local_14[0] = func_004904CC(local_20,local_18);
      local_14[0] = local_14[0] - param_4;
      uVar1 = func_0058E2B8(local_14);
      if (param_3 <= uVar1) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

