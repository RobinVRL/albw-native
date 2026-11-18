#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d5cc;
extern undefined4 *DAT_0052d5d0;
extern undefined4 DAT_0052d5d4;
extern uint *DAT_0052d5d8;
extern undefined4 *DAT_0052d5dc;
extern undefined4 DAT_0052d5e0;
extern uint *DAT_0052d5e4;
extern undefined4 *DAT_0052d5e8;
extern undefined4 DAT_0052d5ec;
extern uint *DAT_0052d5f0;
extern undefined4 *DAT_0052d5f4;
extern undefined4 DAT_0052d5f8;
extern uint *DAT_0052d5fc;
extern undefined4 *DAT_0052d600;
extern undefined4 DAT_0052d604;

// USA 0052D48C <- EU 0052D464 (Ghidra, non-matching)
// GLOBAL DAT_0052d5cc uint *
// GLOBAL DAT_0052d5d0 undefined4 *
// GLOBAL DAT_0052d5d4 undefined4
// GLOBAL DAT_0052d5d8 uint *
// GLOBAL DAT_0052d5dc undefined4 *
// GLOBAL DAT_0052d5e0 undefined4
// GLOBAL DAT_0052d5e4 uint *
// GLOBAL DAT_0052d5e8 undefined4 *
// GLOBAL DAT_0052d5ec undefined4
// GLOBAL DAT_0052d5f0 uint *
// GLOBAL DAT_0052d5f4 undefined4 *
// GLOBAL DAT_0052d5f8 undefined4
// GLOBAL DAT_0052d5fc uint *
// GLOBAL DAT_0052d600 undefined4 *
// GLOBAL DAT_0052d604 undefined4

undefined4 func_0052D48C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d5cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d5cc), iVar1 != 0)) {
    *DAT_0052d5d0 = DAT_0052d5d4;
  }
  if (DAT_0052d5d0 != param_2) {
    if (((*DAT_0052d5d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d5d8), iVar1 != 0)) {
      *DAT_0052d5dc = DAT_0052d5e0;
    }
    if (DAT_0052d5dc != param_2) {
      if (((*DAT_0052d5e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d5e4), iVar1 != 0)) {
        *DAT_0052d5e8 = DAT_0052d5ec;
      }
      if (DAT_0052d5e8 != param_2) {
        if (((*DAT_0052d5f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d5f0), iVar1 != 0))
        {
          *DAT_0052d5f4 = DAT_0052d5f8;
        }
        if (DAT_0052d5f4 != param_2) {
          if (((*DAT_0052d5fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d5fc), iVar1 != 0)
             ) {
            *DAT_0052d600 = DAT_0052d604;
          }
          if (DAT_0052d600 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

