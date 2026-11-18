#include "ghidra_types.h"

extern int func_003F9538(int param_1,int *param_2,undefined *param_3,int param_4);
extern int func_003F99B8(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5, undefined1 *param_6);

// USA 003F7CC4 <- EU 003F7CA4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined1 *

void func_003F7CC4(int param_1,int *param_2,undefined *param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_4 * 4);
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 0x1c);
    func_003F9538(iVar1,piVar4,param_3,param_4);
    (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + param_4 * 4));
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_4 * 4) = 0;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x3c,0x80);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_003F99B8(puVar2,param_2,(int)param_3,param_4,param_1,param_5);
  }
  *(undefined4 **)(*(int *)(param_1 + 0xc) + param_4 * 4) = puVar3;
  return;
}

