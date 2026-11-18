#include "ghidra_types.h"

extern int func_0038063C(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);

// USA 003805A4 <- EU 00380580 (Ghidra, non-matching)

void func_003805A4(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0xae8) < *(uint *)(param_1 + 0xaec)) {
    *(uint *)(param_1 + 0xae8) = *(uint *)(param_1 + 0xae8) + 1;
  }
  else {
    func_006678C0((undefined4 *)(param_1 + 0xa48),3);
  }
  iVar1 = func_0038063C(param_1);
  if (iVar1 != 0) {
    func_006678C0((undefined4 *)(param_1 + 0xa48),4);
  }
  return;
}

