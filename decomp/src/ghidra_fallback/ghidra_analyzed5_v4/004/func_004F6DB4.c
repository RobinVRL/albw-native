#include "ghidra_types.h"

extern int func_003248F8(undefined4 *param_1,int param_2);

// USA 004F6DB4 <- EU 004F6D8C (Ghidra, non-matching)

undefined4 func_004F6DB4(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) &&
     (iVar1 = func_003248F8(*(undefined4 **)(param_1 + 0x34),param_2), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    return 1;
  }
  return 0;
}

