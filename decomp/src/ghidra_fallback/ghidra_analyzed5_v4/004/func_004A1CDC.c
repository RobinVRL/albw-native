#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1AD4(undefined4 *param_1);

// USA 004A1CDC <- EU 004A1CB4 (Ghidra, non-matching)

void func_004A1CDC(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  for (iVar1 = *(int *)(param_1 + 0x48); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x44) - *(int *)(param_1 + 0x50); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    func_00110848(iVar1);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      func_004A1AD4((undefined4 *)(*(int *)(param_1 + 0x38) + iVar1 * 0xc));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}

