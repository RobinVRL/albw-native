#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057bff8;
extern undefined4 *DAT_0057bffc;
extern undefined4 DAT_0057c000;
extern uint *DAT_0057c004;
extern undefined4 *DAT_0057c008;
extern undefined4 DAT_0057c00c;
extern uint *DAT_0057c010;
extern undefined4 *DAT_0057c014;
extern undefined4 DAT_0057c018;
extern uint *DAT_0057c01c;
extern undefined4 *DAT_0057c020;
extern undefined4 DAT_0057c024;
extern uint *DAT_0057c028;
extern undefined4 *DAT_0057c02c;
extern undefined4 DAT_0057c030;

// USA 0057BEB8 <- EU 0057BE90 (Ghidra, non-matching)
// GLOBAL DAT_0057bff8 uint *
// GLOBAL DAT_0057bffc undefined4 *
// GLOBAL DAT_0057c000 undefined4
// GLOBAL DAT_0057c004 uint *
// GLOBAL DAT_0057c008 undefined4 *
// GLOBAL DAT_0057c00c undefined4
// GLOBAL DAT_0057c010 uint *
// GLOBAL DAT_0057c014 undefined4 *
// GLOBAL DAT_0057c018 undefined4
// GLOBAL DAT_0057c01c uint *
// GLOBAL DAT_0057c020 undefined4 *
// GLOBAL DAT_0057c024 undefined4
// GLOBAL DAT_0057c028 uint *
// GLOBAL DAT_0057c02c undefined4 *
// GLOBAL DAT_0057c030 undefined4

undefined4 func_0057BEB8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057bff8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057bff8), iVar1 != 0)) {
    *DAT_0057bffc = DAT_0057c000;
  }
  if (DAT_0057bffc != param_2) {
    if (((*DAT_0057c004 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c004), iVar1 != 0)) {
      *DAT_0057c008 = DAT_0057c00c;
    }
    if (DAT_0057c008 != param_2) {
      if (((*DAT_0057c010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c010), iVar1 != 0)) {
        *DAT_0057c014 = DAT_0057c018;
      }
      if (DAT_0057c014 != param_2) {
        if (((*DAT_0057c01c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c01c), iVar1 != 0))
        {
          *DAT_0057c020 = DAT_0057c024;
        }
        if (DAT_0057c020 != param_2) {
          if (((*DAT_0057c028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c028), iVar1 != 0)
             ) {
            *DAT_0057c02c = DAT_0057c030;
          }
          if (DAT_0057c02c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

