#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00263d7c;
extern undefined4 *DAT_00263d80;
extern undefined4 DAT_00263d84;
extern uint *DAT_00263d88;
extern undefined4 *DAT_00263d8c;
extern undefined4 DAT_00263d90;
extern uint *DAT_00263d94;
extern undefined4 *DAT_00263d98;
extern undefined4 DAT_00263d9c;
extern uint *DAT_00263da0;
extern undefined4 *DAT_00263da4;
extern undefined4 DAT_00263da8;

// USA 00263C30 <- EU 00263C58 (Ghidra, non-matching)
// GLOBAL DAT_00263d7c uint *
// GLOBAL DAT_00263d80 undefined4 *
// GLOBAL DAT_00263d84 undefined4
// GLOBAL DAT_00263d88 uint *
// GLOBAL DAT_00263d8c undefined4 *
// GLOBAL DAT_00263d90 undefined4
// GLOBAL DAT_00263d94 uint *
// GLOBAL DAT_00263d98 undefined4 *
// GLOBAL DAT_00263d9c undefined4
// GLOBAL DAT_00263da0 uint *
// GLOBAL DAT_00263da4 undefined4 *
// GLOBAL DAT_00263da8 undefined4

undefined4 func_00263C30(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00263d7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00263d7c), iVar1 != 0)) {
    *DAT_00263d80 = DAT_00263d84;
  }
  if (DAT_00263d80 != param_1) {
    if (((*DAT_00263d88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00263d88), iVar1 != 0)) {
      *DAT_00263d8c = DAT_00263d90;
    }
    if (DAT_00263d8c != param_1) {
      if (((*DAT_00263d94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00263d94), iVar1 != 0)) {
        *DAT_00263d98 = DAT_00263d9c;
      }
      if (DAT_00263d98 != param_1) {
        if (((*DAT_00263da0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00263da0), iVar1 != 0))
        {
          *DAT_00263da4 = DAT_00263da8;
        }
        if (DAT_00263da4 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

