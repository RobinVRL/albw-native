#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00586154;
extern undefined4 *DAT_00586158;
extern undefined4 DAT_0058615c;
extern uint *DAT_00586160;
extern undefined4 *DAT_00586164;
extern undefined4 DAT_00586168;

// USA 005860DC <- EU 005860B4 (Ghidra, non-matching)
// GLOBAL DAT_00586154 uint *
// GLOBAL DAT_00586158 undefined4 *
// GLOBAL DAT_0058615c undefined4
// GLOBAL DAT_00586160 uint *
// GLOBAL DAT_00586164 undefined4 *
// GLOBAL DAT_00586168 undefined4

undefined4 func_005860DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00586154 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586154), iVar1 != 0)) {
    *DAT_00586158 = DAT_0058615c;
  }
  if (DAT_00586158 != param_2) {
    if (((*DAT_00586160 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586160), iVar1 != 0)) {
      *DAT_00586164 = DAT_00586168;
    }
    if (DAT_00586164 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

