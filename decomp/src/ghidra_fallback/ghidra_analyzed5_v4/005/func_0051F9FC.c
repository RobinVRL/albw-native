#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0051fa74;
extern undefined4 *DAT_0051fa78;
extern undefined4 DAT_0051fa7c;
extern uint *DAT_0051fa80;
extern undefined4 *DAT_0051fa84;
extern undefined4 DAT_0051fa88;

// USA 0051F9FC <- EU 0051F9D4 (Ghidra, non-matching)
// GLOBAL DAT_0051fa74 uint *
// GLOBAL DAT_0051fa78 undefined4 *
// GLOBAL DAT_0051fa7c undefined4
// GLOBAL DAT_0051fa80 uint *
// GLOBAL DAT_0051fa84 undefined4 *
// GLOBAL DAT_0051fa88 undefined4

undefined4 func_0051F9FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051fa74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fa74), iVar1 != 0)) {
    *DAT_0051fa78 = DAT_0051fa7c;
  }
  if (DAT_0051fa78 != param_2) {
    if (((*DAT_0051fa80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051fa80), iVar1 != 0)) {
      *DAT_0051fa84 = DAT_0051fa88;
    }
    if (DAT_0051fa84 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

