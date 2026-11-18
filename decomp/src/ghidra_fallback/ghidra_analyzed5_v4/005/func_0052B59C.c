#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b6dc;
extern undefined4 *DAT_0052b6e0;
extern undefined4 DAT_0052b6e4;
extern uint *DAT_0052b6e8;
extern undefined4 *DAT_0052b6ec;
extern undefined4 DAT_0052b6f0;
extern uint *DAT_0052b6f4;
extern undefined4 *DAT_0052b6f8;
extern undefined4 DAT_0052b6fc;
extern uint *DAT_0052b700;
extern undefined4 *DAT_0052b704;
extern undefined4 DAT_0052b708;
extern uint *DAT_0052b70c;
extern undefined4 *DAT_0052b710;
extern undefined4 DAT_0052b714;

// USA 0052B59C <- EU 0052B574 (Ghidra, non-matching)
// GLOBAL DAT_0052b6dc uint *
// GLOBAL DAT_0052b6e0 undefined4 *
// GLOBAL DAT_0052b6e4 undefined4
// GLOBAL DAT_0052b6e8 uint *
// GLOBAL DAT_0052b6ec undefined4 *
// GLOBAL DAT_0052b6f0 undefined4
// GLOBAL DAT_0052b6f4 uint *
// GLOBAL DAT_0052b6f8 undefined4 *
// GLOBAL DAT_0052b6fc undefined4
// GLOBAL DAT_0052b700 uint *
// GLOBAL DAT_0052b704 undefined4 *
// GLOBAL DAT_0052b708 undefined4
// GLOBAL DAT_0052b70c uint *
// GLOBAL DAT_0052b710 undefined4 *
// GLOBAL DAT_0052b714 undefined4

undefined4 func_0052B59C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b6dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b6dc), iVar1 != 0)) {
    *DAT_0052b6e0 = DAT_0052b6e4;
  }
  if (DAT_0052b6e0 != param_2) {
    if (((*DAT_0052b6e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b6e8), iVar1 != 0)) {
      *DAT_0052b6ec = DAT_0052b6f0;
    }
    if (DAT_0052b6ec != param_2) {
      if (((*DAT_0052b6f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b6f4), iVar1 != 0)) {
        *DAT_0052b6f8 = DAT_0052b6fc;
      }
      if (DAT_0052b6f8 != param_2) {
        if (((*DAT_0052b700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b700), iVar1 != 0))
        {
          *DAT_0052b704 = DAT_0052b708;
        }
        if (DAT_0052b704 != param_2) {
          if (((*DAT_0052b70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b70c), iVar1 != 0)
             ) {
            *DAT_0052b710 = DAT_0052b714;
          }
          if (DAT_0052b710 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

