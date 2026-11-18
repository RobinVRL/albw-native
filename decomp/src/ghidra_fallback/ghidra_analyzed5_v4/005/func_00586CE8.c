#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00586de4;
extern undefined4 *DAT_00586de8;
extern undefined4 DAT_00586dec;
extern uint *DAT_00586df0;
extern undefined4 *DAT_00586df4;
extern undefined4 DAT_00586df8;
extern uint *DAT_00586dfc;
extern undefined4 *DAT_00586e00;
extern undefined4 DAT_00586e04;
extern uint *DAT_00586e08;
extern undefined4 *DAT_00586e0c;
extern undefined4 DAT_00586e10;

// USA 00586CE8 <- EU 00586CC0 (Ghidra, non-matching)
// GLOBAL DAT_00586de4 uint *
// GLOBAL DAT_00586de8 undefined4 *
// GLOBAL DAT_00586dec undefined4
// GLOBAL DAT_00586df0 uint *
// GLOBAL DAT_00586df4 undefined4 *
// GLOBAL DAT_00586df8 undefined4
// GLOBAL DAT_00586dfc uint *
// GLOBAL DAT_00586e00 undefined4 *
// GLOBAL DAT_00586e04 undefined4
// GLOBAL DAT_00586e08 uint *
// GLOBAL DAT_00586e0c undefined4 *
// GLOBAL DAT_00586e10 undefined4

undefined4 func_00586CE8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00586de4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586de4), iVar1 != 0)) {
    *DAT_00586de8 = DAT_00586dec;
  }
  if (DAT_00586de8 != param_2) {
    if (((*DAT_00586df0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586df0), iVar1 != 0)) {
      *DAT_00586df4 = DAT_00586df8;
    }
    if (DAT_00586df4 != param_2) {
      if (((*DAT_00586dfc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586dfc), iVar1 != 0)) {
        *DAT_00586e00 = DAT_00586e04;
      }
      if (DAT_00586e00 != param_2) {
        if (((*DAT_00586e08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586e08), iVar1 != 0))
        {
          *DAT_00586e0c = DAT_00586e10;
        }
        if (DAT_00586e0c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

