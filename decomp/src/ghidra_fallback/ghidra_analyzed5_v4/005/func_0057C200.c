#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057c340;
extern undefined4 *DAT_0057c344;
extern undefined4 DAT_0057c348;
extern uint *DAT_0057c34c;
extern undefined4 *DAT_0057c350;
extern undefined4 DAT_0057c354;
extern uint *DAT_0057c358;
extern undefined4 *DAT_0057c35c;
extern undefined4 DAT_0057c360;
extern uint *DAT_0057c364;
extern undefined4 *DAT_0057c368;
extern undefined4 DAT_0057c36c;
extern uint *DAT_0057c370;
extern undefined4 *DAT_0057c374;
extern undefined4 DAT_0057c378;

// USA 0057C200 <- EU 0057C1D8 (Ghidra, non-matching)
// GLOBAL DAT_0057c340 uint *
// GLOBAL DAT_0057c344 undefined4 *
// GLOBAL DAT_0057c348 undefined4
// GLOBAL DAT_0057c34c uint *
// GLOBAL DAT_0057c350 undefined4 *
// GLOBAL DAT_0057c354 undefined4
// GLOBAL DAT_0057c358 uint *
// GLOBAL DAT_0057c35c undefined4 *
// GLOBAL DAT_0057c360 undefined4
// GLOBAL DAT_0057c364 uint *
// GLOBAL DAT_0057c368 undefined4 *
// GLOBAL DAT_0057c36c undefined4
// GLOBAL DAT_0057c370 uint *
// GLOBAL DAT_0057c374 undefined4 *
// GLOBAL DAT_0057c378 undefined4

undefined4 func_0057C200(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c340 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c340), iVar1 != 0)) {
    *DAT_0057c344 = DAT_0057c348;
  }
  if (DAT_0057c344 != param_2) {
    if (((*DAT_0057c34c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c34c), iVar1 != 0)) {
      *DAT_0057c350 = DAT_0057c354;
    }
    if (DAT_0057c350 != param_2) {
      if (((*DAT_0057c358 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c358), iVar1 != 0)) {
        *DAT_0057c35c = DAT_0057c360;
      }
      if (DAT_0057c35c != param_2) {
        if (((*DAT_0057c364 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c364), iVar1 != 0))
        {
          *DAT_0057c368 = DAT_0057c36c;
        }
        if (DAT_0057c368 != param_2) {
          if (((*DAT_0057c370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c370), iVar1 != 0)
             ) {
            *DAT_0057c374 = DAT_0057c378;
          }
          if (DAT_0057c374 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

