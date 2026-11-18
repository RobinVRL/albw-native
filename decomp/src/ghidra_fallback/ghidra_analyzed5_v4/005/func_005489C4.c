#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00548ac0;
extern undefined4 *DAT_00548ac4;
extern undefined4 DAT_00548ac8;
extern uint *DAT_00548acc;
extern undefined4 *DAT_00548ad0;
extern undefined4 DAT_00548ad4;
extern uint *DAT_00548ad8;
extern undefined4 *DAT_00548adc;
extern undefined4 DAT_00548ae0;
extern uint *DAT_00548ae4;
extern undefined4 *DAT_00548ae8;
extern undefined4 DAT_00548aec;

// USA 005489C4 <- EU 0054899C (Ghidra, non-matching)
// GLOBAL DAT_00548ac0 uint *
// GLOBAL DAT_00548ac4 undefined4 *
// GLOBAL DAT_00548ac8 undefined4
// GLOBAL DAT_00548acc uint *
// GLOBAL DAT_00548ad0 undefined4 *
// GLOBAL DAT_00548ad4 undefined4
// GLOBAL DAT_00548ad8 uint *
// GLOBAL DAT_00548adc undefined4 *
// GLOBAL DAT_00548ae0 undefined4
// GLOBAL DAT_00548ae4 uint *
// GLOBAL DAT_00548ae8 undefined4 *
// GLOBAL DAT_00548aec undefined4

undefined4 func_005489C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548ac0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548ac0), iVar1 != 0)) {
    *DAT_00548ac4 = DAT_00548ac8;
  }
  if (DAT_00548ac4 != param_2) {
    if (((*DAT_00548acc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548acc), iVar1 != 0)) {
      *DAT_00548ad0 = DAT_00548ad4;
    }
    if (DAT_00548ad0 != param_2) {
      if (((*DAT_00548ad8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548ad8), iVar1 != 0)) {
        *DAT_00548adc = DAT_00548ae0;
      }
      if (DAT_00548adc != param_2) {
        if (((*DAT_00548ae4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548ae4), iVar1 != 0))
        {
          *DAT_00548ae8 = DAT_00548aec;
        }
        if (DAT_00548ae8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

