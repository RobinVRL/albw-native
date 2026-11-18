#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00201358;
extern undefined4 *DAT_0020135c;
extern undefined4 DAT_00201360;
extern uint *DAT_00201364;
extern undefined4 *DAT_00201368;
extern undefined4 DAT_0020136c;
extern uint *DAT_00201370;
extern undefined4 *DAT_00201374;
extern undefined4 DAT_00201378;
extern uint *DAT_0020137c;
extern undefined4 *DAT_00201380;
extern undefined4 DAT_00201384;

// USA 00201234 <- EU 00201234 (Ghidra, non-matching)
// GLOBAL DAT_00201358 uint *
// GLOBAL DAT_0020135c undefined4 *
// GLOBAL DAT_00201360 undefined4
// GLOBAL DAT_00201364 uint *
// GLOBAL DAT_00201368 undefined4 *
// GLOBAL DAT_0020136c undefined4
// GLOBAL DAT_00201370 uint *
// GLOBAL DAT_00201374 undefined4 *
// GLOBAL DAT_00201378 undefined4
// GLOBAL DAT_0020137c uint *
// GLOBAL DAT_00201380 undefined4 *
// GLOBAL DAT_00201384 undefined4

undefined4 func_00201234(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00201358 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00201358), iVar1 != 0)) {
    *DAT_0020135c = DAT_00201360;
  }
  if (DAT_0020135c != param_1) {
    if (((*DAT_00201364 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00201364), iVar1 != 0)) {
      *DAT_00201368 = DAT_0020136c;
    }
    if (DAT_00201368 != param_1) {
      if (((*DAT_00201370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00201370), iVar1 != 0)) {
        *DAT_00201374 = DAT_00201378;
      }
      if (DAT_00201374 != param_1) {
        if (((*DAT_0020137c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0020137c), iVar1 != 0))
        {
          *DAT_00201380 = DAT_00201384;
        }
        if (DAT_00201380 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

