#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC178();
extern int DAT_0026d1dc;
extern int DAT_0026d1e0;

// USA 0026D170 <- EU 0026D198 (Ghidra, non-matching)
// GLOBAL DAT_0026d1dc int
// GLOBAL DAT_0026d1e0 int

undefined4 func_0026D170(int *param_1)

{
  int iVar1;
  int iVar2;
  
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  iVar1 = DAT_0026d1dc;
  *(undefined2 *)(param_1[0x10c] + 0x28) = 0;
  iVar2 = DAT_0026d1e0;
  param_1[0x237] = 0x40000000;
  param_1[0xf8] = iVar1;
  param_1[0x13e] = iVar2;
  return func_004FC178((int)param_1);
}

