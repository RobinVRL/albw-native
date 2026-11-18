#include "ghidra_types.h"

extern int func_0015B580(int param_1,uint param_2);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);

// USA 00160430 <- EU 00160434 (Ghidra, non-matching)

undefined4 func_00160430(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = func_0015B580(param_1,uVar2);
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 0x230) != '\x16')) {
      func_0065836C(puVar1 + 0x22f,param_2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 1;
}

