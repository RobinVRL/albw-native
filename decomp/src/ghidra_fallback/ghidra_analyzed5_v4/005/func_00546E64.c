#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00546ed8;
extern undefined4 *DAT_00546edc;
extern undefined4 DAT_00546ee0;
extern uint *DAT_00546ee4;
extern undefined4 *DAT_00546ee8;
extern undefined4 DAT_00546eec;

// USA 00546E64 <- EU 00546E3C (Ghidra, non-matching)
// GLOBAL DAT_00546ed8 uint *
// GLOBAL DAT_00546edc undefined4 *
// GLOBAL DAT_00546ee0 undefined4
// GLOBAL DAT_00546ee4 uint *
// GLOBAL DAT_00546ee8 undefined4 *
// GLOBAL DAT_00546eec undefined4

undefined4 func_00546E64(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00546ed8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546ed8), iVar1 != 0)) {
    *DAT_00546edc = DAT_00546ee0;
  }
  if (DAT_00546edc != param_2) {
    if (((*DAT_00546ee4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546ee4), iVar1 != 0)) {
      *DAT_00546ee8 = DAT_00546eec;
    }
    if (DAT_00546ee8 != param_2) {
      return 0;
    }
  }
  return 1;
}

