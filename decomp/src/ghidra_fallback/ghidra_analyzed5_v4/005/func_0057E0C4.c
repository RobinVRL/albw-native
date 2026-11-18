#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057e138;
extern undefined4 *DAT_0057e13c;
extern undefined4 DAT_0057e140;
extern uint *DAT_0057e144;
extern undefined4 *DAT_0057e148;
extern undefined4 DAT_0057e14c;

// USA 0057E0C4 <- EU 0057E09C (Ghidra, non-matching)
// GLOBAL DAT_0057e138 uint *
// GLOBAL DAT_0057e13c undefined4 *
// GLOBAL DAT_0057e140 undefined4
// GLOBAL DAT_0057e144 uint *
// GLOBAL DAT_0057e148 undefined4 *
// GLOBAL DAT_0057e14c undefined4

undefined4 func_0057E0C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057e138 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e138), iVar1 != 0)) {
    *DAT_0057e13c = DAT_0057e140;
  }
  if (DAT_0057e13c != param_2) {
    if (((*DAT_0057e144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057e144), iVar1 != 0)) {
      *DAT_0057e148 = DAT_0057e14c;
    }
    if (DAT_0057e148 != param_2) {
      return 0;
    }
  }
  return 1;
}

