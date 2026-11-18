#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048C7F8(int param_1);
extern int func_0048C91C(int param_1);

// USA 0048CD0C <- EU 0048CCE4 (Ghidra, non-matching)

undefined4 func_0048CD0C(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  
  if (*(int *)(param_3 + 0xc) == 0) {
    *(undefined4 *)(param_3 + 0xc) = param_4;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  uVar1 = *(uint *)(iVar4 + 0x34);
  bVar5 = uVar1 == 0;
  if (bVar5) {
    uVar1 = (uint)*(byte *)(iVar4 + 0x3c);
  }
  if (bVar5 && uVar1 == 0) {
    iVar3 = func_0048C7F8(param_3);
    bVar5 = false;
    if (iVar3 == 0) goto LAB_0048cd64;
    piVar2 = *(int **)(*(int *)(iVar4 + 4) + 0x14);
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,(int)*(char *)(iVar4 + 8),param_3);
    if (iVar3 == 0) {
      func_0048C91C(param_3);
      return 0;
    }
    func_0010F1DC((int *)(iVar4 + 0x1c),(int *)(*(int *)(iVar4 + 0x28) + param_3));
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
  }
  else {
    piVar2 = (int *)(*(int *)(iVar4 + 0x38) + param_3);
    iVar3 = piVar2[1];
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *piVar2;
    }
    if (!bVar5 || iVar3 != 0) {
      func_0010F1F8(piVar2,in_s0);
      *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + -1;
    }
    func_0010F1DC((int *)(iVar4 + 0xc),(int *)(*(int *)(iVar4 + 0x18) + param_3));
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
  }
  bVar5 = true;
LAB_0048cd64:
  if (!bVar5) {
    return 0;
  }
  return 1;
}

