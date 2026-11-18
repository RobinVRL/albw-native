#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);

// USA 0016BC34 <- EU 0016BC34 (Ghidra, non-matching)

undefined4 func_0016BC34(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x74);
  iVar1 = *(int *)(iVar3 + 0x48);
  if (iVar1 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = iVar1 + -1;
  }
  if (param_2 == *(int *)(iVar3 + iVar6 * 0x20 + 0x20)) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = iVar1 + -1;
    }
    iVar1 = iVar3 + 8 + iVar1 * 0x20;
    uVar4 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14);
    if (uVar4 != 0) {
      if (*(char *)(iVar3 + 0x4c) == '\0') {
        puVar5 = *(uint **)(iVar1 + 8);
        puVar2 = *(uint **)(iVar1 + 0xc);
      }
      else {
        puVar2 = *(uint **)(iVar1 + 8);
        puVar5 = *(uint **)(iVar1 + 0xc);
      }
      func_0010E3C4(puVar5,puVar2,uVar4);
      return func_003E35DC(puVar5,uVar4);
    }
  }
  return 0;
}

