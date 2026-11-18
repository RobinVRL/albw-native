#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055eff4;
extern undefined4 *DAT_0055eff8;
extern undefined4 DAT_0055effc;
extern uint *DAT_0055f000;
extern undefined4 *DAT_0055f004;
extern undefined4 DAT_0055f008;
extern uint *DAT_0055f00c;
extern undefined4 *DAT_0055f010;
extern undefined4 DAT_0055f014;

// USA 0055EF3C <- EU 0055EF14 (Ghidra, non-matching)
// GLOBAL DAT_0055eff4 uint *
// GLOBAL DAT_0055eff8 undefined4 *
// GLOBAL DAT_0055effc undefined4
// GLOBAL DAT_0055f000 uint *
// GLOBAL DAT_0055f004 undefined4 *
// GLOBAL DAT_0055f008 undefined4
// GLOBAL DAT_0055f00c uint *
// GLOBAL DAT_0055f010 undefined4 *
// GLOBAL DAT_0055f014 undefined4

undefined4 func_0055EF3C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055eff4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055eff4), iVar1 != 0)) {
    *DAT_0055eff8 = DAT_0055effc;
  }
  if (DAT_0055eff8 != param_2) {
    if (((*DAT_0055f000 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f000), iVar1 != 0)) {
      *DAT_0055f004 = DAT_0055f008;
    }
    if (DAT_0055f004 != param_2) {
      if (((*DAT_0055f00c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f00c), iVar1 != 0)) {
        *DAT_0055f010 = DAT_0055f014;
      }
      if (DAT_0055f010 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

