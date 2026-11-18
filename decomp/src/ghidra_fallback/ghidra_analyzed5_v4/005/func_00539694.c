#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053974c;
extern undefined4 *DAT_00539750;
extern undefined4 DAT_00539754;
extern uint *DAT_00539758;
extern undefined4 *DAT_0053975c;
extern undefined4 DAT_00539760;
extern uint *DAT_00539764;
extern undefined4 *DAT_00539768;
extern undefined4 DAT_0053976c;

// USA 00539694 <- EU 0053966C (Ghidra, non-matching)
// GLOBAL DAT_0053974c uint *
// GLOBAL DAT_00539750 undefined4 *
// GLOBAL DAT_00539754 undefined4
// GLOBAL DAT_00539758 uint *
// GLOBAL DAT_0053975c undefined4 *
// GLOBAL DAT_00539760 undefined4
// GLOBAL DAT_00539764 uint *
// GLOBAL DAT_00539768 undefined4 *
// GLOBAL DAT_0053976c undefined4

undefined4 func_00539694(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053974c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053974c), iVar1 != 0)) {
    *DAT_00539750 = DAT_00539754;
  }
  if (DAT_00539750 != param_2) {
    if (((*DAT_00539758 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539758), iVar1 != 0)) {
      *DAT_0053975c = DAT_00539760;
    }
    if (DAT_0053975c != param_2) {
      if (((*DAT_00539764 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539764), iVar1 != 0)) {
        *DAT_00539768 = DAT_0053976c;
      }
      if (DAT_00539768 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

