#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057dc74;
extern undefined4 *DAT_0057dc78;
extern undefined4 DAT_0057dc7c;
extern uint *DAT_0057dc80;
extern undefined4 *DAT_0057dc84;
extern undefined4 DAT_0057dc88;

// USA 0057DC00 <- EU 0057DBD8 (Ghidra, non-matching)
// GLOBAL DAT_0057dc74 uint *
// GLOBAL DAT_0057dc78 undefined4 *
// GLOBAL DAT_0057dc7c undefined4
// GLOBAL DAT_0057dc80 uint *
// GLOBAL DAT_0057dc84 undefined4 *
// GLOBAL DAT_0057dc88 undefined4

undefined4 func_0057DC00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057dc74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dc74), iVar1 != 0)) {
    *DAT_0057dc78 = DAT_0057dc7c;
  }
  if (DAT_0057dc78 != param_2) {
    if (((*DAT_0057dc80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dc80), iVar1 != 0)) {
      *DAT_0057dc84 = DAT_0057dc88;
    }
    if (DAT_0057dc84 != param_2) {
      return 0;
    }
  }
  return 1;
}

