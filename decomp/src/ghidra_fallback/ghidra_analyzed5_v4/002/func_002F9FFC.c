#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam002fa038;
extern undefined4 DAT_002fa028;
extern char s_SE_EN_FALL_002fa02c[];

// USA 002F9FFC <- EU 002F9FD8 (Ghidra, non-matching)
// GLOBAL DAT_002fa028 undefined4
// GLOBAL UNK_002fa038 int
// GLOBAL s_SE_EN_FALL_002fa02c string

undefined4 func_002F9FFC(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_002fa028;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002fa028;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FABDC(param_1,7,0xffffffff,0);
  pcStack_c = s_SE_EN_FALL_002fa02c;
  iStack_10 = iRam002fa038;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

