#include "ghidra_types.h"

extern int func_00410FB8(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5,uint param_6);
extern int func_0041114C(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00411354(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_004117F4(int *param_1,int *param_2,int *param_3,undefined *param_4);
extern int func_00411FEC(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569658(int param_1);
extern int func_0056CB18(int param_1,uint param_2);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 004121F8 <- EU 004121D8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *

undefined4 func_004121F8(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  undefined4 uVar6;
  
  if ((param_1[1] == 0) ||
     (bVar1 = func_00569658(param_1[1]), (!bVar1 || param_2 == 0xffffffff) || param_3 == (int *)0x0)
     ) {
    return 0;
  }
  uVar6 = 0;
  *(short *)(param_1 + 0x82) = (short)param_1[0x82] + 1;
  if (*(char *)((int)param_1 + 0x20a) != '\0') goto switchD_00412250_caseD_0;
  switch(param_2 >> 0x18) {
  case 1:
    iVar2 = func_0056CB18(param_1[1],param_2);
    if (iVar2 == 1) {
      uVar6 = func_00411354(param_1,param_2,param_3,param_4,param_5);
      break;
    }
    if (iVar2 == 3) {
      uVar6 = func_00410FB8(param_1,param_2,param_3,(uint)param_4,(uint)param_5,0xffffffff);
      break;
    }
  default:
switchD_00412250_caseD_0:
    uVar6 = 0;
    break;
  case 2:
    uVar6 = func_0041114C(param_1,param_2,param_3,param_4,param_5);
    break;
  case 3:
    uVar6 = func_00411FEC(param_1,param_2,param_3,param_4,param_5);
    break;
  case 5:
    if (((uint)param_4 & 8) != 0) {
      uVar3 = func_0056CBF8(param_1[1],param_2);
      uVar3 = func_00412404(param_1,uVar3,param_3,(int)param_5,1);
      if (uVar3 == 0) break;
    }
    uVar6 = 1;
    break;
  case 6:
    uVar3 = func_0056CBF8(param_1[1],param_2);
    piVar4 = (int *)func_00412404(param_1,uVar3,param_3,(int)param_5,1);
    if (piVar4 != (int *)0x0) {
      uVar6 = func_004117F4(param_1,piVar4,param_3,(undefined *)param_5);
    }
  }
  sVar5 = (short)param_1[0x82] + -1;
  *(short *)(param_1 + 0x82) = sVar5;
  if (sVar5 == 0) {
    *(undefined1 *)((int)param_1 + 0x20a) = 0;
  }
  return uVar6;
}

