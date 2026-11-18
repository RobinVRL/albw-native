#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00301944(undefined4 *param_1,uint *param_2);
extern int DAT_006082d8;

// USA 006082CC <- EU 006082A4 (Ghidra, non-matching)
// GLOBAL DAT_006082d8 int

void func_006082CC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x640);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00301944(puVar1,param_1);
    iVar3 = DAT_006082d8 + 0x78;
    *piVar2 = DAT_006082d8;
    piVar2[200] = iVar3;
  }
  return;
}

