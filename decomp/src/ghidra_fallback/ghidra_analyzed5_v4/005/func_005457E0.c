#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00545858;
extern undefined4 *DAT_0054585c;
extern undefined4 DAT_00545860;
extern uint *DAT_00545864;
extern undefined4 *DAT_00545868;
extern undefined4 DAT_0054586c;

// USA 005457E0 <- EU 005457B8 (Ghidra, non-matching)
// GLOBAL DAT_00545858 uint *
// GLOBAL DAT_0054585c undefined4 *
// GLOBAL DAT_00545860 undefined4
// GLOBAL DAT_00545864 uint *
// GLOBAL DAT_00545868 undefined4 *
// GLOBAL DAT_0054586c undefined4

undefined4 func_005457E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545858 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545858), iVar1 != 0)) {
    *DAT_0054585c = DAT_00545860;
  }
  if (DAT_0054585c != param_2) {
    if (((*DAT_00545864 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545864), iVar1 != 0)) {
      *DAT_00545868 = DAT_0054586c;
    }
    if (DAT_00545868 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

