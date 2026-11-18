#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005723c0;
extern undefined4 *DAT_005723c4;
extern undefined4 DAT_005723c8;
extern uint *DAT_005723cc;
extern undefined4 *DAT_005723d0;
extern undefined4 DAT_005723d4;
extern uint *DAT_005723d8;
extern undefined4 *DAT_005723dc;
extern undefined4 DAT_005723e0;
extern uint *DAT_005723e4;
extern undefined4 *DAT_005723e8;
extern undefined4 DAT_005723ec;
extern uint *DAT_005723f0;
extern undefined4 *DAT_005723f4;
extern undefined4 DAT_005723f8;

// USA 00572280 <- EU 00572258 (Ghidra, non-matching)
// GLOBAL DAT_005723c0 uint *
// GLOBAL DAT_005723c4 undefined4 *
// GLOBAL DAT_005723c8 undefined4
// GLOBAL DAT_005723cc uint *
// GLOBAL DAT_005723d0 undefined4 *
// GLOBAL DAT_005723d4 undefined4
// GLOBAL DAT_005723d8 uint *
// GLOBAL DAT_005723dc undefined4 *
// GLOBAL DAT_005723e0 undefined4
// GLOBAL DAT_005723e4 uint *
// GLOBAL DAT_005723e8 undefined4 *
// GLOBAL DAT_005723ec undefined4
// GLOBAL DAT_005723f0 uint *
// GLOBAL DAT_005723f4 undefined4 *
// GLOBAL DAT_005723f8 undefined4

undefined4 func_00572280(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005723c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005723c0), iVar1 != 0)) {
    *DAT_005723c4 = DAT_005723c8;
  }
  if (DAT_005723c4 != param_2) {
    if (((*DAT_005723cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005723cc), iVar1 != 0)) {
      *DAT_005723d0 = DAT_005723d4;
    }
    if (DAT_005723d0 != param_2) {
      if (((*DAT_005723d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005723d8), iVar1 != 0)) {
        *DAT_005723dc = DAT_005723e0;
      }
      if (DAT_005723dc != param_2) {
        if (((*DAT_005723e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005723e4), iVar1 != 0))
        {
          *DAT_005723e8 = DAT_005723ec;
        }
        if (DAT_005723e8 != param_2) {
          if (((*DAT_005723f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005723f0), iVar1 != 0)
             ) {
            *DAT_005723f4 = DAT_005723f8;
          }
          if (DAT_005723f4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

