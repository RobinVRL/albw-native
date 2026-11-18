#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005571c8;
extern undefined4 *DAT_005571cc;
extern undefined4 DAT_005571d0;
extern uint *DAT_005571d4;
extern undefined4 *DAT_005571d8;
extern undefined4 DAT_005571dc;

// USA 00557154 <- EU 0055712C (Ghidra, non-matching)
// GLOBAL DAT_005571c8 uint *
// GLOBAL DAT_005571cc undefined4 *
// GLOBAL DAT_005571d0 undefined4
// GLOBAL DAT_005571d4 uint *
// GLOBAL DAT_005571d8 undefined4 *
// GLOBAL DAT_005571dc undefined4

undefined4 func_00557154(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005571c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005571c8), iVar1 != 0)) {
    *DAT_005571cc = DAT_005571d0;
  }
  if (DAT_005571cc != param_2) {
    if (((*DAT_005571d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005571d4), iVar1 != 0)) {
      *DAT_005571d8 = DAT_005571dc;
    }
    if (DAT_005571d8 != param_2) {
      return 0;
    }
  }
  return 1;
}

