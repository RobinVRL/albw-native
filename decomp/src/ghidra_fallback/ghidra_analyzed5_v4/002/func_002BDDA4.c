#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002bddf8;
extern uint *DAT_002bddfc;
extern undefined4 *DAT_002bde00;
extern undefined4 DAT_002bde04;

// USA 002BDDA4 <- EU 002BDD80 (Ghidra, non-matching)
// GLOBAL DAT_002bddf8 int *
// GLOBAL DAT_002bddfc uint *
// GLOBAL DAT_002bde00 undefined4 *
// GLOBAL DAT_002bde04 undefined4

undefined4 * func_002BDDA4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002bddf8 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_002bddfc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002bddfc), iVar2 != 0)) {
      *DAT_002bde00 = DAT_002bde04;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002bde00);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
  }
  return puVar3;
}

