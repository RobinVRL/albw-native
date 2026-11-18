#include "ghidra_types.h"

extern int func_001A56C8(int param_1,float fparam_0);
extern int func_001A5D24(int param_1);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a6784;

// USA 001A6730 <- EU 001A6730 (Ghidra, non-matching)
// GLOBAL DAT_001a6784 float

undefined4 func_001A6730(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  func_001A56C8(param_1,DAT_001a6784);
  iVar1 = func_001A5D24(param_1);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
      *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
      return 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return func_0065A6FC((undefined4 *)(param_1 + 0x8bc),uVar2);
}

