#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0030DC44(int *param_1,int param_2);
extern int func_00556068(int param_1);
extern uint *DAT_0030db4c;
extern undefined4 *DAT_0030db50;
extern undefined4 DAT_0030db54;

// USA 0030DAE0 <- EU 0030DABC (Ghidra, non-matching)
// GLOBAL DAT_0030db4c uint *
// GLOBAL DAT_0030db50 undefined4 *
// GLOBAL DAT_0030db54 undefined4

undefined4 * func_0030DAE0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0030DC44(param_1,param_2);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    iVar1 = func_0030DC44(param_1,param_2);
    puVar2 = func_00556068(iVar1);
    if (((*DAT_0030db4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0030db4c), iVar1 != 0)) {
      *DAT_0030db50 = DAT_0030db54;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0030db50), iVar1 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

