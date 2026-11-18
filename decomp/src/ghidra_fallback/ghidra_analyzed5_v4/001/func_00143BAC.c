#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);

// USA 00143BAC <- EU 00143BAC (Ghidra, non-matching)

void func_00143BAC(int param_1)

{
  if (*(int *)(param_1 + 0x48c) != 0) {
    func_00151148(*(int *)(param_1 + 0x48c),0);
  }
  func_004CF478(*(int *)(param_1 + 0x46c),0);
  *(undefined1 *)(param_1 + 0x411) = 0;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x468);
  return;
}

