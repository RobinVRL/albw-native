#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0026C850(undefined4 *param_1,uint *param_2);
extern int DAT_00602998;

// USA 0060298C <- EU 00602964 (Ghidra, non-matching)
// GLOBAL DAT_00602998 int

void func_0060298C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x910);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_0026C850(puVar1,param_1);
    iVar3 = DAT_00602998 + 0x84;
    *piVar2 = DAT_00602998;
    piVar2[200] = iVar3;
  }
  return;
}

