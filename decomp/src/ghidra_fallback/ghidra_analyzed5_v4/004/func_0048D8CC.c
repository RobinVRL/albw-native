#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);

// USA 0048D8CC <- EU 0048D8A4 (Ghidra, non-matching)

undefined4 func_0048D8CC(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 + 0x134;
  if (param_2 == 0) {
    uVar3 = 0;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x17c);
  }
  else {
    uVar3 = 3;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0x17c);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  return func_00109698(iVar2);
}

