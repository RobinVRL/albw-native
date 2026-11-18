#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005368e0;
extern undefined4 *DAT_005368e4;
extern undefined4 DAT_005368e8;
extern uint *DAT_005368ec;
extern undefined4 *DAT_005368f0;
extern undefined4 DAT_005368f4;
extern uint *DAT_005368f8;
extern undefined4 *DAT_005368fc;
extern undefined4 DAT_00536900;
extern uint *DAT_00536904;
extern undefined4 *DAT_00536908;
extern undefined4 DAT_0053690c;

// USA 005367E4 <- EU 005367BC (Ghidra, non-matching)
// GLOBAL DAT_005368e0 uint *
// GLOBAL DAT_005368e4 undefined4 *
// GLOBAL DAT_005368e8 undefined4
// GLOBAL DAT_005368ec uint *
// GLOBAL DAT_005368f0 undefined4 *
// GLOBAL DAT_005368f4 undefined4
// GLOBAL DAT_005368f8 uint *
// GLOBAL DAT_005368fc undefined4 *
// GLOBAL DAT_00536900 undefined4
// GLOBAL DAT_00536904 uint *
// GLOBAL DAT_00536908 undefined4 *
// GLOBAL DAT_0053690c undefined4

undefined4 func_005367E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005368e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005368e0), iVar1 != 0)) {
    *DAT_005368e4 = DAT_005368e8;
  }
  if (DAT_005368e4 != param_2) {
    if (((*DAT_005368ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005368ec), iVar1 != 0)) {
      *DAT_005368f0 = DAT_005368f4;
    }
    if (DAT_005368f0 != param_2) {
      if (((*DAT_005368f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005368f8), iVar1 != 0)) {
        *DAT_005368fc = DAT_00536900;
      }
      if (DAT_005368fc != param_2) {
        if (((*DAT_00536904 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536904), iVar1 != 0))
        {
          *DAT_00536908 = DAT_0053690c;
        }
        if (DAT_00536908 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

