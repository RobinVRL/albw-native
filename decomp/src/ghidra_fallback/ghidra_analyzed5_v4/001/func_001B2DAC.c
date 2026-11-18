#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam001b2e08;
extern int iRam001b2e20;
extern char s_cf_001b2e0c[];

// USA 001B2DAC <- EU 001B2DAC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL UNK_001b2e08 float
// GLOBAL UNK_001b2e20 int

undefined4 func_001B2DAC(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,9,0,0);
  func_004FB4E0(param_1,fRam001b2e08);
  iStack_10 = iRam001b2e20;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x4000;
  pcStack_c = (char *)((int)s_cf_001b2e0c);
  return func_00150A84((int *)param_1,&iStack_10,0);
}

