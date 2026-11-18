#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048C7F8(int param_1);
extern int func_0048C91C(int param_1);

// USA 0048CD04 <- EU 0048CCDC (Ghidra, non-matching)

undefined4 func_0048CD04(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_3 + 0xc) == 0) {
    *(undefined4 *)(param_3 + 0xc) = param_4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + param_2 * 4);
  uVar2 = *(uint *)(iVar1 + 0x34);
  bVar5 = uVar2 == 0;
  if (bVar5) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x3c);
  }
  if (bVar5 && uVar2 == 0) {
    iVar4 = func_0048C7F8(param_3);
    bVar5 = false;
    if (iVar4 == 0) goto LAB_0048cd64;
    piVar3 = *(int **)(*(int *)(iVar1 + 4) + 0x14);
    iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,(int)*(char *)(iVar1 + 8),param_3);
    if (iVar4 == 0) {
      func_0048C91C(param_3);
      return 0;
    }
    func_0010F1DC((int *)(iVar1 + 0x1c),(int *)(*(int *)(iVar1 + 0x28) + param_3));
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
  }
  else {
    piVar3 = (int *)(*(int *)(iVar1 + 0x38) + param_3);
    iVar4 = piVar3[1];
    bVar5 = iVar4 == 0;
    if (bVar5) {
      iVar4 = *piVar3;
    }
    if (!bVar5 || iVar4 != 0) {
      func_0010F1F8(piVar3,in_s0);
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + -1;
    }
    func_0010F1DC((int *)(iVar1 + 0xc),(int *)(*(int *)(iVar1 + 0x18) + param_3));
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  bVar5 = true;
LAB_0048cd64:
  if (!bVar5) {
    return 0;
  }
  return 1;
}

