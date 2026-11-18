#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int DAT_0024bcc8;

// USA 0024BBD8 <- EU 0024BBD8 (Ghidra, non-matching)
// GLOBAL DAT_0024bcc8 int

int * func_0024BBD8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_0024bcc8;
  piVar1[200] = DAT_0024bcc8 + 0x54;
  piVar1[0x103] = 0;
  *piVar1 = iVar2;
  iVar2 = func_0054D89C((int)piVar1,0);
  piVar1[0x104] = iVar2;
  piVar1[0x105] = 0;
  piVar1[0x106] = 0;
  iVar2 = func_0014E428((int)piVar1,1,0,0,1,0,0);
  piVar1[0x103] = iVar2;
  piVar1[0x105] = param_2[7];
  piVar1[0xfa] = param_2[8];
  piVar1[0x106] = param_2[9];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar2 + 0x80),piVar1[0x105],piVar1[0xfa],piVar1[0x106]);
  iVar2 = piVar1[0x103];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(int *)(iVar2 + 0x8c) = piVar1[0xf4];
  *(int *)(iVar2 + 0x9c) = piVar1[0xf5];
  *(int *)(iVar2 + 0xac) = piVar1[0xf6];
  func_004CEAF0(piVar1[0x103]);
  func_001512B4(piVar1[0x104],(float *)(piVar1 + 0xf4));
  return piVar1;
}

