#include "ghidra_types.h"

extern int func_003E6A90(undefined4 *param_1);
extern undefined4 DAT_00420164;
extern undefined4 DAT_00420168;

// USA 00420110 <- EU 004200F0 (Ghidra, non-matching)
// GLOBAL DAT_00420164 undefined4
// GLOBAL DAT_00420168 undefined4

undefined4 * func_00420110(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_00420164;
  param_1[1] = 0;
  puVar2 = func_003E6A90(param_1 + 2);
  puVar2 = func_003E6A90(puVar2 + 4);
  uVar1 = DAT_00420168;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(undefined1 *)((int)puVar2 + 0x19) = 0;
  *(undefined1 *)((int)puVar2 + 0x1a) = 0;
  *(undefined1 *)((int)puVar2 + 0x1b) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  puVar2[0x17d] = 0;
  puVar2[0x17e] = 0;
  puVar2[0x17f] = 0;
  puVar2[0x180] = 0;
  puVar2[0x179] = uVar1;
  puVar2[0x17a] = uVar1;
  puVar2[0x17b] = uVar1;
  puVar2[0x17c] = uVar1;
  return puVar2 + -6;
}

