#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern float DAT_0042d8d0;

// USA 0042D784 <- EU 0042D764 (Ghidra, non-matching)
// GLOBAL DAT_0042d8d0 float

undefined4 func_0042D784(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  func_00115C70(&local_1c,param_2,(float *)(param_1 + 4));
  fVar3 = *(float *)(param_1 + 100);
  fVar1 = SQRT(local_1c * local_1c + local_14 * local_14);
  if (fVar1 <= fVar3) {
    if ((int)ALBW_AS_U32(fVar1) < 0x34000001) {
      local_28 = DAT_0042d8d0;
    }
    else {
      local_28 = (local_1c / fVar1) * fVar3;
      fVar3 = (local_14 / fVar1) * fVar3;
    }
    fVar1 = fVar1 - *(float *)(param_1 + 100);
    if (local_18 < DAT_0042d8d0) {
      local_24 = -*(float *)(param_1 + 0x68);
      fVar2 = -local_18 - *(float *)(param_1 + 0x68);
    }
    else {
      local_24 = *(float *)(param_1 + 0x68);
      fVar2 = local_18 - *(float *)(param_1 + 0x68);
    }
    if (fVar2 < DAT_0042d8d0) {
      if (param_3 != 0) {
        if (fVar2 < fVar1) {
          local_24 = DAT_0042d8d0;
          *(float *)(param_3 + 0x1c) = -fVar1;
          *(float *)(param_3 + 0x10) = local_28;
          *(float *)(param_3 + 0x14) = local_18;
          local_20 = fVar3;
        }
        else {
          local_20 = DAT_0042d8d0;
          local_28 = DAT_0042d8d0;
          *(float *)(param_3 + 0x1c) = -fVar2;
          *(float *)(param_3 + 0x10) = local_1c;
          *(float *)(param_3 + 0x14) = local_24;
          fVar3 = local_14;
        }
        *(float *)(param_3 + 0x18) = fVar3;
        func_00115DC8(&local_28);
        *(float *)(param_3 + 4) = -local_28;
        *(float *)(param_3 + 8) = -local_24;
        *(float *)(param_3 + 0xc) = -local_20;
        func_00115C54((float *)(param_3 + 0x10),(float *)(param_3 + 0x10),(float *)(param_1 + 4));
      }
      return 1;
    }
  }
  return 0;
}

