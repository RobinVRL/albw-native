#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048C91C(int param_1);
extern int func_0049F5FC(undefined4 *param_1);

// USA 0048C990 <- EU 0048C968 (Ghidra, non-matching)

undefined4 func_0048C990(undefined4 param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  if (param_3[2] == 0) {
    return 0;
  }
  iVar3 = param_3[3];
  iVar2 = param_3[1] - iVar3;
  iVar1 = *(int *)(iVar2 + iVar3 + 4);
  while (iVar2 != (int)param_3 - param_3[3]) {
    func_0010F1F8((int *)(param_3[3] + iVar2),in_s0);
    param_3[2] = param_3[2] + -1;
    if (param_4 != 0) {
      func_0048C91C(iVar2);
    }
    func_0010F1DC(param_2,(int *)(param_2[3] + iVar2));
    param_2[2] = param_2[2] + 1;
    iVar2 = iVar1 - iVar3;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return func_0049F5FC(param_3);
}

