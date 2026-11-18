#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam004ff0f0;
extern undefined4 DAT_004ff0dc;
extern char s_SE_Popo_APPEAR_004ff0e0[];

// USA 004FF09C <- EU 004FF074 (Ghidra, non-matching)
// GLOBAL DAT_004ff0dc undefined4
// GLOBAL UNK_004ff0f0 int
// GLOBAL s_SE_Popo_APPEAR_004ff0e0 string

undefined4 func_004FF09C(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_004ff0dc;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x31;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FABDC(param_1,2,0,0);
  pcStack_c = s_SE_Popo_APPEAR_004ff0e0;
  iStack_10 = iRam004ff0f0;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

