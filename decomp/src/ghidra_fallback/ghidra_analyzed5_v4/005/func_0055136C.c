#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551424;
extern undefined4 *DAT_00551428;
extern undefined4 DAT_0055142c;
extern uint *DAT_00551430;
extern undefined4 *DAT_00551434;
extern undefined4 DAT_00551438;
extern uint *DAT_0055143c;
extern undefined4 *DAT_00551440;
extern undefined4 DAT_00551444;

// USA 0055136C <- EU 00551344 (Ghidra, non-matching)
// GLOBAL DAT_00551424 uint *
// GLOBAL DAT_00551428 undefined4 *
// GLOBAL DAT_0055142c undefined4
// GLOBAL DAT_00551430 uint *
// GLOBAL DAT_00551434 undefined4 *
// GLOBAL DAT_00551438 undefined4
// GLOBAL DAT_0055143c uint *
// GLOBAL DAT_00551440 undefined4 *
// GLOBAL DAT_00551444 undefined4

undefined4 func_0055136C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551424 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551424), iVar1 != 0)) {
    *DAT_00551428 = DAT_0055142c;
  }
  if (DAT_00551428 != param_2) {
    if (((*DAT_00551430 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551430), iVar1 != 0)) {
      *DAT_00551434 = DAT_00551438;
    }
    if (DAT_00551434 != param_2) {
      if (((*DAT_0055143c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055143c), iVar1 != 0)) {
        *DAT_00551440 = DAT_00551444;
      }
      if (DAT_00551440 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

