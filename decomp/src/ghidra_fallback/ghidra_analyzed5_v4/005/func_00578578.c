#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005786b8;
extern undefined4 *DAT_005786bc;
extern undefined4 DAT_005786c0;
extern uint *DAT_005786c4;
extern undefined4 *DAT_005786c8;
extern undefined4 DAT_005786cc;
extern uint *DAT_005786d0;
extern undefined4 *DAT_005786d4;
extern undefined4 DAT_005786d8;
extern uint *DAT_005786dc;
extern undefined4 *DAT_005786e0;
extern undefined4 DAT_005786e4;
extern uint *DAT_005786e8;
extern undefined4 *DAT_005786ec;
extern undefined4 DAT_005786f0;

// USA 00578578 <- EU 00578550 (Ghidra, non-matching)
// GLOBAL DAT_005786b8 uint *
// GLOBAL DAT_005786bc undefined4 *
// GLOBAL DAT_005786c0 undefined4
// GLOBAL DAT_005786c4 uint *
// GLOBAL DAT_005786c8 undefined4 *
// GLOBAL DAT_005786cc undefined4
// GLOBAL DAT_005786d0 uint *
// GLOBAL DAT_005786d4 undefined4 *
// GLOBAL DAT_005786d8 undefined4
// GLOBAL DAT_005786dc uint *
// GLOBAL DAT_005786e0 undefined4 *
// GLOBAL DAT_005786e4 undefined4
// GLOBAL DAT_005786e8 uint *
// GLOBAL DAT_005786ec undefined4 *
// GLOBAL DAT_005786f0 undefined4

undefined4 func_00578578(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005786b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005786b8), iVar1 != 0)) {
    *DAT_005786bc = DAT_005786c0;
  }
  if (DAT_005786bc != param_2) {
    if (((*DAT_005786c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005786c4), iVar1 != 0)) {
      *DAT_005786c8 = DAT_005786cc;
    }
    if (DAT_005786c8 != param_2) {
      if (((*DAT_005786d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005786d0), iVar1 != 0)) {
        *DAT_005786d4 = DAT_005786d8;
      }
      if (DAT_005786d4 != param_2) {
        if (((*DAT_005786dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005786dc), iVar1 != 0))
        {
          *DAT_005786e0 = DAT_005786e4;
        }
        if (DAT_005786e0 != param_2) {
          if (((*DAT_005786e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005786e8), iVar1 != 0)
             ) {
            *DAT_005786ec = DAT_005786f0;
          }
          if (DAT_005786ec != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

