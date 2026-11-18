#include "ghidra_types.h"

extern int func_003FD0C8(int param_1);
extern int func_0048FBB4(undefined4 *param_1);
extern int func_004A1520();
extern int func_0058FA5C();
extern int DAT_00234808;

// USA 002347C8 <- EU 002347C8 (Ghidra, non-matching)
// GLOBAL DAT_00234808 int

undefined4 func_002347C8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00234808 + 0x2c;
  *param_1 = DAT_00234808;
  param_1[0x2d] = iVar2;
  if (*(char *)((int)param_1 + 0x11d) != '\0') {
    func_003FD0C8(param_1[0x31]);
  }
  puVar1 = func_004A1520(param_1 + 0x2d);
  puVar1 = func_0048FBB4(puVar1 + -0x2d);
  return func_0058FA5C((int)puVar1);
}

