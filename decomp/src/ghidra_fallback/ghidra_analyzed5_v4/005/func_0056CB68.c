#include "ghidra_types.h"

extern int func_0056AF34(int param_1,uint param_2);
extern int func_0056B80C(ushort *param_1);
extern int func_0056B838(ushort *param_1);
extern int func_0056B85C(short *param_1);

// USA 0056CB68 <- EU 0056CB40 (Ghidra, non-matching)

undefined4 func_0056CB68(int param_1,uint param_2,undefined4 *param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (ushort *)func_0056AF34(*(int *)(param_1 + 0x3c),param_2);
  uVar4 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar2 = func_0056B838(puVar1);
    if (uVar2 == 0) {
      iVar3 = func_0056B85C((short *)puVar1);
      *param_3 = *(undefined4 *)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 != -1) {
        iVar3 = iVar3 + 8;
      }
      param_3[1] = iVar3;
    }
    else if (uVar2 == 1) {
      iVar3 = func_0056B80C(puVar1);
      param_3[2] = iVar3;
    }
    else if (uVar2 == 2) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}

