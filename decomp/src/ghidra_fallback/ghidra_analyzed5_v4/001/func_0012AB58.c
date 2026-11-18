#include "ghidra_types.h"

extern void func_00129D60(int param_1);
extern int func_0012A134(int param_1);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);

// USA 0012AB58 <- EU 0012AB58 (Ghidra, non-matching)

void func_0012AB58(int param_1)

{
  int iVar1;
  
  func_00129D60(param_1);
  if (*(uint *)(param_1 + 0x968) < *(uint *)(param_1 + 0x96c)) {
    *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
  }
  else {
    func_00656A1C((undefined4 *)(param_1 + 0x8bc),1);
  }
  iVar1 = func_0012A134(param_1);
  if (iVar1 != 0) {
    func_00656A1C((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

