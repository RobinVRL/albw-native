#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 uRam0013dc04;
extern undefined4 uRam0013dc08;

// USA 0013DB88 <- EU 0013DB88 (Ghidra, non-matching)
// GLOBAL UNK_0013dc04 undefined4
// GLOBAL UNK_0013dc08 undefined4

void func_0013DB88(int param_1)

{
  undefined4 uVar1;
  
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x54c),1);
  uVar1 = uRam0013dc04;
  *(undefined4 *)(param_1 + 0x520) = 0x28;
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  uVar1 = uRam0013dc08;
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x590) = uVar1;
  *(undefined1 *)(param_1 + 0x4f2) = 0;
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x558);
  return;
}

