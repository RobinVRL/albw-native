#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ab04;
extern undefined4 *DAT_0052ab08;
extern undefined4 DAT_0052ab0c;
extern uint *DAT_0052ab10;
extern undefined4 *DAT_0052ab14;
extern undefined4 DAT_0052ab18;
extern uint *DAT_0052ab1c;
extern undefined4 *DAT_0052ab20;
extern undefined4 DAT_0052ab24;

// USA 0052AA4C <- EU 0052AA24 (Ghidra, non-matching)
// GLOBAL DAT_0052ab04 uint *
// GLOBAL DAT_0052ab08 undefined4 *
// GLOBAL DAT_0052ab0c undefined4
// GLOBAL DAT_0052ab10 uint *
// GLOBAL DAT_0052ab14 undefined4 *
// GLOBAL DAT_0052ab18 undefined4
// GLOBAL DAT_0052ab1c uint *
// GLOBAL DAT_0052ab20 undefined4 *
// GLOBAL DAT_0052ab24 undefined4

undefined4 func_0052AA4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ab04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ab04), iVar1 != 0)) {
    *DAT_0052ab08 = DAT_0052ab0c;
  }
  if (DAT_0052ab08 != param_2) {
    if (((*DAT_0052ab10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ab10), iVar1 != 0)) {
      *DAT_0052ab14 = DAT_0052ab18;
    }
    if (DAT_0052ab14 != param_2) {
      if (((*DAT_0052ab1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ab1c), iVar1 != 0)) {
        *DAT_0052ab20 = DAT_0052ab24;
      }
      if (DAT_0052ab20 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

