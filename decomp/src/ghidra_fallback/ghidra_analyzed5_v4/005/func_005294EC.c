#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005295e8;
extern undefined4 *DAT_005295ec;
extern undefined4 DAT_005295f0;
extern uint *DAT_005295f4;
extern undefined4 *DAT_005295f8;
extern undefined4 DAT_005295fc;
extern uint *DAT_00529600;
extern undefined4 *DAT_00529604;
extern undefined4 DAT_00529608;
extern uint *DAT_0052960c;
extern undefined4 *DAT_00529610;
extern undefined4 DAT_00529614;

// USA 005294EC <- EU 005294C4 (Ghidra, non-matching)
// GLOBAL DAT_005295e8 uint *
// GLOBAL DAT_005295ec undefined4 *
// GLOBAL DAT_005295f0 undefined4
// GLOBAL DAT_005295f4 uint *
// GLOBAL DAT_005295f8 undefined4 *
// GLOBAL DAT_005295fc undefined4
// GLOBAL DAT_00529600 uint *
// GLOBAL DAT_00529604 undefined4 *
// GLOBAL DAT_00529608 undefined4
// GLOBAL DAT_0052960c uint *
// GLOBAL DAT_00529610 undefined4 *
// GLOBAL DAT_00529614 undefined4

undefined4 func_005294EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005295e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005295e8), iVar1 != 0)) {
    *DAT_005295ec = DAT_005295f0;
  }
  if (DAT_005295ec != param_2) {
    if (((*DAT_005295f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005295f4), iVar1 != 0)) {
      *DAT_005295f8 = DAT_005295fc;
    }
    if (DAT_005295f8 != param_2) {
      if (((*DAT_00529600 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529600), iVar1 != 0)) {
        *DAT_00529604 = DAT_00529608;
      }
      if (DAT_00529604 != param_2) {
        if (((*DAT_0052960c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052960c), iVar1 != 0))
        {
          *DAT_00529610 = DAT_00529614;
        }
        if (DAT_00529610 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

