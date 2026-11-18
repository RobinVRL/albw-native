#include "ghidra_types.h"


// USA 003D6330 <- EU 003D6310 (Ghidra, non-matching)

undefined4 func_003D6330(int param_1,int *param_2)

{
  *(undefined1 *)(*param_2 + 8) = 0;
  *(undefined2 *)(*param_2 + 10) =
       *(undefined2 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 0;
}

