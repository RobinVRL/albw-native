#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00531418;
extern undefined4 *DAT_0053141c;
extern undefined4 DAT_00531420;
extern uint *DAT_00531424;
extern undefined4 *DAT_00531428;
extern undefined4 DAT_0053142c;
extern uint *DAT_00531430;
extern undefined4 *DAT_00531434;
extern undefined4 DAT_00531438;
extern uint *DAT_0053143c;
extern undefined4 *DAT_00531440;
extern undefined4 DAT_00531444;

// USA 0053131C <- EU 005312F4 (Ghidra, non-matching)
// GLOBAL DAT_00531418 uint *
// GLOBAL DAT_0053141c undefined4 *
// GLOBAL DAT_00531420 undefined4
// GLOBAL DAT_00531424 uint *
// GLOBAL DAT_00531428 undefined4 *
// GLOBAL DAT_0053142c undefined4
// GLOBAL DAT_00531430 uint *
// GLOBAL DAT_00531434 undefined4 *
// GLOBAL DAT_00531438 undefined4
// GLOBAL DAT_0053143c uint *
// GLOBAL DAT_00531440 undefined4 *
// GLOBAL DAT_00531444 undefined4

undefined4 func_0053131C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531418 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531418), iVar1 != 0)) {
    *DAT_0053141c = DAT_00531420;
  }
  if (DAT_0053141c != param_2) {
    if (((*DAT_00531424 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531424), iVar1 != 0)) {
      *DAT_00531428 = DAT_0053142c;
    }
    if (DAT_00531428 != param_2) {
      if (((*DAT_00531430 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531430), iVar1 != 0)) {
        *DAT_00531434 = DAT_00531438;
      }
      if (DAT_00531434 != param_2) {
        if (((*DAT_0053143c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053143c), iVar1 != 0))
        {
          *DAT_00531440 = DAT_00531444;
        }
        if (DAT_00531440 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

