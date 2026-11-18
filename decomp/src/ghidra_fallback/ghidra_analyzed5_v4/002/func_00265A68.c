#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam00265b24;
extern undefined4 uRam00265b04;
extern char s_SE_Bubble_TORNADO_DRIVE_UP_00265b08[];

// USA 00265A68 <- EU 00265A90 (Ghidra, non-matching)
// GLOBAL UNK_00265b04 undefined4
// GLOBAL UNK_00265b24 int
// GLOBAL s_SE_Bubble_TORNADO_DRIVE_UP_00265b08 string

undefined4 func_00265A68(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,1,0xffffffff,0);
  uVar1 = uRam00265b04;
  *(undefined1 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = uVar1;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x914));
  iStack_10 = iRam00265b24;
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xfffdffff;
  pcStack_c = s_SE_Bubble_TORNADO_DRIVE_UP_00265b08;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

