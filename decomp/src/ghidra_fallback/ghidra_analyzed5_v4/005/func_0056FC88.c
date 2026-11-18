#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056fd40;
extern undefined4 *DAT_0056fd44;
extern undefined4 DAT_0056fd48;
extern uint *DAT_0056fd4c;
extern undefined4 *DAT_0056fd50;
extern undefined4 DAT_0056fd54;
extern uint *DAT_0056fd58;
extern undefined4 *DAT_0056fd5c;
extern undefined4 DAT_0056fd60;

// USA 0056FC88 <- EU 0056FC60 (Ghidra, non-matching)
// GLOBAL DAT_0056fd40 uint *
// GLOBAL DAT_0056fd44 undefined4 *
// GLOBAL DAT_0056fd48 undefined4
// GLOBAL DAT_0056fd4c uint *
// GLOBAL DAT_0056fd50 undefined4 *
// GLOBAL DAT_0056fd54 undefined4
// GLOBAL DAT_0056fd58 uint *
// GLOBAL DAT_0056fd5c undefined4 *
// GLOBAL DAT_0056fd60 undefined4

undefined4 func_0056FC88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056fd40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fd40), iVar1 != 0)) {
    *DAT_0056fd44 = DAT_0056fd48;
  }
  if (DAT_0056fd44 != param_2) {
    if (((*DAT_0056fd4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fd4c), iVar1 != 0)) {
      *DAT_0056fd50 = DAT_0056fd54;
    }
    if (DAT_0056fd50 != param_2) {
      if (((*DAT_0056fd58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fd58), iVar1 != 0)) {
        *DAT_0056fd5c = DAT_0056fd60;
      }
      if (DAT_0056fd5c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

