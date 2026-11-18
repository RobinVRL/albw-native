#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004F4A68();
extern float DAT_0035836c;
extern int DAT_00358370;
extern float DAT_00358374;
extern undefined4 DAT_00358378;

// USA 003582B0 <- EU 0035828C (Ghidra, non-matching)
// GLOBAL DAT_0035836c float
// GLOBAL DAT_00358370 int
// GLOBAL DAT_00358374 float
// GLOBAL DAT_00358378 undefined4

undefined4 func_003582B0(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  if (*(char *)(param_1 + 0x968) == '\0') {
    fVar2 = *(float *)(param_2 + 8);
    if (fVar2 <= DAT_0035836c) {
      fVar2 = -fVar2;
    }
    if ((int)ALBW_AS_U32(fVar2) < DAT_00358370) {
      local_38 = *(float *)(param_2 + 4);
      fStack_30 = *(float *)(param_2 + 0xc);
      local_34 = DAT_0035836c;
      func_00115D70(&local_20,&local_38,
                    (*(float *)(param_1 + 0x3dc) * local_38 +
                     *(float *)(param_1 + 0x3e0) * DAT_0035836c +
                    *(float *)(param_1 + 0x3e4) * fStack_30) * DAT_00358374);
      local_2c = local_20;
      uStack_28 = uStack_1c;
      uStack_24 = uStack_18;
      func_00115C70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_2c);
      *(undefined1 *)(param_1 + 0x968) = 1;
      uVar1 = DAT_00358378;
      *(undefined4 *)(param_1 + 0x918) = 5;
      *(undefined4 *)(param_1 + 0x91c) = uVar1;
      *(undefined4 *)(param_1 + 0x914) = 0;
    }
  }
  return func_004F4A68(param_1,param_2);
}

