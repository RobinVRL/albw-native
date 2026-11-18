#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001CDF44(int param_1);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_001cee64;
extern uint *DAT_001cee68;
extern undefined4 *DAT_001cee6c;
extern undefined4 DAT_001cee70;
extern undefined4 DAT_001cee74;
extern undefined4 DAT_001cee78;
extern float DAT_001cee7c;
extern undefined4 DAT_001cee80;
extern undefined4 DAT_001cee84;
extern undefined4 DAT_001cee88;
extern undefined4 *DAT_001cee8c;
extern undefined4 DAT_001cee90;
extern undefined4 DAT_001cee94;
extern undefined4 DAT_001cee98;
extern undefined4 DAT_001cee9c;
extern undefined4 DAT_001ceea0;
extern undefined4 DAT_001ceea4;

// USA 001CEA44 <- EU 001CEA44 (Ghidra, non-matching)
// GLOBAL DAT_001cee64 int
// GLOBAL DAT_001cee68 uint *
// GLOBAL DAT_001cee6c undefined4 *
// GLOBAL DAT_001cee70 undefined4
// GLOBAL DAT_001cee74 undefined4
// GLOBAL DAT_001cee78 undefined4
// GLOBAL DAT_001cee7c float
// GLOBAL DAT_001cee80 undefined4
// GLOBAL DAT_001cee84 undefined4
// GLOBAL DAT_001cee88 undefined4
// GLOBAL DAT_001cee8c undefined4 *
// GLOBAL DAT_001cee90 undefined4
// GLOBAL DAT_001cee94 undefined4
// GLOBAL DAT_001cee98 undefined4
// GLOBAL DAT_001cee9c undefined4
// GLOBAL DAT_001ceea0 undefined4
// GLOBAL DAT_001ceea4 undefined4

