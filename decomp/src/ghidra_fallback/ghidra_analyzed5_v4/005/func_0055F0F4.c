#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f168;
extern undefined4 *DAT_0055f16c;
extern undefined4 DAT_0055f170;
extern uint *DAT_0055f174;
extern undefined4 *DAT_0055f178;
extern undefined4 DAT_0055f17c;

// USA 0055F0F4 <- EU 0055F0CC (Ghidra, non-matching)
// GLOBAL DAT_0055f168 uint *
// GLOBAL DAT_0055f16c undefined4 *
// GLOBAL DAT_0055f170 undefined4
// GLOBAL DAT_0055f174 uint *
// GLOBAL DAT_0055f178 undefined4 *
// GLOBAL DAT_0055f17c undefined4

undefined4 func_0055F0F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f168 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f168), iVar1 != 0)) {
    *DAT_0055f16c = DAT_0055f170;
  }
  if (DAT_0055f16c != param_2) {
    if (((*DAT_0055f174 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f174), iVar1 != 0)) {
      *DAT_0055f178 = DAT_0055f17c;
    }
    if (DAT_0055f178 != param_2) {
      return 0;
    }
  }
  return 1;
}

