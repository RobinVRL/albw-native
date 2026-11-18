#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062C884(undefined4 *param_1);
extern uint *DAT_0055635c;
extern undefined4 *DAT_00556360;
extern undefined4 DAT_00556364;
extern uint *DAT_00556368;
extern undefined4 *DAT_0055636c;
extern undefined4 DAT_00556370;

// USA 005562E4 <- EU 005562BC (Ghidra, non-matching)
// GLOBAL DAT_0055635c uint *
// GLOBAL DAT_00556360 undefined4 *
// GLOBAL DAT_00556364 undefined4
// GLOBAL DAT_00556368 uint *
// GLOBAL DAT_0055636c undefined4 *
// GLOBAL DAT_00556370 undefined4

undefined4 func_005562E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055635c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055635c), iVar1 != 0)) {
    *DAT_00556360 = DAT_00556364;
  }
  if (DAT_00556360 != param_2) {
    if (((*DAT_00556368 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00556368), iVar1 != 0)) {
      *DAT_0055636c = DAT_00556370;
    }
    if (DAT_0055636c != param_2) {
      uVar2 = func_0062C884(param_2);
      return uVar2;
    }
  }
  return 1;
}

