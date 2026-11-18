#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f048;
extern undefined4 *DAT_0051f04c;
extern undefined4 DAT_0051f050;
extern uint *DAT_0051f054;
extern undefined4 *DAT_0051f058;
extern undefined4 DAT_0051f05c;
extern uint *DAT_0051f060;
extern undefined4 *DAT_0051f064;
extern undefined4 DAT_0051f068;

// USA 0051EF90 <- EU 0051EF68 (Ghidra, non-matching)
// GLOBAL DAT_0051f048 uint *
// GLOBAL DAT_0051f04c undefined4 *
// GLOBAL DAT_0051f050 undefined4
// GLOBAL DAT_0051f054 uint *
// GLOBAL DAT_0051f058 undefined4 *
// GLOBAL DAT_0051f05c undefined4
// GLOBAL DAT_0051f060 uint *
// GLOBAL DAT_0051f064 undefined4 *
// GLOBAL DAT_0051f068 undefined4

undefined4 func_0051EF90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f048 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f048), iVar1 != 0)) {
    *DAT_0051f04c = DAT_0051f050;
  }
  if (DAT_0051f04c != param_2) {
    if (((*DAT_0051f054 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f054), iVar1 != 0)) {
      *DAT_0051f058 = DAT_0051f05c;
    }
    if (DAT_0051f058 != param_2) {
      if (((*DAT_0051f060 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f060), iVar1 != 0)) {
        *DAT_0051f064 = DAT_0051f068;
      }
      if (DAT_0051f064 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

