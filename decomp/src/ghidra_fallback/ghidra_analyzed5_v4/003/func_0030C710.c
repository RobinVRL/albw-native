#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0030C4D0(int *param_1,int param_2);
extern uint *DAT_0030c75c;
extern undefined4 *DAT_0030c760;
extern undefined4 DAT_0030c764;

// USA 0030C710 <- EU 0030C6EC (Ghidra, non-matching)
// GLOBAL DAT_0030c75c uint *
// GLOBAL DAT_0030c760 undefined4 *
// GLOBAL DAT_0030c764 undefined4

undefined4 * func_0030C710(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = func_0030C4D0(param_1,param_2);
  if (((*DAT_0030c75c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0030c75c), iVar2 != 0)) {
    *DAT_0030c760 = DAT_0030c764;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0030c760), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

