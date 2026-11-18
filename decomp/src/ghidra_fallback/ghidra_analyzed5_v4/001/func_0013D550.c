// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0015116C(int param_1);
extern int func_00173FC0(int param_1);
extern int func_001E47F4(int param_1,int param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00556DC0(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0013d698;
extern int *DAT_0013d69c;
extern float DAT_0013d6a0;
extern undefined4 DAT_0013d6a4;
extern int *DAT_0013d6a8;

// USA 0013D550 <- EU 0013D550 (Ghidra, non-matching)
// GLOBAL DAT_0013d698 int *
// GLOBAL DAT_0013d69c int *
// GLOBAL DAT_0013d6a0 float
// GLOBAL DAT_0013d6a4 undefined4
// GLOBAL DAT_0013d6a8 int *

undefined4 func_0013D550(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x62d) != '\0') goto LAB_0013d624;
  bVar3 = func_00588BF0(param_1,0);
  if (bVar3) {
    sVar1 = *(short *)(param_1 + 0x5e);
LAB_0013d588:
    if (((0 < sVar1) && (iVar5 = func_0052FBDC(*DAT_0013d698 + 0x3dbbc,(int)sVar1,0), iVar5 != 0))
       && (iVar6 = func_00588BE4(iVar5), fVar2 = DAT_0013d6a0, iVar6 == *DAT_0013d69c)) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar5 + 0x3d0);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(iVar5 + 0x3d4);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar5 + 0x3d8);
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + fVar2;
      func_0065743C((undefined4 *)(param_1 + 0x4f8),5);
      *(undefined4 *)(*(int *)(param_1 + 0x4f4) + 0x134) = DAT_0013d6a4;
      func_0015116C(param_1);
      func_00173FC0(iVar5);
    }
  }
  else {
    bVar3 = func_00588BF0(param_1,1);
    if (bVar3) {
      sVar1 = *(short *)(param_1 + 100);
      goto LAB_0013d588;
    }
  }
  *(undefined1 *)(param_1 + 0x62d) = 1;
LAB_0013d624:
  if (((*DAT_0013d6a8 != 0) && (cVar4 = func_00556DC0(*DAT_0013d6a8), cVar4 != '\0')) &&
     (*(char *)(param_1 + 0x4f1) != '\0')) {
    if (*(uint *)(param_1 + 0x534) < *(uint *)(param_1 + 0x538)) {
      *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return func_001E47F4(param_1,param_2);
}

