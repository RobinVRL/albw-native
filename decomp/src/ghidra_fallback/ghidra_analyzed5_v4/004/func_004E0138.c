#include "ghidra_types.h"

extern int func_00559B54(void);
extern int DAT_004e0154;
extern undefined4 DAT_004e0158;

// USA 004E0138 <- EU 004E0110 (Ghidra, non-matching)
// GLOBAL DAT_004e0154 int
// GLOBAL DAT_004e0158 undefined4

void func_004E0138(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_004e0158;
  if (*(short *)(DAT_004e0154 + param_1) == 2) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_004e0158;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
    return;
  }
  puVar1 = (undefined4 *)func_00559B54();
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0x3e4) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  return;
}

