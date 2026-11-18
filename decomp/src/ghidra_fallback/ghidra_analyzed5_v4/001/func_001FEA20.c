#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_001fea70;

// USA 001FEA20 <- EU 001FEA20 (Ghidra, non-matching)
// GLOBAL DAT_001fea70 undefined4

void func_001FEA20(int param_1,undefined4 param_2)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  *(undefined1 *)(param_1 + 0x31) = 1;
  puVar1 = (uint *)func_002C11E8(aiStack_68,param_2,0,0);
  func_0016898C(*(int *)(param_1 + 0x10),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x14) + 0x10) = DAT_001fea70;
  return;
}

