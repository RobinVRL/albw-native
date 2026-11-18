#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056f9d8;
extern undefined4 *DAT_0056f9dc;
extern undefined4 DAT_0056f9e0;
extern uint *DAT_0056f9e4;
extern undefined4 *DAT_0056f9e8;
extern undefined4 DAT_0056f9ec;
extern uint *DAT_0056f9f0;
extern undefined4 *DAT_0056f9f4;
extern undefined4 DAT_0056f9f8;
extern uint *DAT_0056f9fc;
extern undefined4 *DAT_0056fa00;
extern undefined4 DAT_0056fa04;

// USA 0056F8DC <- EU 0056F8B4 (Ghidra, non-matching)
// GLOBAL DAT_0056f9d8 uint *
// GLOBAL DAT_0056f9dc undefined4 *
// GLOBAL DAT_0056f9e0 undefined4
// GLOBAL DAT_0056f9e4 uint *
// GLOBAL DAT_0056f9e8 undefined4 *
// GLOBAL DAT_0056f9ec undefined4
// GLOBAL DAT_0056f9f0 uint *
// GLOBAL DAT_0056f9f4 undefined4 *
// GLOBAL DAT_0056f9f8 undefined4
// GLOBAL DAT_0056f9fc uint *
// GLOBAL DAT_0056fa00 undefined4 *
// GLOBAL DAT_0056fa04 undefined4

undefined4 func_0056F8DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056f9d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056f9d8), iVar1 != 0)) {
    *DAT_0056f9dc = DAT_0056f9e0;
  }
  if (DAT_0056f9dc != param_2) {
    if (((*DAT_0056f9e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056f9e4), iVar1 != 0)) {
      *DAT_0056f9e8 = DAT_0056f9ec;
    }
    if (DAT_0056f9e8 != param_2) {
      if (((*DAT_0056f9f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056f9f0), iVar1 != 0)) {
        *DAT_0056f9f4 = DAT_0056f9f8;
      }
      if (DAT_0056f9f4 != param_2) {
        if (((*DAT_0056f9fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056f9fc), iVar1 != 0))
        {
          *DAT_0056fa00 = DAT_0056fa04;
        }
        if (DAT_0056fa00 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

