#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 uRam002275f0;

// USA 00227590 <- EU 00227590 (Ghidra, non-matching)
// GLOBAL UNK_002275f0 undefined4

undefined4 func_00227590(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_004CF478(*(int *)(param_1 + 0x594),1);
  func_00151148(*(int *)(param_1 + 0x698),1);
  *(undefined4 *)(param_1 + 0x6a0) = uRam002275f0;
  puVar1 = (uint *)func_002C11E8(aiStack_68,0xe,0,0);
  return func_0016898C(*(int *)(param_1 + 0x68c),puVar1);
}

