#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e569c;
extern undefined4 *DAT_001e56a0;
extern undefined4 DAT_001e56a4;
extern uint *DAT_001e56a8;
extern undefined4 *DAT_001e56ac;
extern undefined4 DAT_001e56b0;
extern uint *DAT_001e56b4;
extern undefined4 *DAT_001e56b8;
extern undefined4 DAT_001e56bc;
extern uint *DAT_001e56c0;
extern undefined4 *DAT_001e56c4;
extern undefined4 DAT_001e56c8;

// USA 001E5578 <- EU 001E5578 (Ghidra, non-matching)
// GLOBAL DAT_001e569c uint *
// GLOBAL DAT_001e56a0 undefined4 *
// GLOBAL DAT_001e56a4 undefined4
// GLOBAL DAT_001e56a8 uint *
// GLOBAL DAT_001e56ac undefined4 *
// GLOBAL DAT_001e56b0 undefined4
// GLOBAL DAT_001e56b4 uint *
// GLOBAL DAT_001e56b8 undefined4 *
// GLOBAL DAT_001e56bc undefined4
// GLOBAL DAT_001e56c0 uint *
// GLOBAL DAT_001e56c4 undefined4 *
// GLOBAL DAT_001e56c8 undefined4

undefined4 func_001E5578(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_001e569c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e569c), iVar1 != 0)) {
    *DAT_001e56a0 = DAT_001e56a4;
  }
  if (DAT_001e56a0 != param_1) {
    if (((*DAT_001e56a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e56a8), iVar1 != 0)) {
      *DAT_001e56ac = DAT_001e56b0;
    }
    if (DAT_001e56ac != param_1) {
      if (((*DAT_001e56b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e56b4), iVar1 != 0)) {
        *DAT_001e56b8 = DAT_001e56bc;
      }
      if (DAT_001e56b8 != param_1) {
        if (((*DAT_001e56c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e56c0), iVar1 != 0))
        {
          *DAT_001e56c4 = DAT_001e56c8;
        }
        if (DAT_001e56c4 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

