#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004F4A68();
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float DAT_00370da0;
extern int DAT_00370da4;
extern float DAT_00370da8;
extern undefined4 DAT_00370dac;

// USA 00370CB8 <- EU 00370C94 (Ghidra, non-matching)
// GLOBAL DAT_00370da0 float
// GLOBAL DAT_00370da4 int
// GLOBAL DAT_00370da8 float
// GLOBAL DAT_00370dac undefined4

undefined4 func_00370CB8(int param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x928) == '\0') {
    fVar3 = *(float *)(param_2 + 8);
    if (fVar3 <= DAT_00370da0) {
      fVar3 = -fVar3;
    }
    if ((int)ALBW_AS_U32(fVar3) < DAT_00370da4) {
      local_40 = *(float *)(param_2 + 4);
      local_38 = *(float *)(param_2 + 0xc);
      pfVar2 = (float *)(param_1 + 0x91c);
      local_3c = DAT_00370da0;
      fVar3 = DAT_00370da0;
      func_00115D70(&local_28,&local_40,
                    (*pfVar2 * local_40 + *(float *)(param_1 + 0x920) * DAT_00370da0 +
                    *(float *)(param_1 + 0x924) * local_38) * DAT_00370da8);
      local_34 = local_28;
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      func_00115C70(pfVar2,pfVar2,&local_34);
      func_00115DC8(pfVar2);
      *(float *)(param_1 + 0x920) = fVar3;
      *(undefined1 *)(param_1 + 0x928) = 1;
      uVar1 = DAT_00370dac;
      *(undefined4 *)(param_1 + 0x908) = 5;
      *(undefined4 *)(param_1 + 0x90c) = uVar1;
      *(undefined4 *)(param_1 + 0x904) = 0;
      func_004FABDC(param_1,6,0xffffffff,0);
    }
  }
  return func_004F4A68(param_1,param_2);
}

