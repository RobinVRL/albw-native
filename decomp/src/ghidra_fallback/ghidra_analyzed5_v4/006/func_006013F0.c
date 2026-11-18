#include "ghidra_types.h"

extern int func_003E3F00(undefined4 param_1);
extern int func_003E3F10(undefined4 param_1);
extern int func_0060226C(void);
extern int DAT_00601424;

// USA 006013F0 <- EU 006013C8 (Ghidra, non-matching)
// GLOBAL DAT_00601424 int

undefined4 func_006013F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00601424;
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(DAT_00601424 + 0x11) != '\0') {
    return 0;
  }
  *(int *)(DAT_00601424 + 0xa0) = param_1;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x28)) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 0x11) = 1;
  if (*(int *)(param_1 + 0x2c) == 0x300) {
    func_003E3F00(0x300);
    uVar2 = func_0060226C();
    return func_003E3F10(uVar2);
  }
  return 0;
}

