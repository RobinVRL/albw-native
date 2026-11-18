#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a198;
extern undefined4 *DAT_0054a19c;
extern undefined4 DAT_0054a1a0;
extern uint *DAT_0054a1a4;
extern undefined4 *DAT_0054a1a8;
extern undefined4 DAT_0054a1ac;
extern uint *DAT_0054a1b0;
extern undefined4 *DAT_0054a1b4;
extern undefined4 DAT_0054a1b8;
extern uint *DAT_0054a1bc;
extern undefined4 *DAT_0054a1c0;
extern undefined4 DAT_0054a1c4;

// USA 0054A09C <- EU 0054A074 (Ghidra, non-matching)
// GLOBAL DAT_0054a198 uint *
// GLOBAL DAT_0054a19c undefined4 *
// GLOBAL DAT_0054a1a0 undefined4
// GLOBAL DAT_0054a1a4 uint *
// GLOBAL DAT_0054a1a8 undefined4 *
// GLOBAL DAT_0054a1ac undefined4
// GLOBAL DAT_0054a1b0 uint *
// GLOBAL DAT_0054a1b4 undefined4 *
// GLOBAL DAT_0054a1b8 undefined4
// GLOBAL DAT_0054a1bc uint *
// GLOBAL DAT_0054a1c0 undefined4 *
// GLOBAL DAT_0054a1c4 undefined4

undefined4 func_0054A09C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a198), iVar1 != 0)) {
    *DAT_0054a19c = DAT_0054a1a0;
  }
  if (DAT_0054a19c != param_2) {
    if (((*DAT_0054a1a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a1a4), iVar1 != 0)) {
      *DAT_0054a1a8 = DAT_0054a1ac;
    }
    if (DAT_0054a1a8 != param_2) {
      if (((*DAT_0054a1b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a1b0), iVar1 != 0)) {
        *DAT_0054a1b4 = DAT_0054a1b8;
      }
      if (DAT_0054a1b4 != param_2) {
        if (((*DAT_0054a1bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a1bc), iVar1 != 0))
        {
          *DAT_0054a1c0 = DAT_0054a1c4;
        }
        if (DAT_0054a1c0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

