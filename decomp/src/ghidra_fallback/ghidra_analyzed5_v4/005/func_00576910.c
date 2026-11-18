#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00576988;
extern undefined4 *DAT_0057698c;
extern undefined4 DAT_00576990;
extern uint *DAT_00576994;
extern undefined4 *DAT_00576998;
extern undefined4 DAT_0057699c;

// USA 00576910 <- EU 005768E8 (Ghidra, non-matching)
// GLOBAL DAT_00576988 uint *
// GLOBAL DAT_0057698c undefined4 *
// GLOBAL DAT_00576990 undefined4
// GLOBAL DAT_00576994 uint *
// GLOBAL DAT_00576998 undefined4 *
// GLOBAL DAT_0057699c undefined4

undefined4 func_00576910(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00576988 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576988), iVar1 != 0)) {
    *DAT_0057698c = DAT_00576990;
  }
  if (DAT_0057698c != param_2) {
    if (((*DAT_00576994 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576994), iVar1 != 0)) {
      *DAT_00576998 = DAT_0057699c;
    }
    if (DAT_00576998 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

