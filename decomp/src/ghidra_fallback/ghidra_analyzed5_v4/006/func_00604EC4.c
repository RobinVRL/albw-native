#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00306CE0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604ed0;
extern int DAT_00604ed4;

// USA 00604EC4 <- EU 00604E9C (Ghidra, non-matching)
// GLOBAL DAT_00604ed0 undefined4
// GLOBAL DAT_00604ed4 int

void func_00604EC4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604ed0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00306CE0(puVar1,param_1);
    iVar3 = DAT_00604ed4 + 0x54;
    *piVar2 = DAT_00604ed4;
    piVar2[200] = iVar3;
  }
  return;
}

