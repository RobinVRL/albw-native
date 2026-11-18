#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c4f8;
extern undefined4 *DAT_0054c4fc;
extern undefined4 DAT_0054c500;
extern uint *DAT_0054c504;
extern undefined4 *DAT_0054c508;
extern undefined4 DAT_0054c50c;
extern uint *DAT_0054c510;
extern undefined4 *DAT_0054c514;
extern undefined4 DAT_0054c518;

// USA 0054C440 <- EU 0054C418 (Ghidra, non-matching)
// GLOBAL DAT_0054c4f8 uint *
// GLOBAL DAT_0054c4fc undefined4 *
// GLOBAL DAT_0054c500 undefined4
// GLOBAL DAT_0054c504 uint *
// GLOBAL DAT_0054c508 undefined4 *
// GLOBAL DAT_0054c50c undefined4
// GLOBAL DAT_0054c510 uint *
// GLOBAL DAT_0054c514 undefined4 *
// GLOBAL DAT_0054c518 undefined4

undefined4 func_0054C440(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c4f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c4f8), iVar1 != 0)) {
    *DAT_0054c4fc = DAT_0054c500;
  }
  if (DAT_0054c4fc != param_2) {
    if (((*DAT_0054c504 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c504), iVar1 != 0)) {
      *DAT_0054c508 = DAT_0054c50c;
    }
    if (DAT_0054c508 != param_2) {
      if (((*DAT_0054c510 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c510), iVar1 != 0)) {
        *DAT_0054c514 = DAT_0054c518;
      }
      if (DAT_0054c514 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

