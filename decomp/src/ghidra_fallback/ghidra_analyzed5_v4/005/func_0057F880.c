#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f8f4;
extern undefined4 *DAT_0057f8f8;
extern undefined4 DAT_0057f8fc;
extern uint *DAT_0057f900;
extern undefined4 *DAT_0057f904;
extern undefined4 DAT_0057f908;

// USA 0057F880 <- EU 0057F858 (Ghidra, non-matching)
// GLOBAL DAT_0057f8f4 uint *
// GLOBAL DAT_0057f8f8 undefined4 *
// GLOBAL DAT_0057f8fc undefined4
// GLOBAL DAT_0057f900 uint *
// GLOBAL DAT_0057f904 undefined4 *
// GLOBAL DAT_0057f908 undefined4

undefined4 func_0057F880(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f8f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f8f4), iVar1 != 0)) {
    *DAT_0057f8f8 = DAT_0057f8fc;
  }
  if (DAT_0057f8f8 != param_2) {
    if (((*DAT_0057f900 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f900), iVar1 != 0)) {
      *DAT_0057f904 = DAT_0057f908;
    }
    if (DAT_0057f904 != param_2) {
      return 0;
    }
  }
  return 1;
}

