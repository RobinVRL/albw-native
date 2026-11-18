#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00257FC4(int param_1,int *param_2,undefined4 param_3);
extern int func_00258E74(int param_1,int *param_2,int *param_3,int param_4);
extern int func_00540568(int param_1,int param_2);
extern int func_005405D4(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002972bc;

// USA 00297140 <- EU 00297168 (Ghidra, non-matching)
// GLOBAL DAT_002972bc int *

int func_00297140(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  piVar1 = DAT_002972bc;
  iVar2 = func_00587FCC(*DAT_002972bc,param_2);
  iVar3 = 0;
  if ((((iVar2 == -1) || (iVar3 = func_00540568(param_1,iVar2), iVar3 == 0)) &&
      ((iVar2 = func_00587FCC(*piVar1,param_2), iVar2 == -1 ||
       (iVar3 = func_005405D4(param_1,iVar2), iVar3 == 0)))) &&
     ((*(int *)(param_1 + 0x5c) != 0 &&
      (iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60), iVar3 != 0)))) {
    if ((*(int *)(param_1 + 0x2c) == 0) &&
       ((*(int *)(param_1 + 0x1c) == 0 || (*(int *)(param_1 + 0x4c) == 0)))) {
      iVar2 = func_00258E74(iVar3,(int *)(param_1 + 100),param_2,0);
      if (iVar2 != 0) {
        func_0010F1F8((int *)(*(int *)(param_1 + 0x60) + iVar3),in_s0);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        func_0010F1DC((int *)(param_1 + 0x24),(int *)(*(int *)(param_1 + 0x30) + iVar3));
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else {
      func_00257FC4(iVar3,param_2,0);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x60) + iVar3),in_s0);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      func_0010F1DC((int *)(param_1 + 0x24),(int *)(*(int *)(param_1 + 0x30) + iVar3));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  return iVar3;
}

