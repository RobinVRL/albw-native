#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054f0a0;
extern undefined4 *DAT_0054f0a4;
extern undefined4 DAT_0054f0a8;
extern uint *DAT_0054f0ac;
extern undefined4 *DAT_0054f0b0;
extern undefined4 DAT_0054f0b4;
extern uint *DAT_0054f0b8;
extern undefined4 *DAT_0054f0bc;
extern undefined4 DAT_0054f0c0;
extern uint *DAT_0054f0c4;
extern undefined4 *DAT_0054f0c8;
extern undefined4 DAT_0054f0cc;

// USA 0054EFA4 <- EU 0054EF7C (Ghidra, non-matching)
// GLOBAL DAT_0054f0a0 uint *
// GLOBAL DAT_0054f0a4 undefined4 *
// GLOBAL DAT_0054f0a8 undefined4
// GLOBAL DAT_0054f0ac uint *
// GLOBAL DAT_0054f0b0 undefined4 *
// GLOBAL DAT_0054f0b4 undefined4
// GLOBAL DAT_0054f0b8 uint *
// GLOBAL DAT_0054f0bc undefined4 *
// GLOBAL DAT_0054f0c0 undefined4
// GLOBAL DAT_0054f0c4 uint *
// GLOBAL DAT_0054f0c8 undefined4 *
// GLOBAL DAT_0054f0cc undefined4

undefined4 func_0054EFA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054f0a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f0a0), iVar1 != 0)) {
    *DAT_0054f0a4 = DAT_0054f0a8;
  }
  if (DAT_0054f0a4 != param_2) {
    if (((*DAT_0054f0ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f0ac), iVar1 != 0)) {
      *DAT_0054f0b0 = DAT_0054f0b4;
    }
    if (DAT_0054f0b0 != param_2) {
      if (((*DAT_0054f0b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f0b8), iVar1 != 0)) {
        *DAT_0054f0bc = DAT_0054f0c0;
      }
      if (DAT_0054f0bc != param_2) {
        if (((*DAT_0054f0c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f0c4), iVar1 != 0))
        {
          *DAT_0054f0c8 = DAT_0054f0cc;
        }
        if (DAT_0054f0c8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

