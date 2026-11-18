#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055b138;
extern undefined4 *DAT_0055b13c;
extern undefined4 DAT_0055b140;
extern uint *DAT_0055b144;
extern undefined4 *DAT_0055b148;
extern undefined4 DAT_0055b14c;
extern uint *DAT_0055b150;
extern undefined4 *DAT_0055b154;
extern undefined4 DAT_0055b158;
extern uint *DAT_0055b15c;
extern undefined4 *DAT_0055b160;
extern undefined4 DAT_0055b164;

// USA 0055B03C <- EU 0055B014 (Ghidra, non-matching)
// GLOBAL DAT_0055b138 uint *
// GLOBAL DAT_0055b13c undefined4 *
// GLOBAL DAT_0055b140 undefined4
// GLOBAL DAT_0055b144 uint *
// GLOBAL DAT_0055b148 undefined4 *
// GLOBAL DAT_0055b14c undefined4
// GLOBAL DAT_0055b150 uint *
// GLOBAL DAT_0055b154 undefined4 *
// GLOBAL DAT_0055b158 undefined4
// GLOBAL DAT_0055b15c uint *
// GLOBAL DAT_0055b160 undefined4 *
// GLOBAL DAT_0055b164 undefined4

undefined4 func_0055B03C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055b138 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b138), iVar1 != 0)) {
    *DAT_0055b13c = DAT_0055b140;
  }
  if (DAT_0055b13c != param_2) {
    if (((*DAT_0055b144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b144), iVar1 != 0)) {
      *DAT_0055b148 = DAT_0055b14c;
    }
    if (DAT_0055b148 != param_2) {
      if (((*DAT_0055b150 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b150), iVar1 != 0)) {
        *DAT_0055b154 = DAT_0055b158;
      }
      if (DAT_0055b154 != param_2) {
        if (((*DAT_0055b15c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055b15c), iVar1 != 0))
        {
          *DAT_0055b160 = DAT_0055b164;
        }
        if (DAT_0055b160 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

