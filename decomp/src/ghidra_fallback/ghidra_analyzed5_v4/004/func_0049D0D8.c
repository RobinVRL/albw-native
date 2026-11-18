#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0049D0D8 <- EU 0049D0B0 (Ghidra, non-matching)

undefined4 func_0049D0D8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  
  iVar1 = param_1 + 4;
  func_0010C0B8(iVar1);
  iVar4 = *(int *)(param_3 + 0x40);
  if (iVar4 != 0) {
    *(undefined4 *)(param_3 + 0x40) = 0;
    func_0010F1F8((int *)(param_3 + 0x34),in_s0);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
  }
  piVar2 = (int *)param_2[1];
  while( true ) {
    if (piVar2 == param_2) {
      iVar4 = *(int *)(param_3 + 0x40);
      if (iVar4 != 0) {
        *(undefined4 *)(param_3 + 0x40) = 0;
        func_0010F1F8((int *)(param_3 + 0x34),in_s0);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
      }
      *(int **)(param_3 + 0x40) = param_2;
      func_0010F1DC(param_2,(int *)(param_3 + 0x34));
      param_2[2] = param_2[2] + 1;
      return func_0010EEE0(iVar1);
    }
    iVar4 = piVar2[2];
    if (*(byte *)(iVar4 + 0x61) < *(byte *)(param_3 + 0x61)) break;
    piVar2 = (int *)piVar2[1];
  }
  iVar3 = *(int *)(param_3 + 0x40);
  iVar5 = *(int *)(iVar4 + 0x40);
  if (iVar3 != 0) {
    *(undefined4 *)(param_3 + 0x40) = 0;
    func_0010F1F8((int *)(param_3 + 0x34),in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  *(int *)(param_3 + 0x40) = iVar5;
  func_0010F1DC((int *)(iVar4 + 0x34),(int *)(param_3 + 0x34));
  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  return func_0010EEE0(iVar1);
}

