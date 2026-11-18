#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005327e4;
extern undefined4 *DAT_005327e8;
extern undefined4 DAT_005327ec;
extern uint *DAT_005327f0;
extern undefined4 *DAT_005327f4;
extern undefined4 DAT_005327f8;
extern uint *DAT_005327fc;
extern undefined4 *DAT_00532800;
extern undefined4 DAT_00532804;
extern uint *DAT_00532808;
extern undefined4 *DAT_0053280c;
extern undefined4 DAT_00532810;

// USA 005326E8 <- EU 005326C0 (Ghidra, non-matching)
// GLOBAL DAT_005327e4 uint *
// GLOBAL DAT_005327e8 undefined4 *
// GLOBAL DAT_005327ec undefined4
// GLOBAL DAT_005327f0 uint *
// GLOBAL DAT_005327f4 undefined4 *
// GLOBAL DAT_005327f8 undefined4
// GLOBAL DAT_005327fc uint *
// GLOBAL DAT_00532800 undefined4 *
// GLOBAL DAT_00532804 undefined4
// GLOBAL DAT_00532808 uint *
// GLOBAL DAT_0053280c undefined4 *
// GLOBAL DAT_00532810 undefined4

undefined4 func_005326E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005327e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005327e4), iVar1 != 0)) {
    *DAT_005327e8 = DAT_005327ec;
  }
  if (DAT_005327e8 != param_2) {
    if (((*DAT_005327f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005327f0), iVar1 != 0)) {
      *DAT_005327f4 = DAT_005327f8;
    }
    if (DAT_005327f4 != param_2) {
      if (((*DAT_005327fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005327fc), iVar1 != 0)) {
        *DAT_00532800 = DAT_00532804;
      }
      if (DAT_00532800 != param_2) {
        if (((*DAT_00532808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532808), iVar1 != 0))
        {
          *DAT_0053280c = DAT_00532810;
        }
        if (DAT_0053280c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

