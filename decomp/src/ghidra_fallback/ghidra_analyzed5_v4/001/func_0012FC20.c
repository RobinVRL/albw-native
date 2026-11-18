#include "ghidra_types.h"

extern int func_0055A478(int param_1,int param_2,int param_3,float fparam_0,float fparam_1);

// USA 0012FC20 <- EU 0012FC20 (Ghidra, non-matching)

void func_0012FC20(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar1 = (int *)(param_1 + 0x28d0);
  puVar5 = (undefined4 *)(param_1 + 0x29f8);
  piVar6 = (int *)(param_1 + 0x29fc);
  piVar4 = (int *)(param_1 + 0x28e8);
  if (param_2 == 0) {
    if (param_3 < 3) {
      piVar1 = piVar1 + param_3;
    }
    piVar1 = (int *)*piVar1;
    *piVar4 = (int)piVar1;
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,1);
    *puVar5 = uVar2;
    func_0055A478(*piVar4,param_1 + 0x2a00,1,*(float *)(param_1 + 0x2c10),
                  *(float *)(param_1 + 0x2c14));
    *piVar6 = param_1 + 0x2a00;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      piVar1 = (int *)(param_1 + 0x28dc);
      if (param_3 < 3) {
        piVar1 = piVar1 + param_3;
      }
      piVar1 = (int *)*piVar1;
      *piVar4 = (int)piVar1;
      uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,1);
      *puVar5 = uVar2;
      iVar3 = (**(code **)(*(int *)*piVar4 + 0x20))((int *)*piVar4,1);
      *piVar6 = iVar3;
    }
    return;
  }
  if (param_3 < 3) {
    piVar1 = piVar1 + param_3;
  }
  piVar1 = (int *)*piVar1;
  *piVar4 = (int)piVar1;
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,0);
  *puVar5 = uVar2;
  func_0055A478(*piVar4,param_1 + 0x2a00,0,*(float *)(param_1 + 0x2c10),*(float *)(param_1 + 0x2c14)
               );
  *piVar6 = param_1 + 0x2a00;
  return;
}

