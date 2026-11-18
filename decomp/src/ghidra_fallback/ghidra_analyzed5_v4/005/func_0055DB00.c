#include "ghidra_types.h"

extern int func_001FE944(int param_1,undefined4 param_2,int param_3);
extern int func_001FEA20(int param_1,undefined4 param_2);

// USA 0055DB00 <- EU 0055DAD8 (Ghidra, non-matching)

undefined4 func_0055DB00(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)(param_2 + 0x1458);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0xc) < 6) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0xc) * 0x13;
  }
  if ((uVar1 & 0x20000) != 0) {
    return func_001FEA20((int)piVar2,uVar1 & 0xffff);
  }
  if ((uVar1 & 0x40000) != 0) {
    func_001FE944((int)piVar2,uVar1 & 0xffff,*(int *)(param_1 + 0x14));
    piVar2[8] = (int)uVar3;
    return 0;
  }
  (**(code **)(*piVar2 + 4))(piVar2,uVar1 & 0xffff);
  piVar2[6] = (int)uVar3;
  piVar2[7] = (int)((ulonglong)uVar3 >> 0x20);
  return 0;
}

