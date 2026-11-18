#include "ghidra_types.h"

extern int func_00106030(int param_1);
extern int func_00106108(int param_1,int *param_2);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_006024D0(undefined4 param_1);
extern int func_00602598(undefined4 param_1);
extern int *DAT_005fea30;
extern uint DAT_005fea34;
extern undefined4 *DAT_005fea38;
extern undefined4 *DAT_005fea3c;

// USA 005FE8B4 <- EU 005FE88C (Ghidra, non-matching)
// GLOBAL DAT_005fea30 int *
// GLOBAL DAT_005fea34 uint
// GLOBAL DAT_005fea38 undefined4 *
// GLOBAL DAT_005fea3c undefined4 *

undefined4 func_005FE8B4(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar2 = DAT_005fea34;
  piVar1 = DAT_005fea30;
  uVar9 = 0xffffffff;
  *DAT_005fea30 = (int)param_1;
  func_00110490(param_1,uVar2);
  puVar4 = func_00602598(0);
  *(undefined4 **)*piVar1 = puVar4;
  puVar4 = func_006024D0(0);
  *(undefined4 **)(*piVar1 + 4) = puVar4;
  if ((code *)*DAT_005fea38 == (code *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(code *)*DAT_005fea38)(0x10000,0x100,0,0x9c);
    if (puVar4 != (undefined4 *)0x0) {
      func_00110490(puVar4,0x9c);
      *puVar4 = 0;
    }
  }
  puVar3 = DAT_005fea3c;
  piVar5 = (int *)*piVar1;
  piVar5[2] = (int)puVar4;
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    if (piVar5[1] != 0 && puVar4 != (undefined4 *)0x0) {
      uVar9 = 0;
      goto LAB_005fe930;
    }
    func_00106030(iVar6 + 0x34);
    func_00106108(*(int *)(iVar6 + 0x2c),(int *)(iVar6 + 0x34));
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,iVar6);
    }
  }
  iVar6 = *(int *)(*piVar1 + 4);
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      iVar8 = iVar6 + iVar7 * 0x44;
      func_00106030(iVar8 + 0x34);
      func_00106108(*(int *)(iVar6 + 0x2c),(int *)(iVar8 + 0x34));
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,iVar6);
    }
  }
  if (*(int *)(*piVar1 + 8) != 0) {
    if ((code *)*puVar3 == (code *)0x0) goto LAB_005fe930;
    (*(code *)*puVar3)(0x10000,0x100,0);
  }
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(0x10000,0x100,0,*piVar1);
  }
LAB_005fe930:
  piVar1[1] = 1;
  func_00110490(*(undefined4 **)(*piVar1 + 8),0x9c);
  return uVar9;
}

