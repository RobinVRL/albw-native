#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0028C1B0(int param_1);
extern int func_0028C5D0(int param_1);
extern int func_0028D820(int param_1,int param_2,int param_3,int *param_4);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float DAT_0028c1d4;

// USA 0028C068 <- EU 0028C090 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0028c1d4 float

void func_0028C068(int param_1,float *param_2,uint param_3,float *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined8 *)(albw_frame + 0x0))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  piVar2 = (int *)&local_30;
  func_00115D70((float *)&local_30,param_2,*(float *)(param_1 + 0xfc));
  uVar4 = uStack_28;
  func_00115C54((float *)&local_30,param_4,(float *)(param_1 + 0xb0));
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0xac),param_3,(float *)&local_30);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(int *)(iVar1 + 0x74) = (int)local_30;
  *(int *)(iVar1 + 0x78) = (int)((ulonglong)local_30 >> 0x20);
  *(undefined4 *)(iVar1 + 0x7c) = uVar4;
  func_0028D820(param_1 + 0x3c,param_5,(int)*(char *)(param_1 + 200),piVar2);
  func_0028D820(param_1 + 0x5c,param_5,(int)*(char *)(param_1 + 200),piVar2);
  func_0028C1B0(param_1);
  func_0028C5D0(param_1);
  func_00168E9C(*(int **)(param_1 + 0x18),*(int *)(param_1 + 0x10),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x10),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x20),*(int *)(param_1 + 0x10),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x10),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x28),*(int *)(param_1 + 0x10),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x2c),*(int *)(param_1 + 0x10),(int *)0x0);
  fVar3 = *(float *)(*(int *)(param_1 + 0x10) + 0x134);
  fVar3 = fVar3 + (*(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x104) - fVar3) * DAT_0028c1d4
  ;
  *(float *)(*(int *)(param_1 + 0x10) + 0x134) = fVar3;
  *(float *)(*(int *)(param_1 + 0x14) + 0x134) = fVar3;
  return;
}

