#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00389370;
extern int *DAT_00389374;
extern float DAT_00389378;

// USA 0038923C <- EU 00389218 (Ghidra, non-matching)
// GLOBAL DAT_00389370 int
// GLOBAL DAT_00389374 int *
// GLOBAL DAT_00389378 float

int func_0038923C(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 ((uint *)(albw_frame + 0xc))
  piVar1 = (int *)func_00324A30(param_1,param_2);
  iVar2 = DAT_00389370;
  *piVar1 = DAT_00389370;
  piVar1[0x11e] = 0;
  piVar1[200] = iVar2 + 0x5c;
  iVar2 = func_0054D89C((int)piVar1,0);
  piVar1[0x11f] = iVar2;
  iVar2 = func_0054D964((int)piVar1,0);
  piVar1[0x120] = iVar2;
  puVar3 = func_004EDC9C(piVar1 + 0x121);
  puVar6 = puVar3 + -0x121;
  iVar2 = func_0014E428((int)puVar6,1,0,0,1,0,0);
  puVar3[-3] = iVar2;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),puVar3[-0x27],(float *)(puVar3 + -0x2d));
  func_004CEAF0(puVar3[-3]);
  func_001512B4(puVar3[-2],(float *)(puVar3 + -0x2d));
  iVar2 = puVar3[-1];
  uVar4 = puVar3[-0x2c];
  uVar5 = puVar3[-0x2b];
  *(undefined4 *)(iVar2 + 4) = puVar3[-0x2d];
  *(undefined4 *)(iVar2 + 8) = uVar4;
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  func_004356B4((int *)puVar3[-1]);
  *(undefined2 *)(puVar3[-1] + 0x28) = 0xa4;
  puVar3[6] = puVar3[-1];
  local_14[0] = puVar3[-0x6e];
  func_004EDAD0((int)puVar3,local_14);
  *(undefined2 *)(puVar3 + 0xb) = *(undefined2 *)(puVar3 + -0x10c);
  func_004A879C(*DAT_00389374,(int)puVar3,2);
  func_003249E0((int)puVar6,0);
  func_00324964((int)puVar6);
  piVar1 = (int *)puVar3[-0x1e];
  piVar1[0x16] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar1[0x16]) * DAT_00389378));
  func_004356B4(piVar1);
  return (int)puVar6;
}

