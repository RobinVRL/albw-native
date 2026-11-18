#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005422d8;
extern undefined4 *DAT_005422dc;
extern undefined4 DAT_005422e0;
extern uint *DAT_005422e4;
extern undefined4 *DAT_005422e8;
extern undefined4 DAT_005422ec;
extern uint *DAT_005422f0;
extern undefined4 *DAT_005422f4;
extern undefined4 DAT_005422f8;
extern uint *DAT_005422fc;
extern undefined4 *DAT_00542300;
extern undefined4 DAT_00542304;

// USA 005421DC <- EU 005421B4 (Ghidra, non-matching)
// GLOBAL DAT_005422d8 uint *
// GLOBAL DAT_005422dc undefined4 *
// GLOBAL DAT_005422e0 undefined4
// GLOBAL DAT_005422e4 uint *
// GLOBAL DAT_005422e8 undefined4 *
// GLOBAL DAT_005422ec undefined4
// GLOBAL DAT_005422f0 uint *
// GLOBAL DAT_005422f4 undefined4 *
// GLOBAL DAT_005422f8 undefined4
// GLOBAL DAT_005422fc uint *
// GLOBAL DAT_00542300 undefined4 *
// GLOBAL DAT_00542304 undefined4

undefined4 func_005421DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005422d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005422d8), iVar1 != 0)) {
    *DAT_005422dc = DAT_005422e0;
  }
  if (DAT_005422dc != param_2) {
    if (((*DAT_005422e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005422e4), iVar1 != 0)) {
      *DAT_005422e8 = DAT_005422ec;
    }
    if (DAT_005422e8 != param_2) {
      if (((*DAT_005422f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005422f0), iVar1 != 0)) {
        *DAT_005422f4 = DAT_005422f8;
      }
      if (DAT_005422f4 != param_2) {
        if (((*DAT_005422fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005422fc), iVar1 != 0))
        {
          *DAT_00542300 = DAT_00542304;
        }
        if (DAT_00542300 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

