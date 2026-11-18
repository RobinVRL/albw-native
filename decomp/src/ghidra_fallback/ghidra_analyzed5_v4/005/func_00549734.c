#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005498b8;
extern undefined4 *DAT_005498bc;
extern undefined4 DAT_005498c0;
extern uint *DAT_005498c4;
extern undefined4 *DAT_005498c8;
extern undefined4 DAT_005498cc;
extern uint *DAT_005498d0;
extern undefined4 *DAT_005498d4;
extern undefined4 DAT_005498d8;
extern uint *DAT_005498dc;
extern undefined4 *DAT_005498e0;
extern undefined4 DAT_005498e4;
extern uint *DAT_005498e8;
extern undefined4 *DAT_005498ec;
extern undefined4 DAT_005498f0;
extern uint *DAT_005498f4;
extern undefined4 *DAT_005498f8;
extern undefined4 DAT_005498fc;

// USA 00549734 <- EU 0054970C (Ghidra, non-matching)
// GLOBAL DAT_005498b8 uint *
// GLOBAL DAT_005498bc undefined4 *
// GLOBAL DAT_005498c0 undefined4
// GLOBAL DAT_005498c4 uint *
// GLOBAL DAT_005498c8 undefined4 *
// GLOBAL DAT_005498cc undefined4
// GLOBAL DAT_005498d0 uint *
// GLOBAL DAT_005498d4 undefined4 *
// GLOBAL DAT_005498d8 undefined4
// GLOBAL DAT_005498dc uint *
// GLOBAL DAT_005498e0 undefined4 *
// GLOBAL DAT_005498e4 undefined4
// GLOBAL DAT_005498e8 uint *
// GLOBAL DAT_005498ec undefined4 *
// GLOBAL DAT_005498f0 undefined4
// GLOBAL DAT_005498f4 uint *
// GLOBAL DAT_005498f8 undefined4 *
// GLOBAL DAT_005498fc undefined4

undefined4 func_00549734(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005498b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005498b8), iVar1 != 0)) {
    *DAT_005498bc = DAT_005498c0;
  }
  if (DAT_005498bc != param_2) {
    if (((*DAT_005498c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005498c4), iVar1 != 0)) {
      *DAT_005498c8 = DAT_005498cc;
    }
    if (DAT_005498c8 != param_2) {
      if (((*DAT_005498d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005498d0), iVar1 != 0)) {
        *DAT_005498d4 = DAT_005498d8;
      }
      if (DAT_005498d4 != param_2) {
        if (((*DAT_005498dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005498dc), iVar1 != 0))
        {
          *DAT_005498e0 = DAT_005498e4;
        }
        if (DAT_005498e0 != param_2) {
          if (((*DAT_005498e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005498e8), iVar1 != 0)
             ) {
            *DAT_005498ec = DAT_005498f0;
          }
          if (DAT_005498ec != param_2) {
            if (((*DAT_005498f4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005498f4), iVar1 != 0)) {
              *DAT_005498f8 = DAT_005498fc;
            }
            if (DAT_005498f8 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

