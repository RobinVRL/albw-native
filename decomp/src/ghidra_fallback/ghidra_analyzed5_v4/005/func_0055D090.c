#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d148;
extern undefined4 *DAT_0055d14c;
extern undefined4 DAT_0055d150;
extern uint *DAT_0055d154;
extern undefined4 *DAT_0055d158;
extern undefined4 DAT_0055d15c;
extern uint *DAT_0055d160;
extern undefined4 *DAT_0055d164;
extern undefined4 DAT_0055d168;

// USA 0055D090 <- EU 0055D068 (Ghidra, non-matching)
// GLOBAL DAT_0055d148 uint *
// GLOBAL DAT_0055d14c undefined4 *
// GLOBAL DAT_0055d150 undefined4
// GLOBAL DAT_0055d154 uint *
// GLOBAL DAT_0055d158 undefined4 *
// GLOBAL DAT_0055d15c undefined4
// GLOBAL DAT_0055d160 uint *
// GLOBAL DAT_0055d164 undefined4 *
// GLOBAL DAT_0055d168 undefined4

undefined4 func_0055D090(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d148), iVar1 != 0)) {
    *DAT_0055d14c = DAT_0055d150;
  }
  if (DAT_0055d14c != param_2) {
    if (((*DAT_0055d154 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d154), iVar1 != 0)) {
      *DAT_0055d158 = DAT_0055d15c;
    }
    if (DAT_0055d158 != param_2) {
      if (((*DAT_0055d160 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d160), iVar1 != 0)) {
        *DAT_0055d164 = DAT_0055d168;
      }
      if (DAT_0055d164 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

