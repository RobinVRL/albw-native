#include "ghidra_types.h"

extern int func_0049FB60(int *param_1);
extern int func_0049FCA8(int param_1);

// USA 0049FCE8 <- EU 0049FCC0 (Ghidra, non-matching)

void func_0049FCE8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  func_0049FB60(param_1);
  puVar1 = (undefined4 *)param_1[1];
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
    func_0049FCA8((int)puVar1);
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar2;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

