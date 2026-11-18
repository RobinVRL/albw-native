#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005280c8;
extern undefined4 *DAT_005280cc;
extern undefined4 DAT_005280d0;
extern uint *DAT_005280d4;
extern undefined4 *DAT_005280d8;
extern undefined4 DAT_005280dc;
extern uint *DAT_005280e0;
extern undefined4 *DAT_005280e4;
extern undefined4 DAT_005280e8;
extern uint *DAT_005280ec;
extern undefined4 *DAT_005280f0;
extern undefined4 DAT_005280f4;

// USA 00527FCC <- EU 00527FA4 (Ghidra, non-matching)
// GLOBAL DAT_005280c8 uint *
// GLOBAL DAT_005280cc undefined4 *
// GLOBAL DAT_005280d0 undefined4
// GLOBAL DAT_005280d4 uint *
// GLOBAL DAT_005280d8 undefined4 *
// GLOBAL DAT_005280dc undefined4
// GLOBAL DAT_005280e0 uint *
// GLOBAL DAT_005280e4 undefined4 *
// GLOBAL DAT_005280e8 undefined4
// GLOBAL DAT_005280ec uint *
// GLOBAL DAT_005280f0 undefined4 *
// GLOBAL DAT_005280f4 undefined4

undefined4 func_00527FCC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005280c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005280c8), iVar1 != 0)) {
    *DAT_005280cc = DAT_005280d0;
  }
  if (DAT_005280cc != param_2) {
    if (((*DAT_005280d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005280d4), iVar1 != 0)) {
      *DAT_005280d8 = DAT_005280dc;
    }
    if (DAT_005280d8 != param_2) {
      if (((*DAT_005280e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005280e0), iVar1 != 0)) {
        *DAT_005280e4 = DAT_005280e8;
      }
      if (DAT_005280e4 != param_2) {
        if (((*DAT_005280ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005280ec), iVar1 != 0))
        {
          *DAT_005280f0 = DAT_005280f4;
        }
        if (DAT_005280f0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

