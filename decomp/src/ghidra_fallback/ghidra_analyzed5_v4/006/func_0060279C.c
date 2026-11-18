#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002625C4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006027a8;
extern int DAT_006027ac;

// USA 0060279C <- EU 00602774 (Ghidra, non-matching)
// GLOBAL DAT_006027a8 undefined4
// GLOBAL DAT_006027ac int

void func_0060279C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006027a8);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_002625C4(puVar1,param_1);
    iVar3 = DAT_006027ac + 0x84;
    *piVar2 = DAT_006027ac;
    piVar2[200] = iVar3;
  }
  return;
}

