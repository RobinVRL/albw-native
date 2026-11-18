// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0050bc1c;
extern undefined4 DAT_0050bc20;
extern int *DAT_0050bc24;
extern int DAT_0050bc28;
extern int *DAT_0050bc2c;
extern undefined4 *DAT_0050bc30;
extern undefined *DAT_0050bc34;
extern int DAT_0050bc38;
extern int DAT_0050bc48;
extern char s_cState_Wait_0050bc3c[];

// USA 0050B78C <- EU 0050B764 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050bc1c int
// GLOBAL DAT_0050bc20 undefined4
// GLOBAL DAT_0050bc24 int *
// GLOBAL DAT_0050bc28 int
// GLOBAL DAT_0050bc2c int *
// GLOBAL DAT_0050bc30 undefined4 *
// GLOBAL DAT_0050bc34 undefined *
// GLOBAL DAT_0050bc38 int
// GLOBAL DAT_0050bc48 int
// GLOBAL s_cState_Wait_0050bc3c string

int func_0050B78C(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x50 .. entry_sp + 0x0 */
#define stack0xffffffb8 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 extraout_r1;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define puStack_2c (*(uint * *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  piVar4 = func_00150E40(param_1,param_2);
  iVar6 = DAT_0050bc1c;
  piVar4[200] = DAT_0050bc1c + 0x54;
  *piVar4 = iVar6;
  piVar4[0x103] = 0;
  piVar4[0x104] = 0;
  puVar5 = func_0010A794(piVar4 + 0x105);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar6 = func_0054D964((int)(puVar5 + -0x105),0);
  puVar5[9] = iVar6;
  puVar5 = func_004EDC9C(puVar5 + 10);
  puVar14 = puVar5 + -0x10f;
  uVar7 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[-0xc] = uVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar8 == (undefined4 *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = func_0016A2FC(puVar8,1,DAT_0050bc20,1);
  }
  puVar5[-0xb] = puVar16;
  func_00169608(puVar16,0,DAT_0050bc24,*(int *)(puVar5[-0x5b] + 0x1c8));
  func_0016A02C(puVar5[-0xb],-1,(int *)0xffffffff,0);
  iVar6 = puVar5[-1];
  uVar7 = puVar5[-0x1a];
  uVar13 = puVar5[-0x19];
  *(undefined4 *)(iVar6 + 4) = puVar5[-0x1b];
  *(undefined4 *)(iVar6 + 8) = uVar7;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  func_004356B4((int *)puVar5[-1]);
  *(undefined2 *)(puVar5[-1] + 0x28) = 0xa4;
  puVar5[6] = puVar5[-1];
  uStack_28 = puVar5[-0x5c];
  func_004EDAD0((int)puVar5,&uStack_28);
  *(undefined2 *)(DAT_0050bc28 + (int)puVar14) = *(undefined2 *)(puVar5 + -0xfa);
  func_004A879C(*DAT_0050bc2c,(int)puVar5,2);
  *(undefined1 *)((int)puVar5 + -0x22) = 1;
  puVar5[-5] = puVar14;
  iVar6 = func_0010BA78(0x10);
  puVar5[-4] = iVar6;
  puVar8 = DAT_0050bc30;
  puVar5[-3] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x22) * 8;
  iVar11 = 1;
  puVar9 = (undefined4 *)(iVar6 + -8);
  do {
    uVar7 = puVar8[7];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar8[6];
    puVar9[3] = uVar7;
    uVar7 = puVar8[7];
    puVar9[4] = puVar8[6];
    puVar9[5] = uVar7;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x22);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[-2] = puVar9;
  if (uVar15 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar8[5];
      *puVar9 = puVar8[4];
      puVar9[1] = uVar7;
      puVar10 = puVar9;
    }
    for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar7 = puVar8[5];
      puVar10[2] = puVar8[4];
      puVar10[3] = uVar7;
      uVar7 = puVar8[5];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar7;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  puVar3 = DAT_0050bc34;
  iVar6 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 1;
    *puVar9 = 0x24;
    iVar6 = func_00100118((int)(puVar9 + 2),puVar3,0x24,1);
  }
  if (iVar6 != 0) {
    puVar5[-7] = iVar6;
    puVar5[-8] = 1;
  }
  iVar6 = DAT_0050bc38;
  puVar5[-0x3a] = puVar5 + -10;
  iStack_30 = DAT_0050bc48;
  *(undefined2 *)(iVar6 + (int)puVar14) = 1;
  puStack_2c = (uint *)s_cState_Wait_0050bc3c;
  iVar6 = puVar5[-7];
  puVar16 = *(uint **)(iVar6 + 4);
  (**(code **)(iStack_30 + 8))(&iStack_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)puStack_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0050ba64;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0050ba64:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar15) {
    uVar15 = iVar6 - 1;
  }
  (**(code **)(iStack_30 + 8))(&iStack_30);
  func_0010E3C4(puVar16,puStack_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar9 = (undefined4 *)puVar5[-4];
  uVar7 = puVar8[1];
  uVar13 = puVar8[2];
  uVar17 = puVar8[3];
  uVar18 = puVar8[4];
  uVar19 = puVar8[5];
  *puVar9 = *puVar8;
  puVar9[1] = uVar7;
  puVar8 = (undefined4 *)puVar5[-3];
  *puVar8 = uVar13;
  puVar8[1] = uVar17;
  puVar8 = (undefined4 *)puVar5[-2];
  *puVar8 = uVar18;
  puVar8[1] = uVar19;
  iVar6 = (int)*(char *)(puVar5 + -9);
  if (iVar6 != -1) {
    iVar11 = puVar5[-2];
    pcVar12 = *(code **)(iVar11 + iVar6 * 8);
    if ((pcVar12 != (code *)0x0) ||
       ((uVar15 = *(uint *)(iVar11 + iVar6 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
      uVar15 = *(uint *)(iVar11 + iVar6 * 8 + 4);
      piVar4 = (int *)(puVar5[-5] + ((int)uVar15 >> 1));
      if ((uVar15 & 1) != 0) {
        pcVar12 = *(code **)(pcVar12 + *piVar4);
      }
      (*pcVar12)(piVar4,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar5 + -9);
  *(undefined1 *)(puVar5 + -9) = 0;
  puVar5[-10] = 0;
  *(undefined1 *)((int)puVar5 + -0x23) = uVar2;
  if (puVar5[-6] != 0) {
    (**(code **)(*(int *)puVar5[-7] + 8))((int *)puVar5[-7]);
    func_0010BEB4(puVar5[-6],(int *)&stack0xffffffb8);
  }
  iVar11 = (int)*(char *)(puVar5 + -9);
  iVar6 = puVar5[-4];
  pcVar12 = *(code **)(iVar6 + iVar11 * 8);
  if (pcVar12 == (code *)0x0) {
    piVar4 = *(int **)(iVar6 + iVar11 * 8 + 4);
    uVar7 = 0;
    if ((((uint)piVar4 & 1) == 0) || (piVar4 == (int *)0x0)) goto LAB_0050bbc0;
  }
  iVar11 = iVar11 * 8 + 4;
  piVar4 = (int *)puVar5[-5];
  if ((*(uint *)(iVar6 + iVar11) & 1) != 0) {
    iVar11 = *(int *)((int)piVar4 + ((int)*(uint *)(iVar6 + iVar11) >> 1));
    pcVar12 = *(code **)(pcVar12 + iVar11);
  }
  (*pcVar12)();
  uVar7 = extraout_r1;
LAB_0050bbc0:
  if ((int *)puVar5[-0xb] != (int *)0x0) {
    func_00169A80((int *)puVar5[-0xb],uVar7,iVar11,piVar4);
    func_00168E9C((int *)puVar5[-0xb],puVar5[-0xc],(int *)0x0);
  }
  iVar6 = puVar5[-0xc];
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar6 + 0x80),puVar5[-0x15],(float *)(puVar5 + -0x1b));
  func_004CEAF0(puVar5[-0xc]);
  return (int)puVar14;
}

