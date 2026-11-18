#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_00107e64;
extern undefined4 *DAT_00107e68;

// USA 00107D38 <- EU 00107D38 (Ghidra, non-matching)
// GLOBAL DAT_00107e64 undefined *
// GLOBAL DAT_00107e68 undefined4 *

void * func_00107D38(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pvVar2 = (void *)func_00100118(param_1,DAT_00107e64,0x10,0x11);
  puVar1 = DAT_00107e68;
  uVar3 = *DAT_00107e68;
  uVar4 = DAT_00107e68[1];
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xc) = uVar4;
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(void **)((int)pvVar2 + 0x14) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x18) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x1c) = uVar4;
  uVar3 = puVar1[4];
  uVar4 = puVar1[5];
  *(void **)((int)pvVar2 + 0x24) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x28) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x2c) = uVar4;
  uVar3 = puVar1[6];
  uVar4 = puVar1[7];
  *(void **)((int)pvVar2 + 0x34) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x38) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x3c) = uVar4;
  uVar3 = puVar1[8];
  uVar4 = puVar1[9];
  *(void **)((int)pvVar2 + 0x44) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x48) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x4c) = uVar4;
  uVar3 = puVar1[10];
  uVar4 = puVar1[0xb];
  *(void **)((int)pvVar2 + 0x54) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x58) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x5c) = uVar4;
  uVar3 = puVar1[0xc];
  uVar4 = puVar1[0xd];
  *(void **)((int)pvVar2 + 100) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x68) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x6c) = uVar4;
  uVar3 = puVar1[0xe];
  uVar4 = puVar1[0xf];
  *(void **)((int)pvVar2 + 0x74) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x78) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x7c) = uVar4;
  uVar3 = puVar1[0x10];
  uVar4 = puVar1[0x11];
  *(void **)((int)pvVar2 + 0x84) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x88) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x8c) = uVar4;
  uVar3 = puVar1[0x12];
  uVar4 = puVar1[0x13];
  *(void **)((int)pvVar2 + 0x94) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x98) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0x9c) = uVar4;
  uVar3 = puVar1[0x14];
  uVar4 = puVar1[0x15];
  *(void **)((int)pvVar2 + 0xa4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0xa8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xac) = uVar4;
  uVar3 = puVar1[0x16];
  uVar4 = puVar1[0x17];
  *(void **)((int)pvVar2 + 0xb4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0xb8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xbc) = uVar4;
  uVar3 = puVar1[0x18];
  uVar4 = puVar1[0x19];
  *(void **)((int)pvVar2 + 0xc4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 200) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xcc) = uVar4;
  uVar3 = puVar1[0x1a];
  uVar4 = puVar1[0x1b];
  *(void **)((int)pvVar2 + 0xd4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0xd8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xdc) = uVar4;
  uVar3 = puVar1[0x1c];
  uVar4 = puVar1[0x1d];
  *(void **)((int)pvVar2 + 0xe4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0xe8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xec) = uVar4;
  uVar3 = puVar1[0x1e];
  uVar4 = puVar1[0x1f];
  *(void **)((int)pvVar2 + 0xf4) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0xf8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xfc) = uVar4;
  uVar3 = puVar1[0x20];
  *(undefined4 *)((int)pvVar2 + 0x10c) = puVar1[0x21];
  *(void **)((int)pvVar2 + 0x104) = pvVar2;
  *(undefined4 *)((int)pvVar2 + 0x108) = uVar3;
  return pvVar2;
}

