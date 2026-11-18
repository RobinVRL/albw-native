#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057d820;
extern undefined4 *DAT_0057d824;
extern undefined4 DAT_0057d828;
extern uint *DAT_0057d82c;
extern undefined4 *DAT_0057d830;
extern undefined4 DAT_0057d834;
extern uint *DAT_0057d838;
extern undefined4 *DAT_0057d83c;
extern undefined4 DAT_0057d840;

// USA 0057D768 <- EU 0057D740 (Ghidra, non-matching)
// GLOBAL DAT_0057d820 uint *
// GLOBAL DAT_0057d824 undefined4 *
// GLOBAL DAT_0057d828 undefined4
// GLOBAL DAT_0057d82c uint *
// GLOBAL DAT_0057d830 undefined4 *
// GLOBAL DAT_0057d834 undefined4
// GLOBAL DAT_0057d838 uint *
// GLOBAL DAT_0057d83c undefined4 *
// GLOBAL DAT_0057d840 undefined4

undefined4 func_0057D768(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d820 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d820), iVar1 != 0)) {
    *DAT_0057d824 = DAT_0057d828;
  }
  if (DAT_0057d824 != param_2) {
    if (((*DAT_0057d82c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d82c), iVar1 != 0)) {
      *DAT_0057d830 = DAT_0057d834;
    }
    if (DAT_0057d830 != param_2) {
      if (((*DAT_0057d838 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d838), iVar1 != 0)) {
        *DAT_0057d83c = DAT_0057d840;
      }
      if (DAT_0057d83c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

