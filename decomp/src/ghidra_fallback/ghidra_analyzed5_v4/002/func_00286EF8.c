#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);

// USA 00286EF8 <- EU 00286F20 (Ghidra, non-matching)

undefined4 func_00286EF8(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,2,0,0);
  return func_0016898C(*(int *)(param_1 + 0x414),puVar1);
}

