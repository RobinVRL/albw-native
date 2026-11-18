#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056ff98;
extern undefined4 *DAT_0056ff9c;
extern undefined4 DAT_0056ffa0;
extern uint *DAT_0056ffa4;
extern undefined4 *DAT_0056ffa8;
extern undefined4 DAT_0056ffac;
extern uint *DAT_0056ffb0;
extern undefined4 *DAT_0056ffb4;
extern undefined4 DAT_0056ffb8;

// USA 0056FEE0 <- EU 0056FEB8 (Ghidra, non-matching)
// GLOBAL DAT_0056ff98 uint *
// GLOBAL DAT_0056ff9c undefined4 *
// GLOBAL DAT_0056ffa0 undefined4
// GLOBAL DAT_0056ffa4 uint *
// GLOBAL DAT_0056ffa8 undefined4 *
// GLOBAL DAT_0056ffac undefined4
// GLOBAL DAT_0056ffb0 uint *
// GLOBAL DAT_0056ffb4 undefined4 *
// GLOBAL DAT_0056ffb8 undefined4

undefined4 func_0056FEE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056ff98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056ff98), iVar1 != 0)) {
    *DAT_0056ff9c = DAT_0056ffa0;
  }
  if (DAT_0056ff9c != param_2) {
    if (((*DAT_0056ffa4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056ffa4), iVar1 != 0)) {
      *DAT_0056ffa8 = DAT_0056ffac;
    }
    if (DAT_0056ffa8 != param_2) {
      if (((*DAT_0056ffb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056ffb0), iVar1 != 0)) {
        *DAT_0056ffb4 = DAT_0056ffb8;
      }
      if (DAT_0056ffb4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

