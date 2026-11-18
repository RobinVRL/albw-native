#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ac08;
extern undefined4 *DAT_0052ac0c;
extern undefined4 DAT_0052ac10;
extern uint *DAT_0052ac14;
extern undefined4 *DAT_0052ac18;
extern undefined4 DAT_0052ac1c;
extern uint *DAT_0052ac20;
extern undefined4 *DAT_0052ac24;
extern undefined4 DAT_0052ac28;

// USA 0052AB50 <- EU 0052AB28 (Ghidra, non-matching)
// GLOBAL DAT_0052ac08 uint *
// GLOBAL DAT_0052ac0c undefined4 *
// GLOBAL DAT_0052ac10 undefined4
// GLOBAL DAT_0052ac14 uint *
// GLOBAL DAT_0052ac18 undefined4 *
// GLOBAL DAT_0052ac1c undefined4
// GLOBAL DAT_0052ac20 uint *
// GLOBAL DAT_0052ac24 undefined4 *
// GLOBAL DAT_0052ac28 undefined4

undefined4 func_0052AB50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ac08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ac08), iVar1 != 0)) {
    *DAT_0052ac0c = DAT_0052ac10;
  }
  if (DAT_0052ac0c != param_2) {
    if (((*DAT_0052ac14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ac14), iVar1 != 0)) {
      *DAT_0052ac18 = DAT_0052ac1c;
    }
    if (DAT_0052ac18 != param_2) {
      if (((*DAT_0052ac20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ac20), iVar1 != 0)) {
        *DAT_0052ac24 = DAT_0052ac28;
      }
      if (DAT_0052ac24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

