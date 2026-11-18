#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057399c;
extern undefined4 *DAT_005739a0;
extern undefined4 DAT_005739a4;
extern uint *DAT_005739a8;
extern undefined4 *DAT_005739ac;
extern undefined4 DAT_005739b0;
extern uint *DAT_005739b4;
extern undefined4 *DAT_005739b8;
extern undefined4 DAT_005739bc;
extern uint *DAT_005739c0;
extern undefined4 *DAT_005739c4;
extern undefined4 DAT_005739c8;
extern uint *DAT_005739cc;
extern undefined4 *DAT_005739d0;
extern undefined4 DAT_005739d4;

// USA 0057385C <- EU 00573834 (Ghidra, non-matching)
// GLOBAL DAT_0057399c uint *
// GLOBAL DAT_005739a0 undefined4 *
// GLOBAL DAT_005739a4 undefined4
// GLOBAL DAT_005739a8 uint *
// GLOBAL DAT_005739ac undefined4 *
// GLOBAL DAT_005739b0 undefined4
// GLOBAL DAT_005739b4 uint *
// GLOBAL DAT_005739b8 undefined4 *
// GLOBAL DAT_005739bc undefined4
// GLOBAL DAT_005739c0 uint *
// GLOBAL DAT_005739c4 undefined4 *
// GLOBAL DAT_005739c8 undefined4
// GLOBAL DAT_005739cc uint *
// GLOBAL DAT_005739d0 undefined4 *
// GLOBAL DAT_005739d4 undefined4

undefined4 func_0057385C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057399c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057399c), iVar1 != 0)) {
    *DAT_005739a0 = DAT_005739a4;
  }
  if (DAT_005739a0 != param_2) {
    if (((*DAT_005739a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005739a8), iVar1 != 0)) {
      *DAT_005739ac = DAT_005739b0;
    }
    if (DAT_005739ac != param_2) {
      if (((*DAT_005739b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005739b4), iVar1 != 0)) {
        *DAT_005739b8 = DAT_005739bc;
      }
      if (DAT_005739b8 != param_2) {
        if (((*DAT_005739c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005739c0), iVar1 != 0))
        {
          *DAT_005739c4 = DAT_005739c8;
        }
        if (DAT_005739c4 != param_2) {
          if (((*DAT_005739cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005739cc), iVar1 != 0)
             ) {
            *DAT_005739d0 = DAT_005739d4;
          }
          if (DAT_005739d0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

