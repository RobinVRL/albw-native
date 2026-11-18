#include "ghidra_types.h"

extern undefined4 *DAT_00119a4c;
extern undefined4 *DAT_00119a50;

// USA 00119A18 <- EU 00119A18 (Ghidra, non-matching)
// GLOBAL DAT_00119a4c undefined4 *
// GLOBAL DAT_00119a50 undefined4 *

undefined2 * func_00119A18(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00119a4c;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 2) = *puVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  uVar2 = DAT_00119a50[1];
  uVar3 = DAT_00119a50[2];
  *(undefined4 *)(param_1 + 8) = *DAT_00119a50;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return param_1;
}

