#include "ghidra_types.h"

extern int func_001B6E04(undefined4 *param_1);
extern int func_002608C8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern undefined4 DAT_0037bb14;
extern int DAT_0037bb18;

// USA 0037BAD4 <- EU 0037BAB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_0037bb14 undefined4
// GLOBAL DAT_0037bb18 int

int * func_0037BAD4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = func_001B6E04(param_1);
  uVar1 = DAT_0037bb14;
  puVar3[0xe] = 0;
  *puVar3 = uVar1;
  piVar4 = (int *)func_002608C8(puVar3 + 0xf,param_2,param_3,param_4,param_5);
  iVar2 = DAT_0037bb18;
  *piVar4 = DAT_0037bb18 + 100;
  piVar4[-0xf] = iVar2;
  return piVar4 + -0xf;
}

