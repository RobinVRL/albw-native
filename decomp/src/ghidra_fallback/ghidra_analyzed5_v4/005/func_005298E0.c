#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529998;
extern undefined4 *DAT_0052999c;
extern undefined4 DAT_005299a0;
extern uint *DAT_005299a4;
extern undefined4 *DAT_005299a8;
extern undefined4 DAT_005299ac;
extern uint *DAT_005299b0;
extern undefined4 *DAT_005299b4;
extern undefined4 DAT_005299b8;

// USA 005298E0 <- EU 005298B8 (Ghidra, non-matching)
// GLOBAL DAT_00529998 uint *
// GLOBAL DAT_0052999c undefined4 *
// GLOBAL DAT_005299a0 undefined4
// GLOBAL DAT_005299a4 uint *
// GLOBAL DAT_005299a8 undefined4 *
// GLOBAL DAT_005299ac undefined4
// GLOBAL DAT_005299b0 uint *
// GLOBAL DAT_005299b4 undefined4 *
// GLOBAL DAT_005299b8 undefined4

undefined4 func_005298E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529998), iVar1 != 0)) {
    *DAT_0052999c = DAT_005299a0;
  }
  if (DAT_0052999c != param_2) {
    if (((*DAT_005299a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005299a4), iVar1 != 0)) {
      *DAT_005299a8 = DAT_005299ac;
    }
    if (DAT_005299a8 != param_2) {
      if (((*DAT_005299b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005299b0), iVar1 != 0)) {
        *DAT_005299b4 = DAT_005299b8;
      }
      if (DAT_005299b4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

