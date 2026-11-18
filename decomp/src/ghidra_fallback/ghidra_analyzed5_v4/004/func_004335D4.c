#include "ghidra_types.h"

extern int func_0048FB4C(undefined4 *param_1);
extern undefined4 DAT_00433648;
extern undefined4 DAT_0043364c;
extern undefined4 DAT_00433650;
extern undefined4 DAT_00433654;
extern undefined4 DAT_00433658;
extern undefined4 DAT_0043365c;
extern undefined4 DAT_00433660;

// USA 004335D4 <- EU 004335B4 (Ghidra, non-matching)
// GLOBAL DAT_00433648 undefined4
// GLOBAL DAT_0043364c undefined4
// GLOBAL DAT_00433650 undefined4
// GLOBAL DAT_00433654 undefined4
// GLOBAL DAT_00433658 undefined4
// GLOBAL DAT_0043365c undefined4
// GLOBAL DAT_00433660 undefined4

undefined4 func_004335D4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = func_0048FB4C(param_1);
  puVar3[10] = puVar3 + 0xc;
  puVar3[0xb] = 0x80;
  *(undefined1 *)(puVar3[10] + 0x7f) = 0;
  uVar2 = DAT_00433658;
  uVar1 = DAT_00433650;
  *(undefined1 *)puVar3[10] = 0;
  puVar3[9] = uVar1;
  *(undefined1 *)(puVar3 + 0x2c) = 7;
  *(undefined1 *)((int)puVar3 + 0xb1) = 0xff;
  *puVar3 = DAT_00433654;
  puVar3[0x2d] = 0;
  puVar3[0x32] = 0;
  puVar3[0x33] = 0;
  puVar3[0x34] = uVar2;
  puVar3[0x35] = uVar2;
  puVar3[0x36] = uVar2;
  uVar1 = DAT_0043365c;
  puVar3[0x37] = DAT_0043365c;
  puVar3[0x38] = uVar1;
  puVar3[0x39] = uVar1;
  puVar3[0x3a] = DAT_00433660;
  return (undefined4)param_1;
}

