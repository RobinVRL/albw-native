#include "ghidra_types.h"

extern int func_001DBF54(int param_1,int *param_2,uint param_3,undefined1 *param_4);

// USA 0038F160 <- EU 0038F13C (Ghidra, non-matching)

undefined4 func_0038F160(int param_1,int *param_2,uint param_3,undefined1 *param_4)

{
  func_001DBF54(*(int *)(param_1 + 0x1c),param_2,param_3,param_4);
  return 1;
}

