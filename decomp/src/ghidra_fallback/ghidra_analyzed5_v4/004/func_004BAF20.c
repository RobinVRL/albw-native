#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001511F0(int *param_1);
extern int func_001512B4(int param_1,float *param_2);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_002E0064(int *param_1,int param_2);
extern int func_004B9F18(int param_1,int param_2);
extern int func_004BA260(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int DAT_004bb058;
extern int DAT_004bb05c;
extern int *DAT_004bb060;
extern undefined *DAT_004bb064;

// USA 004BAF20 <- EU 004BAEF8 (Ghidra, non-matching)
// GLOBAL DAT_004bb058 int
// GLOBAL DAT_004bb05c int
// GLOBAL DAT_004bb060 int *
// GLOBAL DAT_004bb064 undefined *

int * func_004BAF20(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar2 = func_001E56CC(param_1,param_2);
  iVar6 = DAT_004bb05c;
  iVar5 = DAT_004bb058 + 0x74;
  *piVar2 = DAT_004bb058;
  piVar2[200] = iVar5;
  piVar2[0x187] = iVar6;
  piVar1 = DAT_004bb060;
  piVar2[0x188] = 0;
  piVar2[0x189] = 0;
  func_002E0064((int *)(*(int *)(*piVar1 + 0x3dbe4) + 0xc),(int)param_2);
  func_001E518C(piVar2,param_2,0,0,0);
  iVar6 = piVar2[0x11e];
  if (0 < iVar6) {
    puVar3 = (undefined4 *)func_0010CEE0(iVar6 * 0x104 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0x104;
      puVar3[1] = iVar6;
      iVar5 = func_00100118((int)(puVar3 + 2),DAT_004bb064,0x104,iVar6);
    }
    if (iVar5 != 0) {
      piVar2[0x189] = iVar5;
      piVar2[0x188] = iVar6;
    }
  }
  func_004B9F18((int)piVar2,(int)param_2);
  iVar6 = piVar2[0x120];
  uVar8 = 0;
  iVar5 = iVar6 + piVar2[0x11e] * 4;
  for (; iVar6 != iVar5; iVar6 = iVar6 + 4) {
    if (uVar8 < (uint)piVar2[0x188]) {
      iVar7 = piVar2[0x189] + uVar8 * 0x104;
    }
    else {
      iVar7 = piVar2[0x189];
    }
    iVar4 = func_0054D89C((int)piVar2,0);
    *(int *)(iVar7 + 0xe4) = iVar4;
    func_001512B4(iVar4,(float *)(iVar7 + 0xe8));
    func_001511F0(*(int **)(iVar7 + 0xe4));
    func_00151148(*(int *)(iVar7 + 0xe4),1);
    uVar8 = uVar8 + 1;
  }
  func_004BA260((int)piVar2);
  return piVar2;
}

