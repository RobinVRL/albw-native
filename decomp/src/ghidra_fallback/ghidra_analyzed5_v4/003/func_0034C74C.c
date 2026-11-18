#include "ghidra_types.h"

extern int func_00232540(undefined4 *param_1);
extern int func_0034B980(int param_1);
extern undefined4 DAT_0034c79c;
extern undefined4 DAT_0034c7a0;

// USA 0034C74C <- EU 0034C728 (Ghidra, non-matching)
// GLOBAL DAT_0034c79c undefined4
// GLOBAL DAT_0034c7a0 undefined4

undefined4 * func_0034C74C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_0034c79c;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xb] = param_2;
  puVar2[0xc] = param_3;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  uVar1 = DAT_0034c7a0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = uVar1;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 1;
  func_0034B980((int)puVar2);
  return puVar2;
}

