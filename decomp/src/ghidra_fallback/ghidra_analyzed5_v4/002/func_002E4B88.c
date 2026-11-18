#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam002e4be4;
extern undefined4 DAT_002e4bc4;
extern char s_SE_BigIceGimos_MOVE_START_002e4bc8[];

// USA 002E4B88 <- EU 002E4B64 (Ghidra, non-matching)
// GLOBAL DAT_002e4bc4 undefined4
// GLOBAL UNK_002e4be4 int
// GLOBAL s_SE_BigIceGimos_MOVE_START_002e4bc8 string

undefined4 func_002E4B88(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_002e4bc4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002e4bc4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FABDC(param_1,0,0xffffffff,0);
  iStack_10 = iRam002e4be4;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x300;
  pcStack_c = s_SE_BigIceGimos_MOVE_START_002e4bc8;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

