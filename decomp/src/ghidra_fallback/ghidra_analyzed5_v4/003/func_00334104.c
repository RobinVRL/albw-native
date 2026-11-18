#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00334408;
extern int *DAT_0033440c;
extern int DAT_00334410;
extern float DAT_00334414;
extern uint DAT_00334418;
extern int *DAT_0033441c;

// USA 00334104 <- EU 003340E0 (Ghidra, non-matching)
// GLOBAL DAT_00334408 int
// GLOBAL DAT_0033440c int *
// GLOBAL DAT_00334410 int
// GLOBAL DAT_00334414 float
// GLOBAL DAT_00334418 uint
// GLOBAL DAT_0033441c int *

/* WARNING: Variable defined which should be unmapped: objStack_50 */

int * func_00334104(undefined4 *param_1,uint *param_2,undefined1 param_3)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  int iVar16;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  piVar3 = func_00150E40(param_1,param_2);
  iVar6 = DAT_00334408;
  piVar3[200] = DAT_00334408 + 0x54;
  *piVar3 = iVar6;
  piVar3[0x103] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar3[0x104] = (int)puVar5;
  piVar11 = piVar3 + 0x104;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar3[0x105] = (int)puVar5;
  piVar9 = piVar3 + 0x105;
  iVar6 = func_0054D964((int)piVar3,2);
  piVar3[0x106] = iVar6;
  piVar10 = piVar3 + 0x106;
  iVar6 = func_0054D964((int)piVar3,0);
  piVar3[0x107] = iVar6;
  iVar6 = func_0054D964((int)piVar3,1);
  piVar3[0x108] = iVar6;
  *(undefined1 *)(piVar3 + 0x109) = 0;
  piVar7 = DAT_0033440c;
  *(undefined1 *)((int)piVar3 + 0x425) = param_3;
  iVar8 = *piVar7;
  piVar12 = piVar3 + 0x108;
  piVar3[0x10d] = piVar7[1];
  iVar6 = DAT_00334410;
  piVar3[0x10c] = iVar8;
  piVar3[0x10a] = iVar6;
  piVar3[0x10b] = (int)piVar3;
  objStack_50[0] = 1;
  objStack_50[1] = 0;
  objStack_50[2] = 0;
  iVar6 = func_0014E428((int)piVar3,0,0,0,1,0,0);
  piVar3[0x103] = iVar6;
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar6 + 0x80),0,piVar3[0xfa],0);
  iVar6 = piVar3[0x103];
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  *(int *)(iVar6 + 0x8c) = piVar3[0xf4];
  *(int *)(iVar6 + 0x9c) = piVar3[0xf5];
  *(int *)(iVar6 + 0xac) = piVar3[0xf6];
  piVar7 = (int *)piVar3[0x103];
  (**(code **)(*piVar7 + 0x10))(piVar7,0x24);
  uVar15 = *(undefined8 *)(piVar3 + 0xf4);
  iVar8 = piVar3[0xf6];
  objStack_50[0] = 1;
  *(undefined2 *)(*piVar10 + 0x28) = 1;
  fVar13 = func_0054DE3C(piVar3,2,1);
  iVar6 = *piVar10;
  *(int *)(iVar6 + 4) = (int)uVar15;
  *(float *)(iVar6 + 8) = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)) - fVar13;
  *(int *)(iVar6 + 0xc) = iVar8;
  func_004356B4((int *)*piVar10);
  iVar8 = piVar3[0xf4];
  fVar14 = ALBW_AS_F32(piVar3[0xf5]);
  iVar16 = piVar3[0xf6];
  fVar13 = func_0054DE3C(piVar3,0,1);
  iVar6 = piVar3[0x107];
  fVar13 = fVar13 * DAT_00334414;
  *(int *)(iVar6 + 4) = iVar8;
  *(float *)(iVar6 + 8) = fVar14 - fVar13;
  *(int *)(iVar6 + 0xc) = iVar16;
  func_004356B4((int *)piVar3[0x107]);
  uVar15 = *(undefined8 *)(piVar3 + 0xf4);
  iVar8 = piVar3[0xf6];
  fVar13 = func_0054DE3C(piVar3,1,1);
  iVar6 = *piVar12;
  *(int *)(iVar6 + 4) = (int)uVar15;
  *(float *)(iVar6 + 8) = fVar13 + ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
  *(int *)(iVar6 + 0xc) = iVar8;
  objStack_50[0] = DAT_00334418;
  uVar1 = objStack_50[0];
  (*(undefined2 *)((char *)&objStack_50[0] + 0)) = (undefined2)DAT_00334418;
  *(undefined2 *)(*piVar12 + 0x28) = (undefined2)objStack_50[0];
  objStack_50[0] = uVar1;
  func_004356B4((int *)*piVar12);
  *(int *)(piVar3[0x104] + 0x18) = *piVar10;
  func_004ED9C8(*piVar11);
  objStack_50[0] = piVar3[0xb3];
  func_004EDAD0(*piVar11,objStack_50);
  piVar7 = DAT_0033441c;
  *(short *)(*piVar11 + 0x2c) = (short)piVar3[0x15];
  func_004A879C(*piVar7,piVar3[0x104],0);
  *(int *)(piVar3[0x105] + 0x18) = piVar3[0x108];
  func_004ED9C8(*piVar9);
  objStack_50[0] = piVar3[0xb3];
  func_004EDAD0(*piVar9,objStack_50);
  *(short *)(*piVar9 + 0x2c) = (short)piVar3[0x15];
  func_004A879C(*piVar7,*piVar9,2);
  bVar2 = func_00588BF0((int)piVar3,0);
  if (bVar2) {
    *(undefined1 *)(piVar3[0x104] + 0x44) = 0;
    func_004CF478(piVar3[0x103],0);
    *(undefined1 *)(piVar3 + 0x109) = 1;
  }
  else {
    *(undefined1 *)(piVar3[0x105] + 0x44) = 0;
  }
  func_004CEAF0(piVar3[0x103]);
  return piVar3;
}

