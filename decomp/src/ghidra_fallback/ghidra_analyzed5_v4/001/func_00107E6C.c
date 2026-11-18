#include "ghidra_types.h"

extern int func_0010A4CC(undefined4 *param_1);
extern int func_0010B368(int param_1);
extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void *func_0010E74C();
extern int func_0010F1DC(int *param_1,int *param_2);

// USA 00107E6C <- EU 00107E6C (Ghidra, non-matching)

int * func_00107E6C(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float in_s0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = (int)(param_1 + 5);
  param_1[7] = 0;
  param_1[5] = (int)(param_1 + 5);
  param_1[8] = -1;
  param_1[10] = (int)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[9] = (int)(param_1 + 9);
  param_1[0xc] = -1;
  iVar1 = func_0010BAB4(0x10);
  pvVar2 = (void *)0x0;
  if (iVar1 != 0) {
    pvVar2 = func_0010B368(iVar1);
  }
  param_1[0xd] = (int)pvVar2;
  iVar1 = func_0010CEE0(0x1600,(int *)0x0,4);
  if (iVar1 != 0) {
    iVar6 = 0;
    iVar5 = 0x1f;
    param_1[3] = iVar1;
    do {
      iVar5 = iVar5 + -1;
      *(int *)(iVar1 + iVar6 * 4) = iVar1 + (iVar6 + 0x2b) * 4;
      iVar6 = iVar6 + 0x2b;
    } while (iVar5 != 0);
    *(undefined4 *)(iVar1 + 0x14d4) = 0;
    param_1[4] = iVar1;
    func_0010B3EC(param_1,0x20,iVar1 + 0x1580);
  }
  iVar1 = func_0010B3C0(param_1,0,0x20);
  if (iVar1 != 0) {
    if (0 < *param_1) {
      func_0010E74C((uint *)param_1[2] + 0x20,(uint *)param_1[2],*param_1 << 2,in_s0);
    }
    iVar1 = 0;
    do {
      piVar3 = (int *)param_1[3];
      uVar4 = 0;
      if (piVar3 != (int *)0x0) {
        param_1[3] = *piVar3;
        uVar4 = func_0010A4CC(piVar3);
      }
      iVar5 = iVar1 + 1;
      *(undefined4 *)(param_1[2] + iVar1 * 4) = uVar4;
      iVar1 = iVar5;
    } while (iVar5 < 0x20);
    *param_1 = *param_1 + 0x20;
  }
  param_1[8] = 0;
  param_1[0xc] = 0;
  for (piVar3 = (int *)param_1[2]; piVar3 != (int *)(param_1[2] + *param_1 * 4); piVar3 = piVar3 + 1
      ) {
    func_0010F1DC(param_1 + 5,(int *)(param_1[8] + *piVar3));
    param_1[7] = param_1[7] + 1;
  }
  return param_1;
}

