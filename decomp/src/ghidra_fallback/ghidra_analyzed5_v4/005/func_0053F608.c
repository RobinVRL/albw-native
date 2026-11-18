#include "ghidra_types.h"

extern int func_00552FC0(uint param_1);
extern int DAT_0053f6a8;
extern float DAT_0053f6ac;

// USA 0053F608 <- EU 0053F5E0 (Ghidra, non-matching)
// GLOBAL DAT_0053f6a8 int
// GLOBAL DAT_0053f6ac float

undefined4 func_0053F608(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = iVar1 + 0x600;
  bVar4 = *(char *)(iVar1 + 0x6c5) == '\0';
  if (bVar4) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x6c7);
  }
  if (!bVar4 || uVar2 != 0) {
    return 0;
  }
  iVar3 = (int)*(short *)(param_1 + 0x42);
  if (*(char *)(DAT_0053f6a8 + iVar3 * 0x10) == '\0') {
    if (((*(int *)(iVar1 + 0x5b0) == 0x3f800000) &&
        (uVar2 = func_00552FC0(*(uint *)(param_1 + 0x1c)), uVar2 == 0)) &&
       (*(float *)(*(int *)(param_1 + 0x10) + 0x3e0) < DAT_0053f6ac)) {
      return 0;
    }
  }
  else if (iVar3 != 0x62) {
    if (iVar3 < 99) {
      if ((iVar3 == 0x4e || iVar3 == 0x51) || iVar3 == 0x61) {
        return 1;
      }
    }
    else if (iVar3 == 0xab || iVar3 == 0xac) {
      return 1;
    }
    if (iVar3 != 0x5f) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x5b0) == 0x3f800000) {
      return 0;
    }
  }
  return 1;
}

