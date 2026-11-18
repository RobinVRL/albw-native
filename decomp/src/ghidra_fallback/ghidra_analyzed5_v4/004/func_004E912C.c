#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int DAT_004e91dc;
extern float DAT_004e91e0;

// USA 004E912C <- EU 004E9104 (Ghidra, non-matching)
// GLOBAL DAT_004e91dc int
// GLOBAL DAT_004e91e0 float

int * func_004E912C(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  
  piVar1 = (int *)func_00324A30(param_1,param_2);
  iVar2 = DAT_004e91dc;
  *piVar1 = DAT_004e91dc;
  piVar1[0x11e] = 0;
  piVar1[200] = iVar2 + 0x5c;
  iVar2 = func_0054D89C((int)piVar1,0);
  piVar1[0x11f] = iVar2;
  iVar2 = func_0014E428((int)piVar1,1,0,0,1,0,0);
  piVar1[0x11e] = iVar2;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),piVar1[0xfa],(float *)(piVar1 + 0xf4));
  func_004CEAF0(piVar1[0x11e]);
  func_001512B4(piVar1[0x11f],(float *)(piVar1 + 0xf4));
  func_003249E0((int)piVar1,0);
  func_00324964((int)piVar1);
  piVar3 = (int *)piVar1[0x103];
  fVar4 = ALBW_AS_F32(piVar3[2]) + DAT_004e91e0;
  piVar3[1] = piVar3[1];
  piVar3[2] = (int)ALBW_AS_U32(fVar4);
  piVar3[3] = piVar3[3];
  func_004356B4(piVar3);
  return piVar1;
}

