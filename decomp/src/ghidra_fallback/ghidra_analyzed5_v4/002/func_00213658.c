#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003C2464(int param_1,int param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float fRam002136f4;
extern int iRam00213710;
extern undefined4 DAT_002136ec;
extern undefined4 DAT_002136f0;
extern char s_cf_002136f8[];

// USA 00213658 <- EU 00213658 (Ghidra, non-matching)
// GLOBAL DAT_002136ec undefined4
// GLOBAL DAT_002136f0 undefined4
// GLOBAL UNK_002136f4 float
// GLOBAL UNK_00213710 int

undefined4 func_00213658(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_002136ec;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_002136f0;
  *(undefined4 *)(param_1 + 0x960) = 0x1e;
  *(undefined4 *)(param_1 + 0x964) = uVar1;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  func_004FABDC(param_1,0,0xffffffff,0);
  func_003C2464(param_1 + 0x8e0,0x1e,fRam002136f4);
  pcStack_c = (char *)((int)s_cf_002136f8);
  iStack_10 = iRam00213710;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

