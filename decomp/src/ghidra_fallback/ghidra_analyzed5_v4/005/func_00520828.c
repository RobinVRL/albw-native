#include "ghidra_types.h"


// USA 00520828 <- EU 00520800 (Ghidra, non-matching)

int func_00520828(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_r12;
  
  if (param_2 != 0) {
    if (0 < *(short *)(param_1 + 0x49c)) {
      in_r12 = param_1 + 0x400;
    }
    uVar3 = 0;
    if (0 < *(short *)(param_1 + 0x49c)) {
      do {
        puVar2 = (undefined4 *)(in_r12 + 0xac);
        if (uVar3 < 0x10) {
          puVar2 = (undefined4 *)(in_r12 + 0xac) + uVar3;
        }
        iVar1 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(undefined4 *)(param_2 + iVar1) = *puVar2;
      } while ((int)uVar3 < (int)*(short *)(param_1 + 0x49c));
    }
  }
  return (int)*(short *)(param_1 + 0x49c);
}

