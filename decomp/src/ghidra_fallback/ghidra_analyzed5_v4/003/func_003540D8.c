#include "ghidra_types.h"

extern int func_00355C50(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int DAT_003541b8;
extern int DAT_003541bc;

// USA 003540D8 <- EU 003540B4 (Ghidra, non-matching)
// GLOBAL DAT_003541b8 int
// GLOBAL DAT_003541bc int

undefined4 func_003540D8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  func_00355C50(param_1);
  cVar1 = *(char *)(DAT_003541b8 + param_1);
  if ((cVar1 == '\b') && (*(uint *)(param_1 + 0xa28) < *(uint *)(param_1 + 0xa2c))) {
    *(uint *)(param_1 + 0xa28) = *(uint *)(param_1 + 0xa28) + 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar4 = (undefined4 *)(param_1 + 0xa5c);
    if (0 < *(short *)(DAT_003541bc + param_1)) {
      if (cVar1 == '\b') {
        return func_00666318(puVar4,8);
      }
      if (cVar1 == '\x06' || cVar1 == '\a') {
        return func_00666318(puVar4,cVar1);
      }
      return func_00666318(puVar4,3);
    }
    iVar2 = *(int *)(param_1 + 0xa80);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xa84))) {
      iVar3 = *(int *)(iVar2 + 0x20);
      if ((iVar3 != 0) &&
         ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
        *(undefined1 *)(iVar3 + 0x280) = 1;
      }
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
    }
    func_00666318(puVar4,9);
  }
  return 0;
}

