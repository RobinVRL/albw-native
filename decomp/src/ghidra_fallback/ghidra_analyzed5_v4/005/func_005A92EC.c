#include "ghidra_types.h"

extern undefined4 *DAT_005a936c;
extern undefined4 *DAT_005a9370;

// USA 005A92EC <- EU 005A92C4 (Ghidra, non-matching)
// GLOBAL DAT_005a936c undefined4 *
// GLOBAL DAT_005a9370 undefined4 *

void func_005A92EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a936c;
  *DAT_005a936c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a9370;
  *DAT_005a9370 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 0x3e) = 0;
  *(undefined2 *)(puVar1 + 0x40) = 0;
  *(undefined2 *)(puVar1 + 0x42) = 0;
  *(undefined2 *)(puVar1 + 0x44) = 0;
  *(undefined2 *)(puVar1 + 0x46) = 0;
  *(undefined2 *)(puVar1 + 0x48) = 0;
  *(undefined2 *)(puVar1 + 0x4a) = 0;
  *(undefined2 *)(puVar1 + 0x4c) = 0;
  *(undefined2 *)(puVar1 + 0x4e) = 0;
  *(undefined2 *)(puVar1 + 0x50) = 0;
  *(undefined2 *)(puVar1 + 0x52) = 0;
  *(undefined2 *)(puVar1 + 0x54) = 0;
  *(undefined2 *)(puVar1 + 0x56) = 0;
  *(undefined2 *)(puVar1 + 0x58) = 0;
  *(undefined2 *)(puVar1 + 0x5a) = 8;
  *(undefined2 *)(puVar1 + 0x5c) = 0;
  *(undefined2 *)(puVar1 + 0x5e) = 0;
  *(undefined2 *)(puVar1 + 0x60) = 0;
  *(undefined2 *)(puVar1 + 0x62) = 0xf;
  *(undefined2 *)(puVar1 + 100) = 0xf;
  *(undefined2 *)(puVar1 + 0x66) = 0;
  *(undefined2 *)(puVar1 + 0x68) = 0;
  *(undefined2 *)(puVar1 + 0x6a) = 0;
  *(undefined2 *)(puVar1 + 0x6c) = 0;
  *(undefined2 *)(puVar1 + 0x6e) = 0;
  return;
}

