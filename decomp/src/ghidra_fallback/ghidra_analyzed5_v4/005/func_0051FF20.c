#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051ffd8;
extern undefined4 *DAT_0051ffdc;
extern undefined4 DAT_0051ffe0;
extern uint *DAT_0051ffe4;
extern undefined4 *DAT_0051ffe8;
extern undefined4 DAT_0051ffec;
extern uint *DAT_0051fff0;
extern undefined4 *DAT_0051fff4;
extern undefined4 DAT_0051fff8;

// USA 0051FF20 <- EU 0051FEF8 (Ghidra, non-matching)
// GLOBAL DAT_0051ffd8 uint *
// GLOBAL DAT_0051ffdc undefined4 *
// GLOBAL DAT_0051ffe0 undefined4
// GLOBAL DAT_0051ffe4 uint *
// GLOBAL DAT_0051ffe8 undefined4 *
// GLOBAL DAT_0051ffec undefined4
// GLOBAL DAT_0051fff0 uint *
// GLOBAL DAT_0051fff4 undefined4 *
// GLOBAL DAT_0051fff8 undefined4

undefined4 func_0051FF20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051ffd8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ffd8), iVar1 != 0)) {
    *DAT_0051ffdc = DAT_0051ffe0;
  }
  if (DAT_0051ffdc != param_2) {
    if (((*DAT_0051ffe4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ffe4), iVar1 != 0)) {
      *DAT_0051ffe8 = DAT_0051ffec;
    }
    if (DAT_0051ffe8 != param_2) {
      if (((*DAT_0051fff0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fff0), iVar1 != 0)) {
        *DAT_0051fff4 = DAT_0051fff8;
      }
      if (DAT_0051fff4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

