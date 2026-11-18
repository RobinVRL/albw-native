#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00257FC4(int param_1,int *param_2,undefined4 param_3);
extern int func_00258E74(int param_1,int *param_2,int *param_3,int param_4);
extern int func_00540568(int param_1,int param_2);
extern int func_005405D4(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002972bc;

// USA 00297138 <- EU 00297160 (Ghidra, non-matching)
// GLOBAL DAT_002972bc int *

int func_00297138(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  piVar1 = DAT_002972bc;
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar3 = func_00587FCC(*DAT_002972bc,param_2);
  iVar4 = 0;
  if ((((iVar3 == -1) || (iVar4 = func_00540568(iVar2,iVar3), iVar4 == 0)) &&
      ((iVar3 = func_00587FCC(*piVar1,param_2), iVar3 == -1 ||
       (iVar4 = func_005405D4(iVar2,iVar3), iVar4 == 0)))) &&
     ((*(int *)(iVar2 + 0x5c) != 0 &&
      (iVar4 = *(int *)(iVar2 + 0x58) - *(int *)(iVar2 + 0x60), iVar4 != 0)))) {
    if ((*(int *)(iVar2 + 0x2c) == 0) &&
       ((*(int *)(iVar2 + 0x1c) == 0 || (*(int *)(iVar2 + 0x4c) == 0)))) {
      iVar3 = func_00258E74(iVar4,(int *)(iVar2 + 100),param_2,0);
      if (iVar3 != 0) {
        func_0010F1F8((int *)(*(int *)(iVar2 + 0x60) + iVar4),in_s0);
        *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + -1;
        func_0010F1DC((int *)(iVar2 + 0x24),(int *)(*(int *)(iVar2 + 0x30) + iVar4));
        *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
      }
    }
    else {
      func_00257FC4(iVar4,param_2,0);
      func_0010F1F8((int *)(*(int *)(iVar2 + 0x60) + iVar4),in_s0);
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + -1;
      func_0010F1DC((int *)(iVar2 + 0x24),(int *)(*(int *)(iVar2 + 0x30) + iVar4));
      *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
    }
  }
  return iVar4;
}

