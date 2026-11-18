#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 00224C80 <- EU 00224C80 (Ghidra, non-matching)

void func_00224C80(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,0xd,8,0);
  func_0016898C(*(int *)(param_1 + 0x68c),puVar1);
  *(undefined1 *)(param_1 + 0x74f) = 1;
  *(undefined1 *)(param_1 + 0x5fd) = 0;
  return;
}

