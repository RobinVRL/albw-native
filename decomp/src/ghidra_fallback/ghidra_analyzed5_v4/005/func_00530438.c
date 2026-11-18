#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00530578;
extern undefined4 *DAT_0053057c;
extern undefined4 DAT_00530580;
extern uint *DAT_00530584;
extern undefined4 *DAT_00530588;
extern undefined4 DAT_0053058c;
extern uint *DAT_00530590;
extern undefined4 *DAT_00530594;
extern undefined4 DAT_00530598;
extern uint *DAT_0053059c;
extern undefined4 *DAT_005305a0;
extern undefined4 DAT_005305a4;
extern uint *DAT_005305a8;
extern undefined4 *DAT_005305ac;
extern undefined4 DAT_005305b0;

// USA 00530438 <- EU 00530410 (Ghidra, non-matching)
// GLOBAL DAT_00530578 uint *
// GLOBAL DAT_0053057c undefined4 *
// GLOBAL DAT_00530580 undefined4
// GLOBAL DAT_00530584 uint *
// GLOBAL DAT_00530588 undefined4 *
// GLOBAL DAT_0053058c undefined4
// GLOBAL DAT_00530590 uint *
// GLOBAL DAT_00530594 undefined4 *
// GLOBAL DAT_00530598 undefined4
// GLOBAL DAT_0053059c uint *
// GLOBAL DAT_005305a0 undefined4 *
// GLOBAL DAT_005305a4 undefined4
// GLOBAL DAT_005305a8 uint *
// GLOBAL DAT_005305ac undefined4 *
// GLOBAL DAT_005305b0 undefined4

undefined4 func_00530438(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00530578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530578), iVar1 != 0)) {
    *DAT_0053057c = DAT_00530580;
  }
  if (DAT_0053057c != param_2) {
    if (((*DAT_00530584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530584), iVar1 != 0)) {
      *DAT_00530588 = DAT_0053058c;
    }
    if (DAT_00530588 != param_2) {
      if (((*DAT_00530590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00530590), iVar1 != 0)) {
        *DAT_00530594 = DAT_00530598;
      }
      if (DAT_00530594 != param_2) {
        if (((*DAT_0053059c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053059c), iVar1 != 0))
        {
          *DAT_005305a0 = DAT_005305a4;
        }
        if (DAT_005305a0 != param_2) {
          if (((*DAT_005305a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005305a8), iVar1 != 0)
             ) {
            *DAT_005305ac = DAT_005305b0;
          }
          if (DAT_005305ac != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

