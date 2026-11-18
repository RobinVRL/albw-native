#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ebd4;
extern undefined4 *DAT_0068ebd8;
extern undefined4 DAT_0068ebdc;
extern uint *DAT_0068ebe0;
extern undefined4 *DAT_0068ebe4;
extern undefined4 DAT_0068ebe8;

// USA 0068EB5C <- EU 0068EB34 (Ghidra, non-matching)
// GLOBAL DAT_0068ebd4 uint *
// GLOBAL DAT_0068ebd8 undefined4 *
// GLOBAL DAT_0068ebdc undefined4
// GLOBAL DAT_0068ebe0 uint *
// GLOBAL DAT_0068ebe4 undefined4 *
// GLOBAL DAT_0068ebe8 undefined4

undefined4 func_0068EB5C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ebd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ebd4), iVar1 != 0)) {
    *DAT_0068ebd8 = DAT_0068ebdc;
  }
  if (DAT_0068ebd8 != param_2) {
    if (((*DAT_0068ebe0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ebe0), iVar1 != 0)) {
      *DAT_0068ebe4 = DAT_0068ebe8;
    }
    if (DAT_0068ebe4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

