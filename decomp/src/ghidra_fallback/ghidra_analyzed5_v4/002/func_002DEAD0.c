#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001E01C4(int param_1);

// USA 002DEAD0 <- EU 002DEAAC (Ghidra, non-matching)

void func_002DEAD0(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  float in_s0;
  
  iVar1 = param_2[1];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *param_2;
  }
  if (bVar2 && iVar1 == 0) {
    func_001E01C4((int)param_2);
    func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + (int)param_2),in_s0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + (int)param_2));
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}

