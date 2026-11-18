#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 uRam0035b05c;

// USA 0035B01C <- EU 0035AFF8 (Ghidra, non-matching)
// GLOBAL UNK_0035b05c undefined4

void func_0035B01C(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_004CF478(*(int *)(param_1 + 0x430),0);
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x434),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x434) + 0x14) + 0x10) = uRam0035b05c;
  return;
}

