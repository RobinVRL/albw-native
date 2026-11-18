#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00525b94;
extern undefined4 *DAT_00525b98;
extern undefined4 DAT_00525b9c;
extern uint *DAT_00525ba0;
extern undefined4 *DAT_00525ba4;
extern undefined4 DAT_00525ba8;
extern uint *DAT_00525bac;
extern undefined4 *DAT_00525bb0;
extern undefined4 DAT_00525bb4;

// USA 00525ADC <- EU 00525AB4 (Ghidra, non-matching)
// GLOBAL DAT_00525b94 uint *
// GLOBAL DAT_00525b98 undefined4 *
// GLOBAL DAT_00525b9c undefined4
// GLOBAL DAT_00525ba0 uint *
// GLOBAL DAT_00525ba4 undefined4 *
// GLOBAL DAT_00525ba8 undefined4
// GLOBAL DAT_00525bac uint *
// GLOBAL DAT_00525bb0 undefined4 *
// GLOBAL DAT_00525bb4 undefined4

undefined4 func_00525ADC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00525b94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525b94), iVar1 != 0)) {
    *DAT_00525b98 = DAT_00525b9c;
  }
  if (DAT_00525b98 != param_2) {
    if (((*DAT_00525ba0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525ba0), iVar1 != 0)) {
      *DAT_00525ba4 = DAT_00525ba8;
    }
    if (DAT_00525ba4 != param_2) {
      if (((*DAT_00525bac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525bac), iVar1 != 0)) {
        *DAT_00525bb0 = DAT_00525bb4;
      }
      if (DAT_00525bb0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

