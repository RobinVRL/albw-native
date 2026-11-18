#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_0051355c;

// USA 00513514 <- EU 005134EC (Ghidra, non-matching)
// GLOBAL DAT_0051355c float

void func_00513514(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b0),puVar1);
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b4),puVar1);
  *(float *)(*(int *)(param_1 + 0x4cc) + 0x58) =
       *(float *)(*(int *)(param_1 + 0x4cc) + 0x58) * DAT_0051355c;
  return;
}

