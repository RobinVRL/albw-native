#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f74c;
extern undefined4 *DAT_0055f750;
extern undefined4 DAT_0055f754;
extern uint *DAT_0055f758;
extern undefined4 *DAT_0055f75c;
extern undefined4 DAT_0055f760;

// USA 0055F6D8 <- EU 0055F6B0 (Ghidra, non-matching)
// GLOBAL DAT_0055f74c uint *
// GLOBAL DAT_0055f750 undefined4 *
// GLOBAL DAT_0055f754 undefined4
// GLOBAL DAT_0055f758 uint *
// GLOBAL DAT_0055f75c undefined4 *
// GLOBAL DAT_0055f760 undefined4

undefined4 func_0055F6D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f74c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f74c), iVar1 != 0)) {
    *DAT_0055f750 = DAT_0055f754;
  }
  if (DAT_0055f750 != param_2) {
    if (((*DAT_0055f758 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f758), iVar1 != 0)) {
      *DAT_0055f75c = DAT_0055f760;
    }
    if (DAT_0055f75c != param_2) {
      return 0;
    }
  }
  return 1;
}

