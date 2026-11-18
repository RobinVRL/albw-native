#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e55c;
extern undefined4 *DAT_0068e560;
extern undefined4 DAT_0068e564;
extern uint *DAT_0068e568;
extern undefined4 *DAT_0068e56c;
extern undefined4 DAT_0068e570;

// USA 0068E4E4 <- EU 0068E4BC (Ghidra, non-matching)
// GLOBAL DAT_0068e55c uint *
// GLOBAL DAT_0068e560 undefined4 *
// GLOBAL DAT_0068e564 undefined4
// GLOBAL DAT_0068e568 uint *
// GLOBAL DAT_0068e56c undefined4 *
// GLOBAL DAT_0068e570 undefined4

undefined4 func_0068E4E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e55c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e55c), iVar1 != 0)) {
    *DAT_0068e560 = DAT_0068e564;
  }
  if (DAT_0068e560 != param_2) {
    if (((*DAT_0068e568 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e568), iVar1 != 0)) {
      *DAT_0068e56c = DAT_0068e570;
    }
    if (DAT_0068e56c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

