#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 001FE9E4 <- EU 001FE9E4 (Ghidra, non-matching)

undefined4 func_001FE9E4(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  *(undefined1 *)(param_1 + 0x30) = 1;
  puVar1 = (uint *)func_002C11E8(aiStack_68,param_2 & 0xffff,param_3,0);
  return func_0016898C(*(int *)(param_1 + 0xc),puVar1);
}

