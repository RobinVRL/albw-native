#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 004FB468 <- EU 004FB440 (Ghidra, non-matching)

void func_004FB468(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_0016A02C(*(int *)(param_1 + 0x410),-1,(int *)0xffffffff,0);
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,0,0);
  func_0016898C(*(int *)(param_1 + 0x410),puVar1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x100;
  return;
}

