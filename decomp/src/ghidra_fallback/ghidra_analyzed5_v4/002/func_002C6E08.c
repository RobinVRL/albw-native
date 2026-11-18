#include "ghidra_types.h"

extern int func_0014ED58(int param_1);
extern int func_002ACDFC(undefined4 param_1);

// USA 002C6E08 <- EU 002C6DE4 (Ghidra, non-matching)

void func_002C6E08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = func_002ACDFC(param_1);
  *(short *)(param_1 + 0x460) = (short)uVar1;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x46c)) {
    do {
      if (uVar3 < *(uint *)(param_1 + 0x46c)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x474) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_0014ED58(iVar2);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x46c));
  }
  *(undefined1 *)(param_1 + 0x46a) = 0;
  *(undefined1 *)(param_1 + 0x4e1) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 1;
  return;
}

