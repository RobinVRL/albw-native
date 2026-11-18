#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005503d0;
extern undefined4 *DAT_005503d4;
extern undefined4 DAT_005503d8;
extern uint *DAT_005503dc;
extern undefined4 *DAT_005503e0;
extern undefined4 DAT_005503e4;
extern uint *DAT_005503e8;
extern undefined4 *DAT_005503ec;
extern undefined4 DAT_005503f0;
extern uint *DAT_005503f4;
extern undefined4 *DAT_005503f8;
extern undefined4 DAT_005503fc;

// USA 005502D4 <- EU 005502AC (Ghidra, non-matching)
// GLOBAL DAT_005503d0 uint *
// GLOBAL DAT_005503d4 undefined4 *
// GLOBAL DAT_005503d8 undefined4
// GLOBAL DAT_005503dc uint *
// GLOBAL DAT_005503e0 undefined4 *
// GLOBAL DAT_005503e4 undefined4
// GLOBAL DAT_005503e8 uint *
// GLOBAL DAT_005503ec undefined4 *
// GLOBAL DAT_005503f0 undefined4
// GLOBAL DAT_005503f4 uint *
// GLOBAL DAT_005503f8 undefined4 *
// GLOBAL DAT_005503fc undefined4

undefined4 func_005502D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005503d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005503d0), iVar1 != 0)) {
    *DAT_005503d4 = DAT_005503d8;
  }
  if (DAT_005503d4 != param_2) {
    if (((*DAT_005503dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005503dc), iVar1 != 0)) {
      *DAT_005503e0 = DAT_005503e4;
    }
    if (DAT_005503e0 != param_2) {
      if (((*DAT_005503e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005503e8), iVar1 != 0)) {
        *DAT_005503ec = DAT_005503f0;
      }
      if (DAT_005503ec != param_2) {
        if (((*DAT_005503f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005503f4), iVar1 != 0))
        {
          *DAT_005503f8 = DAT_005503fc;
        }
        if (DAT_005503f8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

