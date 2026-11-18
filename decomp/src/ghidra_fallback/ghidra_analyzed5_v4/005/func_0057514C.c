#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057528c;
extern undefined4 *DAT_00575290;
extern undefined4 DAT_00575294;
extern uint *DAT_00575298;
extern undefined4 *DAT_0057529c;
extern undefined4 DAT_005752a0;
extern uint *DAT_005752a4;
extern undefined4 *DAT_005752a8;
extern undefined4 DAT_005752ac;
extern uint *DAT_005752b0;
extern undefined4 *DAT_005752b4;
extern undefined4 DAT_005752b8;
extern uint *DAT_005752bc;
extern undefined4 *DAT_005752c0;
extern undefined4 DAT_005752c4;

// USA 0057514C <- EU 00575124 (Ghidra, non-matching)
// GLOBAL DAT_0057528c uint *
// GLOBAL DAT_00575290 undefined4 *
// GLOBAL DAT_00575294 undefined4
// GLOBAL DAT_00575298 uint *
// GLOBAL DAT_0057529c undefined4 *
// GLOBAL DAT_005752a0 undefined4
// GLOBAL DAT_005752a4 uint *
// GLOBAL DAT_005752a8 undefined4 *
// GLOBAL DAT_005752ac undefined4
// GLOBAL DAT_005752b0 uint *
// GLOBAL DAT_005752b4 undefined4 *
// GLOBAL DAT_005752b8 undefined4
// GLOBAL DAT_005752bc uint *
// GLOBAL DAT_005752c0 undefined4 *
// GLOBAL DAT_005752c4 undefined4

undefined4 func_0057514C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057528c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057528c), iVar1 != 0)) {
    *DAT_00575290 = DAT_00575294;
  }
  if (DAT_00575290 != param_2) {
    if (((*DAT_00575298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575298), iVar1 != 0)) {
      *DAT_0057529c = DAT_005752a0;
    }
    if (DAT_0057529c != param_2) {
      if (((*DAT_005752a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005752a4), iVar1 != 0)) {
        *DAT_005752a8 = DAT_005752ac;
      }
      if (DAT_005752a8 != param_2) {
        if (((*DAT_005752b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005752b0), iVar1 != 0))
        {
          *DAT_005752b4 = DAT_005752b8;
        }
        if (DAT_005752b4 != param_2) {
          if (((*DAT_005752bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005752bc), iVar1 != 0)
             ) {
            *DAT_005752c0 = DAT_005752c4;
          }
          if (DAT_005752c0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

