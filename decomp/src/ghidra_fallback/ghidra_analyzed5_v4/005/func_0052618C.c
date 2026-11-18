#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00526244;
extern undefined4 *DAT_00526248;
extern undefined4 DAT_0052624c;
extern uint *DAT_00526250;
extern undefined4 *DAT_00526254;
extern undefined4 DAT_00526258;
extern uint *DAT_0052625c;
extern undefined4 *DAT_00526260;
extern undefined4 DAT_00526264;

// USA 0052618C <- EU 00526164 (Ghidra, non-matching)
// GLOBAL DAT_00526244 uint *
// GLOBAL DAT_00526248 undefined4 *
// GLOBAL DAT_0052624c undefined4
// GLOBAL DAT_00526250 uint *
// GLOBAL DAT_00526254 undefined4 *
// GLOBAL DAT_00526258 undefined4
// GLOBAL DAT_0052625c uint *
// GLOBAL DAT_00526260 undefined4 *
// GLOBAL DAT_00526264 undefined4

undefined4 func_0052618C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00526244 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526244), iVar1 != 0)) {
    *DAT_00526248 = DAT_0052624c;
  }
  if (DAT_00526248 != param_2) {
    if (((*DAT_00526250 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526250), iVar1 != 0)) {
      *DAT_00526254 = DAT_00526258;
    }
    if (DAT_00526254 != param_2) {
      if (((*DAT_0052625c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052625c), iVar1 != 0)) {
        *DAT_00526260 = DAT_00526264;
      }
      if (DAT_00526260 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

