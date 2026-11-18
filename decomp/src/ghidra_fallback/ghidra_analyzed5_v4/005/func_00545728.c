#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062C884(undefined4 *param_1);
extern uint *DAT_005457a0;
extern undefined4 *DAT_005457a4;
extern undefined4 DAT_005457a8;
extern uint *DAT_005457ac;
extern undefined4 *DAT_005457b0;
extern undefined4 DAT_005457b4;

// USA 00545728 <- EU 00545700 (Ghidra, non-matching)
// GLOBAL DAT_005457a0 uint *
// GLOBAL DAT_005457a4 undefined4 *
// GLOBAL DAT_005457a8 undefined4
// GLOBAL DAT_005457ac uint *
// GLOBAL DAT_005457b0 undefined4 *
// GLOBAL DAT_005457b4 undefined4

undefined4 func_00545728(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005457a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005457a0), iVar1 != 0)) {
    *DAT_005457a4 = DAT_005457a8;
  }
  if (DAT_005457a4 != param_2) {
    if (((*DAT_005457ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005457ac), iVar1 != 0)) {
      *DAT_005457b0 = DAT_005457b4;
    }
    if (DAT_005457b0 != param_2) {
      uVar2 = func_0062C884(param_2);
      return uVar2;
    }
  }
  return 1;
}

