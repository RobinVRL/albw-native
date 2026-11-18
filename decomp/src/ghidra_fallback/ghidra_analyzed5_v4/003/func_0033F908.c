#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052108C(int param_1);
extern int func_006661D4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033f9d4;
extern float DAT_0033f9d8;
extern int DAT_0033f9dc;
extern float DAT_0033f9e0;
extern float DAT_0033f9e4;
extern uint DAT_0033f9e8;
extern float DAT_0033fa00;
extern char s_SE_IronBall_ROLL_L_0033f9ec[];

// USA 0033F908 <- EU 0033F8E4 (Ghidra, non-matching)
// GLOBAL DAT_0033f9d4 int
// GLOBAL DAT_0033f9d8 float
// GLOBAL DAT_0033f9dc int
// GLOBAL DAT_0033f9e0 float
// GLOBAL DAT_0033f9e4 float
// GLOBAL DAT_0033f9e8 uint
// GLOBAL DAT_0033fa00 float
// GLOBAL s_SE_IronBall_ROLL_L_0033f9ec string

undefined4 func_0033F908(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  float fVar3;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fVar3 = *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
          *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4);
  if ((int)ALBW_AS_U32(fVar3) < DAT_0033f9d4) {
    fparam_1 = DAT_0033f9d8;
    if (DAT_0033f9dc <= (int)ALBW_AS_U32((fVar3 + DAT_0033f9d8))) {
      fparam_1 = DAT_0033f9e0 - fVar3;
    }
    func_00115D70(&local_20,(float *)(param_1 + 0x4a4),DAT_0033f9e0);
    func_004D838C((float *)(param_1 + 0x3dc),&local_20,DAT_0033f9e4,fparam_1,fparam_1);
  }
  iVar1 = func_0052108C(param_1);
  if (iVar1 == 0) {
    if (((*(uint *)(param_1 + 0x39c) & 0x400) == 0 && (*(uint *)(param_1 + 0x39c) & 0x800) == 0) &&
       (*(uint *)(param_1 + 0x3d4) < DAT_0033f9e8)) {
      local_1c = s_SE_IronBall_ROLL_L_0033f9ec;
      local_20 = DAT_0033fa00;
      return func_001507D8(param_1,(int *)&local_20,0);
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  return func_006661D4((undefined4 *)(param_1 + 0x458),uVar2);
}

