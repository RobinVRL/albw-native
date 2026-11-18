#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533ac8;
extern undefined4 *DAT_00533acc;
extern undefined4 DAT_00533ad0;
extern uint *DAT_00533ad4;
extern undefined4 *DAT_00533ad8;
extern undefined4 DAT_00533adc;
extern uint *DAT_00533ae0;
extern undefined4 *DAT_00533ae4;
extern undefined4 DAT_00533ae8;
extern uint *DAT_00533aec;
extern undefined4 *DAT_00533af0;
extern undefined4 DAT_00533af4;

// USA 005339CC <- EU 005339A4 (Ghidra, non-matching)
// GLOBAL DAT_00533ac8 uint *
// GLOBAL DAT_00533acc undefined4 *
// GLOBAL DAT_00533ad0 undefined4
// GLOBAL DAT_00533ad4 uint *
// GLOBAL DAT_00533ad8 undefined4 *
// GLOBAL DAT_00533adc undefined4
// GLOBAL DAT_00533ae0 uint *
// GLOBAL DAT_00533ae4 undefined4 *
// GLOBAL DAT_00533ae8 undefined4
// GLOBAL DAT_00533aec uint *
// GLOBAL DAT_00533af0 undefined4 *
// GLOBAL DAT_00533af4 undefined4

undefined4 func_005339CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533ac8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533ac8), iVar1 != 0)) {
    *DAT_00533acc = DAT_00533ad0;
  }
  if (DAT_00533acc != param_2) {
    if (((*DAT_00533ad4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533ad4), iVar1 != 0)) {
      *DAT_00533ad8 = DAT_00533adc;
    }
    if (DAT_00533ad8 != param_2) {
      if (((*DAT_00533ae0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533ae0), iVar1 != 0)) {
        *DAT_00533ae4 = DAT_00533ae8;
      }
      if (DAT_00533ae4 != param_2) {
        if (((*DAT_00533aec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533aec), iVar1 != 0))
        {
          *DAT_00533af0 = DAT_00533af4;
        }
        if (DAT_00533af0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

