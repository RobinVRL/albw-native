#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C40E4(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_00547B48(int param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0065A0A8(undefined4 *param_1,undefined1 param_2);
extern int DAT_0019cad8;
extern undefined4 DAT_0019cadc;
extern undefined4 *DAT_0019cae0;
extern undefined4 DAT_0019cae4;
extern undefined4 DAT_0019cae8;
extern undefined *DAT_0019caec;
extern int DAT_0019caf0;
extern uint DAT_0019cb08;
extern undefined4 *DAT_0019cd90;
extern int *DAT_0019cdac;
extern undefined DAT_0019cdb0;
extern char s_animator_0019cda0[];
extern char s_cState_Entrance_0019cb0c[];
extern char s_cState_Exit_0019cd94[];
extern char s_cState_WaitEntrance_0019caf4[];

// USA 0019C724 <- EU 0019C724 (Ghidra, non-matching)
// GLOBAL DAT_0019cad8 int
// GLOBAL DAT_0019cadc undefined4
// GLOBAL DAT_0019cae0 undefined4 *
// GLOBAL DAT_0019cae4 undefined4
// GLOBAL DAT_0019cae8 undefined4
// GLOBAL DAT_0019caec undefined *
// GLOBAL DAT_0019caf0 int
// GLOBAL DAT_0019cb08 uint
// GLOBAL DAT_0019cd90 undefined4 *
// GLOBAL DAT_0019cdac int *
// GLOBAL DAT_0019cdb0 undefined
// GLOBAL s_animator_0019cda0 string
// GLOBAL s_cState_Entrance_0019cb0c string
// GLOBAL s_cState_Exit_0019cd94 string
// GLOBAL s_cState_WaitEntrance_0019caf4 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined4 * func_0019C724(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0019cad8;
  piVar3[200] = DAT_0019cad8 + 0x54;
  *piVar3 = iVar4;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x106] = iVar4;
  fVar22 = func_0054DE3C(piVar3,0,1);
  piVar3[0x107] = (int)ALBW_AS_U32(fVar22);
  puVar5 = func_0010A794(piVar3 + 0x108);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar20 = DAT_0019cadc;
  puVar5[10] = 0;
  puVar5[0xb] = uVar20;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)((int)puVar5 + 0x31) = 0;
  *(undefined1 *)((int)puVar5 + 0x32) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar8 = DAT_0019cae0;
  puVar5[0xe] = 0;
  uVar10 = DAT_0019cae4;
  puVar13 = puVar5 + -0x108;
  *(undefined2 *)(puVar5 + 0xf) = 0;
  *(undefined1 *)((int)puVar5 + 0x3e) = 0;
  puVar5[0x10] = uVar10;
  uVar10 = *puVar8;
  uVar12 = puVar8[1];
  puVar5[0x11] = puVar13;
  puVar5[0x12] = uVar10;
  puVar5[0x13] = uVar12;
  iVar19 = puVar5[-0x54];
  objStack_48[0] = 1;
  objStack_48[1] = 0;
  objStack_48[2] = 0;
  iVar4 = func_0014E428((int)puVar13,1,0,0,1,0,0);
  puVar5[-4] = iVar4;
  uVar10 = DAT_0019cae8;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar4 + 0x80) = uVar20;
  *(undefined4 *)(iVar4 + 0x84) = uVar10;
  *(undefined4 *)(iVar4 + 0x88) = uVar10;
  *(undefined4 *)(iVar4 + 0x90) = uVar10;
  *(undefined4 *)(iVar4 + 0x94) = uVar20;
  *(undefined4 *)(iVar4 + 0x98) = uVar10;
  *(undefined4 *)(iVar4 + 0xa0) = uVar10;
  *(undefined4 *)(iVar4 + 0xa4) = uVar10;
  *(undefined4 *)(iVar4 + 0xa8) = uVar20;
  *(uint *)(iVar4 + 0x8c) = param_2[1];
  *(uint *)(iVar4 + 0x9c) = param_2[2];
  *(uint *)(iVar4 + 0xac) = param_2[3];
  (**(code **)(*(int *)puVar5[-4] + 0x10))((int *)puVar5[-4],0x24);
  func_004CEAF0(puVar5[-4]);
  *(undefined1 *)((int)puVar5 + 6) = 3;
  puVar5[5] = puVar13;
  iVar4 = func_0010BA78(0x30);
  puVar5[6] = iVar4;
  puVar5[7] = iVar4 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 3;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar20 = puVar8[0x11];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar8[0x10];
    puVar6[3] = uVar20;
    uVar20 = puVar8[0x11];
    puVar6[4] = puVar8[0x10];
    puVar6[5] = uVar20;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar16 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar5[8] = puVar6;
  if (uVar16 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar20 = puVar8[7];
      *puVar6 = puVar8[6];
      puVar6[1] = uVar20;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar16 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar20 = puVar8[7];
      puVar7[2] = puVar8[6];
      puVar7[3] = uVar20;
      uVar20 = puVar8[7];
      puVar7[4] = puVar8[6];
      puVar7[5] = uVar20;
      puVar7 = puVar7 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar4 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 3;
    iVar4 = func_00100118((int)(puVar8 + 2),DAT_0019caec,0x24,3);
  }
  if (iVar4 != 0) {
    puVar5[2] = 3;
    puVar5[3] = iVar4;
  }
  iVar4 = DAT_0019caf0;
  puVar5[-0x33] = puVar5;
  uVar16 = DAT_0019cb08;
  *(undefined2 *)(iVar4 + (int)puVar13) = 3;
  local_34 = (uint *)s_cState_WaitEntrance_0019caf4;
  local_38 = uVar16;
  iVar4 = puVar5[3];
  objStack_48[0] = *(uint *)(iVar4 + 4);
  (**(code **)(uVar16 + 8))(&local_38);
  uVar15 = objStack_48[0];
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0019ca0c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0019ca0c:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar14) {
    uVar14 = iVar4 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4((uint *)uVar15,local_34,uVar14);
  *(undefined1 *)(objStack_48[0] + uVar14) = 0;
  puVar8 = (undefined4 *)puVar5[6];
  uVar10 = DAT_0019cae0[6];
  uVar17 = DAT_0019cae0[3];
  uVar21 = DAT_0019cae0[4];
  uVar12 = DAT_0019cae0[5];
  uVar20 = DAT_0019cae0[7];
  *puVar8 = DAT_0019cae0[2];
  puVar8[1] = uVar17;
  puVar8 = (undefined4 *)puVar5[7];
  puVar8[1] = uVar12;
  *puVar8 = uVar21;
  puVar8 = (undefined4 *)puVar5[8];
  puVar8[1] = uVar20;
  *puVar8 = uVar10;
  local_34 = (uint *)s_cState_Entrance_0019cb0c;
  local_38 = uVar16;
  if ((uint)puVar5[2] < 2) {
    iVar4 = puVar5[3];
  }
  else {
    iVar4 = puVar5[3] + 0x24;
  }
  puVar18 = *(uint **)(iVar4 + 4);
  (**(code **)(uVar16 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0019cb28;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0019cb28:
  if (*(int *)(iVar4 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar4 = puVar5[6];
  uVar20 = *DAT_0019cd90;
  uVar10 = DAT_0019cd90[1];
  uVar12 = DAT_0019cd90[3];
  uVar17 = DAT_0019cd90[4];
  uVar21 = DAT_0019cd90[5];
  *(undefined4 *)(iVar4 + 8) = DAT_0019cd90[2];
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 8) = uVar17;
  *(undefined4 *)(iVar4 + 0xc) = uVar21;
  iVar4 = puVar5[8];
  *(undefined4 *)(iVar4 + 8) = uVar20;
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  local_34 = (uint *)s_cState_Exit_0019cd94;
  local_38 = uVar16;
  if ((uint)puVar5[2] < 3) {
    iVar4 = puVar5[3];
  }
  else {
    iVar4 = puVar5[3] + 0x48;
  }
  puVar18 = *(uint **)(iVar4 + 4);
  (**(code **)(uVar16 + 8))(&local_38);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_34 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0019cbec;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0019cbec:
  if (*(int *)(iVar4 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar4 = puVar5[6];
  uVar12 = DAT_0019cae0[0xe];
  uVar17 = DAT_0019cae0[6];
  uVar21 = DAT_0019cae0[0xd];
  uVar20 = DAT_0019cae0[0xf];
  uVar10 = DAT_0019cae0[7];
  *(undefined4 *)(iVar4 + 0x10) = DAT_0019cae0[0xc];
  *(undefined4 *)(iVar4 + 0x14) = uVar21;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar12;
  *(undefined4 *)(iVar4 + 0x14) = uVar20;
  iVar4 = puVar5[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar17;
  *(undefined4 *)(iVar4 + 0x14) = uVar10;
  func_004356B4((int *)puVar5[-2]);
  if (*(short *)((int)puVar5 + -0x3f2) == 1) {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    piVar3 = DAT_0019cdac;
    if (puVar8 == (undefined4 *)0x0) {
      puVar5[-3] = 0;
    }
    else {
      if (iVar19 == 0) {
        pcVar9 = s_animator_0019cda0;
      }
      else {
        (**(code **)(*DAT_0019cdac + 8))(DAT_0019cdac);
        pcVar9 = (char *)piVar3[1];
      }
      objStack_48[0] = uVar16;
      objStack_48[1] = (uint)pcVar9;
      puVar8 = func_0016A2FC(puVar8,1,objStack_48,1);
      puVar5[-3] = puVar8;
    }
    objStack_48[1] = (uint)&DAT_0019cdb0;
    objStack_48[0] = uVar16;
    func_00169608((uint *)puVar5[-3],0,(int *)objStack_48,*(int *)(iVar19 + 0x1c8));
    func_0016A02C(puVar5[-3],-1,(int *)0xffffffff,0);
    if ((*(short *)((int)param_2 + 0x32) != 0) && (bVar2 = func_00547B48((int)param_2,0), !bVar2)) {
      func_0065A0A8(puVar5,0);
      return puVar13;
    }
    func_0065A0A8(puVar5,1);
  }
  else {
    func_002C40E4(puVar5 + -0x40,(int)puVar13);
    func_0065A0A8(puVar5,2);
  }
  puVar5[-0x50] = puVar5[-0x50] | 4;
  return puVar13;
}

