#include "ghidra_types.h"

extern int func_00161178(undefined4 *param_1);
extern int func_0036BE78();
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);

// USA 0015BA14 <- EU 0015BA18 (Ghidra, non-matching)

void func_0015BA14(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0036BE78((int)(param_1 + 0x398));
  if (((iVar1 != 0) && (puVar2 = func_00161178(param_1), puVar2 != (undefined4 *)0x0)) &&
     (*(char *)(puVar2 + 0x230) != '\x16')) {
    func_0065836C(puVar2 + 0x22f,4);
  }
  return;
}

