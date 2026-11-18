#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576100;
extern undefined4 *DAT_00576104;
extern undefined4 DAT_00576108;
extern uint *DAT_0057610c;
extern undefined4 *DAT_00576110;
extern undefined4 DAT_00576114;
extern uint *DAT_00576118;
extern undefined4 *DAT_0057611c;
extern undefined4 DAT_00576120;
extern uint *DAT_00576124;
extern undefined4 *DAT_00576128;
extern undefined4 DAT_0057612c;

// USA 00576004 <- EU 00575FDC (Ghidra, non-matching)
// GLOBAL DAT_00576100 uint *
// GLOBAL DAT_00576104 undefined4 *
// GLOBAL DAT_00576108 undefined4
// GLOBAL DAT_0057610c uint *
// GLOBAL DAT_00576110 undefined4 *
// GLOBAL DAT_00576114 undefined4
// GLOBAL DAT_00576118 uint *
// GLOBAL DAT_0057611c undefined4 *
// GLOBAL DAT_00576120 undefined4
// GLOBAL DAT_00576124 uint *
// GLOBAL DAT_00576128 undefined4 *
// GLOBAL DAT_0057612c undefined4

undefined4 func_00576004(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576100 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576100), iVar1 != 0)) {
    *DAT_00576104 = DAT_00576108;
  }
  if (DAT_00576104 != param_2) {
    if (((*DAT_0057610c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057610c), iVar1 != 0)) {
      *DAT_00576110 = DAT_00576114;
    }
    if (DAT_00576110 != param_2) {
      if (((*DAT_00576118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576118), iVar1 != 0)) {
        *DAT_0057611c = DAT_00576120;
      }
      if (DAT_0057611c != param_2) {
        if (((*DAT_00576124 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576124), iVar1 != 0))
        {
          *DAT_00576128 = DAT_0057612c;
        }
        if (DAT_00576128 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

