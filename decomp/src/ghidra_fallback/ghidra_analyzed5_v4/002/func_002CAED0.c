#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_002cb084;
extern int *DAT_002cb088;
extern int DAT_002cb08c;
extern int *DAT_002cb090;

// USA 002CAED0 <- EU 002CAEAC (Ghidra, non-matching)
// GLOBAL DAT_002cb084 int
// GLOBAL DAT_002cb088 int *
// GLOBAL DAT_002cb08c int
// GLOBAL DAT_002cb090 int *

int * func_002CAED0(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(uint *)(albw_frame + 0xc))
  piVar3 = func_00150E40(param_1,param_2);
  iVar6 = DAT_002cb084 + 0x54;
  *piVar3 = DAT_002cb084;
  piVar3[200] = iVar6;
  iVar6 = func_0014E428((int)piVar3,0,(int)(short)param_2[10],0,1,0,0);
  piVar3[0x103] = iVar6;
  iVar6 = func_0054D964((int)piVar3,0);
  piVar3[0x104] = iVar6;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar3[0x105] = (int)puVar5;
  piVar8 = piVar3 + 0x105;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar4);
  }
  piVar1 = DAT_002cb088;
  piVar3[0x106] = (int)puVar5;
  iVar7 = *piVar1;
  piVar3[0x10a] = piVar1[1];
  iVar6 = DAT_002cb08c;
  piVar3[0x109] = iVar7;
  piVar3[0x107] = iVar6;
  piVar3[0x108] = (int)piVar3;
  piVar3[0x10b] = 0;
  piVar3[0x10d] = 0;
  *(undefined1 *)(piVar3 + 0x10e) = 0;
  bVar2 = func_00588BF0((int)piVar3,0);
  if (bVar2) {
    *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
  }
  else {
    iVar6 = piVar3[0x103];
    if (iVar6 == 0) {
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    }
    else {
      *(bool *)(piVar3 + 0x10e) = (short)param_2[10] == 0;
      *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar6 + 0x80),piVar3[0xfa],(float *)(piVar3 + 0xf4));
      (**(code **)(*(int *)piVar3[0x103] + 0x10))((int *)piVar3[0x103],0x24);
      iVar6 = piVar3[0x104];
      *(int *)(iVar6 + 4) = piVar3[0xf4];
      *(int *)(iVar6 + 8) = piVar3[0xf5];
      *(int *)(iVar6 + 0xc) = piVar3[0xf6];
      func_004356B4((int *)piVar3[0x104]);
      iVar6 = piVar3[0x104];
      *(undefined2 *)(iVar6 + 0x28) = 0xa4;
      *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) & 0xffffe0ff;
      *(int *)(piVar3[0x105] + 0x18) = piVar3[0x104];
      func_004ED9C8(*piVar8);
      local_24 = piVar3[0xb3];
      func_004EDAD0(*piVar8,&local_24);
      *(short *)(*piVar8 + 0x2c) = (short)piVar3[0x15];
      func_004A879C(*DAT_002cb090,*piVar8,2);
    }
  }
  return piVar3;
}

