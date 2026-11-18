#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005762d4;
extern undefined4 *DAT_005762d8;
extern undefined4 DAT_005762dc;
extern uint *DAT_005762e0;
extern undefined4 *DAT_005762e4;
extern undefined4 DAT_005762e8;
extern uint *DAT_005762ec;
extern undefined4 *DAT_005762f0;
extern undefined4 DAT_005762f4;
extern uint *DAT_005762f8;
extern undefined4 *DAT_005762fc;
extern undefined4 DAT_00576300;
extern uint *DAT_00576304;
extern undefined4 *DAT_00576308;
extern undefined4 DAT_0057630c;

// USA 00576194 <- EU 0057616C (Ghidra, non-matching)
// GLOBAL DAT_005762d4 uint *
// GLOBAL DAT_005762d8 undefined4 *
// GLOBAL DAT_005762dc undefined4
// GLOBAL DAT_005762e0 uint *
// GLOBAL DAT_005762e4 undefined4 *
// GLOBAL DAT_005762e8 undefined4
// GLOBAL DAT_005762ec uint *
// GLOBAL DAT_005762f0 undefined4 *
// GLOBAL DAT_005762f4 undefined4
// GLOBAL DAT_005762f8 uint *
// GLOBAL DAT_005762fc undefined4 *
// GLOBAL DAT_00576300 undefined4
// GLOBAL DAT_00576304 uint *
// GLOBAL DAT_00576308 undefined4 *
// GLOBAL DAT_0057630c undefined4

undefined4 func_00576194(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005762d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005762d4), iVar1 != 0)) {
    *DAT_005762d8 = DAT_005762dc;
  }
  if (DAT_005762d8 != param_2) {
    if (((*DAT_005762e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005762e0), iVar1 != 0)) {
      *DAT_005762e4 = DAT_005762e8;
    }
    if (DAT_005762e4 != param_2) {
      if (((*DAT_005762ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005762ec), iVar1 != 0)) {
        *DAT_005762f0 = DAT_005762f4;
      }
      if (DAT_005762f0 != param_2) {
        if (((*DAT_005762f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005762f8), iVar1 != 0))
        {
          *DAT_005762fc = DAT_00576300;
        }
        if (DAT_005762fc != param_2) {
          if (((*DAT_00576304 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576304), iVar1 != 0)
             ) {
            *DAT_00576308 = DAT_0057630c;
          }
          if (DAT_00576308 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

