#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_00601468(void);
extern int func_0060226C(void);
extern int DAT_005fefe8;
extern int *DAT_005fefec;

// USA 005FEF5C <- EU 005FEF34 (Ghidra, non-matching)
// GLOBAL DAT_005fefe8 int
// GLOBAL DAT_005fefec int *

undefined4 func_005FEF5C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar1 = DAT_005fefe8;
  uVar5 = *(uint *)(DAT_005fefe8 + 0x9c);
  iVar2 = *DAT_005fefec - *(int *)(uVar5 + 4);
  *(int *)(uVar5 + 0xc) = iVar2;
  if (*(int *)(uVar5 + 0x14) != iVar2) {
    func_00601468();
  }
  if (*(int *)(uVar5 + 0x14) != *(int *)(uVar5 + 0xc)) {
    return 0;
  }
  puVar4 = (undefined1 *)(*(int *)(uVar5 + 0x18) + *(int *)(uVar5 + 0x20) * 0x1c);
  *puVar4 = 1;
  *(undefined4 *)(puVar4 + 4) = param_1;
  *(undefined4 *)(puVar4 + 8) = param_2;
  uVar3 = *(uint *)(puVar4 + 0xc);
  *(uint *)(puVar4 + 0xc) = uVar3 | 6;
  func_003E3F00(uVar3 | 6);
  *(int *)(uVar5 + 0x20) = *(int *)(uVar5 + 0x20) + 1;
  uVar3 = *(uint *)(iVar1 + 0xa0);
  if (((uVar3 == uVar5) && (uVar3 = 0, *(char *)(iVar1 + 0x12) != '\0')) &&
     (uVar3 = (uint)*(byte *)(iVar1 + 0x11), uVar3 == 0)) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    uVar3 = func_0060226C();
  }
  return func_003E3F10(uVar3);
}

