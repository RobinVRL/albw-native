// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001E48F8(int param_1,int param_2);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_004C2554(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int DAT_004c3630;
extern uint *DAT_004c3634;
extern undefined4 *DAT_004c3638;
extern undefined4 DAT_004c363c;
extern undefined4 DAT_004c3640;
extern undefined4 DAT_004c3644;
extern float DAT_004c3648;
extern undefined4 DAT_004c364c;
extern undefined4 DAT_004c3650;
extern undefined4 DAT_004c3654;
extern undefined4 *DAT_004c3658;
extern undefined4 DAT_004c365c;
extern int *DAT_004c3660;
extern int *DAT_004c3664;
extern undefined4 DAT_004c3668;
extern undefined4 DAT_004c366c;

// USA 004C33C8 <- EU 004C33A0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_004c3630 int
// GLOBAL DAT_004c3634 uint *
// GLOBAL DAT_004c3638 undefined4 *
// GLOBAL DAT_004c363c undefined4
// GLOBAL DAT_004c3640 undefined4
// GLOBAL DAT_004c3644 undefined4
// GLOBAL DAT_004c3648 float
// GLOBAL DAT_004c364c undefined4
// GLOBAL DAT_004c3650 undefined4
// GLOBAL DAT_004c3654 undefined4
// GLOBAL DAT_004c3658 undefined4 *
// GLOBAL DAT_004c365c undefined4
// GLOBAL DAT_004c3660 int *
// GLOBAL DAT_004c3664 int *
// GLOBAL DAT_004c3668 undefined4
// GLOBAL DAT_004c366c undefined4

int func_004C33C8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  piVar1 = (int *)func_001E4B08(param_1,param_2,1);
  iVar3 = DAT_004c3630;
  piVar1[200] = DAT_004c3630 + 0x78;
  *piVar1 = iVar3;
  piVar1[0x13d] = 0;
  *(undefined1 *)(piVar1 + 0x13e) = 0;
  puVar2 = (undefined4 *)func_0054D964((int)piVar1,0);
  if (((*DAT_004c3634 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004c3634), iVar3 != 0)) {
    *DAT_004c3638 = DAT_004c363c;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_004c3638), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  piVar1[0x13f] = (int)puVar2;
  iVar3 = func_004EE484(piVar1 + 0x140);
  iVar7 = iVar3 + -0x500;
  iVar4 = func_0054D89C(iVar7,0);
  *(int *)(iVar3 + 100) = iVar4;
  *(undefined1 *)(iVar3 + 0x68) = 0;
  *(undefined1 *)(iVar3 + 0x69) = 0;
  *(undefined1 *)(iVar3 + 0x6a) = 0;
  *(undefined1 *)(iVar3 + 0x6b) = 0;
  uVar10 = DAT_004c3644;
  uVar5 = DAT_004c3640;
  *(undefined1 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x70) = uVar10;
  *(undefined4 *)(iVar3 + 0x74) = uVar5;
  fVar9 = func_0054DE3C(iVar7,0,1);
  uVar10 = DAT_004c3650;
  uVar5 = DAT_004c364c;
  *(float *)(iVar3 + 0x78) = DAT_004c3648 - fVar9;
  *(undefined4 *)(iVar3 + 0x7c) = uVar5;
  uVar5 = DAT_004c3654;
  *(undefined4 *)(iVar3 + 0x8c) = uVar10;
  *(undefined4 *)(iVar3 + 0x90) = uVar5;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  uVar6 = param_2[5];
  uVar8 = param_2[6];
  *(uint *)(iVar3 + 0x94) = param_2[4];
  *(uint *)(iVar3 + 0x98) = uVar6;
  *(uint *)(iVar3 + 0x9c) = uVar8;
  *(int *)(iVar3 + 0xa0) = iVar7;
  *(int *)(iVar3 + 0xa8) = iVar3 + -0x124;
  *(int *)(iVar3 + 0xa4) = iVar3 + 0x94;
  *(undefined1 *)(iVar3 + 0xac) = 0;
  puVar2 = DAT_004c3658;
  *(undefined1 *)(iVar3 + 0xad) = 1;
  *(undefined1 *)(iVar3 + 0xae) = 0;
  *(undefined1 *)(iVar3 + 0xaf) = 0;
  *(undefined1 *)(iVar3 + 0xb0) = 1;
  uVar5 = puVar2[1];
  *(undefined4 *)(iVar3 + 0xbc) = *puVar2;
  *(undefined4 *)(iVar3 + 0xc0) = uVar5;
  uVar5 = DAT_004c365c;
  *(undefined4 *)(iVar3 + 0xb4) = DAT_004c365c;
  *(int *)(iVar3 + 0xb8) = iVar7;
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  *(int *)(iVar3 + 200) = iVar7;
  *(undefined4 *)(iVar3 + 0xcc) = uVar10;
  *(undefined4 *)(iVar3 + 0xd0) = uVar11;
  *(undefined4 **)(iVar3 + -0x114) = (undefined4 *)(iVar3 + 0xb4);
  *(undefined4 *)(iVar3 + 0xc4) = uVar5;
  uVar5 = func_0014E428(iVar7,0,0,0,1,0,0);
  *(undefined4 *)(iVar3 + -0xc) = uVar5;
  *(undefined4 *)(iVar3 + -0x88) = uVar5;
  iVar4 = func_00588BE4(iVar7);
  if ((iVar4 == *DAT_004c3660) || (iVar4 = func_00588BE4(iVar7), iVar4 == *DAT_004c3664)) {
    func_001E48F8(iVar7,5);
    *(undefined1 *)(iVar3 + 0xaf) = 1;
    *(undefined1 *)(iVar3 + 0x6b) = 1;
  }
  *(undefined4 *)(iVar3 + -0x1c) = 0x13;
  uVar5 = DAT_004c366c;
  *(undefined4 *)(iVar3 + -0x18) = DAT_004c3668;
  *(undefined4 *)(iVar3 + -0x14) = uVar5;
  func_00151148(*(int *)(iVar3 + 100),0);
  func_004C2554(iVar7);
  fVar12 = *(float *)(iVar3 + 0x78);
  fVar9 = *(float *)(iVar3 + -300);
  iVar4 = *(int *)(iVar3 + -4);
  uVar5 = *(undefined4 *)(iVar3 + -0x128);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + -0x130);
  *(float *)(iVar4 + 8) = fVar9 + fVar12;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  func_004356B4(*(int **)(iVar3 + -4));
  return iVar7;
}

