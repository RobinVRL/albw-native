#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c430;
extern undefined4 *DAT_0053c434;
extern undefined4 DAT_0053c438;
extern uint *DAT_0053c43c;
extern undefined4 *DAT_0053c440;
extern undefined4 DAT_0053c444;
extern uint *DAT_0053c448;
extern undefined4 *DAT_0053c44c;
extern undefined4 DAT_0053c450;
extern uint *DAT_0053c454;
extern undefined4 *DAT_0053c458;
extern undefined4 DAT_0053c45c;

// USA 0053C334 <- EU 0053C30C (Ghidra, non-matching)
// GLOBAL DAT_0053c430 uint *
// GLOBAL DAT_0053c434 undefined4 *
// GLOBAL DAT_0053c438 undefined4
// GLOBAL DAT_0053c43c uint *
// GLOBAL DAT_0053c440 undefined4 *
// GLOBAL DAT_0053c444 undefined4
// GLOBAL DAT_0053c448 uint *
// GLOBAL DAT_0053c44c undefined4 *
// GLOBAL DAT_0053c450 undefined4
// GLOBAL DAT_0053c454 uint *
// GLOBAL DAT_0053c458 undefined4 *
// GLOBAL DAT_0053c45c undefined4

undefined4 func_0053C334(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c430 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c430), iVar1 != 0)) {
    *DAT_0053c434 = DAT_0053c438;
  }
  if (DAT_0053c434 != param_2) {
    if (((*DAT_0053c43c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c43c), iVar1 != 0)) {
      *DAT_0053c440 = DAT_0053c444;
    }
    if (DAT_0053c440 != param_2) {
      if (((*DAT_0053c448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c448), iVar1 != 0)) {
        *DAT_0053c44c = DAT_0053c450;
      }
      if (DAT_0053c44c != param_2) {
        if (((*DAT_0053c454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c454), iVar1 != 0))
        {
          *DAT_0053c458 = DAT_0053c45c;
        }
        if (DAT_0053c458 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

