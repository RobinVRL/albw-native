#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053be38;
extern undefined4 *DAT_0053be3c;
extern undefined4 DAT_0053be40;
extern uint *DAT_0053be44;
extern undefined4 *DAT_0053be48;
extern undefined4 DAT_0053be4c;
extern uint *DAT_0053be50;
extern undefined4 *DAT_0053be54;
extern undefined4 DAT_0053be58;

// USA 0053BD80 <- EU 0053BD58 (Ghidra, non-matching)
// GLOBAL DAT_0053be38 uint *
// GLOBAL DAT_0053be3c undefined4 *
// GLOBAL DAT_0053be40 undefined4
// GLOBAL DAT_0053be44 uint *
// GLOBAL DAT_0053be48 undefined4 *
// GLOBAL DAT_0053be4c undefined4
// GLOBAL DAT_0053be50 uint *
// GLOBAL DAT_0053be54 undefined4 *
// GLOBAL DAT_0053be58 undefined4

undefined4 func_0053BD80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053be38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053be38), iVar1 != 0)) {
    *DAT_0053be3c = DAT_0053be40;
  }
  if (DAT_0053be3c != param_2) {
    if (((*DAT_0053be44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053be44), iVar1 != 0)) {
      *DAT_0053be48 = DAT_0053be4c;
    }
    if (DAT_0053be48 != param_2) {
      if (((*DAT_0053be50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053be50), iVar1 != 0)) {
        *DAT_0053be54 = DAT_0053be58;
      }
      if (DAT_0053be54 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

