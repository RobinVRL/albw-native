#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00527644;
extern undefined4 *DAT_00527648;
extern undefined4 DAT_0052764c;
extern uint *DAT_00527650;
extern undefined4 *DAT_00527654;
extern undefined4 DAT_00527658;
extern uint *DAT_0052765c;
extern undefined4 *DAT_00527660;
extern undefined4 DAT_00527664;

// USA 0052758C <- EU 00527564 (Ghidra, non-matching)
// GLOBAL DAT_00527644 uint *
// GLOBAL DAT_00527648 undefined4 *
// GLOBAL DAT_0052764c undefined4
// GLOBAL DAT_00527650 uint *
// GLOBAL DAT_00527654 undefined4 *
// GLOBAL DAT_00527658 undefined4
// GLOBAL DAT_0052765c uint *
// GLOBAL DAT_00527660 undefined4 *
// GLOBAL DAT_00527664 undefined4

undefined4 func_0052758C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00527644 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527644), iVar1 != 0)) {
    *DAT_00527648 = DAT_0052764c;
  }
  if (DAT_00527648 != param_2) {
    if (((*DAT_00527650 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00527650), iVar1 != 0)) {
      *DAT_00527654 = DAT_00527658;
    }
    if (DAT_00527654 != param_2) {
      if (((*DAT_0052765c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052765c), iVar1 != 0)) {
        *DAT_00527660 = DAT_00527664;
      }
      if (DAT_00527660 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

