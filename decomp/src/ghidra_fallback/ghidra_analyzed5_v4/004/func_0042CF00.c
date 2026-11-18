#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042d040;

// USA 0042CF00 <- EU 0042CEE0 (Ghidra, non-matching)
// GLOBAL DAT_0042d040 float

undefined4 func_0042CF00(int param_1,float *param_2,float *param_3,int param_4,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  fVar3 = *(float *)(param_1 + 0x58);
  fVar4 = *(float *)(param_1 + 0x5c);
  fVar5 = *(float *)(param_1 + 0x60);
  fVar1 = *param_3 * fVar3 + param_3[1] * fVar4 + param_3[2] * fVar5;
  fVar2 = fVar1;
  if (fVar1 <= DAT_0042d040) {
    fVar2 = -fVar1;
  }
  fVar6 = DAT_0042d040;
  if ((int)ALBW_AS_U32(fVar2) < 0x34000000) {
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    fVar2 = local_24 * fVar3 + local_20 * fVar4 + local_1c * fVar5;
    if (fVar2 <= DAT_0042d040) {
      fVar2 = -fVar2;
    }
    if ((int)ALBW_AS_U32((fVar2 - *(float *)(param_1 + 100))) < 0x34000000) {
LAB_0042cffc:
      if (param_4 != 0) {
        *(float *)(param_4 + 0x1c) = fVar6;
        *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 0x5c);
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_1 + 0x60);
        *(float *)(param_4 + 0x10) = local_24;
        *(float *)(param_4 + 0x14) = local_20;
        *(float *)(param_4 + 0x18) = local_1c;
      }
      return 1;
    }
  }
  else {
    fVar1 = (*(float *)(param_1 + 100) -
            (*param_2 * fVar3 + param_2[1] * fVar4 + param_2[2] * fVar5)) / fVar1;
    if ((DAT_0042d040 <= fVar1) && (fVar1 <= fparam_0)) {
      func_00115D70(&local_24,param_3,fVar1);
      local_30 = local_24;
      fStack_2c = local_20;
      fStack_28 = local_1c;
      func_00115C54(&local_24,param_2,&local_30);
      goto LAB_0042cffc;
    }
  }
  return 0;
}

