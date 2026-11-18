#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bcc0;
extern undefined4 *DAT_0055bcc4;
extern undefined4 DAT_0055bcc8;
extern uint *DAT_0055bccc;
extern undefined4 *DAT_0055bcd0;
extern undefined4 DAT_0055bcd4;
extern uint *DAT_0055bcd8;
extern undefined4 *DAT_0055bcdc;
extern undefined4 DAT_0055bce0;

// USA 0055BC08 <- EU 0055BBE0 (Ghidra, non-matching)
// GLOBAL DAT_0055bcc0 uint *
// GLOBAL DAT_0055bcc4 undefined4 *
// GLOBAL DAT_0055bcc8 undefined4
// GLOBAL DAT_0055bccc uint *
// GLOBAL DAT_0055bcd0 undefined4 *
// GLOBAL DAT_0055bcd4 undefined4
// GLOBAL DAT_0055bcd8 uint *
// GLOBAL DAT_0055bcdc undefined4 *
// GLOBAL DAT_0055bce0 undefined4

undefined4 func_0055BC08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bcc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bcc0), iVar1 != 0)) {
    *DAT_0055bcc4 = DAT_0055bcc8;
  }
  if (DAT_0055bcc4 != param_2) {
    if (((*DAT_0055bccc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bccc), iVar1 != 0)) {
      *DAT_0055bcd0 = DAT_0055bcd4;
    }
    if (DAT_0055bcd0 != param_2) {
      if (((*DAT_0055bcd8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bcd8), iVar1 != 0)) {
        *DAT_0055bcdc = DAT_0055bce0;
      }
      if (DAT_0055bcdc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

