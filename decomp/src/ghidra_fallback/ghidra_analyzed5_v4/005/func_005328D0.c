#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00532944;
extern undefined4 *DAT_00532948;
extern undefined4 DAT_0053294c;
extern uint *DAT_00532950;
extern undefined4 *DAT_00532954;
extern undefined4 DAT_00532958;

// USA 005328D0 <- EU 005328A8 (Ghidra, non-matching)
// GLOBAL DAT_00532944 uint *
// GLOBAL DAT_00532948 undefined4 *
// GLOBAL DAT_0053294c undefined4
// GLOBAL DAT_00532950 uint *
// GLOBAL DAT_00532954 undefined4 *
// GLOBAL DAT_00532958 undefined4

undefined4 func_005328D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00532944 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532944), iVar1 != 0)) {
    *DAT_00532948 = DAT_0053294c;
  }
  if (DAT_00532948 != param_2) {
    if (((*DAT_00532950 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532950), iVar1 != 0)) {
      *DAT_00532954 = DAT_00532958;
    }
    if (DAT_00532954 != param_2) {
      return 0;
    }
  }
  return 1;
}

