#include "ghidra_types.h"

extern int func_003FDD6C(int param_1);
extern int func_003FDF0C(int *param_1);
extern int func_003FE238(int *param_1);
extern int func_0048FBB4(undefined4 *param_1);
extern int func_0058FA5C();
extern undefined4 DAT_00232bfc;
extern undefined4 DAT_00232c00;

// USA 00232BBC <- EU 00232BBC (Ghidra, non-matching)
// GLOBAL DAT_00232bfc undefined4
// GLOBAL DAT_00232c00 undefined4

undefined4 func_00232BBC(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_00232bfc;
  param_1[0x2d] = DAT_00232c00;
  piVar1 = func_003FE238(param_1 + 0x39);
  piVar1 = func_003FDF0C(piVar1 + -3);
  pvVar2 = func_003FDD6C((int)(piVar1 + -8));
  puVar3 = func_0048FBB4((undefined4 *)((int)pvVar2 + -0xb8));
  return func_0058FA5C((int)puVar3);
}

