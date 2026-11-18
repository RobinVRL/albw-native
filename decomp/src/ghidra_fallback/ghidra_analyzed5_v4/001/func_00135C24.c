#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013550C(int param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00656DE8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00136040;
extern undefined4 *DAT_00136044;
extern undefined4 DAT_00136048;
extern uint DAT_0013604c;
extern undefined4 DAT_00136050;
extern undefined4 DAT_00136054;
extern undefined DAT_00136058;
extern int DAT_0013606c;
extern float DAT_00136070;
extern int *DAT_00136074;
extern undefined *DAT_00136078;
extern int DAT_0013607c;
extern float *DAT_00136368;
extern char s_cState_OnBreak_00136358[];
extern char s_cState_OnHit_00136348[];
extern char s_cState_Wait_00136080[];

// USA 00135C24 <- EU 00135C24 (Ghidra, non-matching)
// GLOBAL DAT_00136040 int
// GLOBAL DAT_00136044 undefined4 *
// GLOBAL DAT_00136048 undefined4
// GLOBAL DAT_0013604c uint
// GLOBAL DAT_00136050 undefined4
// GLOBAL DAT_00136054 undefined4
// GLOBAL DAT_00136058 undefined
// GLOBAL DAT_0013606c int
// GLOBAL DAT_00136070 float
// GLOBAL DAT_00136074 int *
// GLOBAL DAT_00136078 undefined *
// GLOBAL DAT_0013607c int
// GLOBAL DAT_00136368 float *
// GLOBAL s_cState_OnBreak_00136358 string
// GLOBAL s_cState_OnHit_00136348 string
// GLOBAL s_cState_Wait_00136080 string

/* WARNING: Variable defined which should be unmapped: objStack_48 */

