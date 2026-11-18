#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00575538;
extern undefined4 *DAT_0057553c;
extern undefined4 DAT_00575540;
extern uint *DAT_00575544;
extern undefined4 *DAT_00575548;
extern undefined4 DAT_0057554c;
extern uint *DAT_00575550;
extern undefined4 *DAT_00575554;
extern undefined4 DAT_00575558;
extern uint *DAT_0057555c;
extern undefined4 *DAT_00575560;
extern undefined4 DAT_00575564;
extern uint *DAT_00575568;
extern undefined4 *DAT_0057556c;
extern undefined4 DAT_00575570;

// USA 005753F8 <- EU 005753D0 (Ghidra, non-matching)
// GLOBAL DAT_00575538 uint *
// GLOBAL DAT_0057553c undefined4 *
// GLOBAL DAT_00575540 undefined4
// GLOBAL DAT_00575544 uint *
// GLOBAL DAT_00575548 undefined4 *
// GLOBAL DAT_0057554c undefined4
// GLOBAL DAT_00575550 uint *
// GLOBAL DAT_00575554 undefined4 *
// GLOBAL DAT_00575558 undefined4
// GLOBAL DAT_0057555c uint *
// GLOBAL DAT_00575560 undefined4 *
// GLOBAL DAT_00575564 undefined4
// GLOBAL DAT_00575568 uint *
// GLOBAL DAT_0057556c undefined4 *
// GLOBAL DAT_00575570 undefined4

undefined4 func_005753F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00575538 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575538), iVar1 != 0)) {
    *DAT_0057553c = DAT_00575540;
  }
  if (DAT_0057553c != param_2) {
    if (((*DAT_00575544 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575544), iVar1 != 0)) {
      *DAT_00575548 = DAT_0057554c;
    }
    if (DAT_00575548 != param_2) {
      if (((*DAT_00575550 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575550), iVar1 != 0)) {
        *DAT_00575554 = DAT_00575558;
      }
      if (DAT_00575554 != param_2) {
        if (((*DAT_0057555c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057555c), iVar1 != 0))
        {
          *DAT_00575560 = DAT_00575564;
        }
        if (DAT_00575560 != param_2) {
          if (((*DAT_00575568 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575568), iVar1 != 0)
             ) {
            *DAT_0057556c = DAT_00575570;
          }
          if (DAT_0057556c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

