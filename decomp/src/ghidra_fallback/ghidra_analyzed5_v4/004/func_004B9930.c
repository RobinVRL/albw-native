#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012ED04(int param_1,undefined4 param_2);
extern int func_0047353C(undefined4 *param_1);
extern int *DAT_004b9954;

// USA 004B9930 <- EU 004B9908 (Ghidra, non-matching)
// GLOBAL DAT_004b9954 int *

void func_004B9930(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x164);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_0047353C(puVar1);
  }
  *(int **)(param_1 + 0x14) = piVar2;
  func_0012ED04(*DAT_004b9954,piVar2);
  piVar2[0x1a] = 2;
  return;
}

