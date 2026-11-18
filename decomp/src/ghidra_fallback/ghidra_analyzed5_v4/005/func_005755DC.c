#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057571c;
extern undefined4 *DAT_00575720;
extern undefined4 DAT_00575724;
extern uint *DAT_00575728;
extern undefined4 *DAT_0057572c;
extern undefined4 DAT_00575730;
extern uint *DAT_00575734;
extern undefined4 *DAT_00575738;
extern undefined4 DAT_0057573c;
extern uint *DAT_00575740;
extern undefined4 *DAT_00575744;
extern undefined4 DAT_00575748;
extern uint *DAT_0057574c;
extern undefined4 *DAT_00575750;
extern undefined4 DAT_00575754;

// USA 005755DC <- EU 005755B4 (Ghidra, non-matching)
// GLOBAL DAT_0057571c uint *
// GLOBAL DAT_00575720 undefined4 *
// GLOBAL DAT_00575724 undefined4
// GLOBAL DAT_00575728 uint *
// GLOBAL DAT_0057572c undefined4 *
// GLOBAL DAT_00575730 undefined4
// GLOBAL DAT_00575734 uint *
// GLOBAL DAT_00575738 undefined4 *
// GLOBAL DAT_0057573c undefined4
// GLOBAL DAT_00575740 uint *
// GLOBAL DAT_00575744 undefined4 *
// GLOBAL DAT_00575748 undefined4
// GLOBAL DAT_0057574c uint *
// GLOBAL DAT_00575750 undefined4 *
// GLOBAL DAT_00575754 undefined4

undefined4 func_005755DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057571c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057571c), iVar1 != 0)) {
    *DAT_00575720 = DAT_00575724;
  }
  if (DAT_00575720 != param_2) {
    if (((*DAT_00575728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575728), iVar1 != 0)) {
      *DAT_0057572c = DAT_00575730;
    }
    if (DAT_0057572c != param_2) {
      if (((*DAT_00575734 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575734), iVar1 != 0)) {
        *DAT_00575738 = DAT_0057573c;
      }
      if (DAT_00575738 != param_2) {
        if (((*DAT_00575740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575740), iVar1 != 0))
        {
          *DAT_00575744 = DAT_00575748;
        }
        if (DAT_00575744 != param_2) {
          if (((*DAT_0057574c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057574c), iVar1 != 0)
             ) {
            *DAT_00575750 = DAT_00575754;
          }
          if (DAT_00575750 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

