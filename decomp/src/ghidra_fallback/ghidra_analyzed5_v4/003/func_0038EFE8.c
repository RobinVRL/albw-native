#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0038f048;
extern undefined4 DAT_0038f04c;

// USA 0038EFE8 <- EU 0038EFC4 (Ghidra, non-matching)
// GLOBAL DAT_0038f048 undefined4
// GLOBAL DAT_0038f04c undefined4

undefined4 func_0038EFE8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_0038f04c;
  *puVar2 = DAT_0038f048;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *(undefined1 *)((int)puVar2 + 0x71) = 0;
  *(undefined1 *)((int)puVar2 + 0x72) = 0;
  *(undefined2 *)(puVar2 + 0x1d) = 0;
  *(undefined2 *)((int)puVar2 + 0x76) = 0;
  *(undefined2 *)(puVar2 + 0x1e) = 0;
  puVar2[0x1f] = uVar1;
  puVar2[0x20] = uVar1;
  puVar2[0x21] = uVar1;
  puVar4 = (undefined4 *)puVar2[0xc];
  uVar3 = puVar4[1];
  uVar5 = puVar4[2];
  puVar2[0x22] = *puVar4;
  puVar2[0x23] = uVar3;
  puVar2[0x24] = uVar5;
  puVar2[0x25] = 0;
  puVar2[0x26] = uVar1;
  puVar2[0x27] = uVar1;
  puVar2[0x28] = uVar1;
  *(undefined1 *)(puVar2 + 0x29) = 0;
  *(undefined1 *)((int)puVar2 + 0xa5) = 0;
  *(undefined1 *)((int)puVar2 + 0xa6) = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2c] = 0xffffffff;
  puVar2[0x30] = uVar1;
  puVar2[0x31] = uVar1;
  puVar2[0x32] = uVar1;
  return (undefined4)param_1;
}

