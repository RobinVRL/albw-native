#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00338acc;
extern undefined4 *DAT_00338ad0;
extern undefined4 DAT_00338ad4;
extern uint *DAT_00338ad8;
extern undefined4 *DAT_00338adc;
extern undefined4 DAT_00338ae0;
extern uint *DAT_00338ae4;
extern undefined4 *DAT_00338ae8;
extern undefined4 DAT_00338aec;
extern uint *DAT_00338af0;
extern undefined4 *DAT_00338af4;
extern undefined4 DAT_00338af8;

// USA 003389CC <- EU 003389A8 (Ghidra, non-matching)
// GLOBAL DAT_00338acc uint *
// GLOBAL DAT_00338ad0 undefined4 *
// GLOBAL DAT_00338ad4 undefined4
// GLOBAL DAT_00338ad8 uint *
// GLOBAL DAT_00338adc undefined4 *
// GLOBAL DAT_00338ae0 undefined4
// GLOBAL DAT_00338ae4 uint *
// GLOBAL DAT_00338ae8 undefined4 *
// GLOBAL DAT_00338aec undefined4
// GLOBAL DAT_00338af0 uint *
// GLOBAL DAT_00338af4 undefined4 *
// GLOBAL DAT_00338af8 undefined4

undefined4 func_003389CC(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00338acc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00338acc), iVar1 != 0)) {
    *DAT_00338ad0 = DAT_00338ad4;
  }
  if (DAT_00338ad0 != param_1) {
    if (((*DAT_00338ad8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00338ad8), iVar1 != 0)) {
      *DAT_00338adc = DAT_00338ae0;
    }
    if (DAT_00338adc != param_1) {
      if (((*DAT_00338ae4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00338ae4), iVar1 != 0)) {
        *DAT_00338ae8 = DAT_00338aec;
      }
      if (DAT_00338ae8 != param_1) {
        if (((*DAT_00338af0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00338af0), iVar1 != 0))
        {
          *DAT_00338af4 = DAT_00338af8;
        }
        if (DAT_00338af4 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

