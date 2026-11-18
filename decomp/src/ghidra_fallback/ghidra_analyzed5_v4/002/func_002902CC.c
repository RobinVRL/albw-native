#include "ghidra_types.h"

extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);

// USA 002902CC <- EU 002902F4 (Ghidra, non-matching)

undefined4 func_002902CC(int param_1,undefined1 param_2)

{
  if ((*(ushort *)(param_1 + 0x42) < 2) && (*(int *)(*(int *)(param_1 + 0x10) + 0x620) == 0)) {
    *(undefined1 *)(param_1 + 0xc5) = 1;
    *(undefined1 *)(param_1 + 0xc6) = param_2;
    func_0028D580((uint *)(*(int *)(param_1 + 0x18) + 0x3c),0x87,1,1,6);
  }
  return 1;
}

