#include "ghidra_types.h"

extern int func_0056B41C(int param_1,uint param_2);
extern int func_0056B658(int param_1);

// USA 0056D128 <- EU 0056D100 (Ghidra, non-matching)

bool func_0056D128(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)func_0056B41C(*(int *)(param_1 + 0x3c),param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = func_0056B658((int)puVar1);
    param_3[1] = uVar2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 1);
  }
  return puVar1 != (undefined4 *)0x0;
}

