#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00197a54;
extern float DAT_00197a58;
extern int *DAT_00197a5c;
extern undefined4 *DAT_00197a60;
extern undefined *DAT_00197a64;
extern int DAT_00197a68;
extern uint DAT_00197a78;
extern int DAT_00197a7c;
extern int DAT_00197a80;
extern float DAT_00197b6c;
extern undefined4 DAT_00197b70;
extern int *DAT_00197b74;
extern char s_cState_Wait_00197a6c[];

// USA 00197614 <- EU 00197614 (Ghidra, non-matching)
// GLOBAL DAT_00197a54 int
// GLOBAL DAT_00197a58 float
// GLOBAL DAT_00197a5c int *
// GLOBAL DAT_00197a60 undefined4 *
// GLOBAL DAT_00197a64 undefined *
// GLOBAL DAT_00197a68 int
// GLOBAL DAT_00197a78 uint
// GLOBAL DAT_00197a7c int
// GLOBAL DAT_00197a80 int
// GLOBAL DAT_00197b6c float
// GLOBAL DAT_00197b70 undefined4
// GLOBAL DAT_00197b74 int *
// GLOBAL s_cState_Wait_00197a6c string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 * func_00197614(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  code *pcVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  piVar5 = (int *)func_00324A30(param_1,param_2);
  iVar7 = DAT_00197a54;
  *piVar5 = DAT_00197a54;
  piVar5[200] = iVar7 + 0x5c;
  puVar6 = func_0010A794(piVar5 + 0x11e);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  iVar7 = func_0054D89C((int)(puVar6 + -0x11e),0);
  puVar6[0xc] = iVar7;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  iVar7 = func_0054D964((int)(puVar6 + -0x11e),1);
  puVar6[0xe] = iVar7;
  puVar8 = func_004EDC9C(puVar6 + 0xf);
  puVar15 = puVar8 + -0x12d;
  puVar8[-0x38] = ALBW_AS_U32(ALBW_AS_F32(puVar8[-0x38]) + DAT_00197a58);
  objStack_48[1] = 0;
  objStack_48[0] = 1;
  objStack_48[2] = 0;
  uVar9 = func_0014E428((int)puVar15,1,0,0,1,0,0);
  puVar8[-6] = uVar9;
  puVar10 = (uint *)func_0014E904((int)puVar15,1,1);
  puVar8[-5] = puVar10;
  func_00169688(puVar10,0,DAT_00197a5c,*(int *)(puVar8[-0x79] + 0x1c8));
  func_0016A02C(puVar8[-5],-1,(int *)0xffffffff,0);
  *(undefined1 *)((int)puVar8 + -0x36) = 1;
  puVar8[-10] = puVar15;
  iVar7 = func_0010BA78(0x10);
  puVar8[-9] = iVar7;
  puVar6 = DAT_00197a60;
  puVar8[-8] = iVar7 + (uint)*(byte *)((int)puVar8 + -0x36) * 8;
  iVar13 = 1;
  puVar11 = (undefined4 *)(iVar7 + -8);
  do {
    uVar9 = puVar6[7];
    iVar13 = iVar13 + -1;
    puVar11[2] = puVar6[6];
    puVar11[3] = uVar9;
    uVar9 = puVar6[7];
    puVar11[4] = puVar6[6];
    puVar11[5] = uVar9;
    puVar11 = puVar11 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar8 + -0x36);
  uVar16 = (uint)bVar1;
  puVar11 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar8[-7] = puVar11;
  if (uVar16 != 0) {
    puVar12 = puVar11 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar6[5];
      *puVar11 = puVar6[4];
      puVar11[1] = uVar9;
      puVar12 = puVar11;
    }
    for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar9 = puVar6[5];
      puVar12[2] = puVar6[4];
      puVar12[3] = uVar9;
      uVar9 = puVar6[5];
      puVar12[4] = puVar6[4];
      puVar12[5] = uVar9;
      puVar12 = puVar12 + 4;
    }
  }
  puVar11 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  puVar3 = DAT_00197a64;
  iVar7 = 0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar11[1] = 1;
    *puVar11 = 0x24;
    iVar7 = func_00100118((int)(puVar11 + 2),puVar3,0x24,1);
  }
  if (iVar7 != 0) {
    puVar8[-0xc] = iVar7;
    puVar8[-0xd] = 1;
  }
  iVar7 = DAT_00197a68;
  puVar8[-0x58] = puVar8 + -0xf;
  uVar16 = DAT_00197a78;
  *(undefined2 *)(iVar7 + (int)puVar15) = 1;
  local_34 = (uint *)s_cState_Wait_00197a6c;
  local_38 = uVar16;
  iVar7 = puVar8[-0xc];
  puVar10 = *(uint **)(iVar7 + 4);
  (**(code **)(uVar16 + 8))(&local_38);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_34 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0019789c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0019789c:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar17) {
    uVar17 = iVar7 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar10,local_34,uVar17);
  *(undefined1 *)((int)puVar10 + uVar17) = 0;
  puVar11 = (undefined4 *)puVar8[-9];
  uVar9 = puVar6[1];
  uVar19 = puVar6[2];
  uVar20 = puVar6[3];
  uVar21 = puVar6[4];
  uVar22 = puVar6[5];
  *puVar11 = *puVar6;
  puVar11[1] = uVar9;
  puVar6 = (undefined4 *)puVar8[-8];
  *puVar6 = uVar19;
  puVar6[1] = uVar20;
  puVar6 = (undefined4 *)puVar8[-7];
  *puVar6 = uVar21;
  puVar6[1] = uVar22;
  iVar7 = (int)*(char *)(puVar8 + -0xe);
  if (iVar7 != -1) {
    iVar13 = puVar8[-7];
    pcVar14 = *(code **)(iVar13 + iVar7 * 8);
    if ((pcVar14 != (code *)0x0) ||
       ((uVar17 = *(uint *)(iVar13 + iVar7 * 8 + 4), (uVar17 & 1) != 0 && (uVar17 != 0)))) {
      uVar17 = *(uint *)(iVar13 + iVar7 * 8 + 4);
      piVar5 = (int *)(puVar8[-10] + ((int)uVar17 >> 1));
      if ((uVar17 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *piVar5);
      }
      (*pcVar14)(piVar5,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar8 + -0xe);
  *(undefined1 *)(puVar8 + -0xe) = 0;
  puVar8[-0xf] = 0;
  *(undefined1 *)((int)puVar8 + -0x37) = uVar2;
  if (puVar8[-0xb] != 0) {
    piVar5 = (int *)puVar8[-0xc];
    (**(code **)(*piVar5 + 8))(piVar5);
    objStack_48[1] = piVar5[1];
    objStack_48[0] = uVar16;
    func_0010BEB4(puVar8[-0xb],(int *)objStack_48);
  }
  iVar13 = (int)*(char *)(puVar8 + -0xe);
  iVar7 = puVar8[-9];
  pcVar14 = *(code **)(iVar7 + iVar13 * 8);
  if ((pcVar14 != (code *)0x0) ||
     ((uVar16 = *(uint *)(iVar7 + iVar13 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
    uVar16 = *(uint *)(iVar7 + iVar13 * 8 + 4);
    if ((uVar16 & 1) != 0) {
      pcVar14 = *(code **)(pcVar14 + *(int *)(puVar8[-10] + ((int)uVar16 >> 1)));
    }
    (*pcVar14)((int)(puVar8[-10]) + ((int)uVar16 >> 1));
  }
  iVar7 = puVar8[-6];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar7 + 0x80),puVar8[-0x33],(float *)(puVar8 + -0x39));
  func_004CEAF0(puVar8[-6]);
  func_001512B4(puVar8[-3],(float *)(puVar8 + -0x39));
  func_003249E0((int)puVar15,0);
  func_00324964((int)puVar15);
  fVar4 = DAT_00197b6c;
  iVar7 = DAT_00197a7c;
  piVar5 = (int *)puVar8[-0x2a];
  piVar5[0x16] = DAT_00197a80;
  piVar5[0x17] = iVar7;
  piVar5[0x18] = iVar7;
  fVar18 = ALBW_AS_F32(puVar8[-0x37]);
  iVar13 = puVar8[-0x2a];
  uVar9 = puVar8[-0x38];
  *(undefined4 *)(iVar13 + 4) = puVar8[-0x39];
  *(undefined4 *)(iVar13 + 8) = uVar9;
  *(float *)(iVar13 + 0xc) = fVar18 + fVar4;
  func_004356B4(piVar5);
  uVar9 = DAT_00197b70;
  iVar13 = puVar8[-1];
  *(int *)(iVar13 + 0x58) = iVar7;
  *(int *)(iVar13 + 0x5c) = iVar7;
  *(undefined4 *)(iVar13 + 0x60) = uVar9;
  iVar7 = puVar8[-1];
  uVar9 = puVar8[-0x39];
  uVar19 = puVar8[-0x38];
  *(undefined4 *)(iVar7 + 0xc) = puVar8[-0x37];
  *(undefined4 *)(iVar7 + 4) = uVar9;
  *(undefined4 *)(iVar7 + 8) = uVar19;
  func_004356B4((int *)puVar8[-1]);
  objStack_48[0] = CONCAT22((*(undefined2 *)((char *)&objStack_48[0] + 2)),0xa4);
  *(undefined2 *)(puVar8[-1] + 0x28) = 0xa4;
  puVar8[6] = puVar8[-1];
  local_3c = puVar8[-0x7a];
  func_004EDAD0((int)puVar8,&local_3c);
  *(undefined2 *)(puVar8 + 0xb) = *(undefined2 *)(puVar8 + -0x118);
  func_004A879C(*DAT_00197b74,(int)puVar8,2);
  func_004ECF6C((int)puVar15);
  return puVar15;
}

