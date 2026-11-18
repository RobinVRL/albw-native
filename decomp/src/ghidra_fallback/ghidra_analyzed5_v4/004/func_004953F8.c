#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_0049A02C(int param_1,int param_2);

// USA 004953F8 <- EU 004953D0 (Ghidra, non-matching)

undefined4 func_004953F8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0049A02C(param_1,param_2);
  iVar2 = param_1 + 0x394;
  if (param_2 == 0) {
    uVar3 = 0;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x3dc);
  }
  else {
    uVar3 = 3;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x3dc);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  return func_00109698(iVar2);
}

