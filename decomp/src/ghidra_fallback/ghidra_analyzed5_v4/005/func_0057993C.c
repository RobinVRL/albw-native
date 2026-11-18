#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00579a7c;
extern undefined4 *DAT_00579a80;
extern undefined4 DAT_00579a84;
extern uint *DAT_00579a88;
extern undefined4 *DAT_00579a8c;
extern undefined4 DAT_00579a90;
extern uint *DAT_00579a94;
extern undefined4 *DAT_00579a98;
extern undefined4 DAT_00579a9c;
extern uint *DAT_00579aa0;
extern undefined4 *DAT_00579aa4;
extern undefined4 DAT_00579aa8;
extern uint *DAT_00579aac;
extern undefined4 *DAT_00579ab0;
extern undefined4 DAT_00579ab4;

// USA 0057993C <- EU 00579914 (Ghidra, non-matching)
// GLOBAL DAT_00579a7c uint *
// GLOBAL DAT_00579a80 undefined4 *
// GLOBAL DAT_00579a84 undefined4
// GLOBAL DAT_00579a88 uint *
// GLOBAL DAT_00579a8c undefined4 *
// GLOBAL DAT_00579a90 undefined4
// GLOBAL DAT_00579a94 uint *
// GLOBAL DAT_00579a98 undefined4 *
// GLOBAL DAT_00579a9c undefined4
// GLOBAL DAT_00579aa0 uint *
// GLOBAL DAT_00579aa4 undefined4 *
// GLOBAL DAT_00579aa8 undefined4
// GLOBAL DAT_00579aac uint *
// GLOBAL DAT_00579ab0 undefined4 *
// GLOBAL DAT_00579ab4 undefined4

undefined4 func_0057993C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579a7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579a7c), iVar1 != 0)) {
    *DAT_00579a80 = DAT_00579a84;
  }
  if (DAT_00579a80 != param_2) {
    if (((*DAT_00579a88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579a88), iVar1 != 0)) {
      *DAT_00579a8c = DAT_00579a90;
    }
    if (DAT_00579a8c != param_2) {
      if (((*DAT_00579a94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579a94), iVar1 != 0)) {
        *DAT_00579a98 = DAT_00579a9c;
      }
      if (DAT_00579a98 != param_2) {
        if (((*DAT_00579aa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579aa0), iVar1 != 0))
        {
          *DAT_00579aa4 = DAT_00579aa8;
        }
        if (DAT_00579aa4 != param_2) {
          if (((*DAT_00579aac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579aac), iVar1 != 0)
             ) {
            *DAT_00579ab0 = DAT_00579ab4;
          }
          if (DAT_00579ab0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

