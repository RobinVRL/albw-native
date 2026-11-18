#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d044;
extern undefined4 *DAT_0055d048;
extern undefined4 DAT_0055d04c;
extern uint *DAT_0055d050;
extern undefined4 *DAT_0055d054;
extern undefined4 DAT_0055d058;
extern uint *DAT_0055d05c;
extern undefined4 *DAT_0055d060;
extern undefined4 DAT_0055d064;

// USA 0055CF8C <- EU 0055CF64 (Ghidra, non-matching)
// GLOBAL DAT_0055d044 uint *
// GLOBAL DAT_0055d048 undefined4 *
// GLOBAL DAT_0055d04c undefined4
// GLOBAL DAT_0055d050 uint *
// GLOBAL DAT_0055d054 undefined4 *
// GLOBAL DAT_0055d058 undefined4
// GLOBAL DAT_0055d05c uint *
// GLOBAL DAT_0055d060 undefined4 *
// GLOBAL DAT_0055d064 undefined4

undefined4 func_0055CF8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d044 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d044), iVar1 != 0)) {
    *DAT_0055d048 = DAT_0055d04c;
  }
  if (DAT_0055d048 != param_2) {
    if (((*DAT_0055d050 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d050), iVar1 != 0)) {
      *DAT_0055d054 = DAT_0055d058;
    }
    if (DAT_0055d054 != param_2) {
      if (((*DAT_0055d05c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d05c), iVar1 != 0)) {
        *DAT_0055d060 = DAT_0055d064;
      }
      if (DAT_0055d060 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

