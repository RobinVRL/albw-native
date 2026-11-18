#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a0d8;
extern undefined4 *DAT_0057a0dc;
extern undefined4 DAT_0057a0e0;
extern uint *DAT_0057a0e4;
extern undefined4 *DAT_0057a0e8;
extern undefined4 DAT_0057a0ec;
extern uint *DAT_0057a0f0;
extern undefined4 *DAT_0057a0f4;
extern undefined4 DAT_0057a0f8;
extern uint *DAT_0057a0fc;
extern undefined4 *DAT_0057a100;
extern undefined4 DAT_0057a104;

// USA 00579FDC <- EU 00579FB4 (Ghidra, non-matching)
// GLOBAL DAT_0057a0d8 uint *
// GLOBAL DAT_0057a0dc undefined4 *
// GLOBAL DAT_0057a0e0 undefined4
// GLOBAL DAT_0057a0e4 uint *
// GLOBAL DAT_0057a0e8 undefined4 *
// GLOBAL DAT_0057a0ec undefined4
// GLOBAL DAT_0057a0f0 uint *
// GLOBAL DAT_0057a0f4 undefined4 *
// GLOBAL DAT_0057a0f8 undefined4
// GLOBAL DAT_0057a0fc uint *
// GLOBAL DAT_0057a100 undefined4 *
// GLOBAL DAT_0057a104 undefined4

undefined4 func_00579FDC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a0d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a0d8), iVar1 != 0)) {
    *DAT_0057a0dc = DAT_0057a0e0;
  }
  if (DAT_0057a0dc != param_2) {
    if (((*DAT_0057a0e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a0e4), iVar1 != 0)) {
      *DAT_0057a0e8 = DAT_0057a0ec;
    }
    if (DAT_0057a0e8 != param_2) {
      if (((*DAT_0057a0f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a0f0), iVar1 != 0)) {
        *DAT_0057a0f4 = DAT_0057a0f8;
      }
      if (DAT_0057a0f4 != param_2) {
        if (((*DAT_0057a0fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a0fc), iVar1 != 0))
        {
          *DAT_0057a100 = DAT_0057a104;
        }
        if (DAT_0057a100 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

