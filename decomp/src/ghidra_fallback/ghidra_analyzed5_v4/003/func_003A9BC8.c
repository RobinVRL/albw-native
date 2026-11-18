#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern undefined4 DAT_003a9c7c;
extern undefined4 DAT_003a9c80;
extern undefined4 DAT_003a9c84;

// USA 003A9BC8 <- EU 003A9BA4 (Ghidra, non-matching)
// GLOBAL DAT_003a9c7c undefined4
// GLOBAL DAT_003a9c80 undefined4
// GLOBAL DAT_003a9c84 undefined4

int func_003A9BC8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar2 = DAT_003a9c84;
  uVar1 = DAT_003a9c80;
  *puVar3 = DAT_003a9c7c;
  puVar3[0x1c] = uVar1;
  puVar3[0x1d] = uVar1;
  puVar3[0x1e] = uVar1;
  puVar3[0x1f] = uVar1;
  puVar3[0x20] = uVar1;
  puVar3[0x21] = uVar1;
  *(undefined1 *)(puVar3 + 0x22) = 0;
  *(undefined1 *)((int)puVar3 + 0x89) = 0;
  *(undefined1 *)((int)puVar3 + 0x8a) = 0;
  *(undefined1 *)((int)puVar3 + 0x8b) = 0;
  *(undefined1 *)(puVar3 + 0x23) = 0;
  uVar4 = *(undefined4 *)(puVar3[10] + 0x61c);
  puVar3[0x25] = 0;
  puVar3[0x24] = uVar4;
  puVar3[0x26] = 0;
  puVar3[0x28] = uVar1;
  puVar3[0x29] = uVar1;
  puVar3[0x2a] = uVar2;
  puVar3[0x2b] = uVar1;
  puVar3[0x2c] = 0;
  *(undefined1 *)(puVar3 + 0x2d) = 0;
  *(undefined1 *)(puVar3 + 0x2e) = 0;
  *(undefined1 *)((int)puVar3 + 0xb9) = 0;
  *(undefined1 *)((int)puVar3 + 0xba) = 0;
  *(undefined1 *)((int)puVar3 + 0xbb) = 1;
  puVar3[0x2f] = 0;
  puVar3[0x30] = uVar1;
  puVar3[0x31] = uVar1;
  puVar3[0x32] = uVar1;
  puVar3[0x33] = uVar1;
  puVar3[0x34] = uVar1;
  puVar3[0x35] = uVar1;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  *(undefined1 *)(puVar3 + 0x38) = 0;
  *(undefined1 *)((int)puVar3 + 0xe1) = 0;
  *(undefined1 *)((int)puVar3 + 0xe2) = 0;
  *(undefined1 *)(puVar3 + 0x39) = 0;
  puVar3[0x3a] = 0;
  *(undefined1 *)(puVar3 + 0x3b) = 0;
  *(undefined2 *)((int)puVar3 + 0xee) = 0;
  puVar3 = func_002E1BB4(puVar3 + 0x3c,0);
  return (int)(puVar3 + -0x3c);
}

