#include "ghidra_types.h"

extern int func_0026D1E0(int param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FC178();
extern int DAT_0026d000;
extern int DAT_0026d004;

// USA 0026CF80 <- EU 0026CFA8 (Ghidra, non-matching)
// GLOBAL DAT_0026d000 int
// GLOBAL DAT_0026d004 int

undefined4 func_0026CF80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0xb) {
    return 0;
  }
  func_0026D1E0((int)param_1);
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  iVar1 = DAT_0026d000;
  *(undefined2 *)(param_1[0x10c] + 0x28) = 0;
  iVar2 = DAT_0026d004;
  param_1[0x237] = 0x40000000;
  param_1[0xf8] = iVar1;
  param_1[0x13e] = iVar2;
  return func_004FC178((int)param_1);
}

