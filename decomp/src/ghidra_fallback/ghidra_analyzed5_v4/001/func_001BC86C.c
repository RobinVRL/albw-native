#include "ghidra_types.h"

extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int DAT_001bc8c0;
extern undefined4 DAT_001bc8c4;

// USA 001BC86C <- EU 001BC86C (Ghidra, non-matching)
// GLOBAL DAT_001bc8c0 int
// GLOBAL DAT_001bc8c4 undefined4

undefined1 * func_001BC86C(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = func_004EE484((undefined4 *)(param_1 + 0x10));
  puVar2 = func_004EDC9C((undefined4 *)(iVar1 + 100));
  iVar1 = DAT_001bc8c0;
  puVar2[0x13] = 0;
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  puVar2[0x14] = *(undefined4 *)(iVar1 + 0x10);
  puVar2[0x15] = uVar3;
  puVar2[0x12] = DAT_001bc8c4;
  puVar2[0x16] = 0;
  *(undefined1 *)(puVar2 + 0x18) = 0;
  return (undefined1 *)(puVar2 + -0x1d);
}

