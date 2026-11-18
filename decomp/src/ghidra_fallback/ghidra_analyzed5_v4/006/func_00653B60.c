#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_005568D4(int param_1);
extern int *DAT_00653b84;

// USA 00653B60 <- EU 00653B38 (Ghidra, non-matching)
// GLOBAL DAT_00653b84 int *

undefined4 func_00653B60(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 in_r2;
  
  piVar2 = DAT_00653b84;
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x9cc);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x9ce);
  }
  uVar3 = func_005568D4(*DAT_00653b84);
  if (uVar3 < uVar1) {
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x9cc);
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x9ce);
    }
    func_00255B48(*piVar2,-(uint)uVar1,in_r2);
    uVar4 = 1;
  }
  return uVar4;
}

