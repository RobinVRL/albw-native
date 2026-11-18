#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054f354;
extern undefined4 *DAT_0054f358;
extern undefined4 DAT_0054f35c;
extern uint *DAT_0054f360;
extern undefined4 *DAT_0054f364;
extern undefined4 DAT_0054f368;
extern uint *DAT_0054f36c;
extern undefined4 *DAT_0054f370;
extern undefined4 DAT_0054f374;
extern uint *DAT_0054f378;
extern undefined4 *DAT_0054f37c;
extern undefined4 DAT_0054f380;

// USA 0054F258 <- EU 0054F230 (Ghidra, non-matching)
// GLOBAL DAT_0054f354 uint *
// GLOBAL DAT_0054f358 undefined4 *
// GLOBAL DAT_0054f35c undefined4
// GLOBAL DAT_0054f360 uint *
// GLOBAL DAT_0054f364 undefined4 *
// GLOBAL DAT_0054f368 undefined4
// GLOBAL DAT_0054f36c uint *
// GLOBAL DAT_0054f370 undefined4 *
// GLOBAL DAT_0054f374 undefined4
// GLOBAL DAT_0054f378 uint *
// GLOBAL DAT_0054f37c undefined4 *
// GLOBAL DAT_0054f380 undefined4

undefined4 func_0054F258(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054f354 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f354), iVar1 != 0)) {
    *DAT_0054f358 = DAT_0054f35c;
  }
  if (DAT_0054f358 != param_2) {
    if (((*DAT_0054f360 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f360), iVar1 != 0)) {
      *DAT_0054f364 = DAT_0054f368;
    }
    if (DAT_0054f364 != param_2) {
      if (((*DAT_0054f36c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f36c), iVar1 != 0)) {
        *DAT_0054f370 = DAT_0054f374;
      }
      if (DAT_0054f370 != param_2) {
        if (((*DAT_0054f378 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f378), iVar1 != 0))
        {
          *DAT_0054f37c = DAT_0054f380;
        }
        if (DAT_0054f37c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

