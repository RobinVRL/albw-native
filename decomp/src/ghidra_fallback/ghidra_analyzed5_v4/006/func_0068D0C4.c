#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d13c;
extern undefined4 *DAT_0068d140;
extern undefined4 DAT_0068d144;
extern uint *DAT_0068d148;
extern undefined4 *DAT_0068d14c;
extern undefined4 DAT_0068d150;

// USA 0068D0C4 <- EU 0068D09C (Ghidra, non-matching)
// GLOBAL DAT_0068d13c uint *
// GLOBAL DAT_0068d140 undefined4 *
// GLOBAL DAT_0068d144 undefined4
// GLOBAL DAT_0068d148 uint *
// GLOBAL DAT_0068d14c undefined4 *
// GLOBAL DAT_0068d150 undefined4

undefined4 func_0068D0C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d13c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d13c), iVar1 != 0)) {
    *DAT_0068d140 = DAT_0068d144;
  }
  if (DAT_0068d140 != param_2) {
    if (((*DAT_0068d148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d148), iVar1 != 0)) {
      *DAT_0068d14c = DAT_0068d150;
    }
    if (DAT_0068d14c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