int func_001CEA44(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define auStack_4c ((undefined4 *)(albw_frame + 0x4))
  #define local_34 (*(uint *)(albw_frame + 0x1c))
  piVar2 = (int *)func_001E4B08(param_1,param_2,1);
  iVar4 = DAT_001cee64;
  piVar2[200] = DAT_001cee64 + 0x78;
  *piVar2 = iVar4;
  piVar2[0x13d] = 0;
  piVar2[0x13e] = 0;
  piVar2[0x13f] = 0;
  *(undefined1 *)(piVar2 + 0x140) = 0;
  puVar3 = (undefined4 *)func_0054D964((int)piVar2,0);
  if (((*DAT_001cee68 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001cee68), iVar4 != 0)) {
    *DAT_001cee6c = DAT_001cee70;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar3)(puVar3,DAT_001cee6c), iVar4 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  piVar2[0x141] = (int)puVar3;
  iVar4 = func_004EE484(piVar2 + 0x142);
  iVar13 = iVar4 + -0x508;
  iVar5 = func_0054D89C(iVar13,0);
  *(int *)(iVar4 + 100) = iVar5;
  *(undefined1 *)(iVar4 + 0x68) = 0;
  *(undefined1 *)(iVar4 + 0x69) = 0;
  uVar15 = DAT_001cee78;
  uVar11 = DAT_001cee74;
  *(undefined1 *)(iVar4 + 0x6a) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = uVar15;
  *(undefined4 *)(iVar4 + 0x70) = uVar11;
  fVar17 = func_0054DE3C(iVar13,0,1);
  uVar15 = DAT_001cee84;
  uVar11 = DAT_001cee80;
  *(float *)(iVar4 + 0x74) = DAT_001cee7c - fVar17;
  *(undefined4 *)(iVar4 + 0x78) = uVar11;
  uVar11 = DAT_001cee88;
  *(undefined4 *)(iVar4 + 0x88) = uVar15;
  *(undefined4 *)(iVar4 + 0x8c) = uVar11;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  uVar10 = param_2[5];
  uVar14 = param_2[6];
  *(uint *)(iVar4 + 0x90) = param_2[4];
  *(uint *)(iVar4 + 0x94) = uVar10;
  *(uint *)(iVar4 + 0x98) = uVar14;
  *(int *)(iVar4 + 0x9c) = iVar13;
  *(int *)(iVar4 + 0xa4) = iVar4 + -300;
  *(int *)(iVar4 + 0xa0) = iVar4 + 0x90;
  *(undefined1 *)(iVar4 + 0xa8) = 0;
  puVar3 = DAT_001cee8c;
  *(undefined1 *)(iVar4 + 0xa9) = 1;
  *(undefined1 *)(iVar4 + 0xaa) = 0;
  *(undefined1 *)(iVar4 + 0xab) = 0;
  *(undefined1 *)(iVar4 + 0xac) = 1;
  uVar11 = puVar3[3];
  *(undefined4 *)(iVar4 + 0xb8) = puVar3[2];
  *(undefined4 *)(iVar4 + 0xbc) = uVar11;
  uVar11 = DAT_001cee90;
  *(undefined4 *)(iVar4 + 0xb0) = DAT_001cee90;
  *(int *)(iVar4 + 0xb4) = iVar13;
  uVar15 = puVar3[4];
  *(undefined4 *)(iVar4 + 0xcc) = puVar3[5];
  *(undefined4 *)(iVar4 + 0xc0) = uVar11;
  *(int *)(iVar4 + 0xc4) = iVar13;
  *(undefined4 *)(iVar4 + 200) = uVar15;
  *(undefined4 **)(iVar4 + -0x11c) = (undefined4 *)(iVar4 + 0xb0);
  uVar11 = func_0014E428(iVar13,1,0,0,1,0,0);
  *(undefined4 *)(iVar4 + -0x14) = uVar11;
  *(undefined4 *)(iVar4 + -0x90) = uVar11;
  piVar2 = (int *)func_00521028(iVar13);
  (**(code **)(*piVar2 + 8))(piVar2);
  func_003529A0(auStack_4c,piVar2[1],iVar4 + -0x1e8);
  local_34 = (uint)(*(short *)(iVar4 + -0x4da) != 0);
  func_002C41BC((int *)(iVar4 + -0x1e8),auStack_4c,0);
  iVar5 = (int)*(short *)(iVar4 + -0x4da);
  puVar6 = (undefined4 *)func_0010BAB4(0x44);
  uVar1 = DAT_001cee9c;
  uVar15 = DAT_001cee98;
  uVar11 = DAT_001cee94;
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = func_0010CE7C(puVar6);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = puVar3;
    puVar3[7] = 0;
    puVar6 = DAT_001cee8c;
    puVar12 = puVar3 + 9;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *puVar3 = uVar11;
    uVar8 = *puVar6;
    uVar16 = puVar6[1];
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = uVar15;
      puVar3[10] = puVar3;
      puVar3[0xb] = uVar8;
      puVar3[0xc] = uVar16;
    }
    puVar3[8] = puVar12;
    *puVar3 = uVar1;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
  }
  *(undefined4 **)(iVar4 + -0x10) = puVar3;
  puVar6 = (undefined4 *)func_0010BAB4(0x44);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = func_0010CE7C(puVar6);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = puVar3;
    puVar3[7] = 0;
    puVar6 = DAT_001cee8c;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *puVar3 = uVar11;
    uVar11 = *puVar6;
    uVar8 = puVar6[1];
    puVar6 = puVar3 + 9;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar15;
      puVar3[10] = puVar3;
      puVar3[0xb] = uVar11;
      puVar3[0xc] = uVar8;
    }
    puVar3[8] = puVar6;
    *puVar3 = uVar1;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
  }
  *(undefined4 **)(iVar4 + -0xc) = puVar3;
  piVar2 = *(int **)(iVar4 + -0x14);
  iVar7 = *(int *)(iVar4 + -0x10);
  iVar9 = *(int *)(piVar2[0x14] + 4);
  *(undefined4 *)(iVar7 + 0x3c) =
       *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x30) + 0x24) + iVar5 * 4);
  *(undefined4 *)(iVar7 + 0x40) = 0;
  iVar7 = *(int *)(iVar4 + -0xc);
  *(undefined4 *)(iVar7 + 0x3c) =
       *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x30) + 0x24) + iVar5 * 4);
  *(undefined4 *)(iVar7 + 0x40) = 0;
  func_004CE68C((int)piVar2,0,*(int *)(iVar4 + -0x10));
  func_004CE68C((int)piVar2,1,*(int *)(iVar4 + -0xc));
  (**(code **)(*piVar2 + 0x10))(piVar2,iVar5 + 0xc4U & 0xff);
  uVar15 = DAT_001ceea4;
  uVar11 = DAT_001ceea0;
  *(undefined4 *)(iVar4 + -0x24) = 0x13;
  *(undefined4 *)(iVar4 + -0x20) = uVar11;
  *(undefined4 *)(iVar4 + -0x1c) = uVar15;
  func_004CEA18(*(int *)(iVar4 + -0x14),0,0);
  func_004CEA18(*(int *)(iVar4 + -0x14),1,1);
  func_00151148(*(int *)(iVar4 + 100),0);
  func_001CDF44(iVar13);
  fVar18 = *(float *)(iVar4 + 0x74);
  fVar17 = *(float *)(iVar4 + -0x134);
  iVar5 = *(int *)(iVar4 + -4);
  uVar11 = *(undefined4 *)(iVar4 + -0x130);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + -0x138);
  *(float *)(iVar5 + 8) = fVar17 + fVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  func_004356B4(*(int **)(iVar4 + -4));
  return iVar13;
}

