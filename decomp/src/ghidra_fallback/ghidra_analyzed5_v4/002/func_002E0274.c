#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB3C(int param_1);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_00324964(int param_1);
extern int func_003249B4(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00547514(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_002e03f0;
extern int *DAT_002e03f4;
extern int DAT_002e03f8;
extern int *DAT_002e03fc;
extern int *DAT_002e0400;
extern int *DAT_002e0404;
extern float DAT_002e0408;

// USA 002E0274 <- EU 002E0250 (Ghidra, non-matching)
// GLOBAL DAT_002e03f0 int
// GLOBAL DAT_002e03f4 int *
// GLOBAL DAT_002e03f8 int
// GLOBAL DAT_002e03fc int *
// GLOBAL DAT_002e0400 int *
// GLOBAL DAT_002e0404 int *
// GLOBAL DAT_002e0408 float

int * func_002E0274(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  piVar3 = func_001E4414(param_1,param_2);
  iVar4 = DAT_002e03f0 + 0x5c;
  *piVar3 = DAT_002e03f0;
  piVar3[200] = iVar4;
  fVar6 = func_0054DE3C(piVar3,0,1);
  piVar3[0x126] = (int)ALBW_AS_U32(fVar6);
  iVar4 = func_0054D964((int)piVar3,0);
  piVar1 = DAT_002e03f4;
  piVar3[0x127] = iVar4;
  iVar4 = DAT_002e03f8;
  iVar5 = *piVar1;
  piVar3[299] = piVar1[1];
  piVar1 = DAT_002e03fc;
  piVar3[0x12a] = iVar5;
  piVar3[0x128] = iVar4;
  piVar3[0x129] = (int)piVar3;
  iVar4 = piVar1[1];
  iVar5 = piVar1[2];
  piVar3[300] = *piVar1;
  piVar3[0x12d] = iVar4;
  piVar3[0x12e] = iVar5;
  *(undefined1 *)(piVar3 + 0x12f) = 0;
  *(undefined1 *)((int)piVar3 + 0x4bd) = 0;
  iVar4 = func_00588BE4((int)piVar3);
  if ((iVar4 == *DAT_002e0400) || (iVar4 = func_00588BE4((int)piVar3), iVar4 == *DAT_002e0404)) {
    bVar2 = func_00588BF0((int)piVar3,1);
    if ((bVar2) && ((short)piVar3[0xc] == 0)) {
      func_00547514((int)(piVar3 + 1));
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
      return piVar3;
    }
  }
  else {
    bVar2 = func_00588BF0((int)piVar3,1);
    if (bVar2) {
      func_00547514((int)(piVar3 + 1));
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
      return piVar3;
    }
  }
  func_0014EB3C((int)piVar3);
  piVar3[300] = piVar3[0xdd];
  piVar3[0x12d] = piVar3[0xde];
  piVar3[0x12e] = piVar3[0xdf];
  func_00115DC8((float *)(piVar3 + 300));
  func_00115D70((float *)(piVar3 + 300),(float *)(piVar3 + 300),DAT_002e0408);
  func_003249E0((int)piVar3,0);
  func_00324964((int)piVar3);
  iVar4 = func_0014E428((int)piVar3,1,0,0,1,0,0);
  piVar3[0x11f] = iVar4;
  func_003249B4((int)piVar3);
  return piVar3;
}

