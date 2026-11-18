#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049F688(int param_1);

// USA 001E2720 <- EU 001E2720 (Ghidra, non-matching)

undefined4 func_001E2720(int param_1)

{
  int *piVar1;
  int iVar2;
  
  func_0010C0B8(param_1 + 0x30);
  while ((piVar1 = func_0049F688(param_1 + 0x10), piVar1 != (int *)0x0 &&
         (iVar2 = (int)piVar1 - *(int *)(param_1 + 0x1c), iVar2 != 0))) {
    func_001080D4((int *)(iVar2 + 0xa0));
  }
  return func_0010EEE0(param_1 + 0x30);
}

