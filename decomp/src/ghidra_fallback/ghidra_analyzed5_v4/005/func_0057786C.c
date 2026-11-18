#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005779ac;
extern undefined4 *DAT_005779b0;
extern undefined4 DAT_005779b4;
extern uint *DAT_005779b8;
extern undefined4 *DAT_005779bc;
extern undefined4 DAT_005779c0;
extern uint *DAT_005779c4;
extern undefined4 *DAT_005779c8;
extern undefined4 DAT_005779cc;
extern uint *DAT_005779d0;
extern undefined4 *DAT_005779d4;
extern undefined4 DAT_005779d8;
extern uint *DAT_005779dc;
extern undefined4 *DAT_005779e0;
extern undefined4 DAT_005779e4;

// USA 0057786C <- EU 00577844 (Ghidra, non-matching)
// GLOBAL DAT_005779ac uint *
// GLOBAL DAT_005779b0 undefined4 *
// GLOBAL DAT_005779b4 undefined4
// GLOBAL DAT_005779b8 uint *
// GLOBAL DAT_005779bc undefined4 *
// GLOBAL DAT_005779c0 undefined4
// GLOBAL DAT_005779c4 uint *
// GLOBAL DAT_005779c8 undefined4 *
// GLOBAL DAT_005779cc undefined4
// GLOBAL DAT_005779d0 uint *
// GLOBAL DAT_005779d4 undefined4 *
// GLOBAL DAT_005779d8 undefined4
// GLOBAL DAT_005779dc uint *
// GLOBAL DAT_005779e0 undefined4 *
// GLOBAL DAT_005779e4 undefined4

undefined4 func_0057786C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005779ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005779ac), iVar1 != 0)) {
    *DAT_005779b0 = DAT_005779b4;
  }
  if (DAT_005779b0 != param_2) {
    if (((*DAT_005779b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005779b8), iVar1 != 0)) {
      *DAT_005779bc = DAT_005779c0;
    }
    if (DAT_005779bc != param_2) {
      if (((*DAT_005779c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005779c4), iVar1 != 0)) {
        *DAT_005779c8 = DAT_005779cc;
      }
      if (DAT_005779c8 != param_2) {
        if (((*DAT_005779d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005779d0), iVar1 != 0))
        {
          *DAT_005779d4 = DAT_005779d8;
        }
        if (DAT_005779d4 != param_2) {
          if (((*DAT_005779dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005779dc), iVar1 != 0)
             ) {
            *DAT_005779e0 = DAT_005779e4;
          }
          if (DAT_005779e0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

