#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053567c;
extern undefined4 *DAT_00535680;
extern undefined4 DAT_00535684;
extern uint *DAT_00535688;
extern undefined4 *DAT_0053568c;
extern undefined4 DAT_00535690;
extern uint *DAT_00535694;
extern undefined4 *DAT_00535698;
extern undefined4 DAT_0053569c;

// USA 005355C4 <- EU 0053559C (Ghidra, non-matching)
// GLOBAL DAT_0053567c uint *
// GLOBAL DAT_00535680 undefined4 *
// GLOBAL DAT_00535684 undefined4
// GLOBAL DAT_00535688 uint *
// GLOBAL DAT_0053568c undefined4 *
// GLOBAL DAT_00535690 undefined4
// GLOBAL DAT_00535694 uint *
// GLOBAL DAT_00535698 undefined4 *
// GLOBAL DAT_0053569c undefined4

undefined4 func_005355C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053567c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053567c), iVar1 != 0)) {
    *DAT_00535680 = DAT_00535684;
  }
  if (DAT_00535680 != param_2) {
    if (((*DAT_00535688 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535688), iVar1 != 0)) {
      *DAT_0053568c = DAT_00535690;
    }
    if (DAT_0053568c != param_2) {
      if (((*DAT_00535694 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535694), iVar1 != 0)) {
        *DAT_00535698 = DAT_0053569c;
      }
      if (DAT_00535698 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

