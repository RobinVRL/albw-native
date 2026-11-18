#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529494;
extern undefined4 *DAT_00529498;
extern undefined4 DAT_0052949c;
extern uint *DAT_005294a0;
extern undefined4 *DAT_005294a4;
extern undefined4 DAT_005294a8;
extern uint *DAT_005294ac;
extern undefined4 *DAT_005294b0;
extern undefined4 DAT_005294b4;
extern uint *DAT_005294b8;
extern undefined4 *DAT_005294bc;
extern undefined4 DAT_005294c0;

// USA 00529398 <- EU 00529370 (Ghidra, non-matching)
// GLOBAL DAT_00529494 uint *
// GLOBAL DAT_00529498 undefined4 *
// GLOBAL DAT_0052949c undefined4
// GLOBAL DAT_005294a0 uint *
// GLOBAL DAT_005294a4 undefined4 *
// GLOBAL DAT_005294a8 undefined4
// GLOBAL DAT_005294ac uint *
// GLOBAL DAT_005294b0 undefined4 *
// GLOBAL DAT_005294b4 undefined4
// GLOBAL DAT_005294b8 uint *
// GLOBAL DAT_005294bc undefined4 *
// GLOBAL DAT_005294c0 undefined4

undefined4 func_00529398(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529494 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529494), iVar1 != 0)) {
    *DAT_00529498 = DAT_0052949c;
  }
  if (DAT_00529498 != param_2) {
    if (((*DAT_005294a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005294a0), iVar1 != 0)) {
      *DAT_005294a4 = DAT_005294a8;
    }
    if (DAT_005294a4 != param_2) {
      if (((*DAT_005294ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005294ac), iVar1 != 0)) {
        *DAT_005294b0 = DAT_005294b4;
      }
      if (DAT_005294b0 != param_2) {
        if (((*DAT_005294b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005294b8), iVar1 != 0))
        {
          *DAT_005294bc = DAT_005294c0;
        }
        if (DAT_005294bc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

