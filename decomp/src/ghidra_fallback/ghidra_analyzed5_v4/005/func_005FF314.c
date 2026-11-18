#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_005ff36c;

// USA 005FF314 <- EU 005FF2EC (Ghidra, non-matching)
// GLOBAL DAT_005ff36c int

undefined4 func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  iVar1 = DAT_005ff36c;
  uVar4 = *(uint *)(DAT_005ff36c + 0x9c);
  puVar3 = (undefined1 *)(*(int *)(uVar4 + 0x18) + *(int *)(uVar4 + 0x20) * 0x1c);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = param_1;
  *(undefined4 *)(puVar3 + 8) = param_2;
  *(undefined4 *)(puVar3 + 0xc) = param_3;
  uVar2 = *(uint *)(puVar3 + 0x10);
  *(uint *)(puVar3 + 0x10) = uVar2 | 1;
  func_003E3F00(uVar2 | 1);
  *(int *)(uVar4 + 0x20) = *(int *)(uVar4 + 0x20) + 1;
  uVar2 = *(uint *)(iVar1 + 0xa0);
  if (((uVar2 == uVar4) && (uVar2 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar2 = (uint)*(byte *)(iVar1 + 0x11), uVar2 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar2 = func_0060226C();
  }
  return func_003E3F10(uVar2);
}

