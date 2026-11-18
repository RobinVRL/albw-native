#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d434;
extern undefined4 *DAT_0052d438;
extern undefined4 DAT_0052d43c;
extern uint *DAT_0052d440;
extern undefined4 *DAT_0052d444;
extern undefined4 DAT_0052d448;
extern uint *DAT_0052d44c;
extern undefined4 *DAT_0052d450;
extern undefined4 DAT_0052d454;
extern uint *DAT_0052d458;
extern undefined4 *DAT_0052d45c;
extern undefined4 DAT_0052d460;

// USA 0052D338 <- EU 0052D310 (Ghidra, non-matching)
// GLOBAL DAT_0052d434 uint *
// GLOBAL DAT_0052d438 undefined4 *
// GLOBAL DAT_0052d43c undefined4
// GLOBAL DAT_0052d440 uint *
// GLOBAL DAT_0052d444 undefined4 *
// GLOBAL DAT_0052d448 undefined4
// GLOBAL DAT_0052d44c uint *
// GLOBAL DAT_0052d450 undefined4 *
// GLOBAL DAT_0052d454 undefined4
// GLOBAL DAT_0052d458 uint *
// GLOBAL DAT_0052d45c undefined4 *
// GLOBAL DAT_0052d460 undefined4

undefined4 func_0052D338(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d434 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d434), iVar1 != 0)) {
    *DAT_0052d438 = DAT_0052d43c;
  }
  if (DAT_0052d438 != param_2) {
    if (((*DAT_0052d440 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d440), iVar1 != 0)) {
      *DAT_0052d444 = DAT_0052d448;
    }
    if (DAT_0052d444 != param_2) {
      if (((*DAT_0052d44c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d44c), iVar1 != 0)) {
        *DAT_0052d450 = DAT_0052d454;
      }
      if (DAT_0052d450 != param_2) {
        if (((*DAT_0052d458 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d458), iVar1 != 0))
        {
          *DAT_0052d45c = DAT_0052d460;
        }
        if (DAT_0052d45c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

