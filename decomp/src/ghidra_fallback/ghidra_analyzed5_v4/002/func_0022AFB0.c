#include "ghidra_types.h"

extern int func_00229E24(int param_1);
extern int func_0022AA1C(int param_1,int param_2);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);

// USA 0022AFB0 <- EU 0022AFB0 (Ghidra, non-matching)

void func_0022AFB0(int param_1)

{
  int iVar1;
  
  func_00229E24(param_1);
  if (*(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74)) {
    *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) + 1;
  }
  if ((1 < *(int *)(param_1 + 0xcb4)) && (*(int *)(param_1 + 0xa70) == 0x3c)) {
    iVar1 = *(int *)(param_1 + 0xcb4) / 2;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (3 < iVar1) {
      iVar1 = 3;
    }
    func_0022AA1C(param_1,iVar1);
  }
  if (*(uint *)(param_1 + 0xa74) <= *(uint *)(param_1 + 0xa70)) {
    func_0065E8B8((undefined4 *)(param_1 + 0x8fc),10);
  }
  return;
}

