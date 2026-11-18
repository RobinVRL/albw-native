#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005790b4;
extern undefined4 *DAT_005790b8;
extern undefined4 DAT_005790bc;
extern uint *DAT_005790c0;
extern undefined4 *DAT_005790c4;
extern undefined4 DAT_005790c8;
extern uint *DAT_005790cc;
extern undefined4 *DAT_005790d0;
extern undefined4 DAT_005790d4;
extern uint *DAT_005790d8;
extern undefined4 *DAT_005790dc;
extern undefined4 DAT_005790e0;
extern uint *DAT_005790e4;
extern undefined4 *DAT_005790e8;
extern undefined4 DAT_005790ec;

// USA 00578F74 <- EU 00578F4C (Ghidra, non-matching)
// GLOBAL DAT_005790b4 uint *
// GLOBAL DAT_005790b8 undefined4 *
// GLOBAL DAT_005790bc undefined4
// GLOBAL DAT_005790c0 uint *
// GLOBAL DAT_005790c4 undefined4 *
// GLOBAL DAT_005790c8 undefined4
// GLOBAL DAT_005790cc uint *
// GLOBAL DAT_005790d0 undefined4 *
// GLOBAL DAT_005790d4 undefined4
// GLOBAL DAT_005790d8 uint *
// GLOBAL DAT_005790dc undefined4 *
// GLOBAL DAT_005790e0 undefined4
// GLOBAL DAT_005790e4 uint *
// GLOBAL DAT_005790e8 undefined4 *
// GLOBAL DAT_005790ec undefined4

undefined4 func_00578F74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005790b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005790b4), iVar1 != 0)) {
    *DAT_005790b8 = DAT_005790bc;
  }
  if (DAT_005790b8 != param_2) {
    if (((*DAT_005790c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005790c0), iVar1 != 0)) {
      *DAT_005790c4 = DAT_005790c8;
    }
    if (DAT_005790c4 != param_2) {
      if (((*DAT_005790cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005790cc), iVar1 != 0)) {
        *DAT_005790d0 = DAT_005790d4;
      }
      if (DAT_005790d0 != param_2) {
        if (((*DAT_005790d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005790d8), iVar1 != 0))
        {
          *DAT_005790dc = DAT_005790e0;
        }
        if (DAT_005790dc != param_2) {
          if (((*DAT_005790e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005790e4), iVar1 != 0)
             ) {
            *DAT_005790e8 = DAT_005790ec;
          }
          if (DAT_005790e8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

