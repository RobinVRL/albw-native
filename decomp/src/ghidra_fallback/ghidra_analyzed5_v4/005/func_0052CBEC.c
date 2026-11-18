#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052cc64;
extern undefined4 *DAT_0052cc68;
extern undefined4 DAT_0052cc6c;
extern uint *DAT_0052cc70;
extern undefined4 *DAT_0052cc74;
extern undefined4 DAT_0052cc78;

// USA 0052CBEC <- EU 0052CBC4 (Ghidra, non-matching)
// GLOBAL DAT_0052cc64 uint *
// GLOBAL DAT_0052cc68 undefined4 *
// GLOBAL DAT_0052cc6c undefined4
// GLOBAL DAT_0052cc70 uint *
// GLOBAL DAT_0052cc74 undefined4 *
// GLOBAL DAT_0052cc78 undefined4

undefined4 func_0052CBEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052cc64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cc64), iVar1 != 0)) {
    *DAT_0052cc68 = DAT_0052cc6c;
  }
  if (DAT_0052cc68 != param_2) {
    if (((*DAT_0052cc70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cc70), iVar1 != 0)) {
      *DAT_0052cc74 = DAT_0052cc78;
    }
    if (DAT_0052cc74 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

