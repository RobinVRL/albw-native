#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0022ef00;
extern undefined4 *DAT_0022ef04;
extern undefined4 DAT_0022ef08;
extern uint *DAT_0022ef0c;
extern undefined4 *DAT_0022ef10;
extern undefined4 DAT_0022ef14;
extern uint *DAT_0022ef18;
extern undefined4 *DAT_0022ef1c;
extern undefined4 DAT_0022ef20;
extern uint *DAT_0022ef24;
extern undefined4 *DAT_0022ef28;
extern undefined4 DAT_0022ef2c;

// USA 0022EDDC <- EU 0022EDDC (Ghidra, non-matching)
// GLOBAL DAT_0022ef00 uint *
// GLOBAL DAT_0022ef04 undefined4 *
// GLOBAL DAT_0022ef08 undefined4
// GLOBAL DAT_0022ef0c uint *
// GLOBAL DAT_0022ef10 undefined4 *
// GLOBAL DAT_0022ef14 undefined4
// GLOBAL DAT_0022ef18 uint *
// GLOBAL DAT_0022ef1c undefined4 *
// GLOBAL DAT_0022ef20 undefined4
// GLOBAL DAT_0022ef24 uint *
// GLOBAL DAT_0022ef28 undefined4 *
// GLOBAL DAT_0022ef2c undefined4

undefined4 func_0022EDDC(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0022ef00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0022ef00), iVar1 != 0)) {
    *DAT_0022ef04 = DAT_0022ef08;
  }
  if (DAT_0022ef04 != param_1) {
    if (((*DAT_0022ef0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0022ef0c), iVar1 != 0)) {
      *DAT_0022ef10 = DAT_0022ef14;
    }
    if (DAT_0022ef10 != param_1) {
      if (((*DAT_0022ef18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0022ef18), iVar1 != 0)) {
        *DAT_0022ef1c = DAT_0022ef20;
      }
      if (DAT_0022ef1c != param_1) {
        if (((*DAT_0022ef24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0022ef24), iVar1 != 0))
        {
          *DAT_0022ef28 = DAT_0022ef2c;
        }
        if (DAT_0022ef28 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

