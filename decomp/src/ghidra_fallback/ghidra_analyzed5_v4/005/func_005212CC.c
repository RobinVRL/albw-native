#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521340;
extern undefined4 *DAT_00521344;
extern undefined4 DAT_00521348;
extern uint *DAT_0052134c;
extern undefined4 *DAT_00521350;
extern undefined4 DAT_00521354;

// USA 005212CC <- EU 005212A4 (Ghidra, non-matching)
// GLOBAL DAT_00521340 uint *
// GLOBAL DAT_00521344 undefined4 *
// GLOBAL DAT_00521348 undefined4
// GLOBAL DAT_0052134c uint *
// GLOBAL DAT_00521350 undefined4 *
// GLOBAL DAT_00521354 undefined4

undefined4 func_005212CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521340 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521340), iVar1 != 0)) {
    *DAT_00521344 = DAT_00521348;
  }
  if (DAT_00521344 != param_2) {
    if (((*DAT_0052134c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052134c), iVar1 != 0)) {
      *DAT_00521350 = DAT_00521354;
    }
    if (DAT_00521350 != param_2) {
      return 0;
    }
  }
  return 1;
}

