#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052821c;
extern undefined4 *DAT_00528220;
extern undefined4 DAT_00528224;
extern uint *DAT_00528228;
extern undefined4 *DAT_0052822c;
extern undefined4 DAT_00528230;
extern uint *DAT_00528234;
extern undefined4 *DAT_00528238;
extern undefined4 DAT_0052823c;
extern uint *DAT_00528240;
extern undefined4 *DAT_00528244;
extern undefined4 DAT_00528248;

// USA 00528120 <- EU 005280F8 (Ghidra, non-matching)
// GLOBAL DAT_0052821c uint *
// GLOBAL DAT_00528220 undefined4 *
// GLOBAL DAT_00528224 undefined4
// GLOBAL DAT_00528228 uint *
// GLOBAL DAT_0052822c undefined4 *
// GLOBAL DAT_00528230 undefined4
// GLOBAL DAT_00528234 uint *
// GLOBAL DAT_00528238 undefined4 *
// GLOBAL DAT_0052823c undefined4
// GLOBAL DAT_00528240 uint *
// GLOBAL DAT_00528244 undefined4 *
// GLOBAL DAT_00528248 undefined4

undefined4 func_00528120(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052821c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052821c), iVar1 != 0)) {
    *DAT_00528220 = DAT_00528224;
  }
  if (DAT_00528220 != param_2) {
    if (((*DAT_00528228 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528228), iVar1 != 0)) {
      *DAT_0052822c = DAT_00528230;
    }
    if (DAT_0052822c != param_2) {
      if (((*DAT_00528234 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528234), iVar1 != 0)) {
        *DAT_00528238 = DAT_0052823c;
      }
      if (DAT_00528238 != param_2) {
        if (((*DAT_00528240 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528240), iVar1 != 0))
        {
          *DAT_00528244 = DAT_00528248;
        }
        if (DAT_00528244 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

