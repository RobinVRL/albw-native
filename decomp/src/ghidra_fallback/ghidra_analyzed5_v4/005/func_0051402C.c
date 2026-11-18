#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 uRam0051405c;
extern undefined4 uRam00514060;

// USA 0051402C <- EU 00514004 (Ghidra, non-matching)
// GLOBAL UNK_0051405c undefined4
// GLOBAL UNK_00514060 undefined4

undefined4 func_0051402C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_00151148(*(int *)(param_1 + 0x520),1);
  uVar1 = uRam0051405c;
  *(undefined4 *)(param_1 + 0x3dc) = uRam0051405c;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uRam00514060;
  puVar2 = (uint *)func_002C11E8(aiStack_68,2,6,0);
  return func_0016898C(*(int *)(param_1 + 0x4b0),puVar2);
}

