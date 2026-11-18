#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 00580EC4 <- EU 00580E9C (Ghidra, non-matching)

int func_00580EC4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  uVar4 = uVar1 - 1;
  if ((uVar1 & uVar4) == 0) {
    iVar3 = 0;
    if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
      func_0010C0B8(param_1 + 0x54);
      iVar3 = param_1 + 0x54;
    }
    uVar2 = *(uint *)(param_1 + 0x78);
    uVar1 = *(int *)(param_1 + 0x74) + uVar4 & ~uVar4;
    if (uVar1 <= uVar2) {
      if (iVar3 != 0) {
        func_0010EEE0(iVar3);
      }
      return uVar2 - uVar1;
    }
    if (iVar3 != 0) {
      func_0010EEE0(iVar3);
    }
  }
  return 0;
}

