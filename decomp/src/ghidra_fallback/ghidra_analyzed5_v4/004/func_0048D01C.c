#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);

// USA 0048D01C <- EU 0048CFF4 (Ghidra, non-matching)

undefined4 func_0048D01C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x6c;
  if (param_2 == 0) {
    func_0010961C(iVar3);
    puVar2 = *(undefined4 **)(param_1 + 0xb4);
  }
  else {
    func_0010961C(iVar3);
    puVar2 = *(undefined4 **)(param_1 + 0xb4);
  }
  uVar1 = (uint)(param_2 != 0);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,iVar3,uVar1);
  }
  *(uint *)(param_1 + 0xb0) = uVar1;
  return func_00109698(iVar3);
}

