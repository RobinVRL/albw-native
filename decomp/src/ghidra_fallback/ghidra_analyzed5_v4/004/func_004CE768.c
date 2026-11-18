#include "ghidra_types.h"

extern int func_001B7F54(int param_1,uint param_2);
extern int func_001B8048(int param_1,int param_2,uint param_3);
extern int *DAT_004ce7c4;
extern int DAT_004ce7c8;

// USA 004CE768 <- EU 004CE740 (Ghidra, non-matching)
// GLOBAL DAT_004ce7c4 int *
// GLOBAL DAT_004ce7c8 int

void func_004CE768(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x164);
  if (param_2 != (uVar1 & 0x1000) >> 0xc) {
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x164) = uVar1 & 0xffffefff;
    }
    else {
      *(uint *)(param_1 + 0x164) = uVar1 | 0x1000;
      if ((uVar1 & 0x2000000) != 0) {
        uVar1 = *(uint *)(param_1 + 0x13c);
        iVar2 = 0;
        iVar3 = *DAT_004ce7c4;
        do {
          iVar4 = iVar3 + 0x10 + iVar2 * DAT_004ce7c8 * 4;
          func_001B8048(iVar4,param_1,uVar1);
          func_001B7F54(iVar4,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
      }
    }
  }
  return;
}

