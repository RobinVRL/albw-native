#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057adac;
extern undefined4 *DAT_0057adb0;
extern undefined4 DAT_0057adb4;
extern uint *DAT_0057adb8;
extern undefined4 *DAT_0057adbc;
extern undefined4 DAT_0057adc0;
extern uint *DAT_0057adc4;
extern undefined4 *DAT_0057adc8;
extern undefined4 DAT_0057adcc;
extern uint *DAT_0057add0;
extern undefined4 *DAT_0057add4;
extern undefined4 DAT_0057add8;
extern uint *DAT_0057addc;
extern undefined4 *DAT_0057ade0;
extern undefined4 DAT_0057ade4;

// USA 0057AC6C <- EU 0057AC44 (Ghidra, non-matching)
// GLOBAL DAT_0057adac uint *
// GLOBAL DAT_0057adb0 undefined4 *
// GLOBAL DAT_0057adb4 undefined4
// GLOBAL DAT_0057adb8 uint *
// GLOBAL DAT_0057adbc undefined4 *
// GLOBAL DAT_0057adc0 undefined4
// GLOBAL DAT_0057adc4 uint *
// GLOBAL DAT_0057adc8 undefined4 *
// GLOBAL DAT_0057adcc undefined4
// GLOBAL DAT_0057add0 uint *
// GLOBAL DAT_0057add4 undefined4 *
// GLOBAL DAT_0057add8 undefined4
// GLOBAL DAT_0057addc uint *
// GLOBAL DAT_0057ade0 undefined4 *
// GLOBAL DAT_0057ade4 undefined4

undefined4 func_0057AC6C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057adac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057adac), iVar1 != 0)) {
    *DAT_0057adb0 = DAT_0057adb4;
  }
  if (DAT_0057adb0 != param_2) {
    if (((*DAT_0057adb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057adb8), iVar1 != 0)) {
      *DAT_0057adbc = DAT_0057adc0;
    }
    if (DAT_0057adbc != param_2) {
      if (((*DAT_0057adc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057adc4), iVar1 != 0)) {
        *DAT_0057adc8 = DAT_0057adcc;
      }
      if (DAT_0057adc8 != param_2) {
        if (((*DAT_0057add0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057add0), iVar1 != 0))
        {
          *DAT_0057add4 = DAT_0057add8;
        }
        if (DAT_0057add4 != param_2) {
          if (((*DAT_0057addc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057addc), iVar1 != 0)
             ) {
            *DAT_0057ade0 = DAT_0057ade4;
          }
          if (DAT_0057ade0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

