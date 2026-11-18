#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bbc8;
extern undefined4 *DAT_0055bbcc;
extern undefined4 DAT_0055bbd0;
extern uint *DAT_0055bbd4;
extern undefined4 *DAT_0055bbd8;
extern undefined4 DAT_0055bbdc;

// USA 0055BB54 <- EU 0055BB2C (Ghidra, non-matching)
// GLOBAL DAT_0055bbc8 uint *
// GLOBAL DAT_0055bbcc undefined4 *
// GLOBAL DAT_0055bbd0 undefined4
// GLOBAL DAT_0055bbd4 uint *
// GLOBAL DAT_0055bbd8 undefined4 *
// GLOBAL DAT_0055bbdc undefined4

undefined4 func_0055BB54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bbc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bbc8), iVar1 != 0)) {
    *DAT_0055bbcc = DAT_0055bbd0;
  }
  if (DAT_0055bbcc != param_2) {
    if (((*DAT_0055bbd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bbd4), iVar1 != 0)) {
      *DAT_0055bbd8 = DAT_0055bbdc;
    }
    if (DAT_0055bbd8 != param_2) {
      return 0;
    }
  }
  return 1;
}

