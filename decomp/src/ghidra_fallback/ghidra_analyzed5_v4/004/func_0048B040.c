#include "ghidra_types.h"

extern int func_003CBB00(undefined1 *param_1);
extern int func_0049F3DC(undefined4 *param_1);
extern undefined4 DAT_0048b074;

// USA 0048B040 <- EU 0048B018 (Ghidra, non-matching)
// GLOBAL DAT_0048b074 undefined4

undefined4 * func_0048B040(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = func_0049F3DC(param_1);
  *puVar1 = DAT_0048b074;
  iVar2 = func_003CBB00((undefined1 *)(puVar1 + 0x15));
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0x140;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0xf0;
  *(undefined1 *)(iVar2 + 0x90) = 1;
  *(undefined4 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0x140;
  *(undefined4 *)(iVar2 + 0xa4) = 0x100;
  *(undefined4 *)(iVar2 + 0xa8) = 0x140;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 0xf0;
  return (undefined4 *)(iVar2 + -0x54);
}

