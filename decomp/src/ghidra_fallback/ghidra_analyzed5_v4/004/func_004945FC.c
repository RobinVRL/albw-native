#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 004945FC <- EU 004945D4 (Ghidra, non-matching)

void func_004945FC(int param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  if (0x20 < (int)param_2) {
    return;
  }
  *(uint *)(param_1 + 0x108) = param_2;
  func_0010E3C4((uint *)(param_1 + 0x170),param_3,param_2);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  if ((param_4 != 0) && (iVar1 = 0, 0 < (int)param_2)) {
    do {
      if (*(char *)((int)param_3 + iVar1) == '\x14') {
        *(int *)(param_1 + 0x10c) = iVar1;
      }
      else if (*(char *)((int)param_3 + iVar1) == '\x18') {
        *(int *)(param_1 + 0x110) = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_2);
  }
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  if (0 < (int)param_2) {
    do {
      if (*(char *)((int)param_3 + iVar1) == '\x0f') {
        *(int *)(param_1 + 0x114) = iVar1;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_2);
  }
  return;
}

