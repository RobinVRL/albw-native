#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b144;
extern undefined4 *DAT_0052b148;
extern undefined4 DAT_0052b14c;
extern uint *DAT_0052b150;
extern undefined4 *DAT_0052b154;
extern undefined4 DAT_0052b158;
extern uint *DAT_0052b15c;
extern undefined4 *DAT_0052b160;
extern undefined4 DAT_0052b164;

// USA 0052B08C <- EU 0052B064 (Ghidra, non-matching)
// GLOBAL DAT_0052b144 uint *
// GLOBAL DAT_0052b148 undefined4 *
// GLOBAL DAT_0052b14c undefined4
// GLOBAL DAT_0052b150 uint *
// GLOBAL DAT_0052b154 undefined4 *
// GLOBAL DAT_0052b158 undefined4
// GLOBAL DAT_0052b15c uint *
// GLOBAL DAT_0052b160 undefined4 *
// GLOBAL DAT_0052b164 undefined4

undefined4 func_0052B08C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b144), iVar1 != 0)) {
    *DAT_0052b148 = DAT_0052b14c;
  }
  if (DAT_0052b148 != param_2) {
    if (((*DAT_0052b150 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b150), iVar1 != 0)) {
      *DAT_0052b154 = DAT_0052b158;
    }
    if (DAT_0052b154 != param_2) {
      if (((*DAT_0052b15c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b15c), iVar1 != 0)) {
        *DAT_0052b160 = DAT_0052b164;
      }
      if (DAT_0052b160 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

