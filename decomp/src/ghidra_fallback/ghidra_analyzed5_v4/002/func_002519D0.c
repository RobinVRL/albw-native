#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002518A8(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00251e48;
extern float *DAT_00251e4c;
extern int *DAT_00251e50;
extern int DAT_00251e54;
extern undefined *DAT_00251e58;
extern int DAT_00251e5c;
extern float DAT_00251e6c;
extern char s_cState_Stop_00251e60[];

// USA 002519D0 <- EU 002519F8 (Ghidra, non-matching)
// GLOBAL DAT_00251e48 int
// GLOBAL DAT_00251e4c float *
// GLOBAL DAT_00251e50 int *
// GLOBAL DAT_00251e54 int
// GLOBAL DAT_00251e58 undefined *
// GLOBAL DAT_00251e5c int
// GLOBAL DAT_00251e6c float
// GLOBAL s_cState_Stop_00251e60 string

/* WARNING: Variable defined which should be unmapped: objStack_4c */

undefined4 * func_002519D0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_4c ((uint *)(albw_frame + 0x4))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(uint * *)(albw_frame + 0x24))
  piVar4 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00251e48;
  *piVar4 = DAT_00251e48;
  piVar4[200] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x104);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar13 = puVar5 + -0x104;
  puVar5[8] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar5[9] = puVar7;
  piVar4 = puVar5 + 9;
  iVar8 = func_0054D964((int)puVar13,0);
  puVar5[10] = iVar8;
  piVar14 = puVar5 + 10;
  objStack_4c[0] = 0;
  objStack_4c[1] = 0;
  uVar9 = func_0014E428((int)puVar13,0,0,0,1,0,0);
  puVar5[-1] = uVar9;
  func_002518A8((int)puVar13);
  local_40 = ALBW_AS_F32(puVar5[-0x10]);
  local_3c = puVar5[-0xf];
  local_38 = puVar5[-0xe];
  func_00115C54(&local_40,&local_40,DAT_00251e4c);
  *(undefined2 *)(*piVar14 + 0x28) = 0xe4;
  iVar8 = *piVar14;
  *(float *)(iVar8 + 4) = local_40;
  *(int *)(iVar8 + 8) = local_3c;
  *(undefined4 *)(iVar8 + 0xc) = local_38;
  func_004356B4((int *)*piVar14);
  *(int *)(*piVar4 + 0x18) = *piVar14;
  func_004ED9C8(*piVar4);
  objStack_4c[0] = puVar5[-0x51];
  func_004EDAD0(*piVar4,objStack_4c);
  *(undefined2 *)(*piVar4 + 0x2c) = *(undefined2 *)(puVar5 + -0xef);
  *(undefined2 *)(*(int *)(*piVar4 + 0x18) + 0x28) = 0xe4;
  func_004A879C(*DAT_00251e50,*piVar4,2);
  *(undefined1 *)((int)puVar5 + 6) = 1;
  puVar5[5] = puVar13;
  iVar10 = func_0010BA78(0x10);
  puVar5[6] = iVar10;
  iVar8 = DAT_00251e54;
  puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 1;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar8 + 0x20);
    iVar11 = iVar11 + -1;
    puVar7[2] = *(undefined4 *)(iVar8 + 0x1c);
    puVar7[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar8 + 0x20);
    puVar7[4] = *(undefined4 *)(iVar8 + 0x1c);
    puVar7[5] = uVar9;
    puVar7 = puVar7 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[8] = puVar7;
  if (uVar15 != 0) {
    puVar6 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x18);
      *puVar7 = *(undefined4 *)(iVar8 + 0x14);
      puVar7[1] = uVar9;
      puVar6 = puVar7;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar9 = *(undefined4 *)(iVar8 + 0x18);
      puVar6[2] = *(undefined4 *)(iVar8 + 0x14);
      puVar6[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar8 + 0x18);
      puVar6[4] = *(undefined4 *)(iVar8 + 0x14);
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 1;
    iVar10 = func_00100118((int)(puVar7 + 2),DAT_00251e58,0x24,1);
  }
  if (iVar10 != 0) {
    puVar5[2] = 1;
    puVar5[3] = iVar10;
  }
  iVar10 = DAT_00251e5c;
  puVar5[-0x2f] = puVar5;
  fVar3 = DAT_00251e6c;
  *(undefined2 *)(iVar10 + (int)puVar13) = 1;
  local_2c = (uint *)s_cState_Stop_00251e60;
  local_30 = fVar3;
  iVar10 = puVar5[3];
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)((int)ALBW_AS_U32(fVar3) + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00251cdc;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00251cdc:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar15) {
    uVar15 = iVar10 - 1;
  }
  (**(code **)((int)ALBW_AS_U32(local_30) + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar9 = *(undefined4 *)(iVar8 + 8);
  uVar17 = *(undefined4 *)(iVar8 + 0xc);
  uVar18 = *(undefined4 *)(iVar8 + 0x10);
  uVar19 = *(undefined4 *)(iVar8 + 0x14);
  uVar20 = *(undefined4 *)(iVar8 + 0x18);
  *puVar7 = *(undefined4 *)(iVar8 + 4);
  puVar7[1] = uVar9;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  iVar8 = (int)*(char *)(puVar5 + 1);
  if (iVar8 != -1) {
    iVar10 = puVar5[8];
    pcVar12 = *(code **)(iVar10 + iVar8 * 8);
    if ((pcVar12 != (code *)0x0) ||
       ((uVar15 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
      uVar15 = *(uint *)(iVar10 + iVar8 * 8 + 4);
      piVar4 = (int *)(puVar5[5] + ((int)uVar15 >> 1));
      if ((uVar15 & 1) != 0) {
        pcVar12 = *(code **)(pcVar12 + *piVar4);
      }
      (*pcVar12)(piVar4,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar5 + 1);
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 5) = uVar2;
  if (puVar5[4] != 0) {
    piVar4 = (int *)puVar5[3];
    (**(code **)(*piVar4 + 8))(piVar4);
    local_3c = piVar4[1];
    local_40 = fVar3;
    func_0010BEB4(puVar5[4],(int *)&local_40);
  }
  iVar8 = (int)*(char *)(puVar5 + 1);
  iVar10 = puVar5[6];
  pcVar12 = *(code **)(iVar10 + iVar8 * 8);
  if ((pcVar12 != (code *)0x0) ||
     ((uVar15 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
    uVar15 = *(uint *)(iVar10 + iVar8 * 8 + 4);
    if ((uVar15 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *(int *)(puVar5[5] + ((int)uVar15 >> 1)));
    }
    (*pcVar12)((int)(puVar5[5]) + ((int)uVar15 >> 1));
  }
  return puVar13;
}

