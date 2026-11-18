#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005552c0;
extern undefined4 *DAT_005552c4;
extern undefined4 DAT_005552c8;
extern uint *DAT_005552cc;
extern undefined4 *DAT_005552d0;
extern undefined4 DAT_005552d4;
extern uint *DAT_005552d8;
extern undefined4 *DAT_005552dc;
extern undefined4 DAT_005552e0;
extern uint *DAT_005552e4;
extern undefined4 *DAT_005552e8;
extern undefined4 DAT_005552ec;

// USA 005551C4 <- EU 0055519C (Ghidra, non-matching)
// GLOBAL DAT_005552c0 uint *
// GLOBAL DAT_005552c4 undefined4 *
// GLOBAL DAT_005552c8 undefined4
// GLOBAL DAT_005552cc uint *
// GLOBAL DAT_005552d0 undefined4 *
// GLOBAL DAT_005552d4 undefined4
// GLOBAL DAT_005552d8 uint *
// GLOBAL DAT_005552dc undefined4 *
// GLOBAL DAT_005552e0 undefined4
// GLOBAL DAT_005552e4 uint *
// GLOBAL DAT_005552e8 undefined4 *
// GLOBAL DAT_005552ec undefined4

undefined4 func_005551C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005552c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005552c0), iVar1 != 0)) {
    *DAT_005552c4 = DAT_005552c8;
  }
  if (DAT_005552c4 != param_2) {
    if (((*DAT_005552cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005552cc), iVar1 != 0)) {
      *DAT_005552d0 = DAT_005552d4;
    }
    if (DAT_005552d0 != param_2) {
      if (((*DAT_005552d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005552d8), iVar1 != 0)) {
        *DAT_005552dc = DAT_005552e0;
      }
      if (DAT_005552dc != param_2) {
        if (((*DAT_005552e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005552e4), iVar1 != 0))
        {
          *DAT_005552e8 = DAT_005552ec;
        }
        if (DAT_005552e8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

