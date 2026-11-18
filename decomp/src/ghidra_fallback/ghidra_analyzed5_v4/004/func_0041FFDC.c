#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);

// USA 0041FFDC <- EU 0041FFBC (Ghidra, non-matching)

undefined4 * func_0041FFDC(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if ((param_3 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    func_00110D44(param_2,*(byte **)(param_1 + 0x18),uVar1);
    param_2 = (undefined4 *)((uVar1 & 0xfffffffc) + (int)param_2);
  }
  return param_2;
}

