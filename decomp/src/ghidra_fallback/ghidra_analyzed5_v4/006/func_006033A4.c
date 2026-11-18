#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0017AC58(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006033b0;
extern int DAT_006033b4;

// USA 006033A4 <- EU 0060337C (Ghidra, non-matching)
// GLOBAL DAT_006033b0 undefined4
// GLOBAL DAT_006033b4 int

void func_006033A4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006033b0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0017AC58(puVar1,param_1);
    iVar3 = DAT_006033b4 + 0xbc;
    *piVar2 = DAT_006033b4;
    piVar2[200] = iVar3;
  }
  return;
}

