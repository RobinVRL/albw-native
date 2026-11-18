#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00581420;
extern undefined4 *DAT_00581424;
extern undefined4 DAT_00581428;
extern uint *DAT_0058142c;
extern undefined4 *DAT_00581430;
extern undefined4 DAT_00581434;
extern uint *DAT_00581438;
extern undefined4 *DAT_0058143c;
extern undefined4 DAT_00581440;
extern uint *DAT_00581444;
extern undefined4 *DAT_00581448;
extern undefined4 DAT_0058144c;

// USA 00581324 <- EU 005812FC (Ghidra, non-matching)
// GLOBAL DAT_00581420 uint *
// GLOBAL DAT_00581424 undefined4 *
// GLOBAL DAT_00581428 undefined4
// GLOBAL DAT_0058142c uint *
// GLOBAL DAT_00581430 undefined4 *
// GLOBAL DAT_00581434 undefined4
// GLOBAL DAT_00581438 uint *
// GLOBAL DAT_0058143c undefined4 *
// GLOBAL DAT_00581440 undefined4
// GLOBAL DAT_00581444 uint *
// GLOBAL DAT_00581448 undefined4 *
// GLOBAL DAT_0058144c undefined4

undefined4 func_00581324(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00581420 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581420), iVar1 != 0)) {
    *DAT_00581424 = DAT_00581428;
  }
  if (DAT_00581424 != param_2) {
    if (((*DAT_0058142c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058142c), iVar1 != 0)) {
      *DAT_00581430 = DAT_00581434;
    }
    if (DAT_00581430 != param_2) {
      if (((*DAT_00581438 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581438), iVar1 != 0)) {
        *DAT_0058143c = DAT_00581440;
      }
      if (DAT_0058143c != param_2) {
        if (((*DAT_00581444 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581444), iVar1 != 0))
        {
          *DAT_00581448 = DAT_0058144c;
        }
        if (DAT_00581448 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

