#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00523ee4;
extern undefined4 *DAT_00523ee8;
extern undefined4 DAT_00523eec;
extern uint *DAT_00523ef0;
extern undefined4 *DAT_00523ef4;
extern undefined4 DAT_00523ef8;
extern uint *DAT_00523efc;
extern undefined4 *DAT_00523f00;
extern undefined4 DAT_00523f04;

// USA 00523E2C <- EU 00523E04 (Ghidra, non-matching)
// GLOBAL DAT_00523ee4 uint *
// GLOBAL DAT_00523ee8 undefined4 *
// GLOBAL DAT_00523eec undefined4
// GLOBAL DAT_00523ef0 uint *
// GLOBAL DAT_00523ef4 undefined4 *
// GLOBAL DAT_00523ef8 undefined4
// GLOBAL DAT_00523efc uint *
// GLOBAL DAT_00523f00 undefined4 *
// GLOBAL DAT_00523f04 undefined4

undefined4 func_00523E2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00523ee4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523ee4), iVar1 != 0)) {
    *DAT_00523ee8 = DAT_00523eec;
  }
  if (DAT_00523ee8 != param_2) {
    if (((*DAT_00523ef0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523ef0), iVar1 != 0)) {
      *DAT_00523ef4 = DAT_00523ef8;
    }
    if (DAT_00523ef4 != param_2) {
      if (((*DAT_00523efc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523efc), iVar1 != 0)) {
        *DAT_00523f00 = DAT_00523f04;
      }
      if (DAT_00523f00 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

