#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0055111c;
extern undefined4 *DAT_00551120;
extern undefined4 DAT_00551124;
extern uint *DAT_00551128;
extern undefined4 *DAT_0055112c;
extern undefined4 DAT_00551130;

// USA 005510A4 <- EU 0055107C (Ghidra, non-matching)
// GLOBAL DAT_0055111c uint *
// GLOBAL DAT_00551120 undefined4 *
// GLOBAL DAT_00551124 undefined4
// GLOBAL DAT_00551128 uint *
// GLOBAL DAT_0055112c undefined4 *
// GLOBAL DAT_00551130 undefined4

undefined4 func_005510A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055111c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055111c), iVar1 != 0)) {
    *DAT_00551120 = DAT_00551124;
  }
  if (DAT_00551120 != param_2) {
    if (((*DAT_00551128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551128), iVar1 != 0)) {
      *DAT_0055112c = DAT_00551130;
    }
    if (DAT_0055112c != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

