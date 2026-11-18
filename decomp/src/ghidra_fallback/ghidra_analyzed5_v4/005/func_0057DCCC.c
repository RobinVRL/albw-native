#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057dd84;
extern undefined4 *DAT_0057dd88;
extern undefined4 DAT_0057dd8c;
extern uint *DAT_0057dd90;
extern undefined4 *DAT_0057dd94;
extern undefined4 DAT_0057dd98;
extern uint *DAT_0057dd9c;
extern undefined4 *DAT_0057dda0;
extern undefined4 DAT_0057dda4;

// USA 0057DCCC <- EU 0057DCA4 (Ghidra, non-matching)
// GLOBAL DAT_0057dd84 uint *
// GLOBAL DAT_0057dd88 undefined4 *
// GLOBAL DAT_0057dd8c undefined4
// GLOBAL DAT_0057dd90 uint *
// GLOBAL DAT_0057dd94 undefined4 *
// GLOBAL DAT_0057dd98 undefined4
// GLOBAL DAT_0057dd9c uint *
// GLOBAL DAT_0057dda0 undefined4 *
// GLOBAL DAT_0057dda4 undefined4

undefined4 func_0057DCCC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057dd84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dd84), iVar1 != 0)) {
    *DAT_0057dd88 = DAT_0057dd8c;
  }
  if (DAT_0057dd88 != param_2) {
    if (((*DAT_0057dd90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dd90), iVar1 != 0)) {
      *DAT_0057dd94 = DAT_0057dd98;
    }
    if (DAT_0057dd94 != param_2) {
      if (((*DAT_0057dd9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057dd9c), iVar1 != 0)) {
        *DAT_0057dda0 = DAT_0057dda4;
      }
      if (DAT_0057dda0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

