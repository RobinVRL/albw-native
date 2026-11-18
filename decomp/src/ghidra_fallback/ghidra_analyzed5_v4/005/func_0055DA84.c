#include "ghidra_types.h"

extern int func_001FE944(int param_1,undefined4 param_2,int param_3);

// USA 0055DA84 <- EU 0055DA5C (Ghidra, non-matching)

void func_0055DA84(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined4 *)(param_2 + 0x18a4);
  if (*(uint *)(param_1 + 0xc) < 4) {
    puVar1 = puVar1 + *(uint *)(param_1 + 0xc);
  }
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x10) & 0x40000) == 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2[6] = (int)uVar3;
      piVar2[7] = (int)((ulonglong)uVar3 >> 0x20);
      return;
    }
    func_001FE944((int)piVar2,*(uint *)(param_1 + 0x10) & 0xffff,*(int *)(param_1 + 0x14));
    piVar2[8] = (int)uVar3;
  }
  return;
}

