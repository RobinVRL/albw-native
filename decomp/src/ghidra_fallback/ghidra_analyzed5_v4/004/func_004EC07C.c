#include "ghidra_types.h"

extern int func_00297140(int param_1,int *param_2);
extern int func_00539024(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00689024(undefined4 *param_1);

// USA 004EC07C <- EU 004EC054 (Ghidra, non-matching)

void func_004EC07C(int param_1)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  func_00689024(aiStack_58);
  iVar1 = func_00539024(*(undefined4 *)(param_1 + 0x50),(int)aiStack_58,in_r2,in_r3);
  if (iVar1 != 0) {
    func_00297140(*(int *)(param_1 + 0x4c),aiStack_58);
  }
  return;
}

