#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005412b0;
extern undefined4 *DAT_005412b4;
extern undefined4 DAT_005412b8;
extern uint *DAT_005412bc;
extern undefined4 *DAT_005412c0;
extern undefined4 DAT_005412c4;
extern uint *DAT_005412c8;
extern undefined4 *DAT_005412cc;
extern undefined4 DAT_005412d0;

// USA 005411F8 <- EU 005411D0 (Ghidra, non-matching)
// GLOBAL DAT_005412b0 uint *
// GLOBAL DAT_005412b4 undefined4 *
// GLOBAL DAT_005412b8 undefined4
// GLOBAL DAT_005412bc uint *
// GLOBAL DAT_005412c0 undefined4 *
// GLOBAL DAT_005412c4 undefined4
// GLOBAL DAT_005412c8 uint *
// GLOBAL DAT_005412cc undefined4 *
// GLOBAL DAT_005412d0 undefined4

undefined4 func_005411F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005412b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005412b0), iVar1 != 0)) {
    *DAT_005412b4 = DAT_005412b8;
  }
  if (DAT_005412b4 != param_2) {
    if (((*DAT_005412bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005412bc), iVar1 != 0)) {
      *DAT_005412c0 = DAT_005412c4;
    }
    if (DAT_005412c0 != param_2) {
      if (((*DAT_005412c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005412c8), iVar1 != 0)) {
        *DAT_005412cc = DAT_005412d0;
      }
      if (DAT_005412cc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

