#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00530c70;
extern undefined4 *DAT_00530c74;
extern undefined4 DAT_00530c78;
extern uint *DAT_00530c7c;
extern undefined4 *DAT_00530c80;
extern undefined4 DAT_00530c84;
extern uint *DAT_00530c88;
extern undefined4 *DAT_00530c8c;
extern undefined4 DAT_00530c90;
extern uint *DAT_00530c94;
extern undefined4 *DAT_00530c98;
extern undefined4 DAT_00530c9c;

// USA 00530B74 <- EU 00530B4C (Ghidra, non-matching)
// GLOBAL DAT_00530c70 uint *
// GLOBAL DAT_00530c74 undefined4 *
// GLOBAL DAT_00530c78 undefined4
// GLOBAL DAT_00530c7c uint *
// GLOBAL DAT_00530c80 undefined4 *
// GLOBAL DAT_00530c84 undefined4
// GLOBAL DAT_00530c88 uint *
// GLOBAL DAT_00530c8c undefined4 *
// GLOBAL DAT_00530c90 undefined4
// GLOBAL DAT_00530c94 uint *
// GLOBAL DAT_00530c98 undefined4 *
// GLOBAL DAT_00530c9c undefined4

undefined4 func_00530B74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00530c70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530c70), iVar1 != 0)) {
    *DAT_00530c74 = DAT_00530c78;
  }
  if (DAT_00530c74 != param_2) {
    if (((*DAT_00530c7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530c7c), iVar1 != 0)) {
      *DAT_00530c80 = DAT_00530c84;
    }
    if (DAT_00530c80 != param_2) {
      if (((*DAT_00530c88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530c88), iVar1 != 0)) {
        *DAT_00530c8c = DAT_00530c90;
      }
      if (DAT_00530c8c != param_2) {
        if (((*DAT_00530c94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530c94), iVar1 != 0))
        {
          *DAT_00530c98 = DAT_00530c9c;
        }
        if (DAT_00530c98 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

