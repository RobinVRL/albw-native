#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0034b8a0;
extern undefined4 *DAT_0034b8a4;
extern undefined4 DAT_0034b8a8;
extern uint *DAT_0034b8ac;
extern undefined4 *DAT_0034b8b0;
extern undefined4 DAT_0034b8b4;
extern uint *DAT_0034b8b8;
extern undefined4 *DAT_0034b8bc;
extern undefined4 DAT_0034b8c0;
extern uint *DAT_0034b8c4;
extern undefined4 *DAT_0034b8c8;
extern undefined4 DAT_0034b8cc;

// USA 0034B7A0 <- EU 0034B77C (Ghidra, non-matching)
// GLOBAL DAT_0034b8a0 uint *
// GLOBAL DAT_0034b8a4 undefined4 *
// GLOBAL DAT_0034b8a8 undefined4
// GLOBAL DAT_0034b8ac uint *
// GLOBAL DAT_0034b8b0 undefined4 *
// GLOBAL DAT_0034b8b4 undefined4
// GLOBAL DAT_0034b8b8 uint *
// GLOBAL DAT_0034b8bc undefined4 *
// GLOBAL DAT_0034b8c0 undefined4
// GLOBAL DAT_0034b8c4 uint *
// GLOBAL DAT_0034b8c8 undefined4 *
// GLOBAL DAT_0034b8cc undefined4

undefined4 func_0034B7A0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0034b8a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0034b8a0), iVar1 != 0)) {
    *DAT_0034b8a4 = DAT_0034b8a8;
  }
  if (DAT_0034b8a4 != param_1) {
    if (((*DAT_0034b8ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0034b8ac), iVar1 != 0)) {
      *DAT_0034b8b0 = DAT_0034b8b4;
    }
    if (DAT_0034b8b0 != param_1) {
      if (((*DAT_0034b8b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0034b8b8), iVar1 != 0)) {
        *DAT_0034b8bc = DAT_0034b8c0;
      }
      if (DAT_0034b8bc != param_1) {
        if (((*DAT_0034b8c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0034b8c4), iVar1 != 0))
        {
          *DAT_0034b8c8 = DAT_0034b8cc;
        }
        if (DAT_0034b8c8 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

