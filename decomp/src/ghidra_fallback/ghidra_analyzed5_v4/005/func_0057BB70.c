#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057bcb0;
extern undefined4 *DAT_0057bcb4;
extern undefined4 DAT_0057bcb8;
extern uint *DAT_0057bcbc;
extern undefined4 *DAT_0057bcc0;
extern undefined4 DAT_0057bcc4;
extern uint *DAT_0057bcc8;
extern undefined4 *DAT_0057bccc;
extern undefined4 DAT_0057bcd0;
extern uint *DAT_0057bcd4;
extern undefined4 *DAT_0057bcd8;
extern undefined4 DAT_0057bcdc;
extern uint *DAT_0057bce0;
extern undefined4 *DAT_0057bce4;
extern undefined4 DAT_0057bce8;

// USA 0057BB70 <- EU 0057BB48 (Ghidra, non-matching)
// GLOBAL DAT_0057bcb0 uint *
// GLOBAL DAT_0057bcb4 undefined4 *
// GLOBAL DAT_0057bcb8 undefined4
// GLOBAL DAT_0057bcbc uint *
// GLOBAL DAT_0057bcc0 undefined4 *
// GLOBAL DAT_0057bcc4 undefined4
// GLOBAL DAT_0057bcc8 uint *
// GLOBAL DAT_0057bccc undefined4 *
// GLOBAL DAT_0057bcd0 undefined4
// GLOBAL DAT_0057bcd4 uint *
// GLOBAL DAT_0057bcd8 undefined4 *
// GLOBAL DAT_0057bcdc undefined4
// GLOBAL DAT_0057bce0 uint *
// GLOBAL DAT_0057bce4 undefined4 *
// GLOBAL DAT_0057bce8 undefined4

undefined4 func_0057BB70(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057bcb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bcb0), iVar1 != 0)) {
    *DAT_0057bcb4 = DAT_0057bcb8;
  }
  if (DAT_0057bcb4 != param_2) {
    if (((*DAT_0057bcbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bcbc), iVar1 != 0)) {
      *DAT_0057bcc0 = DAT_0057bcc4;
    }
    if (DAT_0057bcc0 != param_2) {
      if (((*DAT_0057bcc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bcc8), iVar1 != 0)) {
        *DAT_0057bccc = DAT_0057bcd0;
      }
      if (DAT_0057bccc != param_2) {
        if (((*DAT_0057bcd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bcd4), iVar1 != 0))
        {
          *DAT_0057bcd8 = DAT_0057bcdc;
        }
        if (DAT_0057bcd8 != param_2) {
          if (((*DAT_0057bce0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bce0), iVar1 != 0)
             ) {
            *DAT_0057bce4 = DAT_0057bce8;
          }
          if (DAT_0057bce4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

