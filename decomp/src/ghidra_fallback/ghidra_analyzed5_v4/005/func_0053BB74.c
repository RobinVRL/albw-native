#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053bc70;
extern undefined4 *DAT_0053bc74;
extern undefined4 DAT_0053bc78;
extern uint *DAT_0053bc7c;
extern undefined4 *DAT_0053bc80;
extern undefined4 DAT_0053bc84;
extern uint *DAT_0053bc88;
extern undefined4 *DAT_0053bc8c;
extern undefined4 DAT_0053bc90;
extern uint *DAT_0053bc94;
extern undefined4 *DAT_0053bc98;
extern undefined4 DAT_0053bc9c;

// USA 0053BB74 <- EU 0053BB4C (Ghidra, non-matching)
// GLOBAL DAT_0053bc70 uint *
// GLOBAL DAT_0053bc74 undefined4 *
// GLOBAL DAT_0053bc78 undefined4
// GLOBAL DAT_0053bc7c uint *
// GLOBAL DAT_0053bc80 undefined4 *
// GLOBAL DAT_0053bc84 undefined4
// GLOBAL DAT_0053bc88 uint *
// GLOBAL DAT_0053bc8c undefined4 *
// GLOBAL DAT_0053bc90 undefined4
// GLOBAL DAT_0053bc94 uint *
// GLOBAL DAT_0053bc98 undefined4 *
// GLOBAL DAT_0053bc9c undefined4

undefined4 func_0053BB74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053bc70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bc70), iVar1 != 0)) {
    *DAT_0053bc74 = DAT_0053bc78;
  }
  if (DAT_0053bc74 != param_2) {
    if (((*DAT_0053bc7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bc7c), iVar1 != 0)) {
      *DAT_0053bc80 = DAT_0053bc84;
    }
    if (DAT_0053bc80 != param_2) {
      if (((*DAT_0053bc88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bc88), iVar1 != 0)) {
        *DAT_0053bc8c = DAT_0053bc90;
      }
      if (DAT_0053bc8c != param_2) {
        if (((*DAT_0053bc94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bc94), iVar1 != 0))
        {
          *DAT_0053bc98 = DAT_0053bc9c;
        }
        if (DAT_0053bc98 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

