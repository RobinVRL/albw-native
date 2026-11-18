#include "ghidra_types.h"

extern undefined4 DAT_00268188;
extern undefined4 DAT_0026818c;
extern undefined4 DAT_00268190;

// USA 00268110 <- EU 00268138 (Ghidra, non-matching)
// GLOBAL DAT_00268188 undefined4
// GLOBAL DAT_0026818c undefined4
// GLOBAL DAT_00268190 undefined4

void func_00268110(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x8f0) + 0x20) + 0x14) + 0x10) = DAT_00268188
  ;
  uVar1 = DAT_0026818c;
  *(undefined4 *)(param_1 + 0xad8) = 0x3c;
  *(undefined4 *)(param_1 + 0xadc) = uVar1;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xae4) = 0x1e;
  *(undefined4 *)(param_1 + 0xae8) = DAT_00268190;
  *(undefined4 *)(param_1 + 0xae0) = 0;
  return;
}

