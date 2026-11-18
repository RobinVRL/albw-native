#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053a124;
extern undefined4 *DAT_0053a128;
extern undefined4 DAT_0053a12c;
extern uint *DAT_0053a130;
extern undefined4 *DAT_0053a134;
extern undefined4 DAT_0053a138;
extern uint *DAT_0053a13c;
extern undefined4 *DAT_0053a140;
extern undefined4 DAT_0053a144;
extern uint *DAT_0053a148;
extern undefined4 *DAT_0053a14c;
extern undefined4 DAT_0053a150;

// USA 0053A028 <- EU 0053A000 (Ghidra, non-matching)
// GLOBAL DAT_0053a124 uint *
// GLOBAL DAT_0053a128 undefined4 *
// GLOBAL DAT_0053a12c undefined4
// GLOBAL DAT_0053a130 uint *
// GLOBAL DAT_0053a134 undefined4 *
// GLOBAL DAT_0053a138 undefined4
// GLOBAL DAT_0053a13c uint *
// GLOBAL DAT_0053a140 undefined4 *
// GLOBAL DAT_0053a144 undefined4
// GLOBAL DAT_0053a148 uint *
// GLOBAL DAT_0053a14c undefined4 *
// GLOBAL DAT_0053a150 undefined4

undefined4 func_0053A028(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053a124 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a124), iVar1 != 0)) {
    *DAT_0053a128 = DAT_0053a12c;
  }
  if (DAT_0053a128 != param_2) {
    if (((*DAT_0053a130 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a130), iVar1 != 0)) {
      *DAT_0053a134 = DAT_0053a138;
    }
    if (DAT_0053a134 != param_2) {
      if (((*DAT_0053a13c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a13c), iVar1 != 0)) {
        *DAT_0053a140 = DAT_0053a144;
      }
      if (DAT_0053a140 != param_2) {
        if (((*DAT_0053a148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053a148), iVar1 != 0))
        {
          *DAT_0053a14c = DAT_0053a150;
        }
        if (DAT_0053a14c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

