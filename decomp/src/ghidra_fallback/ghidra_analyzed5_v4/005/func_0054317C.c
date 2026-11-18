#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543278;
extern undefined4 *DAT_0054327c;
extern undefined4 DAT_00543280;
extern uint *DAT_00543284;
extern undefined4 *DAT_00543288;
extern undefined4 DAT_0054328c;
extern uint *DAT_00543290;
extern undefined4 *DAT_00543294;
extern undefined4 DAT_00543298;
extern uint *DAT_0054329c;
extern undefined4 *DAT_005432a0;
extern undefined4 DAT_005432a4;

// USA 0054317C <- EU 00543154 (Ghidra, non-matching)
// GLOBAL DAT_00543278 uint *
// GLOBAL DAT_0054327c undefined4 *
// GLOBAL DAT_00543280 undefined4
// GLOBAL DAT_00543284 uint *
// GLOBAL DAT_00543288 undefined4 *
// GLOBAL DAT_0054328c undefined4
// GLOBAL DAT_00543290 uint *
// GLOBAL DAT_00543294 undefined4 *
// GLOBAL DAT_00543298 undefined4
// GLOBAL DAT_0054329c uint *
// GLOBAL DAT_005432a0 undefined4 *
// GLOBAL DAT_005432a4 undefined4

undefined4 func_0054317C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543278 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543278), iVar1 != 0)) {
    *DAT_0054327c = DAT_00543280;
  }
  if (DAT_0054327c != param_2) {
    if (((*DAT_00543284 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543284), iVar1 != 0)) {
      *DAT_00543288 = DAT_0054328c;
    }
    if (DAT_00543288 != param_2) {
      if (((*DAT_00543290 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543290), iVar1 != 0)) {
        *DAT_00543294 = DAT_00543298;
      }
      if (DAT_00543294 != param_2) {
        if (((*DAT_0054329c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054329c), iVar1 != 0))
        {
          *DAT_005432a0 = DAT_005432a4;
        }
        if (DAT_005432a0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

