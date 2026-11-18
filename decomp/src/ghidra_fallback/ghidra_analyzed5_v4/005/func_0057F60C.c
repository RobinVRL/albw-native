#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057f680;
extern undefined4 *DAT_0057f684;
extern undefined4 DAT_0057f688;
extern uint *DAT_0057f68c;
extern undefined4 *DAT_0057f690;
extern undefined4 DAT_0057f694;

// USA 0057F60C <- EU 0057F5E4 (Ghidra, non-matching)
// GLOBAL DAT_0057f680 uint *
// GLOBAL DAT_0057f684 undefined4 *
// GLOBAL DAT_0057f688 undefined4
// GLOBAL DAT_0057f68c uint *
// GLOBAL DAT_0057f690 undefined4 *
// GLOBAL DAT_0057f694 undefined4

undefined4 func_0057F60C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057f680 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f680), iVar1 != 0)) {
    *DAT_0057f684 = DAT_0057f688;
  }
  if (DAT_0057f684 != param_2) {
    if (((*DAT_0057f68c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057f68c), iVar1 != 0)) {
      *DAT_0057f690 = DAT_0057f694;
    }
    if (DAT_0057f690 != param_2) {
      return 0;
    }
  }
  return 1;
}

