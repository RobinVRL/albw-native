#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);

// USA 0049A02C <- EU 0049A004 (Ghidra, non-matching)

undefined4 func_0049A02C(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 + 0x20;
  if (param_2 == 0) {
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,0);
    }
    *(undefined4 *)(param_1 + 100) = 0;
    func_00109698(iVar2);
    iVar2 = param_1 + 0x110;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x158);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,0);
    }
    *(undefined4 *)(param_1 + 0x154) = 0;
    func_00109698(iVar2);
    uVar3 = 0;
    func_0010961C(param_1 + 0x250);
    puVar1 = *(undefined4 **)(param_1 + 0x298);
  }
  else {
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,3);
    }
    *(undefined4 *)(param_1 + 100) = 3;
    func_00109698(iVar2);
    iVar2 = param_1 + 0x110;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x158);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,iVar2,3);
    }
    *(undefined4 *)(param_1 + 0x154) = 3;
    func_00109698(iVar2);
    uVar3 = 3;
    func_0010961C(param_1 + 0x250);
    puVar1 = *(undefined4 **)(param_1 + 0x298);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1 + 0x250,uVar3);
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  return func_00109698(param_1 + 0x250);
}

