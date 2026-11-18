#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051e494;
extern undefined4 *DAT_0051e498;
extern undefined4 DAT_0051e49c;
extern uint *DAT_0051e4a0;
extern undefined4 *DAT_0051e4a4;
extern undefined4 DAT_0051e4a8;
extern uint *DAT_0051e4ac;
extern undefined4 *DAT_0051e4b0;
extern undefined4 DAT_0051e4b4;
extern uint *DAT_0051e4b8;
extern undefined4 *DAT_0051e4bc;
extern undefined4 DAT_0051e4c0;

// USA 0051E398 <- EU 0051E370 (Ghidra, non-matching)
// GLOBAL DAT_0051e494 uint *
// GLOBAL DAT_0051e498 undefined4 *
// GLOBAL DAT_0051e49c undefined4
// GLOBAL DAT_0051e4a0 uint *
// GLOBAL DAT_0051e4a4 undefined4 *
// GLOBAL DAT_0051e4a8 undefined4
// GLOBAL DAT_0051e4ac uint *
// GLOBAL DAT_0051e4b0 undefined4 *
// GLOBAL DAT_0051e4b4 undefined4
// GLOBAL DAT_0051e4b8 uint *
// GLOBAL DAT_0051e4bc undefined4 *
// GLOBAL DAT_0051e4c0 undefined4

undefined4 func_0051E398(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051e494 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e494), iVar1 != 0)) {
    *DAT_0051e498 = DAT_0051e49c;
  }
  if (DAT_0051e498 != param_2) {
    if (((*DAT_0051e4a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e4a0), iVar1 != 0)) {
      *DAT_0051e4a4 = DAT_0051e4a8;
    }
    if (DAT_0051e4a4 != param_2) {
      if (((*DAT_0051e4ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e4ac), iVar1 != 0)) {
        *DAT_0051e4b0 = DAT_0051e4b4;
      }
      if (DAT_0051e4b0 != param_2) {
        if (((*DAT_0051e4b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051e4b8), iVar1 != 0))
        {
          *DAT_0051e4bc = DAT_0051e4c0;
        }
        if (DAT_0051e4bc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

