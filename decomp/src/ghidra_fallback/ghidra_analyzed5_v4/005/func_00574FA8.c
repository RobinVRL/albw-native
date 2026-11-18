#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005750e8;
extern undefined4 *DAT_005750ec;
extern undefined4 DAT_005750f0;
extern uint *DAT_005750f4;
extern undefined4 *DAT_005750f8;
extern undefined4 DAT_005750fc;
extern uint *DAT_00575100;
extern undefined4 *DAT_00575104;
extern undefined4 DAT_00575108;
extern uint *DAT_0057510c;
extern undefined4 *DAT_00575110;
extern undefined4 DAT_00575114;
extern uint *DAT_00575118;
extern undefined4 *DAT_0057511c;
extern undefined4 DAT_00575120;

// USA 00574FA8 <- EU 00574F80 (Ghidra, non-matching)
// GLOBAL DAT_005750e8 uint *
// GLOBAL DAT_005750ec undefined4 *
// GLOBAL DAT_005750f0 undefined4
// GLOBAL DAT_005750f4 uint *
// GLOBAL DAT_005750f8 undefined4 *
// GLOBAL DAT_005750fc undefined4
// GLOBAL DAT_00575100 uint *
// GLOBAL DAT_00575104 undefined4 *
// GLOBAL DAT_00575108 undefined4
// GLOBAL DAT_0057510c uint *
// GLOBAL DAT_00575110 undefined4 *
// GLOBAL DAT_00575114 undefined4
// GLOBAL DAT_00575118 uint *
// GLOBAL DAT_0057511c undefined4 *
// GLOBAL DAT_00575120 undefined4

undefined4 func_00574FA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005750e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005750e8), iVar1 != 0)) {
    *DAT_005750ec = DAT_005750f0;
  }
  if (DAT_005750ec != param_2) {
    if (((*DAT_005750f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005750f4), iVar1 != 0)) {
      *DAT_005750f8 = DAT_005750fc;
    }
    if (DAT_005750f8 != param_2) {
      if (((*DAT_00575100 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575100), iVar1 != 0)) {
        *DAT_00575104 = DAT_00575108;
      }
      if (DAT_00575104 != param_2) {
        if (((*DAT_0057510c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057510c), iVar1 != 0))
        {
          *DAT_00575110 = DAT_00575114;
        }
        if (DAT_00575110 != param_2) {
          if (((*DAT_00575118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575118), iVar1 != 0)
             ) {
            *DAT_0057511c = DAT_00575120;
          }
          if (DAT_0057511c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

