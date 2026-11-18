#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054159c;
extern undefined4 *DAT_005415a0;
extern undefined4 DAT_005415a4;
extern uint *DAT_005415a8;
extern undefined4 *DAT_005415ac;
extern undefined4 DAT_005415b0;
extern uint *DAT_005415b4;
extern undefined4 *DAT_005415b8;
extern undefined4 DAT_005415bc;
extern uint *DAT_005415c0;
extern undefined4 *DAT_005415c4;
extern undefined4 DAT_005415c8;

// USA 005414A0 <- EU 00541478 (Ghidra, non-matching)
// GLOBAL DAT_0054159c uint *
// GLOBAL DAT_005415a0 undefined4 *
// GLOBAL DAT_005415a4 undefined4
// GLOBAL DAT_005415a8 uint *
// GLOBAL DAT_005415ac undefined4 *
// GLOBAL DAT_005415b0 undefined4
// GLOBAL DAT_005415b4 uint *
// GLOBAL DAT_005415b8 undefined4 *
// GLOBAL DAT_005415bc undefined4
// GLOBAL DAT_005415c0 uint *
// GLOBAL DAT_005415c4 undefined4 *
// GLOBAL DAT_005415c8 undefined4

undefined4 func_005414A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054159c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054159c), iVar1 != 0)) {
    *DAT_005415a0 = DAT_005415a4;
  }
  if (DAT_005415a0 != param_2) {
    if (((*DAT_005415a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005415a8), iVar1 != 0)) {
      *DAT_005415ac = DAT_005415b0;
    }
    if (DAT_005415ac != param_2) {
      if (((*DAT_005415b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005415b4), iVar1 != 0)) {
        *DAT_005415b8 = DAT_005415bc;
      }
      if (DAT_005415b8 != param_2) {
        if (((*DAT_005415c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005415c0), iVar1 != 0))
        {
          *DAT_005415c4 = DAT_005415c8;
        }
        if (DAT_005415c4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

