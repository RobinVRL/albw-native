#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00325B1C(undefined4 *param_1);
extern uint *DAT_00535480;
extern undefined4 *DAT_00535484;
extern undefined4 DAT_00535488;
extern uint *DAT_0053548c;
extern undefined4 *DAT_00535490;
extern undefined4 DAT_00535494;

// USA 00535408 <- EU 005353E0 (Ghidra, non-matching)
// GLOBAL DAT_00535480 uint *
// GLOBAL DAT_00535484 undefined4 *
// GLOBAL DAT_00535488 undefined4
// GLOBAL DAT_0053548c uint *
// GLOBAL DAT_00535490 undefined4 *
// GLOBAL DAT_00535494 undefined4

undefined4 func_00535408(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00535480 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535480), iVar1 != 0)) {
    *DAT_00535484 = DAT_00535488;
  }
  if (DAT_00535484 != param_2) {
    if (((*DAT_0053548c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053548c), iVar1 != 0)) {
      *DAT_00535490 = DAT_00535494;
    }
    if (DAT_00535490 != param_2) {
      uVar2 = func_00325B1C(param_2);
      return uVar2;
    }
  }
  return 1;
}

