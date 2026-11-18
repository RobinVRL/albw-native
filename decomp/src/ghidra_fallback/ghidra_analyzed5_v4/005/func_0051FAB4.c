#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0051fb2c;
extern undefined4 *DAT_0051fb30;
extern undefined4 DAT_0051fb34;
extern uint *DAT_0051fb38;
extern undefined4 *DAT_0051fb3c;
extern undefined4 DAT_0051fb40;

// USA 0051FAB4 <- EU 0051FA8C (Ghidra, non-matching)
// GLOBAL DAT_0051fb2c uint *
// GLOBAL DAT_0051fb30 undefined4 *
// GLOBAL DAT_0051fb34 undefined4
// GLOBAL DAT_0051fb38 uint *
// GLOBAL DAT_0051fb3c undefined4 *
// GLOBAL DAT_0051fb40 undefined4

undefined4 func_0051FAB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051fb2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fb2c), iVar1 != 0)) {
    *DAT_0051fb30 = DAT_0051fb34;
  }
  if (DAT_0051fb30 != param_2) {
    if (((*DAT_0051fb38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fb38), iVar1 != 0)) {
      *DAT_0051fb3c = DAT_0051fb40;
    }
    if (DAT_0051fb3c != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

