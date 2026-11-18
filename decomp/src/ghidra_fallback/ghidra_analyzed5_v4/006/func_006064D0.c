#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0028BAD0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006064d0;

// USA 006064D0 <- EU 006064A8 (Ghidra, non-matching)
// GLOBAL DAT_006064d0 undefined4

int * func_006064D0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006064d0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_0028BAD0(puVar1,param_1);
    return piVar2;
  }
  return (int *)0x0;
}

