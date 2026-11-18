#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00579580;
extern undefined4 *DAT_00579584;
extern undefined4 DAT_00579588;
extern uint *DAT_0057958c;
extern undefined4 *DAT_00579590;
extern undefined4 DAT_00579594;
extern uint *DAT_00579598;
extern undefined4 *DAT_0057959c;
extern undefined4 DAT_005795a0;
extern uint *DAT_005795a4;
extern undefined4 *DAT_005795a8;
extern undefined4 DAT_005795ac;
extern uint *DAT_005795b0;
extern undefined4 *DAT_005795b4;
extern undefined4 DAT_005795b8;

// USA 00579440 <- EU 00579418 (Ghidra, non-matching)
// GLOBAL DAT_00579580 uint *
// GLOBAL DAT_00579584 undefined4 *
// GLOBAL DAT_00579588 undefined4
// GLOBAL DAT_0057958c uint *
// GLOBAL DAT_00579590 undefined4 *
// GLOBAL DAT_00579594 undefined4
// GLOBAL DAT_00579598 uint *
// GLOBAL DAT_0057959c undefined4 *
// GLOBAL DAT_005795a0 undefined4
// GLOBAL DAT_005795a4 uint *
// GLOBAL DAT_005795a8 undefined4 *
// GLOBAL DAT_005795ac undefined4
// GLOBAL DAT_005795b0 uint *
// GLOBAL DAT_005795b4 undefined4 *
// GLOBAL DAT_005795b8 undefined4

undefined4 func_00579440(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579580 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579580), iVar1 != 0)) {
    *DAT_00579584 = DAT_00579588;
  }
  if (DAT_00579584 != param_2) {
    if (((*DAT_0057958c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057958c), iVar1 != 0)) {
      *DAT_00579590 = DAT_00579594;
    }
    if (DAT_00579590 != param_2) {
      if (((*DAT_00579598 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579598), iVar1 != 0)) {
        *DAT_0057959c = DAT_005795a0;
      }
      if (DAT_0057959c != param_2) {
        if (((*DAT_005795a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005795a4), iVar1 != 0))
        {
          *DAT_005795a8 = DAT_005795ac;
        }
        if (DAT_005795a8 != param_2) {
          if (((*DAT_005795b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005795b0), iVar1 != 0)
             ) {
            *DAT_005795b4 = DAT_005795b8;
          }
          if (DAT_005795b4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

