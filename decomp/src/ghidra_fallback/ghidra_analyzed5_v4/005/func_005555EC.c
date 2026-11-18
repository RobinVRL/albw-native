#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_005556a8;
extern undefined4 *DAT_005556ac;
extern undefined4 DAT_005556b0;
extern uint *DAT_005556b4;
extern undefined4 *DAT_005556b8;
extern undefined4 DAT_005556bc;
extern uint *DAT_005556c0;
extern undefined4 *DAT_005556c4;
extern undefined4 DAT_005556c8;

// USA 005555EC <- EU 005555C4 (Ghidra, non-matching)
// GLOBAL DAT_005556a8 uint *
// GLOBAL DAT_005556ac undefined4 *
// GLOBAL DAT_005556b0 undefined4
// GLOBAL DAT_005556b4 uint *
// GLOBAL DAT_005556b8 undefined4 *
// GLOBAL DAT_005556bc undefined4
// GLOBAL DAT_005556c0 uint *
// GLOBAL DAT_005556c4 undefined4 *
// GLOBAL DAT_005556c8 undefined4

undefined4 func_005555EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005556a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005556a8), iVar1 != 0)) {
    *DAT_005556ac = DAT_005556b0;
  }
  if (DAT_005556ac != param_2) {
    if (((*DAT_005556b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005556b4), iVar1 != 0)) {
      *DAT_005556b8 = DAT_005556bc;
    }
    if (DAT_005556b8 != param_2) {
      if (((*DAT_005556c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005556c0), iVar1 != 0)) {
        *DAT_005556c4 = DAT_005556c8;
      }
      if (DAT_005556c4 != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

