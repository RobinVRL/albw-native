#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004EE540(undefined4 *param_1);
extern int DAT_0013e9f8;
extern int DAT_0013e9fc;

// USA 0013E9BC <- EU 0013E9BC (Ghidra, non-matching)
// GLOBAL DAT_0013e9f8 int
// GLOBAL DAT_0013e9fc int

undefined4 func_0013E9BC(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0013e9f8;
  *param_1 = DAT_0013e9f8;
  param_1[200] = iVar1 + 0x78;
  puVar2 = func_004EE540(param_1 + 0x169);
  iVar1 = DAT_0013e9fc;
  puVar2[-0xa1] = DAT_0013e9fc + 0x5c;
  puVar2[-0x169] = iVar1;
  puVar2 = func_004EE540(puVar2 + -0x65);
  return func_001510A4(puVar2 + -0x104);
}

