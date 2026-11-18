#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern undefined4 DAT_002da488;
extern undefined4 DAT_002da48c;
extern undefined4 DAT_002da490;

// USA 002DA3A4 <- EU 002DA380 (Ghidra, non-matching)
// GLOBAL DAT_002da488 undefined4
// GLOBAL DAT_002da48c undefined4
// GLOBAL DAT_002da490 undefined4

undefined4 * func_002DA3A4(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_002da488;
  puVar1[0x1c] = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)((int)puVar1 + 0x75) = 0;
  *(undefined1 *)((int)puVar1 + 0x76) = 0;
  *(undefined1 *)((int)puVar1 + 0x77) = 0;
  uVar4 = DAT_002da48c;
  *(undefined1 *)(puVar1 + 0x1e) = 2;
  puVar1[0x1f] = 0;
  puVar1[0x20] = uVar4;
  puVar1[0x21] = uVar4;
  puVar1[0x22] = uVar4;
  puVar1[0x23] = uVar4;
  puVar1[0x24] = 0;
  puVar1[0x25] = uVar4;
  puVar1[0x26] = uVar4;
  puVar1[0x27] = uVar4;
  puVar1[0x28] = 0;
  puVar1[0x29] = uVar4;
  puVar1[0x2a] = uVar4;
  puVar1[0x2b] = uVar4;
  puVar1[0x2c] = uVar4;
  puVar1[0x2d] = *(undefined4 *)puVar1[0xf];
  uVar5 = puVar1[0xb];
  puVar1 = (undefined4 *)func_003673F4(puVar1 + 0x2e,2);
  *puVar1 = DAT_002da490;
  puVar1[0xe] = uVar5;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  *(undefined1 *)((int)puVar1 + 0x42) = 0;
  *(undefined1 *)((int)puVar1 + 0x43) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  puVar2 = (undefined4 *)puVar1[-0x22];
  uVar5 = puVar2[1];
  uVar3 = puVar2[2];
  puVar1[0x12] = *puVar2;
  puVar1[0x13] = uVar5;
  puVar1[0x14] = uVar3;
  puVar2 = (undefined4 *)puVar1[-0x22];
  uVar5 = *puVar2;
  uVar3 = puVar2[1];
  puVar1[0x17] = puVar2[2];
  puVar1[0x15] = uVar5;
  puVar1[0x16] = uVar3;
  puVar1[0x18] = uVar4;
  puVar1[0x19] = uVar4;
  puVar1[0x1a] = uVar4;
  *(undefined2 *)(puVar1 + 0x1b) = 0xffff;
  puVar1[0x1c] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  return puVar1 + -0x2e;
}

