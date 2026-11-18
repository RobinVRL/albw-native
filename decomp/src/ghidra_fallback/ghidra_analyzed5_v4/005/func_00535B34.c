#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00535bac;
extern undefined4 *DAT_00535bb0;
extern undefined4 DAT_00535bb4;
extern uint *DAT_00535bb8;
extern undefined4 *DAT_00535bbc;
extern undefined4 DAT_00535bc0;

// USA 00535B34 <- EU 00535B0C (Ghidra, non-matching)
// GLOBAL DAT_00535bac uint *
// GLOBAL DAT_00535bb0 undefined4 *
// GLOBAL DAT_00535bb4 undefined4
// GLOBAL DAT_00535bb8 uint *
// GLOBAL DAT_00535bbc undefined4 *
// GLOBAL DAT_00535bc0 undefined4

undefined4 func_00535B34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00535bac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535bac), iVar1 != 0)) {
    *DAT_00535bb0 = DAT_00535bb4;
  }
  if (DAT_00535bb0 != param_2) {
    if (((*DAT_00535bb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535bb8), iVar1 != 0)) {
      *DAT_00535bbc = DAT_00535bc0;
    }
    if (DAT_00535bbc != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

