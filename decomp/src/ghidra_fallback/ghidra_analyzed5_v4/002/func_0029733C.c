#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_0054030C(int param_1);
extern float DAT_002973e8;

// USA 0029733C <- EU 00297364 (Ghidra, non-matching)
// GLOBAL DAT_002973e8 float

undefined4 func_0029733C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0054030C(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2; iVar1 != (param_1 + 0x14) - iVar2;
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if (*(char *)(iVar1 + 0x6c) != '\0') {
        return 0;
      }
    }
  }
  if (*(uint *)(param_1 + 0x164) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x16c) + 4);
  }
  return func_0010C7F8(iVar1,0xf,DAT_002973e8);
}

