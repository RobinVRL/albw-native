#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053df78;
extern undefined4 *DAT_0053df7c;
extern undefined4 DAT_0053df80;
extern uint *DAT_0053df84;
extern undefined4 *DAT_0053df88;
extern undefined4 DAT_0053df8c;
extern uint *DAT_0053df90;
extern undefined4 *DAT_0053df94;
extern undefined4 DAT_0053df98;

// USA 0053DEC0 <- EU 0053DE98 (Ghidra, non-matching)
// GLOBAL DAT_0053df78 uint *
// GLOBAL DAT_0053df7c undefined4 *
// GLOBAL DAT_0053df80 undefined4
// GLOBAL DAT_0053df84 uint *
// GLOBAL DAT_0053df88 undefined4 *
// GLOBAL DAT_0053df8c undefined4
// GLOBAL DAT_0053df90 uint *
// GLOBAL DAT_0053df94 undefined4 *
// GLOBAL DAT_0053df98 undefined4

undefined4 func_0053DEC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053df78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053df78), iVar1 != 0)) {
    *DAT_0053df7c = DAT_0053df80;
  }
  if (DAT_0053df7c != param_2) {
    if (((*DAT_0053df84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053df84), iVar1 != 0)) {
      *DAT_0053df88 = DAT_0053df8c;
    }
    if (DAT_0053df88 != param_2) {
      if (((*DAT_0053df90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053df90), iVar1 != 0)) {
        *DAT_0053df94 = DAT_0053df98;
      }
      if (DAT_0053df94 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

