#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_006632F0(undefined4 *param_1,undefined1 param_2);

// USA 002C6E80 <- EU 002C6E5C (Ghidra, non-matching)

undefined4 func_002C6E80(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x46a) != '\0') {
    return func_006632F0((undefined4 *)(param_1 + 0x40c),2);
  }
  if (*(short *)(param_1 + 0x460) < 1) {
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0x46c)) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x46c)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x474) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        func_0014F4EC(iVar2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x46c));
    }
    *(undefined1 *)(param_1 + 0x46a) = 0;
    func_006632F0((undefined4 *)(param_1 + 0x40c),1);
    *(undefined1 *)(param_1 + 0x4e1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = *(undefined1 *)(param_1 + 0x46b);
    return 0;
  }
  uVar1 = (int)*(short *)(param_1 + 0x460) - 1;
  *(short *)(param_1 + 0x460) = (short)uVar1;
  if ((uVar1 & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x438) + 0x4000000;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x438) + -0x4000000;
  }
  *(int *)(param_1 + 0x438) = iVar2;
  return 0;
}

