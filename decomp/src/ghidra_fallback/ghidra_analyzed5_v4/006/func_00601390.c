#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_006013c4;

// USA 00601390 <- EU 00601368 (Ghidra, non-matching)
// GLOBAL DAT_006013c4 int

undefined4 func_00601390(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_006013c4;
  iVar2 = *(int *)(DAT_006013c4 + 0x9c);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(char *)(DAT_006013c4 + 0x11) != '\0') {
    return 0;
  }
  *(int *)(DAT_006013c4 + 0xa0) = iVar2;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  if (*(int *)(iVar2 + 0x20) <= *(int *)(iVar2 + 0x28)) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 0x11) = 1;
  if (*(int *)(iVar2 + 0x2c) != 0x300) {
    return 0;
  }
  func_003E3F00(0x300);
  uVar3 = func_0060226C();
  return func_003E3F10(uVar3);
}

