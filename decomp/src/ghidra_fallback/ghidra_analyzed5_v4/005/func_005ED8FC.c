#include "ghidra_types.h"

extern undefined4 *DAT_005ed9a0;
extern undefined4 *DAT_005ed9a4;

// USA 005ED8FC <- EU 005ED8D4 (Ghidra, non-matching)
// GLOBAL DAT_005ed9a0 undefined4 *
// GLOBAL DAT_005ed9a4 undefined4 *

void func_005ED8FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ed9a0;
  *DAT_005ed9a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ed9a4;
  *DAT_005ed9a4 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0x1e;
  *(undefined1 *)(puVar1 + 5) = 6;
  *(undefined1 *)(puVar1 + 7) = 0xe;
  *(undefined1 *)(puVar1 + 9) = 7;
  *(undefined1 *)(puVar1 + 0xb) = 7;
  *(undefined1 *)(puVar1 + 0xd) = 7;
  *(undefined1 *)(puVar1 + 0xf) = 7;
  *(undefined1 *)(puVar1 + 0x11) = 7;
  *(undefined1 *)(puVar1 + 0x13) = 2;
  *(undefined1 *)(puVar1 + 0x15) = 7;
  *(undefined1 *)(puVar1 + 0x17) = 7;
  *(undefined1 *)(puVar1 + 0x19) = 7;
  *(undefined1 *)(puVar1 + 0x1b) = 7;
  *(undefined1 *)(puVar1 + 0x1d) = 6;
  *(undefined1 *)(puVar1 + 0x1f) = 6;
  *(undefined1 *)(puVar1 + 0x21) = 2;
  *(undefined1 *)(puVar1 + 0x23) = 2;
  *(undefined1 *)(puVar1 + 0x25) = 2;
  *(undefined1 *)(puVar1 + 0x27) = 2;
  *(undefined1 *)(puVar1 + 0x29) = 2;
  *(undefined1 *)(puVar1 + 0x2b) = 2;
  *(undefined1 *)(puVar1 + 0x2d) = 2;
  *(undefined1 *)(puVar1 + 0x2f) = 2;
  *(undefined1 *)(puVar1 + 0x31) = 2;
  *(undefined1 *)(puVar1 + 0x33) = 2;
  *(undefined1 *)(puVar1 + 0x35) = 2;
  *(undefined1 *)(puVar1 + 0x37) = 2;
  *(undefined1 *)(puVar1 + 0x39) = 2;
  *(undefined1 *)(puVar1 + 0x3b) = 2;
  *(undefined1 *)(puVar1 + 0x3d) = 2;
  *(undefined1 *)(puVar1 + 0x3f) = 2;
  *(undefined1 *)(puVar1 + 0x41) = 2;
  return;
}

