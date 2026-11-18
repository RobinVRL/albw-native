#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam0015390c;
extern undefined4 uRam001538ec;
extern char s_SE_Bubble_TORNADO_DRIVE_UP_001538f0[];

// USA 00153874 <- EU 00153878 (Ghidra, non-matching)
// GLOBAL UNK_001538ec undefined4
// GLOBAL UNK_0015390c int
// GLOBAL s_SE_Bubble_TORNADO_DRIVE_UP_001538f0 string

undefined4 func_00153874(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,1,0xffffffff,0);
  uVar1 = uRam001538ec;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = uVar1;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x908));
  iStack_10 = iRam0015390c;
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xfffdffff;
  pcStack_c = s_SE_Bubble_TORNADO_DRIVE_UP_001538f0;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

