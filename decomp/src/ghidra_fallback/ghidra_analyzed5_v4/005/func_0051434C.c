#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_005143ac;

// USA 0051434C <- EU 00514324 (Ghidra, non-matching)
// GLOBAL DAT_005143ac undefined4

undefined4 func_0051434C(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,8,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b0),puVar1);
  puVar1 = (uint *)func_002C11E8(aiStack_68,1,6,0);
  func_0016898C(*(int *)(param_1 + 0x4b4),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4b4) + 0x14) + 0x10) = DAT_005143ac;
  return func_0066B94C((undefined4 *)(param_1 + 0x48c),0x11);
}

