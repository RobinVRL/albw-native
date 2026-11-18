#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0027E7E4(int param_1,char param_2);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_0027eebc;
extern int DAT_0027eec0;
extern int *DAT_0027eec4;
extern int DAT_0027eec8;
extern int DAT_0027eee0;
extern undefined4 DAT_0027eee4;
extern int *DAT_0027eee8;
extern char s_mtSwitchColor_Color_0027eecc[];

// USA 0027EC18 <- EU 0027EC40 (Ghidra, non-matching)
// GLOBAL DAT_0027eebc int
// GLOBAL DAT_0027eec0 int
// GLOBAL DAT_0027eec4 int *
// GLOBAL DAT_0027eec8 int
// GLOBAL DAT_0027eee0 int
// GLOBAL DAT_0027eee4 undefined4
// GLOBAL DAT_0027eee8 int *
// GLOBAL s_mtSwitchColor_Color_0027eecc string

int * func_0027EC18(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0027eebc + 0x54;
  *piVar3 = DAT_0027eebc;
  piVar3[200] = iVar4;
  iVar4 = DAT_0027eec0;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = iVar4;
  *(undefined1 *)(piVar3 + 0x106) = 0;
  piVar8 = piVar3 + 0x107;
  piVar3[0x107] = 0;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x108] = iVar4;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x109] = iVar4;
  piVar10 = piVar3 + 0x109;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  piVar9 = DAT_0027eec4;
  piVar3[0x10a] = (int)puVar6;
  piVar3[0x10c] = 0;
  iVar4 = piVar9[3];
  piVar3[0x10d] = piVar9[2];
  piVar3[0x10e] = iVar4;
  piVar3[0x10b] = DAT_0027eec8;
  piVar3[0x10f] = -1;
  piVar9 = piVar3 + 0x10a;
  iVar4 = func_0014E428((int)piVar3,1,0,0,1,0,0);
  piVar3[0x107] = iVar4;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar4 + 0x80),0,piVar3[0xfa],0);
  iVar4 = *piVar8;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(int *)(iVar4 + 0x8c) = piVar3[0xf4];
  *(int *)(iVar4 + 0x9c) = piVar3[0xf5];
  *(int *)(iVar4 + 0xac) = piVar3[0xf6];
  func_004CEAF0(*piVar8);
  local_3c = s_mtSwitchColor_Color_0027eecc;
  local_40 = DAT_0027eee0;
  iVar4 = func_00584CC8(*piVar8,&local_40);
  piVar3[0x10f] = iVar4;
  puVar7 = (ushort *)(**(int **)(*piVar8 + 0x20) + iVar4 * 0x154);
  *puVar7 = *puVar7 | 0x400;
  iVar12 = piVar3[0xf4];
  fVar14 = ALBW_AS_F32(piVar3[0xf5]);
  iVar13 = piVar3[0xf6];
  fVar11 = func_0054DE3C(piVar3,0,1);
  fVar11 = fVar11 + fVar14;
  iVar4 = piVar3[0x108];
  *(int *)(iVar4 + 4) = iVar12;
  *(float *)(iVar4 + 8) = fVar11;
  *(int *)(iVar4 + 0xc) = iVar13;
  func_004356B4((int *)piVar3[0x108]);
  uVar1 = DAT_0027eee4;
  iVar4 = piVar3[0x109];
  *(int *)(iVar4 + 4) = iVar12;
  *(float *)(iVar4 + 8) = fVar11;
  *(int *)(iVar4 + 0xc) = iVar13;
  *(undefined4 *)(*piVar10 + 0x58) = uVar1;
  *(undefined4 *)(*piVar10 + 0x60) = uVar1;
  func_004356B4((int *)*piVar10);
  iVar4 = *DAT_0027eec4;
  iVar12 = DAT_0027eec4[1];
  piVar3[0x10c] = (int)piVar3;
  piVar3[0x10d] = iVar4;
  piVar3[0x10e] = iVar12;
  *(int *)(*piVar9 + 0x18) = piVar3[0x108];
  local_44 = piVar3[0xb3];
  func_004EDAD0(*piVar9,&local_44);
  *(short *)(*piVar9 + 0x2c) = (short)piVar3[0x15];
  func_004A879C(*DAT_0027eee8,*piVar9,2);
  bVar2 = func_00588BF0((int)piVar3,0);
  if (bVar2) {
    func_0027E7E4((int)piVar3,'\x01');
  }
  else {
    func_0027E7E4((int)piVar3,'\0');
  }
  return piVar3;
}

