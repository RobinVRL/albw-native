#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055ccac;
extern undefined4 *DAT_0055ccb0;
extern undefined4 DAT_0055ccb4;
extern uint *DAT_0055ccb8;
extern undefined4 *DAT_0055ccbc;
extern undefined4 DAT_0055ccc0;
extern uint *DAT_0055ccc4;
extern undefined4 *DAT_0055ccc8;
extern undefined4 DAT_0055cccc;
extern uint *DAT_0055ccd0;
extern undefined4 *DAT_0055ccd4;
extern undefined4 DAT_0055ccd8;

// USA 0055CBB0 <- EU 0055CB88 (Ghidra, non-matching)
// GLOBAL DAT_0055ccac uint *
// GLOBAL DAT_0055ccb0 undefined4 *
// GLOBAL DAT_0055ccb4 undefined4
// GLOBAL DAT_0055ccb8 uint *
// GLOBAL DAT_0055ccbc undefined4 *
// GLOBAL DAT_0055ccc0 undefined4
// GLOBAL DAT_0055ccc4 uint *
// GLOBAL DAT_0055ccc8 undefined4 *
// GLOBAL DAT_0055cccc undefined4
// GLOBAL DAT_0055ccd0 uint *
// GLOBAL DAT_0055ccd4 undefined4 *
// GLOBAL DAT_0055ccd8 undefined4

undefined4 func_0055CBB0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ccac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ccac), iVar1 != 0)) {
    *DAT_0055ccb0 = DAT_0055ccb4;
  }
  if (DAT_0055ccb0 != param_2) {
    if (((*DAT_0055ccb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ccb8), iVar1 != 0)) {
      *DAT_0055ccbc = DAT_0055ccc0;
    }
    if (DAT_0055ccbc != param_2) {
      if (((*DAT_0055ccc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ccc4), iVar1 != 0)) {
        *DAT_0055ccc8 = DAT_0055cccc;
      }
      if (DAT_0055ccc8 != param_2) {
        if (((*DAT_0055ccd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ccd0), iVar1 != 0))
        {
          *DAT_0055ccd4 = DAT_0055ccd8;
        }
        if (DAT_0055ccd4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

