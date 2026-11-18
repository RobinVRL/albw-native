#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00581760;
extern undefined4 *DAT_00581764;
extern undefined4 DAT_00581768;
extern uint *DAT_0058176c;
extern undefined4 *DAT_00581770;
extern undefined4 DAT_00581774;
extern uint *DAT_00581778;
extern undefined4 *DAT_0058177c;
extern undefined4 DAT_00581780;

// USA 005816A8 <- EU 00581680 (Ghidra, non-matching)
// GLOBAL DAT_00581760 uint *
// GLOBAL DAT_00581764 undefined4 *
// GLOBAL DAT_00581768 undefined4
// GLOBAL DAT_0058176c uint *
// GLOBAL DAT_00581770 undefined4 *
// GLOBAL DAT_00581774 undefined4
// GLOBAL DAT_00581778 uint *
// GLOBAL DAT_0058177c undefined4 *
// GLOBAL DAT_00581780 undefined4

undefined4 func_005816A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00581760 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581760), iVar1 != 0)) {
    *DAT_00581764 = DAT_00581768;
  }
  if (DAT_00581764 != param_2) {
    if (((*DAT_0058176c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058176c), iVar1 != 0)) {
      *DAT_00581770 = DAT_00581774;
    }
    if (DAT_00581770 != param_2) {
      if (((*DAT_00581778 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00581778), iVar1 != 0)) {
        *DAT_0058177c = DAT_00581780;
      }
      if (DAT_0058177c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

