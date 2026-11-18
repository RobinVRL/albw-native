#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001E01C4(int param_1);

// USA 002DEAC8 <- EU 002DEAA4 (Ghidra, non-matching)

void func_002DEAC8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = param_2[1];
  bVar3 = iVar2 == 0;
  if (bVar3) {
    iVar2 = *param_2;
  }
  if (bVar3 && iVar2 == 0) {
    func_001E01C4((int)param_2);
    func_0010F1F8((int *)(*(int *)(iVar1 + 0x30) + (int)param_2),in_s0);
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
    func_0010F1DC((int *)(iVar1 + 0x14),(int *)(*(int *)(iVar1 + 0x20) + (int)param_2));
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  }
  return;
}

