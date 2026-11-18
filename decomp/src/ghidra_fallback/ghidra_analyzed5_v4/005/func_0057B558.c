#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057b5d0;
extern undefined4 *DAT_0057b5d4;
extern undefined4 DAT_0057b5d8;
extern uint *DAT_0057b5dc;
extern undefined4 *DAT_0057b5e0;
extern undefined4 DAT_0057b5e4;

// USA 0057B558 <- EU 0057B530 (Ghidra, non-matching)
// GLOBAL DAT_0057b5d0 uint *
// GLOBAL DAT_0057b5d4 undefined4 *
// GLOBAL DAT_0057b5d8 undefined4
// GLOBAL DAT_0057b5dc uint *
// GLOBAL DAT_0057b5e0 undefined4 *
// GLOBAL DAT_0057b5e4 undefined4

undefined4 func_0057B558(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057b5d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b5d0), iVar1 != 0)) {
    *DAT_0057b5d4 = DAT_0057b5d8;
  }
  if (DAT_0057b5d4 != param_2) {
    if (((*DAT_0057b5dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b5dc), iVar1 != 0)) {
      *DAT_0057b5e0 = DAT_0057b5e4;
    }
    if (DAT_0057b5e0 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