int func_00135C24(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(uint *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_00136040;
  *piVar5 = DAT_00136040;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0034CAA0(piVar5 + 0x103);
  puVar8 = puVar6 + -0x103;
  uVar15 = *DAT_00136044;
  puVar6[0x15] = DAT_00136044[1];
  uVar9 = DAT_00136048;
  puVar6[0x14] = uVar15;
  puVar6[0x12] = uVar9;
  puVar6[0x13] = puVar8;
  iVar7 = func_0054D964((int)puVar8,0);
  puVar6[0x16] = iVar7;
  iVar7 = func_0054D964((int)puVar8,0);
  puVar6[0x17] = iVar7;
  puVar8 = (undefined4 *)func_0010BAB4(100);
  uVar9 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    uVar9 = func_004EE484(puVar8);
  }
  puVar6[0x18] = uVar9;
  puVar6 = func_004EDC9C(puVar6 + 0x19);
  puVar6 = func_0010A794(puVar6 + 0x12);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar18 = DAT_0013604c;
  *(bool *)((int)puVar6 + 0x25) = *(short *)((int)param_2 + 0x32) != 0;
  uVar9 = DAT_00136050;
  *(bool *)((int)puVar6 + 0x26) = (short)param_2[0xd] != 0;
  puVar6[0xb] = uVar18;
  puVar6[0xc] = uVar9;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  uVar9 = DAT_00136054;
  puVar6[0xe] = 0;
  iVar7 = DAT_0013606c;
  puVar6[0xf] = 0;
  puVar6[0x10] = uVar9;
  local_34 = (uint *)&DAT_00136058;
  local_38 = iVar7;
  local_3c = puVar6[-0x7b];
  objStack_48[0] = 1;
  iVar10 = func_001663BC(puVar6 + 0x11,&local_38,local_3c,0,1);
  *(undefined1 *)(iVar10 + 0x108) = 0;
  *(undefined4 *)(iVar10 + 0x10c) = 0;
  iVar17 = iVar10 + -0x4fc;
  if (((*(char *)(iVar10 + -0x1f) != '\0') && (bVar4 = func_00588BF0(iVar17,0), !bVar4)) ||
     ((*(char *)(iVar10 + -0x1e) != '\0' && (bVar4 = func_00588BF0(iVar17,1), bVar4)))) {
    *(undefined1 *)(iVar10 + -0x225) = 1;
  }
  else {
    iVar11 = *(int *)(iVar10 + -0x98);
    uVar9 = *(undefined4 *)(iVar10 + -0x128);
    uVar15 = *(undefined4 *)(iVar10 + -0x124);
    *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar10 + -300);
    *(undefined4 *)(iVar11 + 8) = uVar9;
    *(undefined4 *)(iVar11 + 0xc) = uVar15;
    func_004356B4(*(int **)(iVar10 + -0x98));
    iVar11 = *(int *)(iVar10 + -0x94);
    uVar9 = *(undefined4 *)(iVar10 + -0x128);
    uVar15 = *(undefined4 *)(iVar10 + -0x124);
    piVar5 = (int *)(iVar10 + -0x94);
    *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar10 + -300);
    *(undefined4 *)(iVar11 + 8) = uVar9;
    *(undefined4 *)(iVar11 + 0xc) = uVar15;
    iVar11 = *(int *)(iVar10 + -0x94);
    func_00115D70((float *)objStack_48,(float *)(*(int *)(iVar10 + -0x98) + 0x58),DAT_00136070);
    *(uint *)(iVar11 + 0x58) = objStack_48[0];
    *(uint *)(iVar11 + 0x5c) = objStack_48[1];
    *(uint *)(iVar11 + 0x60) = objStack_48[2];
    func_004356B4((int *)*piVar5);
    *(undefined2 *)(*piVar5 + 0x28) = 0xa4;
    local_3c = *(uint *)(iVar10 + -0x230);
    objStack_48[0] = (uint)*(short *)(iVar10 + -0x4a8);
    objStack_48[1] = 0;
    objStack_48[2] = uVar18;
    (*(undefined2 *)((char *)&objStack_48[2] + 0)) = (undefined2)uVar18;
    uVar3 = (undefined2)objStack_48[2];
    objStack_48[2] = uVar18;
    func_0014EB8C(*(int *)(iVar10 + -0x90),*(int *)(iVar10 + -0x98),
                  *(undefined2 **)(iVar10 + -0x15c),&local_3c,*(short *)(iVar10 + -0x4a8),0,uVar3);
    local_3c = *(uint *)(iVar10 + -0x230);
    objStack_48[0] = (uint)*(short *)(iVar10 + -0x4a8);
    objStack_48[1] = 0;
    objStack_48[2] = uVar18;
    func_0014EB8C(*(int *)(iVar10 + -0x90),*piVar5,*(undefined2 **)(iVar10 + -0x15c),&local_3c,
                  *(short *)(iVar10 + -0x4a8),0,uVar3);
    *(int *)(iVar10 + -0x74) = *piVar5;
    local_3c = *(uint *)(iVar10 + -0x230);
    func_004EDAD0(iVar10 + -0x8c,&local_3c);
    *(undefined2 *)(iVar10 + -0x60) = *(undefined2 *)(iVar10 + -0x4a8);
    func_004A879C(*DAT_00136074,iVar10 + -0x8c,2);
    *(undefined1 *)(iVar10 + -0x3e) = 3;
    *(int *)(iVar10 + -0x30) = iVar17;
    iVar11 = func_0010BA78(0x30);
    *(int *)(iVar10 + -0x2c) = iVar11;
    puVar6 = DAT_00136044;
    *(uint *)(iVar10 + -0x28) = iVar11 + (uint)*(byte *)(iVar10 + -0x3e) * 8;
    iVar13 = 3;
    puVar8 = (undefined4 *)(iVar11 + -8);
    do {
      uVar9 = puVar6[0x11];
      iVar13 = iVar13 + -1;
      puVar8[2] = puVar6[0x10];
      puVar8[3] = uVar9;
      uVar9 = puVar6[0x11];
      puVar8[4] = puVar6[0x10];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    } while (iVar13 != 0);
    bVar1 = *(byte *)(iVar10 + -0x3e);
    uVar18 = (uint)bVar1;
    puVar8 = (undefined4 *)func_0010BA78(uVar18 << 3);
    *(undefined4 **)(iVar10 + -0x24) = puVar8;
    if (uVar18 != 0) {
      puVar12 = puVar8 + -2;
      if ((bVar1 & 1) != 0) {
        uVar9 = puVar6[7];
        *puVar8 = puVar6[6];
        puVar8[1] = uVar9;
        puVar12 = puVar8;
      }
      for (iVar11 = (int)uVar18 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar9 = puVar6[7];
        puVar12[2] = puVar6[6];
        puVar12[3] = uVar9;
        uVar9 = puVar6[7];
        puVar12[4] = puVar6[6];
        puVar12[5] = uVar9;
        puVar12 = puVar12 + 4;
      }
    }
    puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
    iVar11 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x24;
      puVar6[1] = 3;
      iVar11 = func_00100118((int)(puVar6 + 2),DAT_00136078,0x24,3);
    }
    if (iVar11 != 0) {
      *(int *)(iVar10 + -0x38) = iVar11;
      *(undefined4 *)(iVar10 + -0x3c) = 3;
    }
    iVar11 = DAT_0013607c;
    *(undefined4 **)(iVar10 + -0x1a8) = (undefined4 *)(iVar10 + -0x44);
    *(undefined2 *)(iVar11 + iVar17) = 3;
    local_34 = (uint *)s_cState_Wait_00136080;
    local_38 = iVar7;
    iVar11 = *(int *)(iVar10 + -0x38);
    puVar19 = *(uint **)(iVar11 + 4);
    (**(code **)(iVar7 + 8))(&local_38);
    uVar18 = 0;
    do {
      if (*(char *)((int)local_34 + uVar18) == '\0') {
        if ((int)uVar18 < 0x40001) goto LAB_00136098;
        break;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 0x40001);
    uVar18 = 0;
LAB_00136098:
    iVar11 = *(int *)(iVar11 + 8);
    if (iVar11 <= (int)uVar18) {
      uVar18 = iVar11 - 1;
    }
    (**(code **)(local_38 + 8))(&local_38);
    func_0010E3C4(puVar19,local_34,uVar18);
    *(undefined1 *)((int)puVar19 + uVar18) = 0;
    puVar6 = *(undefined4 **)(iVar10 + -0x2c);
    uVar20 = DAT_00136044[3];
    uVar16 = DAT_00136044[4];
    uVar15 = DAT_00136044[5];
    uVar14 = DAT_00136044[6];
    uVar9 = DAT_00136044[7];
    *puVar6 = DAT_00136044[2];
    puVar6[1] = uVar20;
    puVar6 = *(undefined4 **)(iVar10 + -0x28);
    puVar6[1] = uVar15;
    *puVar6 = uVar16;
    puVar6 = *(undefined4 **)(iVar10 + -0x24);
    puVar6[1] = uVar9;
    *puVar6 = uVar14;
    local_34 = (uint *)s_cState_OnHit_00136348;
    local_38 = iVar7;
    if (*(uint *)(iVar10 + -0x3c) < 2) {
      iVar11 = *(int *)(iVar10 + -0x38);
    }
    else {
      iVar11 = *(int *)(iVar10 + -0x38) + 0x24;
    }
    puVar19 = *(uint **)(iVar11 + 4);
    (**(code **)(iVar7 + 8))(&local_38);
    uVar18 = 0;
    do {
      if (*(char *)((int)local_34 + uVar18) == '\0') {
        if ((int)uVar18 < 0x40001) goto LAB_0013616c;
        break;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 0x40001);
    uVar18 = 0;
LAB_0013616c:
    if (*(int *)(iVar11 + 8) <= (int)uVar18) {
      uVar18 = *(int *)(iVar11 + 8) - 1;
    }
    (**(code **)(local_38 + 8))(&local_38);
    func_0010E3C4(puVar19,local_34,uVar18);
    *(undefined1 *)((int)puVar19 + uVar18) = 0;
    puVar6 = DAT_00136044;
    iVar11 = *(int *)(iVar10 + -0x2c);
    uVar9 = DAT_00136044[6];
    uVar15 = DAT_00136044[7];
    uVar14 = DAT_00136044[9];
    uVar16 = DAT_00136044[10];
    uVar20 = DAT_00136044[0xb];
    *(undefined4 *)(iVar11 + 8) = DAT_00136044[8];
    *(undefined4 *)(iVar11 + 0xc) = uVar14;
    iVar11 = *(int *)(iVar10 + -0x28);
    *(undefined4 *)(iVar11 + 8) = uVar16;
    *(undefined4 *)(iVar11 + 0xc) = uVar20;
    iVar11 = *(int *)(iVar10 + -0x24);
    *(undefined4 *)(iVar11 + 8) = uVar9;
    *(undefined4 *)(iVar11 + 0xc) = uVar15;
    local_34 = (uint *)s_cState_OnBreak_00136358;
    local_38 = iVar7;
    uVar18 = *(uint *)(iVar10 + -0x3c);
    if (uVar18 < 3) {
      iVar11 = *(int *)(iVar10 + -0x38);
      uVar2 = uVar18;
    }
    else {
      iVar11 = iVar7;
      uVar2 = *(uint *)(iVar10 + -0x38);
    }
    if (2 < uVar18) {
      iVar11 = uVar2 + 0x48;
    }
    puVar19 = *(uint **)(iVar11 + 4);
    (**(code **)(iVar7 + 8))(&local_38);
    uVar18 = 0;
    do {
      if (*(char *)((int)local_34 + uVar18) == '\0') {
        if ((int)uVar18 < 0x40001) goto LAB_00136238;
        break;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 0x40001);
    uVar18 = 0;
LAB_00136238:
    if (*(int *)(iVar11 + 8) <= (int)uVar18) {
      uVar18 = *(int *)(iVar11 + 8) - 1;
    }
    (**(code **)(local_38 + 8))(&local_38);
    func_0010E3C4(puVar19,local_34,uVar18);
    *(undefined1 *)((int)puVar19 + uVar18) = 0;
    iVar7 = *(int *)(iVar10 + -0x2c);
    uVar9 = puVar6[0xe];
    uVar15 = puVar6[6];
    uVar14 = puVar6[0xd];
    uVar16 = puVar6[0xf];
    uVar20 = puVar6[7];
    *(undefined4 *)(iVar7 + 0x10) = puVar6[0xc];
    *(undefined4 *)(iVar7 + 0x14) = uVar14;
    iVar7 = *(int *)(iVar10 + -0x28);
    *(undefined4 *)(iVar7 + 0x10) = uVar9;
    *(undefined4 *)(iVar7 + 0x14) = uVar16;
    iVar7 = *(int *)(iVar10 + -0x24);
    *(undefined4 *)(iVar7 + 0x10) = uVar15;
    *(undefined4 *)(iVar7 + 0x14) = uVar20;
    func_00656DE8((undefined4 *)(iVar10 + -0x44),0);
    objStack_48[0] = 0;
    objStack_48[1] = 0;
    objStack_48[2] = 0;
    uVar9 = func_0014E428(iVar17,1,0,0,0,0,0);
    *(undefined4 *)(iVar10 + -0x10) = uVar9;
    func_00115C54(&local_30,(float *)(iVar10 + -300),DAT_00136368);
    objStack_48[0] = (uint)ALBW_AS_U32(local_30);
    objStack_48[1] = uStack_2c;
    objStack_48[2] = uStack_28;
    iVar7 = *(int *)(iVar10 + -0x10);
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar7 + 0x80),*(uint *)(iVar10 + -0x114),(float *)objStack_48);
    func_004CEAF0(*(int *)(iVar10 + -0x10));
    func_0013550C(iVar17);
    *(uint *)(iVar10 + -0x21c) = *(uint *)(iVar10 + -0x21c) | 2;
    func_004ECF6C(iVar17);
  }
  return iVar17;
}

