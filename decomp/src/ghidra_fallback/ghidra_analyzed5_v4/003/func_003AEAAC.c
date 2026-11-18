#include "ghidra_types.h"

extern int func_0025D6E4(int *param_1);
extern int func_0049116C(undefined4 *param_1);
extern int func_0058FA5C();
extern int DAT_003aeab0;

// USA 003AEAAC <- EU 003AEA88 (Ghidra, non-matching)
// GLOBAL DAT_003aeab0 int

undefined4 func_003AEAAC(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_003aeab0;
  *param_1 = DAT_003aeab0;
  param_1[6] = iVar2 + 0x54;
  puVar1 = func_0049116C(param_1 + 0x2c);
  iVar2 = func_0025D6E4(puVar1 + -0x2c);
  return func_0058FA5C(iVar2);
}

