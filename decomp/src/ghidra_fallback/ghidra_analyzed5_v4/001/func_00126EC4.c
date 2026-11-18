#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern undefined4 DAT_00126f64;

// GLOBAL DAT_00126f64 undefined4
// USA 00126EC4 <- EU 00126EC4 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

void func_00126EC4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int unaff_r4;
  
  *(undefined4 *)(unaff_r4 + 0x8e0) = 0x40000000;
  *(undefined1 *)(unaff_r4 + 0x8ec) = (undefined1)param_2;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  uVar1 = DAT_00126f64;
  *(int *)(unaff_r4 + 0x8e8) = ((int)((ulonglong)uVar3 * 3 >> 0x20) + 1) * 0x1e;
  *(undefined4 *)(unaff_r4 + 0x3dc) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x3e4) = uVar1;
  return;
}

