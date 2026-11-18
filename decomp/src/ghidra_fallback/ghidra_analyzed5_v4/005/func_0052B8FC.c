#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b9f8;
extern undefined4 *DAT_0052b9fc;
extern undefined4 DAT_0052ba00;
extern uint *DAT_0052ba04;
extern undefined4 *DAT_0052ba08;
extern undefined4 DAT_0052ba0c;
extern uint *DAT_0052ba10;
extern undefined4 *DAT_0052ba14;
extern undefined4 DAT_0052ba18;
extern uint *DAT_0052ba1c;
extern undefined4 *DAT_0052ba20;
extern undefined4 DAT_0052ba24;

// USA 0052B8FC <- EU 0052B8D4 (Ghidra, non-matching)
// GLOBAL DAT_0052b9f8 uint *
// GLOBAL DAT_0052b9fc undefined4 *
// GLOBAL DAT_0052ba00 undefined4
// GLOBAL DAT_0052ba04 uint *
// GLOBAL DAT_0052ba08 undefined4 *
// GLOBAL DAT_0052ba0c undefined4
// GLOBAL DAT_0052ba10 uint *
// GLOBAL DAT_0052ba14 undefined4 *
// GLOBAL DAT_0052ba18 undefined4
// GLOBAL DAT_0052ba1c uint *
// GLOBAL DAT_0052ba20 undefined4 *
// GLOBAL DAT_0052ba24 undefined4

undefined4 func_0052B8FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b9f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b9f8), iVar1 != 0)) {
    *DAT_0052b9fc = DAT_0052ba00;
  }
  if (DAT_0052b9fc != param_2) {
    if (((*DAT_0052ba04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ba04), iVar1 != 0)) {
      *DAT_0052ba08 = DAT_0052ba0c;
    }
    if (DAT_0052ba08 != param_2) {
      if (((*DAT_0052ba10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ba10), iVar1 != 0)) {
        *DAT_0052ba14 = DAT_0052ba18;
      }
      if (DAT_0052ba14 != param_2) {
        if (((*DAT_0052ba1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ba1c), iVar1 != 0))
        {
          *DAT_0052ba20 = DAT_0052ba24;
        }
        if (DAT_0052ba20 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

