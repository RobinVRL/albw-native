#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002353B8(int param_1,uint param_2,int *param_3,int *param_4);
extern int func_0023542C(int param_1,uint param_2);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 *DAT_004d460c;
extern undefined *DAT_004d4610;

// USA 004D44F4 <- EU 004D44CC (Ghidra, non-matching)
// GLOBAL DAT_004d460c undefined4 *
// GLOBAL DAT_004d4610 undefined *

void func_004D44F4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  
  func_0036D0C8((int *)(param_1 + 0x64c),0);
  puVar1 = DAT_004d460c;
  iVar5 = *(int *)(param_1 + 0x64c);
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004d460c,iVar5);
  }
  iVar6 = *(int *)(param_1 + 0x478);
  if (0 < iVar6) {
    puVar2 = (undefined4 *)func_0010CEE0(iVar6 * 0x104 + 8,(int *)0x0,4);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x104;
      puVar2[1] = iVar6;
      iVar3 = func_00100118((int)(puVar2 + 2),DAT_004d4610,0x104,iVar6);
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x634) = iVar3;
      *(int *)(param_1 + 0x630) = iVar6;
    }
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  piVar7 = *(int **)(param_1 + 0x480);
  uVar8 = 0xffffffff;
  piVar9 = piVar7 + *(int *)(param_1 + 0x478);
  while (piVar7 != piVar9) {
    iVar5 = *piVar7;
    uVar8 = uVar8 + 1;
    func_0023542C(param_1,uVar8);
    piVar4 = (int *)func_0054D964(param_1,0);
    *(undefined2 *)(piVar4 + 10) = 0x87;
    func_002353B8(param_1,uVar8,(int *)(iVar5 + 4),piVar4);
    piVar7 = piVar7 + 1;
    if (uVar8 < *(uint *)(param_1 + 0x630)) {
      iVar5 = *(int *)(param_1 + 0x634) + uVar8 * 0x104;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x634);
    }
    *(int **)(iVar5 + 0x1c) = piVar4;
  }
  return;
}

