#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern undefined4 uRam0033ad1c;
extern undefined4 uRam0033ad20;
extern undefined4 uRam0033ad24;
extern undefined4 uRam0033ad28;
extern undefined4 uRam0033ad2c;

// USA 0033ACD8 <- EU 0033ACB4 (Ghidra, non-matching)
// GLOBAL UNK_0033ad1c undefined4
// GLOBAL UNK_0033ad20 undefined4
// GLOBAL UNK_0033ad24 undefined4
// GLOBAL UNK_0033ad28 undefined4
// GLOBAL UNK_0033ad2c undefined4

void func_0033ACD8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_004CF478(*(int *)(param_1 + 0x40c),1);
  uVar1 = uRam0033ad1c;
  *(undefined4 *)(param_1 + 0x43c) = 0x46;
  *(undefined4 *)(param_1 + 0x440) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = 0;
  uVar2 = uRam0033ad24;
  uVar1 = uRam0033ad20;
  if (*(short *)(param_1 + 0x2e) != 0) {
    uVar2 = uRam0033ad2c;
    uVar1 = uRam0033ad28;
  }
  *(undefined4 *)(param_1 + 0x444) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined2 *)(param_1 + 0x474) = 0;
  return;
}

