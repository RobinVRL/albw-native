#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005435c4;
extern undefined4 *DAT_005435c8;
extern undefined4 DAT_005435cc;
extern uint *DAT_005435d0;
extern undefined4 *DAT_005435d4;
extern undefined4 DAT_005435d8;
extern uint *DAT_005435dc;
extern undefined4 *DAT_005435e0;
extern undefined4 DAT_005435e4;
extern uint *DAT_005435e8;
extern undefined4 *DAT_005435ec;
extern undefined4 DAT_005435f0;
extern uint *DAT_005435f4;
extern undefined4 *DAT_005435f8;
extern undefined4 DAT_005435fc;

// USA 00543484 <- EU 0054345C (Ghidra, non-matching)
// GLOBAL DAT_005435c4 uint *
// GLOBAL DAT_005435c8 undefined4 *
// GLOBAL DAT_005435cc undefined4
// GLOBAL DAT_005435d0 uint *
// GLOBAL DAT_005435d4 undefined4 *
// GLOBAL DAT_005435d8 undefined4
// GLOBAL DAT_005435dc uint *
// GLOBAL DAT_005435e0 undefined4 *
// GLOBAL DAT_005435e4 undefined4
// GLOBAL DAT_005435e8 uint *
// GLOBAL DAT_005435ec undefined4 *
// GLOBAL DAT_005435f0 undefined4
// GLOBAL DAT_005435f4 uint *
// GLOBAL DAT_005435f8 undefined4 *
// GLOBAL DAT_005435fc undefined4

undefined4 func_00543484(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005435c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005435c4), iVar1 != 0)) {
    *DAT_005435c8 = DAT_005435cc;
  }
  if (DAT_005435c8 != param_2) {
    if (((*DAT_005435d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005435d0), iVar1 != 0)) {
      *DAT_005435d4 = DAT_005435d8;
    }
    if (DAT_005435d4 != param_2) {
      if (((*DAT_005435dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005435dc), iVar1 != 0)) {
        *DAT_005435e0 = DAT_005435e4;
      }
      if (DAT_005435e0 != param_2) {
        if (((*DAT_005435e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005435e8), iVar1 != 0))
        {
          *DAT_005435ec = DAT_005435f0;
        }
        if (DAT_005435ec != param_2) {
          if (((*DAT_005435f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005435f4), iVar1 != 0)
             ) {
            *DAT_005435f8 = DAT_005435fc;
          }
          if (DAT_005435f8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

