#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052cbac;
extern undefined4 *DAT_0052cbb0;
extern undefined4 DAT_0052cbb4;
extern uint *DAT_0052cbb8;
extern undefined4 *DAT_0052cbbc;
extern undefined4 DAT_0052cbc0;

// USA 0052CB34 <- EU 0052CB0C (Ghidra, non-matching)
// GLOBAL DAT_0052cbac uint *
// GLOBAL DAT_0052cbb0 undefined4 *
// GLOBAL DAT_0052cbb4 undefined4
// GLOBAL DAT_0052cbb8 uint *
// GLOBAL DAT_0052cbbc undefined4 *
// GLOBAL DAT_0052cbc0 undefined4

undefined4 func_0052CB34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052cbac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cbac), iVar1 != 0)) {
    *DAT_0052cbb0 = DAT_0052cbb4;
  }
  if (DAT_0052cbb0 != param_2) {
    if (((*DAT_0052cbb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cbb8), iVar1 != 0)) {
      *DAT_0052cbbc = DAT_0052cbc0;
    }
    if (DAT_0052cbbc != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

