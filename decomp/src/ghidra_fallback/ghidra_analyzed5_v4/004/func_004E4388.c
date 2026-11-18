#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_004e459c;
extern undefined4 *DAT_004e45a0;
extern undefined4 DAT_004e45a4;

// USA 004E4388 <- EU 004E4360 (Ghidra, non-matching)
// GLOBAL DAT_004e459c uint *
// GLOBAL DAT_004e45a0 undefined4 *
// GLOBAL DAT_004e45a4 undefined4

void func_004E4388(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  piVar3 = *(int **)(param_1 + 0x40c);
  if (((*DAT_004e459c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004e459c), iVar2 != 0)) {
    *DAT_004e45a0 = DAT_004e45a4;
  }
  if ((piVar3 == (int *)0x0) || (iVar2 = (**(code **)*piVar3)(piVar3,DAT_004e45a0), iVar2 == 0)) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    fVar6 = *(float *)(param_1 + 0x514);
    fVar5 = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(param_1 + 0x3d8);
    piVar3[1] = *(int *)(param_1 + 0x3d0);
    piVar3[2] = (int)ALBW_AS_U32((fVar5 + fVar6));
    piVar3[3] = iVar2;
    func_004356B4(piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x558);
  if (piVar3 != (int *)0x0) {
    fVar6 = *(float *)(param_1 + 0x518);
    fVar5 = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(param_1 + 0x3d8);
    piVar3[1] = *(int *)(param_1 + 0x3d0);
    piVar3[2] = (int)ALBW_AS_U32((fVar5 + fVar6));
    piVar3[3] = iVar2;
    func_004356B4(piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x620);
  if (piVar3 != (int *)0x0) {
    fVar6 = *(float *)(param_1 + 0x51c);
    fVar5 = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(param_1 + 0x3d8);
    piVar3[1] = *(int *)(param_1 + 0x3d0);
    piVar3[2] = (int)ALBW_AS_U32((fVar5 + fVar6));
    piVar3[3] = iVar2;
    func_004356B4(piVar3);
  }
  iVar2 = *(int *)(param_1 + 0x540);
  if (iVar2 != 0) {
    fVar6 = *(float *)(param_1 + 0x514);
    fVar5 = *(float *)(param_1 + 0x3d4);
    uVar7 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar2 + 8) = fVar5 + fVar6;
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    func_004356B4(*(int **)(param_1 + 0x540));
  }
  iVar2 = *(int *)(param_1 + 0x544);
  if (iVar2 != 0) {
    fVar6 = *(float *)(param_1 + 0x514);
    fVar5 = *(float *)(param_1 + 0x3d4);
    uVar7 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar2 + 8) = fVar5 + fVar6;
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    func_004356B4(*(int **)(param_1 + 0x544));
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0x674));
  *(undefined1 *)(param_1 + 0x6cb) = 0;
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x540),param_1 + 0x678,0xc,param_1 + 0x688,0);
  bVar4 = **(int **)(param_1 + 0x674) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x6cb);
  }
  if (bVar4 && cVar1 != '\0') {
    func_0066A8D8((undefined4 *)(param_1 + 0x484),6);
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0x674));
  *(undefined1 *)(param_1 + 0x6cb) = 0;
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x544),param_1 + 0x678,0x1f00,param_1 + 0x688,0);
  bVar4 = **(int **)(param_1 + 0x674) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x6cb);
  }
  if (bVar4 && cVar1 != '\0') {
    func_0066A8D8((undefined4 *)(param_1 + 0x484),6);
  }
  return;
}

