#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068dc04;
extern undefined4 *DAT_0068dc08;
extern undefined4 DAT_0068dc0c;
extern uint *DAT_0068dc10;
extern undefined4 *DAT_0068dc14;
extern undefined4 DAT_0068dc18;

// USA 0068DB8C <- EU 0068DB64 (Ghidra, non-matching)
// GLOBAL DAT_0068dc04 uint *
// GLOBAL DAT_0068dc08 undefined4 *
// GLOBAL DAT_0068dc0c undefined4
// GLOBAL DAT_0068dc10 uint *
// GLOBAL DAT_0068dc14 undefined4 *
// GLOBAL DAT_0068dc18 undefined4

undefined4 func_0068DB8C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068dc04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dc04), iVar1 != 0)) {
    *DAT_0068dc08 = DAT_0068dc0c;
  }
  if (DAT_0068dc08 != param_2) {
    if (((*DAT_0068dc10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dc10), iVar1 != 0)) {
      *DAT_0068dc14 = DAT_0068dc18;
    }
    if (DAT_0068dc14 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

