#include "ghidra_types.h"

extern int func_00417200(int param_1);
extern int func_0041CA0C(int param_1);
extern int func_0041D24C(int param_1);
extern undefined4 DAT_00417d7c;

// USA 00417D24 <- EU 00417D04 (Ghidra, non-matching)
// GLOBAL DAT_00417d7c undefined4

undefined4 * func_00417D24(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00417d7c;
  func_00417200((int)param_1);
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a4)) {
    if (*(char *)(iVar1 + 0x131) != '\0') {
      func_0041D24C(iVar1);
    }
  }
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a4)) {
    func_0041CA0C(iVar1);
  }
  param_1[0x4c] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return param_1;
}

