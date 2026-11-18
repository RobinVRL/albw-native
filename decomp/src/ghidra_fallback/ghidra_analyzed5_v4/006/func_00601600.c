#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int DAT_0060162c;

// USA 00601600 <- EU 006015D8 (Ghidra, non-matching)
// GLOBAL DAT_0060162c int

undefined4 func_00601600(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = DAT_0060162c;
  iVar2 = *(int *)(DAT_0060162c + 0xa0);
  if (iVar2 == 0) {
    return 0;
  }
  func_003E3F00(param_1);
  bVar3 = *(char *)(iVar1 + 0x11) == '\0';
  if (bVar3) {
    *(undefined1 *)(iVar1 + 0x12) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x24) * 0x1c + -0x1a) = 1;
    *(undefined1 *)(iVar1 + 0x18) = 1;
  }
  return func_003E3F10((uint)!bVar3);
}

