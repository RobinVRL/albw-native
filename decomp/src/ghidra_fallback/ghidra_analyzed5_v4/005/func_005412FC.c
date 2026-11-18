#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054143c;
extern undefined4 *DAT_00541440;
extern undefined4 DAT_00541444;
extern uint *DAT_00541448;
extern undefined4 *DAT_0054144c;
extern undefined4 DAT_00541450;
extern uint *DAT_00541454;
extern undefined4 *DAT_00541458;
extern undefined4 DAT_0054145c;
extern uint *DAT_00541460;
extern undefined4 *DAT_00541464;
extern undefined4 DAT_00541468;
extern uint *DAT_0054146c;
extern undefined4 *DAT_00541470;
extern undefined4 DAT_00541474;

// USA 005412FC <- EU 005412D4 (Ghidra, non-matching)
// GLOBAL DAT_0054143c uint *
// GLOBAL DAT_00541440 undefined4 *
// GLOBAL DAT_00541444 undefined4
// GLOBAL DAT_00541448 uint *
// GLOBAL DAT_0054144c undefined4 *
// GLOBAL DAT_00541450 undefined4
// GLOBAL DAT_00541454 uint *
// GLOBAL DAT_00541458 undefined4 *
// GLOBAL DAT_0054145c undefined4
// GLOBAL DAT_00541460 uint *
// GLOBAL DAT_00541464 undefined4 *
// GLOBAL DAT_00541468 undefined4
// GLOBAL DAT_0054146c uint *
// GLOBAL DAT_00541470 undefined4 *
// GLOBAL DAT_00541474 undefined4

undefined4 func_005412FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054143c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054143c), iVar1 != 0)) {
    *DAT_00541440 = DAT_00541444;
  }
  if (DAT_00541440 != param_2) {
    if (((*DAT_00541448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541448), iVar1 != 0)) {
      *DAT_0054144c = DAT_00541450;
    }
    if (DAT_0054144c != param_2) {
      if (((*DAT_00541454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541454), iVar1 != 0)) {
        *DAT_00541458 = DAT_0054145c;
      }
      if (DAT_00541458 != param_2) {
        if (((*DAT_00541460 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541460), iVar1 != 0))
        {
          *DAT_00541464 = DAT_00541468;
        }
        if (DAT_00541464 != param_2) {
          if (((*DAT_0054146c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054146c), iVar1 != 0)
             ) {
            *DAT_00541470 = DAT_00541474;
          }
          if (DAT_00541470 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

