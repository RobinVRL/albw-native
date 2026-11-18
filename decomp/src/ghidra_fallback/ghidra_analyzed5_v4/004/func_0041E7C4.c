#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 DAT_0041e81c;

// USA 0041E7C4 <- EU 0041E7A4 (Ghidra, non-matching)
// GLOBAL DAT_0041e81c undefined4

void func_0041E7C4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined4 *)(param_1 + 4) = *param_2;
    func_00110D44((undefined4 *)(param_1 + 8),(byte *)(param_2 + 1),0xd);
    func_00110D44((undefined4 *)(param_1 + 0x18),(byte *)(param_2 + 5),0xd);
    *(undefined4 *)(param_1 + 0x28) = param_2[9];
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  uVar1 = DAT_0041e81c;
  *(undefined4 *)(param_1 + 0x78) = DAT_0041e81c;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}

