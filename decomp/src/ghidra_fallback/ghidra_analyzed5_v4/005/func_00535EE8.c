#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005360b0;
extern undefined4 *DAT_005360b4;
extern undefined4 DAT_005360b8;
extern uint *DAT_005360bc;
extern undefined4 *DAT_005360c0;
extern undefined4 DAT_005360c4;
extern uint *DAT_005360c8;
extern undefined4 *DAT_005360cc;
extern undefined4 DAT_005360d0;
extern uint *DAT_005360d4;
extern undefined4 *DAT_005360d8;
extern undefined4 DAT_005360dc;
extern uint *DAT_005360e0;
extern undefined4 *DAT_005360e4;
extern undefined4 DAT_005360e8;
extern uint *DAT_005360ec;
extern undefined4 *DAT_005360f0;
extern undefined4 DAT_005360f4;
extern uint *DAT_005360f8;
extern undefined4 *DAT_005360fc;
extern undefined4 DAT_00536100;

// USA 00535EE8 <- EU 00535EC0 (Ghidra, non-matching)
// GLOBAL DAT_005360b0 uint *
// GLOBAL DAT_005360b4 undefined4 *
// GLOBAL DAT_005360b8 undefined4
// GLOBAL DAT_005360bc uint *
// GLOBAL DAT_005360c0 undefined4 *
// GLOBAL DAT_005360c4 undefined4
// GLOBAL DAT_005360c8 uint *
// GLOBAL DAT_005360cc undefined4 *
// GLOBAL DAT_005360d0 undefined4
// GLOBAL DAT_005360d4 uint *
// GLOBAL DAT_005360d8 undefined4 *
// GLOBAL DAT_005360dc undefined4
// GLOBAL DAT_005360e0 uint *
// GLOBAL DAT_005360e4 undefined4 *
// GLOBAL DAT_005360e8 undefined4
// GLOBAL DAT_005360ec uint *
// GLOBAL DAT_005360f0 undefined4 *
// GLOBAL DAT_005360f4 undefined4
// GLOBAL DAT_005360f8 uint *
// GLOBAL DAT_005360fc undefined4 *
// GLOBAL DAT_00536100 undefined4

undefined4 func_00535EE8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005360b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005360b0), iVar1 != 0)) {
    *DAT_005360b4 = DAT_005360b8;
  }
  if (DAT_005360b4 != param_2) {
    if (((*DAT_005360bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005360bc), iVar1 != 0)) {
      *DAT_005360c0 = DAT_005360c4;
    }
    if (DAT_005360c0 != param_2) {
      if (((*DAT_005360c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005360c8), iVar1 != 0)) {
        *DAT_005360cc = DAT_005360d0;
      }
      if (DAT_005360cc != param_2) {
        if (((*DAT_005360d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005360d4), iVar1 != 0))
        {
          *DAT_005360d8 = DAT_005360dc;
        }
        if (DAT_005360d8 != param_2) {
          if (((*DAT_005360e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005360e0), iVar1 != 0)
             ) {
            *DAT_005360e4 = DAT_005360e8;
          }
          if (DAT_005360e4 != param_2) {
            if (((*DAT_005360ec & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005360ec), iVar1 != 0)) {
              *DAT_005360f0 = DAT_005360f4;
            }
            if (DAT_005360f0 != param_2) {
              if (((*DAT_005360f8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005360f8), iVar1 != 0)) {
                *DAT_005360fc = DAT_00536100;
              }
              if (DAT_005360fc != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

