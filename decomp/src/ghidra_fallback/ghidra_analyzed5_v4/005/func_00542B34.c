#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00542c30;
extern undefined4 *DAT_00542c34;
extern undefined4 DAT_00542c38;
extern uint *DAT_00542c3c;
extern undefined4 *DAT_00542c40;
extern undefined4 DAT_00542c44;
extern uint *DAT_00542c48;
extern undefined4 *DAT_00542c4c;
extern undefined4 DAT_00542c50;
extern uint *DAT_00542c54;
extern undefined4 *DAT_00542c58;
extern undefined4 DAT_00542c5c;

// USA 00542B34 <- EU 00542B0C (Ghidra, non-matching)
// GLOBAL DAT_00542c30 uint *
// GLOBAL DAT_00542c34 undefined4 *
// GLOBAL DAT_00542c38 undefined4
// GLOBAL DAT_00542c3c uint *
// GLOBAL DAT_00542c40 undefined4 *
// GLOBAL DAT_00542c44 undefined4
// GLOBAL DAT_00542c48 uint *
// GLOBAL DAT_00542c4c undefined4 *
// GLOBAL DAT_00542c50 undefined4
// GLOBAL DAT_00542c54 uint *
// GLOBAL DAT_00542c58 undefined4 *
// GLOBAL DAT_00542c5c undefined4

undefined4 func_00542B34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542c30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542c30), iVar1 != 0)) {
    *DAT_00542c34 = DAT_00542c38;
  }
  if (DAT_00542c34 != param_2) {
    if (((*DAT_00542c3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542c3c), iVar1 != 0)) {
      *DAT_00542c40 = DAT_00542c44;
    }
    if (DAT_00542c40 != param_2) {
      if (((*DAT_00542c48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542c48), iVar1 != 0)) {
        *DAT_00542c4c = DAT_00542c50;
      }
      if (DAT_00542c4c != param_2) {
        if (((*DAT_00542c54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542c54), iVar1 != 0))
        {
          *DAT_00542c58 = DAT_00542c5c;
        }
        if (DAT_00542c58 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

