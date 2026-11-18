#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052f9e8;
extern undefined4 *DAT_0052f9ec;
extern undefined4 DAT_0052f9f0;
extern uint *DAT_0052f9f4;
extern undefined4 *DAT_0052f9f8;
extern undefined4 DAT_0052f9fc;
extern uint *DAT_0052fa00;
extern undefined4 *DAT_0052fa04;
extern undefined4 DAT_0052fa08;
extern uint *DAT_0052fa0c;
extern undefined4 *DAT_0052fa10;
extern undefined4 DAT_0052fa14;

// USA 0052F8EC <- EU 0052F8C4 (Ghidra, non-matching)
// GLOBAL DAT_0052f9e8 uint *
// GLOBAL DAT_0052f9ec undefined4 *
// GLOBAL DAT_0052f9f0 undefined4
// GLOBAL DAT_0052f9f4 uint *
// GLOBAL DAT_0052f9f8 undefined4 *
// GLOBAL DAT_0052f9fc undefined4
// GLOBAL DAT_0052fa00 uint *
// GLOBAL DAT_0052fa04 undefined4 *
// GLOBAL DAT_0052fa08 undefined4
// GLOBAL DAT_0052fa0c uint *
// GLOBAL DAT_0052fa10 undefined4 *
// GLOBAL DAT_0052fa14 undefined4

undefined4 func_0052F8EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052f9e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f9e8), iVar1 != 0)) {
    *DAT_0052f9ec = DAT_0052f9f0;
  }
  if (DAT_0052f9ec != param_2) {
    if (((*DAT_0052f9f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f9f4), iVar1 != 0)) {
      *DAT_0052f9f8 = DAT_0052f9fc;
    }
    if (DAT_0052f9f8 != param_2) {
      if (((*DAT_0052fa00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fa00), iVar1 != 0)) {
        *DAT_0052fa04 = DAT_0052fa08;
      }
      if (DAT_0052fa04 != param_2) {
        if (((*DAT_0052fa0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fa0c), iVar1 != 0))
        {
          *DAT_0052fa10 = DAT_0052fa14;
        }
        if (DAT_0052fa10 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

