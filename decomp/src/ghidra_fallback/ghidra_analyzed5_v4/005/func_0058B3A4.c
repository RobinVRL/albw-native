#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b4a0;
extern undefined4 *DAT_0058b4a4;
extern undefined4 DAT_0058b4a8;
extern uint *DAT_0058b4ac;
extern undefined4 *DAT_0058b4b0;
extern undefined4 DAT_0058b4b4;
extern uint *DAT_0058b4b8;
extern undefined4 *DAT_0058b4bc;
extern undefined4 DAT_0058b4c0;
extern uint *DAT_0058b4c4;
extern undefined4 *DAT_0058b4c8;
extern undefined4 DAT_0058b4cc;

// USA 0058B3A4 <- EU 0058B37C (Ghidra, non-matching)
// GLOBAL DAT_0058b4a0 uint *
// GLOBAL DAT_0058b4a4 undefined4 *
// GLOBAL DAT_0058b4a8 undefined4
// GLOBAL DAT_0058b4ac uint *
// GLOBAL DAT_0058b4b0 undefined4 *
// GLOBAL DAT_0058b4b4 undefined4
// GLOBAL DAT_0058b4b8 uint *
// GLOBAL DAT_0058b4bc undefined4 *
// GLOBAL DAT_0058b4c0 undefined4
// GLOBAL DAT_0058b4c4 uint *
// GLOBAL DAT_0058b4c8 undefined4 *
// GLOBAL DAT_0058b4cc undefined4

undefined4 func_0058B3A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b4a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b4a0), iVar1 != 0)) {
    *DAT_0058b4a4 = DAT_0058b4a8;
  }
  if (DAT_0058b4a4 != param_2) {
    if (((*DAT_0058b4ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b4ac), iVar1 != 0)) {
      *DAT_0058b4b0 = DAT_0058b4b4;
    }
    if (DAT_0058b4b0 != param_2) {
      if (((*DAT_0058b4b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b4b8), iVar1 != 0)) {
        *DAT_0058b4bc = DAT_0058b4c0;
      }
      if (DAT_0058b4bc != param_2) {
        if (((*DAT_0058b4c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b4c4), iVar1 != 0))
        {
          *DAT_0058b4c8 = DAT_0058b4cc;
        }
        if (DAT_0058b4c8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

