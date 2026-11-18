#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051d6f4;
extern undefined4 *DAT_0051d6f8;
extern undefined4 DAT_0051d6fc;
extern uint *DAT_0051d700;
extern undefined4 *DAT_0051d704;
extern undefined4 DAT_0051d708;
extern uint *DAT_0051d70c;
extern undefined4 *DAT_0051d710;
extern undefined4 DAT_0051d714;
extern uint *DAT_0051d718;
extern undefined4 *DAT_0051d71c;
extern undefined4 DAT_0051d720;

// USA 0051D5F8 <- EU 0051D5D0 (Ghidra, non-matching)
// GLOBAL DAT_0051d6f4 uint *
// GLOBAL DAT_0051d6f8 undefined4 *
// GLOBAL DAT_0051d6fc undefined4
// GLOBAL DAT_0051d700 uint *
// GLOBAL DAT_0051d704 undefined4 *
// GLOBAL DAT_0051d708 undefined4
// GLOBAL DAT_0051d70c uint *
// GLOBAL DAT_0051d710 undefined4 *
// GLOBAL DAT_0051d714 undefined4
// GLOBAL DAT_0051d718 uint *
// GLOBAL DAT_0051d71c undefined4 *
// GLOBAL DAT_0051d720 undefined4

undefined4 func_0051D5F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051d6f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d6f4), iVar1 != 0)) {
    *DAT_0051d6f8 = DAT_0051d6fc;
  }
  if (DAT_0051d6f8 != param_2) {
    if (((*DAT_0051d700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d700), iVar1 != 0)) {
      *DAT_0051d704 = DAT_0051d708;
    }
    if (DAT_0051d704 != param_2) {
      if (((*DAT_0051d70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d70c), iVar1 != 0)) {
        *DAT_0051d710 = DAT_0051d714;
      }
      if (DAT_0051d710 != param_2) {
        if (((*DAT_0051d718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d718), iVar1 != 0))
        {
          *DAT_0051d71c = DAT_0051d720;
        }
        if (DAT_0051d71c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

