#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E138(int param_1,int param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0024AEBC(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588C3C(void);
extern int *DAT_0024a6b0;
extern uint *DAT_0024a6b4;
extern undefined4 *DAT_0024a6b8;
extern undefined4 DAT_0024a6bc;

// USA 0024A518 <- EU 0024A518 (Ghidra, non-matching)
// GLOBAL DAT_0024a6b0 int *
// GLOBAL DAT_0024a6b4 uint *
// GLOBAL DAT_0024a6b8 undefined4 *
// GLOBAL DAT_0024a6bc undefined4

undefined4 func_0024A518(int param_1,int param_2,undefined *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *extraout_r1;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0x2d7);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x440);
  }
  bVar6 = bVar5 && cVar1 == '\x04';
  if (bVar5 && cVar1 == '\x04') {
    bVar6 = *(int *)(param_1 + 0x474) == -1;
  }
  if ((bVar6) && (iVar2 = func_0024AEBC(param_1), iVar2 == 0)) {
    param_3 = (code *)0x0;
    func_004CF478(*(int *)(param_1 + 0x40c),0);
    func_00151148(*(int *)(param_1 + 0x418),0);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  func_0014E138(param_1,param_2);
  if ((param_2 != 0) && (bVar5 = func_00588C3C(), !bVar5)) goto LAB_0024a650;
  piVar4 = *(int **)(*DAT_0024a6b0 + 0x44);
  if (((*DAT_0024a6b4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0024a6b4), iVar2 != 0)) {
    *DAT_0024a6b8 = DAT_0024a6bc;
  }
  puVar3 = DAT_0024a6b8;
  if (piVar4 == (int *)0x0) {
LAB_0024a608:
    piVar4 = (int *)0x0;
  }
  else {
    param_3 = *(undefined **)(*piVar4 + 8);
    uVar7 = (*(code *)param_3)(piVar4);
    puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) goto LAB_0024a608;
  }
  if ((piVar4 != (int *)0x0) || (bVar5 = func_00588C3C(), puVar3 = extraout_r1, bVar5)) {
    if (*(int **)(param_1 + 0x414) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x414),puVar3,param_3,param_4);
      func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x40c),(int *)0x1);
    }
  }
LAB_0024a650:
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x454);
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  return func_001512B4(*(int *)(param_1 + 0x418),(float *)(param_1 + 0x3d0));
}

