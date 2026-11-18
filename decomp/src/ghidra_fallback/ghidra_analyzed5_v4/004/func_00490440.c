#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0058FA5C();
extern undefined4 DAT_00490460;

// USA 00490440 <- EU 00490418 (Ghidra, non-matching)
// GLOBAL DAT_00490460 undefined4

undefined4 func_00490440(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x14];
  *param_1 = DAT_00490460;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    param_1[0x14] = 0;
  }
  puVar1 = func_0048A134(param_1);
  return func_0058FA5C((int)puVar1);
}

