#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005223d4;
extern undefined4 *DAT_005223d8;
extern undefined4 DAT_005223dc;
extern uint *DAT_005223e0;
extern undefined4 *DAT_005223e4;
extern undefined4 DAT_005223e8;
extern uint *DAT_005223ec;
extern undefined4 *DAT_005223f0;
extern undefined4 DAT_005223f4;
extern uint *DAT_005223f8;
extern undefined4 *DAT_005223fc;
extern undefined4 DAT_00522400;

// USA 005222D8 <- EU 005222B0 (Ghidra, non-matching)
// GLOBAL DAT_005223d4 uint *
// GLOBAL DAT_005223d8 undefined4 *
// GLOBAL DAT_005223dc undefined4
// GLOBAL DAT_005223e0 uint *
// GLOBAL DAT_005223e4 undefined4 *
// GLOBAL DAT_005223e8 undefined4
// GLOBAL DAT_005223ec uint *
// GLOBAL DAT_005223f0 undefined4 *
// GLOBAL DAT_005223f4 undefined4
// GLOBAL DAT_005223f8 uint *
// GLOBAL DAT_005223fc undefined4 *
// GLOBAL DAT_00522400 undefined4

undefined4 func_005222D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005223d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005223d4), iVar1 != 0)) {
    *DAT_005223d8 = DAT_005223dc;
  }
  if (DAT_005223d8 != param_2) {
    if (((*DAT_005223e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005223e0), iVar1 != 0)) {
      *DAT_005223e4 = DAT_005223e8;
    }
    if (DAT_005223e4 != param_2) {
      if (((*DAT_005223ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005223ec), iVar1 != 0)) {
        *DAT_005223f0 = DAT_005223f4;
      }
      if (DAT_005223f0 != param_2) {
        if (((*DAT_005223f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005223f8), iVar1 != 0))
        {
          *DAT_005223fc = DAT_00522400;
        }
        if (DAT_005223fc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

