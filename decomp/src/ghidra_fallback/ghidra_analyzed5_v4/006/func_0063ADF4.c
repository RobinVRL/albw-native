#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_0064E9F4(int *param_1,undefined4 *param_2,int *param_3);

// USA 0063ADF4 <- EU 0063ADCC (Ghidra, non-matching)

undefined4 func_0063ADF4(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  func_0049F5FC(param_1 + 2);
  func_0049F5FC(param_1 + 6);
  uVar3 = 0;
  while( true ) {
    uVar2 = *(uint *)*param_1;
    if ((int)uVar2 <= (int)uVar3) break;
    if (uVar3 < uVar2) {
      iVar1 = *(int *)(((uint *)*param_1)[2] + uVar3 * 4);
    }
    else {
      iVar1 = 0;
    }
    func_0010F1DC(param_1 + 2,(int *)(param_1[5] + iVar1));
    param_1[4] = param_1[4] + 1;
    if (uVar3 < *(uint *)*param_1) {
      iVar1 = *(int *)(((uint *)*param_1)[2] + uVar3 * 4);
    }
    else {
      iVar1 = 0;
    }
    func_0010F1DC(param_1 + 6,(int *)(param_1[9] + iVar1));
    uVar3 = uVar3 + 1;
    param_1[8] = param_1[8] + 1;
  }
  return func_0064E9F4(param_1,param_2,param_3);
}

