#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00540e38;
extern undefined4 *DAT_00540e3c;
extern undefined4 DAT_00540e40;
extern uint *DAT_00540e44;
extern undefined4 *DAT_00540e48;
extern undefined4 DAT_00540e4c;

// USA 00540DC4 <- EU 00540D9C (Ghidra, non-matching)
// GLOBAL DAT_00540e38 uint *
// GLOBAL DAT_00540e3c undefined4 *
// GLOBAL DAT_00540e40 undefined4
// GLOBAL DAT_00540e44 uint *
// GLOBAL DAT_00540e48 undefined4 *
// GLOBAL DAT_00540e4c undefined4

undefined4 func_00540DC4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00540e38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540e38), iVar1 != 0)) {
    *DAT_00540e3c = DAT_00540e40;
  }
  if (DAT_00540e3c != param_2) {
    if (((*DAT_00540e44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540e44), iVar1 != 0)) {
      *DAT_00540e48 = DAT_00540e4c;
    }
    if (DAT_00540e48 != param_2) {
      return 0;
    }
  }
  return 1;
}

