#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00532680;
extern undefined4 *DAT_00532684;
extern undefined4 DAT_00532688;
extern uint *DAT_0053268c;
extern undefined4 *DAT_00532690;
extern undefined4 DAT_00532694;
extern uint *DAT_00532698;
extern undefined4 *DAT_0053269c;
extern undefined4 DAT_005326a0;
extern uint *DAT_005326a4;
extern undefined4 *DAT_005326a8;
extern undefined4 DAT_005326ac;

// USA 00532584 <- EU 0053255C (Ghidra, non-matching)
// GLOBAL DAT_00532680 uint *
// GLOBAL DAT_00532684 undefined4 *
// GLOBAL DAT_00532688 undefined4
// GLOBAL DAT_0053268c uint *
// GLOBAL DAT_00532690 undefined4 *
// GLOBAL DAT_00532694 undefined4
// GLOBAL DAT_00532698 uint *
// GLOBAL DAT_0053269c undefined4 *
// GLOBAL DAT_005326a0 undefined4
// GLOBAL DAT_005326a4 uint *
// GLOBAL DAT_005326a8 undefined4 *
// GLOBAL DAT_005326ac undefined4

undefined4 func_00532584(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00532680 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532680), iVar1 != 0)) {
    *DAT_00532684 = DAT_00532688;
  }
  if (DAT_00532684 != param_2) {
    if (((*DAT_0053268c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053268c), iVar1 != 0)) {
      *DAT_00532690 = DAT_00532694;
    }
    if (DAT_00532690 != param_2) {
      if (((*DAT_00532698 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532698), iVar1 != 0)) {
        *DAT_0053269c = DAT_005326a0;
      }
      if (DAT_0053269c != param_2) {
        if (((*DAT_005326a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005326a4), iVar1 != 0))
        {
          *DAT_005326a8 = DAT_005326ac;
        }
        if (DAT_005326a8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

