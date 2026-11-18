#include "ghidra_types.h"

extern int func_005FEEAC(void);
extern undefined4 *DAT_00590538;

// USA 00590520 <- EU 005904F8 (Ghidra, non-matching)
// GLOBAL DAT_00590538 undefined4 *

undefined4 func_00590520(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_00590538;
  *DAT_00590538 = param_1;
  puVar1 = func_005FEEAC();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar2 = (undefined4 *)*puVar2;
    uVar3 = 0;
    *puVar2 = puVar1;
    puVar2[1] = 0;
    puVar2[2] = puVar1;
    puVar2[3] = 0;
  }
  return uVar3;
}

