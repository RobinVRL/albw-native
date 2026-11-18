#include "ghidra_types.h"

extern int func_00109A64(undefined4 *param_1);
extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void *func_0010E74C();
extern int func_0010F1DC(int *param_1,int *param_2);

// USA 00107AF8 <- EU 00107AF8 (Ghidra, non-matching)

int * func_00107AF8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
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
  *(undefined1 *)(param_1 + 0xd) = 0;
  iVar1 = func_0010CEE0(0x9e00,(int *)0x0,4);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar4 = 0x7f;
    param_1[3] = iVar1;
    do {
      iVar4 = iVar4 + -1;
      *(int *)(iVar1 + iVar3 * 4) = iVar1 + (iVar3 + 0x4e) * 4;
      iVar3 = iVar3 + 0x4e;
    } while (iVar4 != 0);
    *(undefined4 *)(iVar1 + 0x9ac8) = 0;
    param_1[4] = iVar1;
    func_0010B3EC(param_1,0x80,iVar1 + 0x9c00);
  }
  iVar1 = func_0010B3C0(param_1,0,0x80);
  if (iVar1 != 0) {
    if (0 < *param_1) {
      func_0010E74C((uint *)param_1[2] + 0x80,(uint *)param_1[2],*param_1 << 2,in_s0);
    }
    iVar1 = 0;
    do {
      piVar2 = (int *)param_1[3];
      iVar3 = 0;
      if (piVar2 != (int *)0x0) {
        param_1[3] = *piVar2;
        iVar3 = func_00109A64(piVar2);
      }
      iVar4 = iVar1 + 1;
      *(int *)(param_1[2] + iVar1 * 4) = iVar3;
      iVar1 = iVar4;
    } while (iVar4 < 0x80);
    *param_1 = *param_1 + 0x80;
  }
  param_1[8] = 8;
  param_1[0xc] = 8;
  piVar2 = (int *)param_1[2];
  piVar5 = piVar2 + *param_1;
  for (; piVar2 != piVar5; piVar2 = piVar2 + 1) {
    func_0010F1DC(param_1 + 5,(int *)(param_1[8] + *piVar2));
    param_1[7] = param_1[7] + 1;
  }
  return param_1;
}

