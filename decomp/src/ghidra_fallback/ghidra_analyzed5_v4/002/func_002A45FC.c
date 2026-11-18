#include "ghidra_types.h"

extern int func_002A6B54(int param_1);
extern undefined4 DAT_002a464c;
extern undefined4 DAT_002a4650;

// USA 002A45FC <- EU 002A45D8 (Ghidra, non-matching)
// GLOBAL DAT_002a464c undefined4
// GLOBAL DAT_002a4650 undefined4

void func_002A45FC(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined1 *)(param_1 + 0xb94) = 0;
  uVar1 = DAT_002a464c;
  *(undefined4 *)(param_1 + 0xb24) = DAT_002a464c;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_002A6B54(param_1);
  uVar1 = DAT_002a4650;
  if ((param_2 == 0) && (*(byte *)(param_1 + 0xb92) < 3)) {
    *(undefined4 *)(param_1 + 0xb58) = 10;
    *(undefined4 *)(param_1 + 0xb5c) = uVar1;
    *(undefined4 *)(param_1 + 0xb54) = 0;
  }
  return;
}

