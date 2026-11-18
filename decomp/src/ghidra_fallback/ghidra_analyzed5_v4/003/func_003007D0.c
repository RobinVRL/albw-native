#include "ghidra_types.h"

extern int func_001B8C78(undefined4 *param_1);
extern undefined4 DAT_00300820;
extern undefined4 DAT_00300824;
extern undefined4 DAT_00300828;
extern undefined4 DAT_0030082c;
extern undefined4 DAT_00300830;

// GLOBAL DAT_00300820 undefined4
// GLOBAL DAT_00300824 undefined4
// GLOBAL DAT_00300828 undefined4
// GLOBAL DAT_0030082c undefined4
// GLOBAL DAT_00300830 undefined4
// USA 003007D0 <- EU 003007AC (Ghidra, function missing from the decomp table)

void func_003007D0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_001B8C78(param_1);
  *puVar1 = DAT_00300820;
  puVar1[0x163] = puVar1 + 0x165;
  puVar1[0x164] = 0x40;
  *(undefined1 *)(puVar1[0x163] + 0x3f) = 0;
  *(undefined1 *)puVar1[0x163] = 0;
  puVar1[0x162] = DAT_0030082c;
  *puVar1 = DAT_00300830;
  puVar1[0x175] = 0;
  puVar1[0x176] = 0x20;
  puVar1[0x177] = 0;
  if (puVar1 + 0x178 != (undefined4 *)0x0) {
    puVar1[0x177] = puVar1 + 0x178;
  }
  return;
}

