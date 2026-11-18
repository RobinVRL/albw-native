#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_005447b8;
extern undefined4 *DAT_005447bc;
extern undefined4 DAT_005447c0;
extern uint *DAT_005447c4;
extern undefined4 *DAT_005447c8;
extern undefined4 DAT_005447cc;

// USA 00544740 <- EU 00544718 (Ghidra, non-matching)
// GLOBAL DAT_005447b8 uint *
// GLOBAL DAT_005447bc undefined4 *
// GLOBAL DAT_005447c0 undefined4
// GLOBAL DAT_005447c4 uint *
// GLOBAL DAT_005447c8 undefined4 *
// GLOBAL DAT_005447cc undefined4

undefined4 func_00544740(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005447b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005447b8), iVar1 != 0)) {
    *DAT_005447bc = DAT_005447c0;
  }
  if (DAT_005447bc != param_2) {
    if (((*DAT_005447c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005447c4), iVar1 != 0)) {
      *DAT_005447c8 = DAT_005447cc;
    }
    if (DAT_005447c8 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

