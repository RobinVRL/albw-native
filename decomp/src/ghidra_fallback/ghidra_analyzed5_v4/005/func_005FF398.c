#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_005ff3ec;

// USA 005FF398 <- EU 005FF370 (Ghidra, non-matching)
// GLOBAL DAT_005ff3ec int

undefined4 func_005FF398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)(puVar2 + 8) = param_3;
  *(undefined4 *)(puVar2 + 0xc) = param_4;
  *(uint *)(puVar2 + 0x10) = *(uint *)(puVar2 + 0x10) | 1;
  func_003E3F00(puVar2);
  iVar1 = DAT_005ff3ec;
  uVar3 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar3 + 1;
  if (((*(int *)(iVar1 + 0xa0) == param_1) && (uVar3 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar3 = (uint)*(byte *)(iVar1 + 0x11), uVar3 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar3 = func_0060226C();
  }
  return func_003E3F10(uVar3);
}

