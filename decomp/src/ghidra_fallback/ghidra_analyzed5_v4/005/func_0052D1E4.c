#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d2e0;
extern undefined4 *DAT_0052d2e4;
extern undefined4 DAT_0052d2e8;
extern uint *DAT_0052d2ec;
extern undefined4 *DAT_0052d2f0;
extern undefined4 DAT_0052d2f4;
extern uint *DAT_0052d2f8;
extern undefined4 *DAT_0052d2fc;
extern undefined4 DAT_0052d300;
extern uint *DAT_0052d304;
extern undefined4 *DAT_0052d308;
extern undefined4 DAT_0052d30c;

// USA 0052D1E4 <- EU 0052D1BC (Ghidra, non-matching)
// GLOBAL DAT_0052d2e0 uint *
// GLOBAL DAT_0052d2e4 undefined4 *
// GLOBAL DAT_0052d2e8 undefined4
// GLOBAL DAT_0052d2ec uint *
// GLOBAL DAT_0052d2f0 undefined4 *
// GLOBAL DAT_0052d2f4 undefined4
// GLOBAL DAT_0052d2f8 uint *
// GLOBAL DAT_0052d2fc undefined4 *
// GLOBAL DAT_0052d300 undefined4
// GLOBAL DAT_0052d304 uint *
// GLOBAL DAT_0052d308 undefined4 *
// GLOBAL DAT_0052d30c undefined4

undefined4 func_0052D1E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d2e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d2e0), iVar1 != 0)) {
    *DAT_0052d2e4 = DAT_0052d2e8;
  }
  if (DAT_0052d2e4 != param_2) {
    if (((*DAT_0052d2ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d2ec), iVar1 != 0)) {
      *DAT_0052d2f0 = DAT_0052d2f4;
    }
    if (DAT_0052d2f0 != param_2) {
      if (((*DAT_0052d2f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d2f8), iVar1 != 0)) {
        *DAT_0052d2fc = DAT_0052d300;
      }
      if (DAT_0052d2fc != param_2) {
        if (((*DAT_0052d304 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d304), iVar1 != 0))
        {
          *DAT_0052d308 = DAT_0052d30c;
        }
        if (DAT_0052d308 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

