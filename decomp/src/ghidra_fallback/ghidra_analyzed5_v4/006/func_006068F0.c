#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001AD594(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006068fc;
extern int DAT_00606900;

// USA 006068F0 <- EU 006068C8 (Ghidra, non-matching)
// GLOBAL DAT_006068fc undefined4
// GLOBAL DAT_00606900 int

void func_006068F0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006068fc);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_001AD594(puVar1,param_1);
    iVar3 = DAT_00606900 + 0x84;
    *piVar2 = DAT_00606900;
    piVar2[200] = iVar3;
  }
  return;
}

