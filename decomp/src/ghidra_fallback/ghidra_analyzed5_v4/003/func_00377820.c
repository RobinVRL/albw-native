#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00341200(int param_1,undefined4 *param_2);
extern float func_00553058(int param_1);
extern float DAT_00377894;

// USA 00377820 <- EU 003777FC (Ghidra, non-matching)
// GLOBAL DAT_00377894 float

undefined4 func_00377820(int param_1,float *param_2)

{
  short sVar1;
  float fVar2;
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
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 != 0x51) {
    if (sVar1 == 0x4e) {
      fVar2 = DAT_00377894;
      local_3c = func_00553058(*(undefined4 *)(param_1 + 0x50));
      local_40 = fVar2;
      local_38 = fVar2;
      func_00115C54(&local_28,param_2,&local_40);
      local_34 = local_28;
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      return func_00341200(*(int *)(param_1 + 0x50),&local_34);
    }
    func_002D55D0(param_1,0x4e);
  }
  return 0;
}

