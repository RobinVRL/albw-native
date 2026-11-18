#include "ghidra_types.h"

extern int func_00407AF4(int param_1,int param_2,undefined4 param_3);
extern int func_00409F74(int param_1,uint param_2);

// USA 0048EE5C <- EU 0048EE34 (Ghidra, non-matching)

void func_0048EE5C(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      iVar1 = func_00409F74(param_1 + 4,uVar2 + 0x4000000);
      func_00407AF4(iVar1,1,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return;
}

