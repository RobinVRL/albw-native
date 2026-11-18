#include "ghidra_types.h"

extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00161178(undefined4 *param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);

// USA 0015AD00 <- EU 0015AD04 (Ghidra, non-matching)

undefined4 func_0015AD00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = func_00161178(param_1);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x230) != '\x16')) {
    func_0065836C(puVar2 + 0x22f,4);
  }
  return func_00160430((int)param_1,4);
}

