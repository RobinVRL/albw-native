#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_0048FFEC(int param_1,int param_2);

// USA 0049FE00 <- EU 0049FDD8 (Ghidra, non-matching)

undefined4 func_0049FE00(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  func_0048FFEC(param_1,param_2);
  iVar3 = param_1 + 0x15c;
  if (param_2 == 0) {
    func_0010961C(iVar3);
    puVar2 = *(undefined4 **)(param_1 + 0x1a4);
  }
  else {
    func_0010961C(iVar3);
    puVar2 = *(undefined4 **)(param_1 + 0x1a4);
  }
  uVar1 = (uint)(param_2 != 0);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,iVar3,uVar1);
  }
  *(uint *)(param_1 + 0x1a0) = uVar1;
  return func_00109698(iVar3);
}

