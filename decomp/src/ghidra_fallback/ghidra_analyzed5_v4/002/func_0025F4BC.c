#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern int func_0049840C(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern undefined4 *DAT_0025f758;
extern undefined4 *DAT_0025f75c;
extern undefined4 *DAT_0025f760;
extern float DAT_0025f764;
extern int DAT_0025f768;
extern float DAT_0025f76c;
extern float DAT_0025f770;
extern int *DAT_0025f774;
extern uint *DAT_0025f778;
extern undefined4 *DAT_0025f77c;
extern undefined4 DAT_0025f780;
extern int DAT_0025f784;
extern int DAT_0025f788;
extern int *DAT_0025f78c;
extern undefined4 *DAT_0025f790;

// USA 0025F4BC <- EU 0025F4E4 (Ghidra, non-matching)
// GLOBAL DAT_0025f758 undefined4 *
// GLOBAL DAT_0025f75c undefined4 *
// GLOBAL DAT_0025f760 undefined4 *
// GLOBAL DAT_0025f764 float
// GLOBAL DAT_0025f768 int
// GLOBAL DAT_0025f76c float
// GLOBAL DAT_0025f770 float
// GLOBAL DAT_0025f774 int *
// GLOBAL DAT_0025f778 uint *
// GLOBAL DAT_0025f77c undefined4 *
// GLOBAL DAT_0025f780 undefined4
// GLOBAL DAT_0025f784 int
// GLOBAL DAT_0025f788 int
// GLOBAL DAT_0025f78c int *
// GLOBAL DAT_0025f790 undefined4 *

void func_0025F4BC(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  puVar1 = DAT_0025f758;
  *(undefined4 *)(param_1 + 0xc4) = *DAT_0025f758;
  *(undefined4 *)(param_1 + 200) = puVar1[1];
  *(undefined4 *)(param_1 + 0xcc) = puVar1[2];
  puVar1 = DAT_0025f75c;
  *(undefined4 *)(param_1 + 0xb8) = *DAT_0025f75c;
  *(undefined4 *)(param_1 + 0xbc) = puVar1[1];
  *(undefined4 *)(param_1 + 0xc0) = puVar1[2];
  puVar1 = DAT_0025f760;
  *(undefined4 *)(param_1 + 0xd0) = *DAT_0025f760;
  *(undefined4 *)(param_1 + 0xd4) = puVar1[1];
  *(undefined4 *)(param_1 + 0xd8) = puVar1[2];
  func_00115DC8((float *)(param_1 + 0xd0));
  (**(code **)(*(int *)(param_1 + 0x84) + 0x10))(param_1 + 0x84,param_1 + 0x88);
  func_0049840C(param_1 + 0xdc,DAT_0025f770,DAT_0025f76c,*(float *)(DAT_0025f768 + 4),DAT_0025f764);
  piVar6 = DAT_0025f774;
  *(byte *)(*DAT_0025f774 + 0x2c1f) = *(byte *)(*DAT_0025f774 + 0x2c1f) | 1;
  piVar6 = *(int **)(*piVar6 + 0x28d4);
  if (((*DAT_0025f778 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0025f778), iVar3 != 0)) {
    *DAT_0025f77c = DAT_0025f780;
  }
  if ((piVar6 == (int *)0x0) ||
     (iVar3 = (**(code **)(*piVar6 + 8))(piVar6,DAT_0025f77c), iVar3 == 0)) {
    piVar6 = (int *)0x0;
  }
  func_001151EC(piVar6 + 5,(undefined4 *)(param_1 + 0x88));
  piVar6[0x11] = *(int *)(param_1 + 0xb8);
  piVar6[0x12] = *(int *)(param_1 + 0xbc);
  piVar6[0x13] = *(int *)(param_1 + 0xc0);
  piVar6[0x14] = *(int *)(param_1 + 0xc4);
  piVar6[0x15] = *(int *)(param_1 + 200);
  piVar6[0x16] = *(int *)(param_1 + 0xcc);
  piVar6[0x17] = *(int *)(param_1 + 0xd0);
  piVar6[0x18] = *(int *)(param_1 + 0xd4);
  piVar6[0x19] = *(int *)(param_1 + 0xd8);
  piVar6[0xb2] = piVar6[0xb2] & 0xfffffffe;
  *(undefined1 *)(piVar6 + 0x1b) = *(undefined1 *)(param_1 + 0xe0);
  *(undefined1 *)((int)piVar6 + 0x6d) = *(undefined1 *)(param_1 + 0xe1);
  func_00115224(piVar6 + 0x1c,(undefined4 *)(param_1 + 0xe4));
  func_00115224(piVar6 + 0x2c,(undefined4 *)(param_1 + 0x124));
  iVar4 = DAT_0025f788;
  iVar3 = DAT_0025f784;
  *(undefined1 *)(piVar6 + 0x3c) = *(undefined1 *)(param_1 + 0x164);
  piVar6[0x3d] = *(int *)(param_1 + 0x168);
  piVar6[0x3e] = *(int *)(param_1 + 0x16c);
  piVar6[0x3f] = *(int *)(param_1 + 0x170);
  piVar6[0x40] = *(int *)(param_1 + 0x174);
  piVar6[0x41] = *(int *)(param_1 + 0x178);
  piVar6[0x42] = *(int *)(param_1 + 0x17c);
  piVar6[0x43] = *(int *)(param_1 + 0x180);
  piVar6[0x44] = *(int *)(param_1 + 0x184);
  piVar6[0x45] = *(int *)(param_1 + 0x188);
  piVar6[0x46] = *(int *)(param_1 + 0x18c);
  piVar6[0x47] = *(int *)(param_1 + 400);
  piVar6[0xb2] = piVar6[0xb2] & 0xfffffffd;
  piVar2 = DAT_0025f78c;
  piVar6[0x1fe] = iVar3;
  piVar6[0x1ff] = iVar4;
  puVar1 = DAT_0025f790;
  iVar4 = *(int *)(*piVar2 + 0xf3c);
  iVar3 = *piVar2 + 0x284;
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = *(uint *)(iVar4 + 4);
  }
  if (uVar5 < 0x33) {
    iVar3 = iVar3 + uVar5 * 0x38;
  }
  *(undefined4 *)(iVar3 + 8) = *DAT_0025f790;
  *(undefined4 *)(iVar3 + 0xc) = puVar1[1];
  *(undefined4 *)(iVar3 + 0x10) = puVar1[2];
  return;
}

