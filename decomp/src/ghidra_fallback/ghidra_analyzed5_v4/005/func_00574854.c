#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574994;
extern undefined4 *DAT_00574998;
extern undefined4 DAT_0057499c;
extern uint *DAT_005749a0;
extern undefined4 *DAT_005749a4;
extern undefined4 DAT_005749a8;
extern uint *DAT_005749ac;
extern undefined4 *DAT_005749b0;
extern undefined4 DAT_005749b4;
extern uint *DAT_005749b8;
extern undefined4 *DAT_005749bc;
extern undefined4 DAT_005749c0;
extern uint *DAT_005749c4;
extern undefined4 *DAT_005749c8;
extern undefined4 DAT_005749cc;

// USA 00574854 <- EU 0057482C (Ghidra, non-matching)
// GLOBAL DAT_00574994 uint *
// GLOBAL DAT_00574998 undefined4 *
// GLOBAL DAT_0057499c undefined4
// GLOBAL DAT_005749a0 uint *
// GLOBAL DAT_005749a4 undefined4 *
// GLOBAL DAT_005749a8 undefined4
// GLOBAL DAT_005749ac uint *
// GLOBAL DAT_005749b0 undefined4 *
// GLOBAL DAT_005749b4 undefined4
// GLOBAL DAT_005749b8 uint *
// GLOBAL DAT_005749bc undefined4 *
// GLOBAL DAT_005749c0 undefined4
// GLOBAL DAT_005749c4 uint *
// GLOBAL DAT_005749c8 undefined4 *
// GLOBAL DAT_005749cc undefined4

undefined4 func_00574854(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574994 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574994), iVar1 != 0)) {
    *DAT_00574998 = DAT_0057499c;
  }
  if (DAT_00574998 != param_2) {
    if (((*DAT_005749a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005749a0), iVar1 != 0)) {
      *DAT_005749a4 = DAT_005749a8;
    }
    if (DAT_005749a4 != param_2) {
      if (((*DAT_005749ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005749ac), iVar1 != 0)) {
        *DAT_005749b0 = DAT_005749b4;
      }
      if (DAT_005749b0 != param_2) {
        if (((*DAT_005749b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005749b8), iVar1 != 0))
        {
          *DAT_005749bc = DAT_005749c0;
        }
        if (DAT_005749bc != param_2) {
          if (((*DAT_005749c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005749c4), iVar1 != 0)
             ) {
            *DAT_005749c8 = DAT_005749cc;
          }
          if (DAT_005749c8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

