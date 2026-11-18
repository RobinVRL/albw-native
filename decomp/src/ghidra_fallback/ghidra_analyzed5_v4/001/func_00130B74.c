#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 00130B74 <- EU 00130B74 (Ghidra, non-matching)

undefined4 func_00130B74(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float in_s0;
  
  piVar1 = (int *)(param_2 + 4);
  bVar4 = *(int *)(param_2 + 8) == 0;
  if (bVar4) {
    piVar1 = (int *)*piVar1;
  }
  if (bVar4 && piVar1 == (int *)0x0) {
    iVar2 = 0;
    if (param_3 != 0) {
      func_0010C0B8(param_1 + 0x2bac);
      iVar2 = param_1 + 0x2bac;
    }
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 != 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      func_0010F1F8((int *)(param_2 + 4),in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
    *(int **)(param_2 + 0x10) = (int *)(param_1 + 0x288c);
    func_0010F1DC((int *)(param_1 + 0x288c),(int *)(param_2 + 4));
    *(int *)(param_1 + 0x2894) = *(int *)(param_1 + 0x2894) + 1;
    if (iVar2 != 0) {
      return func_0010EEE0(iVar2);
    }
  }
  return 0;
}

