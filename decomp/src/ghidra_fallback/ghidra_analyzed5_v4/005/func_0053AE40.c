#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053aef8;
extern undefined4 *DAT_0053aefc;
extern undefined4 DAT_0053af00;
extern uint *DAT_0053af04;
extern undefined4 *DAT_0053af08;
extern undefined4 DAT_0053af0c;
extern uint *DAT_0053af10;
extern undefined4 *DAT_0053af14;
extern undefined4 DAT_0053af18;

// USA 0053AE40 <- EU 0053AE18 (Ghidra, non-matching)
// GLOBAL DAT_0053aef8 uint *
// GLOBAL DAT_0053aefc undefined4 *
// GLOBAL DAT_0053af00 undefined4
// GLOBAL DAT_0053af04 uint *
// GLOBAL DAT_0053af08 undefined4 *
// GLOBAL DAT_0053af0c undefined4
// GLOBAL DAT_0053af10 uint *
// GLOBAL DAT_0053af14 undefined4 *
// GLOBAL DAT_0053af18 undefined4

undefined4 func_0053AE40(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053aef8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053aef8), iVar1 != 0)) {
    *DAT_0053aefc = DAT_0053af00;
  }
  if (DAT_0053aefc != param_2) {
    if (((*DAT_0053af04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053af04), iVar1 != 0)) {
      *DAT_0053af08 = DAT_0053af0c;
    }
    if (DAT_0053af08 != param_2) {
      if (((*DAT_0053af10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053af10), iVar1 != 0)) {
        *DAT_0053af14 = DAT_0053af18;
      }
      if (DAT_0053af14 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

