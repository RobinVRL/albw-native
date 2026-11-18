#include "ghidra_types.h"

extern int func_006695DC(undefined4 *param_1,undefined1 param_2);

// USA 003B633C <- EU 003B6318 (Ghidra, non-matching)

undefined4 func_003B633C(int param_1)

{
  ushort *puVar1;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 2;
  *(undefined2 *)(param_1 + 0x48) = 2;
  *(undefined1 *)(param_1 + 0x144) = 0;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xfffd;
  return func_006695DC((undefined4 *)(param_1 + 0x20),1);
}

