#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 002528C4 <- EU 002528EC (Ghidra, non-matching)

undefined4 func_002528C4(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,5,6,0);
  return func_0016898C(*(int *)(param_1 + 0x4f8),puVar1);
}

