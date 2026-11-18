#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005323f8;
extern undefined4 *DAT_005323fc;
extern undefined4 DAT_00532400;
extern uint *DAT_00532404;
extern undefined4 *DAT_00532408;
extern undefined4 DAT_0053240c;
extern uint *DAT_00532410;
extern undefined4 *DAT_00532414;
extern undefined4 DAT_00532418;
extern uint *DAT_0053241c;
extern undefined4 *DAT_00532420;
extern undefined4 DAT_00532424;

// USA 005322FC <- EU 005322D4 (Ghidra, non-matching)
// GLOBAL DAT_005323f8 uint *
// GLOBAL DAT_005323fc undefined4 *
// GLOBAL DAT_00532400 undefined4
// GLOBAL DAT_00532404 uint *
// GLOBAL DAT_00532408 undefined4 *
// GLOBAL DAT_0053240c undefined4
// GLOBAL DAT_00532410 uint *
// GLOBAL DAT_00532414 undefined4 *
// GLOBAL DAT_00532418 undefined4
// GLOBAL DAT_0053241c uint *
// GLOBAL DAT_00532420 undefined4 *
// GLOBAL DAT_00532424 undefined4

undefined4 func_005322FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005323f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005323f8), iVar1 != 0)) {
    *DAT_005323fc = DAT_00532400;
  }
  if (DAT_005323fc != param_2) {
    if (((*DAT_00532404 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532404), iVar1 != 0)) {
      *DAT_00532408 = DAT_0053240c;
    }
    if (DAT_00532408 != param_2) {
      if (((*DAT_00532410 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532410), iVar1 != 0)) {
        *DAT_00532414 = DAT_00532418;
      }
      if (DAT_00532414 != param_2) {
        if (((*DAT_0053241c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053241c), iVar1 != 0))
        {
          *DAT_00532420 = DAT_00532424;
        }
        if (DAT_00532420 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

