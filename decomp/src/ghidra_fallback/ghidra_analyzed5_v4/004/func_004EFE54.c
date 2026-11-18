#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 *DAT_004effb4;
extern undefined4 DAT_004effb8;
extern undefined4 DAT_004effbc;
extern undefined4 DAT_004effc0;
extern undefined4 DAT_004effc4;
extern undefined4 DAT_004effc8;
extern undefined4 DAT_004effcc;

// USA 004EFE54 <- EU 004EFE2C (Ghidra, non-matching)
// GLOBAL DAT_004effb4 undefined8 *
// GLOBAL DAT_004effb8 undefined4
// GLOBAL DAT_004effbc undefined4
// GLOBAL DAT_004effc0 undefined4
// GLOBAL DAT_004effc4 undefined4
// GLOBAL DAT_004effc8 undefined4
// GLOBAL DAT_004effcc undefined4

void * func_004EFE54(int param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  puVar1 = DAT_004effb4;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar6 = *puVar1;
  puVar2 = func_0010CE7C((undefined4 *)(param_1 + 0x98));
  *puVar2 = DAT_004effb8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = puVar2;
  puVar2[7] = 0;
  puVar3 = puVar2 + 9;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2[10] = param_1;
    uVar4 = DAT_004effbc;
    puVar2[0xb] = (int)uVar6;
    puVar2[0xc] = (int)((ulonglong)uVar6 >> 0x20);
    *puVar3 = uVar4;
  }
  puVar2[8] = puVar3;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = 0;
  *(undefined2 *)(puVar2 + 0x12) = 0;
  *(undefined1 *)((int)puVar2 + 0x4a) = 0;
  puVar2[0x14] = puVar2 + 0x16;
  puVar2[0x15] = 0x100;
  *(undefined1 *)(puVar2[0x14] + 0xff) = 0;
  uVar4 = DAT_004effc8;
  *(undefined1 *)puVar2[0x14] = 0;
  puVar2[0x13] = uVar4;
  uVar4 = *(undefined4 *)(puVar1 + 1);
  uVar5 = *(undefined4 *)((int)puVar1 + 0xc);
  puVar2[0x57] = puVar2 + -0x26;
  puVar2[0x58] = uVar4;
  puVar2[0x59] = uVar5;
  puVar2[0x56] = DAT_004effcc;
  puVar2[-0xb] = 0;
  puVar2[-10] = 0;
  return puVar2 + -0x26;
}

