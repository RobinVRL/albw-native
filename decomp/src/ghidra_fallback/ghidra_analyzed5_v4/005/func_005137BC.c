#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0051381c;

// USA 005137BC <- EU 00513794 (Ghidra, non-matching)
// GLOBAL DAT_0051381c undefined4

undefined4 func_005137BC(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,7,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b0),puVar1);
  puVar1 = (uint *)func_002C11E8(aiStack_68,0,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b4),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4b4) + 0x14) + 0x10) = DAT_0051381c;
  return func_0066B94C((undefined4 *)(param_1 + 0x48c),0x11);
}

