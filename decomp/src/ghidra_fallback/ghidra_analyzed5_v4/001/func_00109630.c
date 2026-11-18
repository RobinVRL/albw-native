#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_0010EEE0(int param_1);

// USA 00109630 <- EU 00109630 (Ghidra, non-matching)

undefined4 func_00109630(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 + 0x6c;
  if (param_2 == 0) {
    uVar3 = 0;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0xb4);
  }
  else {
    uVar3 = 3;
    func_0010961C(iVar2);
    puVar1 = *(undefined4 **)(param_1 + 0xb4);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  if (*(int *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return func_0010EEE0(*(int *)(param_1 + 0xa8));
}

