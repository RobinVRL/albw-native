#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 001E4318 <- EU 001E4318 (Ghidra, non-matching)

undefined4 func_001E4318(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_0016A02C(*(int *)(param_1 + 0x490),-1,(int *)0xffffffff,0);
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x490),puVar1);
  return func_00168E9C(*(int **)(param_1 + 0x490),*(int *)(param_1 + 0x47c),(int *)0x0);
}

