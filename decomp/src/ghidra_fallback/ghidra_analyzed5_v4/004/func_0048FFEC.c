#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);

// USA 0048FFEC <- EU 0048FFC4 (Ghidra, non-matching)

undefined4 func_0048FFEC(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 + 0xbc;
  if (param_2 == 0) {
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x104);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,0);
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    func_00109698(iVar2);
    uVar3 = 0;
    func_0010961C(param_1 + 0x10c);
    puVar1 = *(undefined4 **)(param_1 + 0x154);
  }
  else {
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x104);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,1);
    }
    *(undefined4 *)(param_1 + 0x100) = 1;
    func_00109698(iVar2);
    uVar3 = 1;
    func_0010961C(param_1 + 0x10c);
    puVar1 = *(undefined4 **)(param_1 + 0x154);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1 + 0x10c,uVar3);
  }
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  return func_00109698(param_1 + 0x10c);
}

