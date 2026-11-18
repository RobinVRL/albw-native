#include "ghidra_types.h"

extern void func_0065E398();

// USA 002212B8 <- EU 002212B8 (Ghidra, non-matching)

void func_002212B8(int param_1)

{
  int iVar1;
  float in_s0;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0xa38) * 0x30;
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(iVar1 + 0x2c);
  if (*(uint *)(param_1 + 0xa6c) <= *(uint *)(param_1 + 0xa68)) {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0xd,in_s0);
    return;
  }
  *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  return;
}

