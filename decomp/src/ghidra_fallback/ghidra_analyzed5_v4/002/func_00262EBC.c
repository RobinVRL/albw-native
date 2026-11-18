#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int iRam00262f68;
extern float DAT_00262f58;
extern char s_SE_EN_FALL_00262f5c[];

// USA 00262EBC <- EU 00262EE4 (Ghidra, non-matching)
// GLOBAL DAT_00262f58 float
// GLOBAL UNK_00262f68 int
// GLOBAL s_SE_EN_FALL_00262f5c string

undefined4 func_00262EBC(int param_1)

{
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  fparam_0 = DAT_00262f58;
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 0;
  *(float *)(param_1 + 0x3dc) = fparam_0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  func_004FABDC(param_1,7,0xffffffff,0);
  func_004FB4E0(param_1,fparam_0);
  pcStack_14 = s_SE_EN_FALL_00262f5c;
  iStack_18 = iRam00262f68;
  return func_00150A84((int *)param_1,&iStack_18,0);
}

