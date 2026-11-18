#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00586ef4;
extern undefined4 *DAT_00586ef8;
extern undefined4 DAT_00586efc;
extern uint *DAT_00586f00;
extern undefined4 *DAT_00586f04;
extern undefined4 DAT_00586f08;
extern uint *DAT_00586f0c;
extern undefined4 *DAT_00586f10;
extern undefined4 DAT_00586f14;

// USA 00586E3C <- EU 00586E14 (Ghidra, non-matching)
// GLOBAL DAT_00586ef4 uint *
// GLOBAL DAT_00586ef8 undefined4 *
// GLOBAL DAT_00586efc undefined4
// GLOBAL DAT_00586f00 uint *
// GLOBAL DAT_00586f04 undefined4 *
// GLOBAL DAT_00586f08 undefined4
// GLOBAL DAT_00586f0c uint *
// GLOBAL DAT_00586f10 undefined4 *
// GLOBAL DAT_00586f14 undefined4

undefined4 func_00586E3C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00586ef4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586ef4), iVar1 != 0)) {
    *DAT_00586ef8 = DAT_00586efc;
  }
  if (DAT_00586ef8 != param_2) {
    if (((*DAT_00586f00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586f00), iVar1 != 0)) {
      *DAT_00586f04 = DAT_00586f08;
    }
    if (DAT_00586f04 != param_2) {
      if (((*DAT_00586f0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586f0c), iVar1 != 0)) {
        *DAT_00586f10 = DAT_00586f14;
      }
      if (DAT_00586f10 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

