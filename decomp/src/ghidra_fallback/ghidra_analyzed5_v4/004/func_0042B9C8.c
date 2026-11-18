#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0042D8F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5);
extern float DAT_0042bb04;
extern undefined4 *DAT_0042bb08;

// USA 0042B9C8 <- EU 0042B9A8 (Ghidra, non-matching)
// GLOBAL DAT_0042bb04 float
// GLOBAL DAT_0042bb08 undefined4 *

undefined4 func_0042B9C8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  fVar3 = func_0042D8F4((float *)(param_1 + 4),(float *)(param_2 + 0x58),(float *)(param_2 + 100),
                        &local_28,afStack_34);
  fVar4 = *(float *)(param_2 + 0x70) + *(float *)(param_1 + 0x58);
  if (fVar4 * fVar4 <= fVar3) {
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      *(float *)(param_3 + 0x1c) = fVar4 - SQRT(fVar3);
      func_00115D70(&local_24,afStack_34,local_28);
      local_48 = local_24;
      local_44 = uStack_20;
      local_40 = uStack_1c;
      func_00115C54(&local_24,(float *)(param_2 + 0x58),&local_48);
      local_54 = local_24;
      uStack_50 = uStack_20;
      uStack_4c = uStack_1c;
      func_00115C70(&local_24,(float *)(param_1 + 4),&local_54);
      *(float *)(param_3 + 4) = local_24;
      *(undefined4 *)(param_3 + 8) = uStack_20;
      *(undefined4 *)(param_3 + 0xc) = uStack_1c;
      fVar3 = func_00115DC8((float *)(param_3 + 4));
      puVar1 = DAT_0042bb08;
      if (fVar3 <= DAT_0042bb04) {
        *(undefined4 *)(param_3 + 4) = *DAT_0042bb08;
        *(undefined4 *)(param_3 + 8) = puVar1[1];
        *(undefined4 *)(param_3 + 0xc) = puVar1[2];
      }
      func_00115D70(&local_24,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
      local_54 = local_24;
      uStack_50 = uStack_20;
      uStack_4c = uStack_1c;
      func_00115C70(&local_24,(float *)(param_1 + 4),&local_54);
      *(float *)(param_3 + 0x10) = local_24;
      *(undefined4 *)(param_3 + 0x14) = uStack_20;
      *(undefined4 *)(param_3 + 0x18) = uStack_1c;
    }
    uVar2 = 1;
  }
  return uVar2;
}

