#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern undefined4 DAT_004a4830;
extern undefined4 DAT_004a4834;

// USA 004A47CC <- EU 004A47A4 (Ghidra, non-matching)
// GLOBAL DAT_004a4830 undefined4
// GLOBAL DAT_004a4834 undefined4

undefined4 func_004A47CC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_00232540(param_1);
  *puVar2 = DAT_004a4830;
  puVar2 = func_0010A794(puVar2 + 8);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 9) = 0;
  uVar1 = DAT_004a4834;
  *(undefined2 *)((int)puVar2 + 0x26) = 0xffff;
  puVar2[10] = uVar1;
  puVar2[0xb] = 0;
  *(undefined2 *)(puVar2 + 0xc) = 0;
  *(undefined2 *)((int)puVar2 + 0x32) = 0xffff;
  puVar2[0xd] = uVar1;
  puVar2[0xe] = 0;
  *(undefined2 *)(puVar2 + 0xf) = 0;
  *(undefined2 *)((int)puVar2 + 0x3e) = 0xffff;
  puVar2[0x10] = uVar1;
  puVar2[0x11] = 0;
  *(undefined2 *)(puVar2 + 0x12) = 0;
  *(undefined2 *)((int)puVar2 + 0x4a) = 0xffff;
  puVar2[0x13] = uVar1;
  puVar2[0x14] = 0;
  *(undefined2 *)(puVar2 + 0x15) = 0;
  *(undefined2 *)((int)puVar2 + 0x56) = 0xffff;
  puVar2[0x16] = uVar1;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  return (undefined4)param_1;
}

