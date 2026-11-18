#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_001bf96c;
extern int *DAT_001bf970;
extern int DAT_001bf974;
extern int *DAT_001bf978;

// USA 001BF7C0 <- EU 001BF7C0 (Ghidra, non-matching)
// GLOBAL DAT_001bf96c int
// GLOBAL DAT_001bf970 int *
// GLOBAL DAT_001bf974 int
// GLOBAL DAT_001bf978 int *

/* WARNING: Variable defined which should be unmapped: objStack_28 */

int * func_001BF7C0(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  piVar2 = func_00150E40(param_1,param_2);
  iVar3 = DAT_001bf96c;
  *piVar2 = DAT_001bf96c;
  piVar2[0x103] = 0;
  piVar2[200] = iVar3 + 0x54;
  iVar3 = func_0054D964((int)piVar2,0);
  piVar2[0x104] = iVar3;
  iVar3 = func_0054D964((int)piVar2,1);
  piVar2[0x105] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar1 = DAT_001bf970;
  piVar2[0x106] = (int)puVar5;
  iVar6 = *piVar1;
  piVar2[0x10a] = piVar1[1];
  iVar3 = DAT_001bf974;
  piVar2[0x109] = iVar6;
  piVar2[0x107] = iVar3;
  piVar2[0x108] = (int)piVar2;
  uVar8 = *(undefined8 *)(piVar2 + 0xf4);
  iVar6 = piVar2[0xf6];
  fVar7 = func_0054DE3C(piVar2,0,1);
  iVar3 = piVar2[0x104];
  *(int *)(iVar3 + 4) = (int)uVar8;
  *(float *)(iVar3 + 8) = fVar7 + ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
  *(int *)(iVar3 + 0xc) = iVar6;
  func_004356B4((int *)piVar2[0x104]);
  *(int *)(piVar2[0x106] + 0x18) = piVar2[0x104];
  objStack_28[0] = piVar2[0xb3];
  func_004EDAD0(piVar2[0x106],objStack_28);
  objStack_28[1] = 0xa4;
  *(undefined2 *)(*(int *)(piVar2[0x106] + 0x18) + 0x28) = 0xa4;
  *(short *)(piVar2[0x106] + 0x2c) = (short)piVar2[0x15];
  func_004A879C(*DAT_001bf978,piVar2[0x106],2);
  uVar8 = *(undefined8 *)(piVar2 + 0xf4);
  iVar6 = piVar2[0xf6];
  fVar7 = func_0054DE3C(piVar2,0,1);
  iVar3 = piVar2[0x105];
  *(int *)(iVar3 + 4) = (int)uVar8;
  *(float *)(iVar3 + 8) = fVar7 + ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
  *(int *)(iVar3 + 0xc) = iVar6;
  func_004356B4((int *)piVar2[0x105]);
  objStack_28[0] = 1;
  objStack_28[1] = 0;
  objStack_28[2] = 0;
  iVar3 = func_0014E428((int)piVar2,0,0,0,1,0,0);
  piVar2[0x103] = iVar3;
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),piVar2[0xfa],(float *)(piVar2 + 0xf4));
  func_004CEAF0(piVar2[0x103]);
  return piVar2;
}

