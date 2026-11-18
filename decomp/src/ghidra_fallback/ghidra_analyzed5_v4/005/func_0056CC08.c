#include "ghidra_types.h"

extern int func_0056AF34(int param_1,uint param_2);
extern int func_0056AF60(int param_1,uint param_2);
extern int func_0056B80C(ushort *param_1);
extern int func_0056B838(ushort *param_1);
extern int func_0056B85C(short *param_1);

// USA 0056CC08 <- EU 0056CBE0 (Ghidra, non-matching)

undefined4 func_0056CC08(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar1 = (uint *)func_0056AF60(*(int *)(param_1 + 0x3c),param_2);
  uVar5 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    uVar6 = 0xffffffff;
    *param_3 = uVar2;
    puVar3 = (ushort *)func_0056AF34(*(int *)(param_1 + 0x3c),uVar2);
    if (puVar3 == (ushort *)0x0) {
      return 0;
    }
    uVar2 = func_0056B838(puVar3);
    if (uVar2 == 0) {
      iVar4 = func_0056B85C((short *)puVar3);
      uVar6 = *(uint *)(iVar4 + 8);
    }
    else if (uVar2 == 1) {
      func_0056B80C(puVar3);
    }
    else if (uVar2 == 2) {
      return 0;
    }
    uVar5 = 1;
    param_3[1] = uVar6;
  }
  return uVar5;
}

