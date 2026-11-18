#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00573dcc;
extern undefined4 *DAT_00573dd0;
extern undefined4 DAT_00573dd4;
extern uint *DAT_00573dd8;
extern undefined4 *DAT_00573ddc;
extern undefined4 DAT_00573de0;
extern uint *DAT_00573de4;
extern undefined4 *DAT_00573de8;
extern undefined4 DAT_00573dec;
extern uint *DAT_00573df0;
extern undefined4 *DAT_00573df4;
extern undefined4 DAT_00573df8;
extern uint *DAT_00573dfc;
extern undefined4 *DAT_00573e00;
extern undefined4 DAT_00573e04;

// USA 00573C8C <- EU 00573C64 (Ghidra, non-matching)
// GLOBAL DAT_00573dcc uint *
// GLOBAL DAT_00573dd0 undefined4 *
// GLOBAL DAT_00573dd4 undefined4
// GLOBAL DAT_00573dd8 uint *
// GLOBAL DAT_00573ddc undefined4 *
// GLOBAL DAT_00573de0 undefined4
// GLOBAL DAT_00573de4 uint *
// GLOBAL DAT_00573de8 undefined4 *
// GLOBAL DAT_00573dec undefined4
// GLOBAL DAT_00573df0 uint *
// GLOBAL DAT_00573df4 undefined4 *
// GLOBAL DAT_00573df8 undefined4
// GLOBAL DAT_00573dfc uint *
// GLOBAL DAT_00573e00 undefined4 *
// GLOBAL DAT_00573e04 undefined4

undefined4 func_00573C8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00573dcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573dcc), iVar1 != 0)) {
    *DAT_00573dd0 = DAT_00573dd4;
  }
  if (DAT_00573dd0 != param_2) {
    if (((*DAT_00573dd8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573dd8), iVar1 != 0)) {
      *DAT_00573ddc = DAT_00573de0;
    }
    if (DAT_00573ddc != param_2) {
      if (((*DAT_00573de4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573de4), iVar1 != 0)) {
        *DAT_00573de8 = DAT_00573dec;
      }
      if (DAT_00573de8 != param_2) {
        if (((*DAT_00573df0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573df0), iVar1 != 0))
        {
          *DAT_00573df4 = DAT_00573df8;
        }
        if (DAT_00573df4 != param_2) {
          if (((*DAT_00573dfc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573dfc), iVar1 != 0)
             ) {
            *DAT_00573e00 = DAT_00573e04;
          }
          if (DAT_00573e00 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

