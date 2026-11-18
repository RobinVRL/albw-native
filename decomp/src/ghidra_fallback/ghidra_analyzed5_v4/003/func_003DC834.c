#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003E16D4(int param_1,int param_2);

// USA 003DC834 <- EU 003DC814 (Ghidra, non-matching)

undefined4 func_003DC834(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*param_1 & 1 << (*param_2 & 0xff)) != 0) {
    if ((char)param_2[1] != '\x01') {
      func_003E16D4((int)param_2,1);
    }
    func_0010C0C0((int *)(param_1 + 4));
    uVar1 = param_2[9];
    uVar3 = param_2[10];
    if (uVar1 == 0 && uVar3 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      if ((uVar3 != 0) && (*(uint *)(uVar3 + 0x24) = uVar1, uVar1 == 0)) {
        param_1[1] = uVar3;
      }
      if ((uVar1 != 0) && (uVar3 = param_2[10], *(uint *)(uVar1 + 0x28) = uVar3, uVar3 == 0)) {
        param_1[2] = uVar1;
      }
    }
    *param_1 = *param_1 & ~(1 << (*param_2 & 0xff));
    *(short *)(param_1 + 3) = (short)param_1[3] + -1;
    uVar2 = func_0010C160((int *)(param_1 + 4));
    return uVar2;
  }
  return *param_2;
}

