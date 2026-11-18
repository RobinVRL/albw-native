#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);

// USA 0020B728 <- EU 0020B728 (Ghidra, non-matching)

undefined4 func_0020B728(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xd18) == '\0') && (iVar1 = func_0058A8F0(param_1), iVar1 == 0)) {
    return 0;
  }
  return func_0065D630((undefined4 *)(param_1 + 0x8bc),0x22);
}

