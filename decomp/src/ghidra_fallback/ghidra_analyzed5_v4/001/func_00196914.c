#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern int DAT_00196d54;
extern undefined4 DAT_00196d58;
extern undefined4 *DAT_00196d5c;
extern undefined4 DAT_00196d60;
extern undefined4 DAT_00196d64;
extern int *DAT_00196d68;
extern int DAT_00196d6c;
extern int *DAT_00196d70;
extern uint DAT_00196d74;
extern int *DAT_00196d78;
extern int *DAT_00196d7c;
extern undefined4 DAT_0019713c;
extern undefined4 *DAT_00197140;
extern undefined *DAT_00197144;
extern int DAT_00197148;
extern char s_cState_BattleEscape_001973a4[];
extern char s_cState_BattleWait_00197390[];
extern char s_cState_BattleWalk_001973b8[];
extern char s_cState_Escape_00197174[];
extern char s_cState_OutScreen_00197184[];
extern char s_cState_RailMove_00197198[];
extern char s_cState_Return_001971a8[];
extern char s_cState_Search_00197158[];
extern char s_cState_Wait_0019714c[];
extern char s_cState_Walk_00197168[];

// USA 00196914 <- EU 00196914 (Ghidra, non-matching)
// GLOBAL DAT_00196d54 int
// GLOBAL DAT_00196d58 undefined4
// GLOBAL DAT_00196d5c undefined4 *
// GLOBAL DAT_00196d60 undefined4
// GLOBAL DAT_00196d64 undefined4
// GLOBAL DAT_00196d68 int *
// GLOBAL DAT_00196d6c int
// GLOBAL DAT_00196d70 int *
// GLOBAL DAT_00196d74 uint
// GLOBAL DAT_00196d78 int *
// GLOBAL DAT_00196d7c int *
// GLOBAL DAT_0019713c undefined4
// GLOBAL DAT_00197140 undefined4 *
// GLOBAL DAT_00197144 undefined *
// GLOBAL DAT_00197148 int
// GLOBAL s_cState_BattleEscape_001973a4 string
// GLOBAL s_cState_BattleWait_00197390 string
// GLOBAL s_cState_BattleWalk_001973b8 string
// GLOBAL s_cState_Escape_00197174 string
// GLOBAL s_cState_OutScreen_00197184 string
// GLOBAL s_cState_RailMove_00197198 string
// GLOBAL s_cState_Return_001971a8 string
// GLOBAL s_cState_Search_00197158 string
// GLOBAL s_cState_Wait_0019714c string
// GLOBAL s_cState_Walk_00197168 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_00196914(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_34 (*(int * *)(albw_frame + 0x1c))
  piVar2 = func_00150E40(param_1,param_2);
  iVar11 = DAT_00196d54 + 0x54;
  *piVar2 = DAT_00196d54;
  piVar2[200] = iVar11;
  objStack_50[1] = 0;
  objStack_50[0] = 1;
  objStack_50[2] = 0;
  iVar11 = func_0014E428((int)piVar2,1,0,0,1,0,0);
  piVar2[0x103] = iVar11;
  piVar2[0x104] = 0;
  piVar2[0x105] = 0;
  iVar11 = func_0054D89C((int)piVar2,0);
  piVar2[0x106] = iVar11;
  puVar3 = func_0010A794(piVar2 + 0x107);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 1;
  puVar3[0xc] = 0;
  uVar13 = DAT_00196d58;
  puVar15 = puVar3 + -0x107;
  puVar3[0xd] = DAT_00196d58;
  puVar3[0xe] = uVar13;
  puVar3[0xf] = uVar13;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(100);
  uVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    uVar5 = func_004EE484(puVar4);
  }
  local_34 = puVar3 + 0x12;
  puVar3[0x12] = uVar5;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = uVar13;
  uVar5 = DAT_00196d60;
  puVar4 = DAT_00196d5c;
  uVar13 = DAT_00196d5c[1];
  uVar17 = DAT_00196d5c[2];
  puVar3[0x16] = *DAT_00196d5c;
  puVar3[0x17] = uVar13;
  puVar3[0x18] = uVar17;
  puVar3[0x19] = uVar5;
  uVar13 = *puVar4;
  uVar17 = puVar4[1];
  iVar11 = 0;
  puVar3[0x1c] = puVar4[2];
  puVar3[0x1a] = uVar13;
  puVar3[0x1b] = uVar17;
  puVar3[0x1d] = uVar5;
  uVar13 = DAT_00196d64;
  puVar3[0x20] = 0xffffffff;
  puVar3[0x1f] = puVar3[-4];
  puVar3[0x1e] = uVar13;
  puVar3[0x21] = 0xffffffff;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0xffffffff;
  puVar3[0x24] = 0xffffffff;
  puVar3[0x25] = 0;
  puVar3[0x26] = uVar5;
  puVar3[0x27] = uVar5;
  puVar3[0x28] = uVar5;
  puVar3[0x29] = uVar5;
  puVar3[0x2a] = uVar5;
  puVar3[0x2b] = uVar5;
  piVar2 = puVar3 + -4;
  if (*(char *)((int)param_2 + 0x59) == '\0') {
LAB_00196bc4:
    uVar5 = func_0014E904((int)puVar15,4,1);
    local_38 = puVar3 + -3;
    puVar3[-3] = uVar5;
    iVar6 = DAT_00196d6c;
    uVar16 = 0;
    iVar14 = *(int *)(puVar3[-0x53] + 0x1c8);
    do {
      func_00169688((uint *)puVar3[-3],uVar16,(int *)(iVar6 + uVar16 * 8),iVar14);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 4);
    func_0016A02C(puVar3[-3],-1,(int *)0xffffffff,0);
    piVar8 = DAT_00196d78;
    uVar16 = DAT_00196d74;
    if (*(char *)(*DAT_00196d70 + 0x18) == '\a' || *(char *)(*DAT_00196d70 + 0x18) == '%') {
      (**(code **)(*DAT_00196d78 + 8))(DAT_00196d78);
      objStack_50[1] = piVar8[1];
      objStack_50[0] = uVar16;
      uVar12 = func_00564A78(puVar3[-4],(int *)objStack_50);
      objStack_50[2] = (uint)(puVar3 + 0x20);
      puVar3[0x20] = uVar12;
      puVar7 = (uint *)(*(int *)(*(int *)(*piVar2 + 0x24) + 0xc) + uVar12 * 0x40);
      *puVar7 = *puVar7 | 0x10;
      (**(code **)(piVar8[2] + 8))(piVar8 + 2);
      objStack_50[1] = piVar8[3];
      objStack_50[0] = uVar16;
      uVar12 = func_00564A78(*piVar2,(int *)objStack_50);
      puVar3[0x21] = uVar12;
      puVar7 = (uint *)(*(int *)(*(int *)(*piVar2 + 0x24) + 0xc) + uVar12 * 0x40);
      *puVar7 = *puVar7 | 0x10;
      piVar8 = DAT_00196d78;
      *(undefined4 **)(*piVar2 + 0x16c) = puVar3 + 0x1e;
      uVar12 = func_00564A78(*piVar2,piVar8);
      *(uint *)objStack_50[2] = uVar12;
      uVar12 = func_00564A78(*piVar2,DAT_00196d7c);
      puVar3[0x21] = uVar12;
    }
    iVar6 = func_0054D964((int)puVar15,0);
    puVar3[0x11] = iVar6;
    uVar5 = puVar3[-0x12];
    uVar13 = puVar3[-0x11];
    *(undefined4 *)(iVar6 + 4) = puVar3[-0x13];
    *(undefined4 *)(iVar6 + 8) = uVar5;
    *(undefined4 *)(iVar6 + 0xc) = uVar13;
    func_004356B4((int *)puVar3[0x11]);
    *(undefined4 *)(puVar3[0x12] + 0x3c) = DAT_0019713c;
    local_44 = puVar3[-0x54];
    objStack_50[0] = (uint)*(short *)(puVar3 + -0xf2);
    objStack_50[2] = 0x10c;
    objStack_50[1] = 0;
    func_0014EB8C(*local_34,puVar3[0x11],(undefined2 *)puVar3[-0x1f],&local_44,
                  *(short *)(puVar3 + -0xf2),0,0x10c);
    iVar6 = puVar3[-4];
    *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar6 + 0x80),puVar3[-0xd],(float *)(puVar3 + -0x13));
    func_004CEAF0(puVar3[-4]);
    func_001512B4(puVar3[-1],(float *)(puVar3 + -0x13));
    *(char *)(puVar3 + 9) = (char)*(ushort *)((int)puVar3 + -0x3ee);
    if (3 < (*(ushort *)((int)puVar3 + -0x3ee) & 0xff)) {
      *(undefined1 *)(puVar3 + 9) = 0;
    }
    puVar3[5] = puVar15;
    *(undefined1 *)((int)puVar3 + 6) = 10;
    iVar6 = func_0010BA78(0xa0);
    puVar4 = DAT_00197140;
    puVar3[6] = iVar6;
    puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
    iVar14 = 10;
    puVar9 = (undefined4 *)(iVar6 + -8);
    do {
      uVar5 = puVar4[0x2b];
      iVar14 = iVar14 + -1;
      puVar9[2] = puVar4[0x2a];
      puVar9[3] = uVar5;
      uVar5 = puVar4[0x2b];
      puVar9[4] = puVar4[0x2a];
      puVar9[5] = uVar5;
      puVar9 = puVar9 + 4;
    } while (iVar14 != 0);
    bVar1 = *(byte *)((int)puVar3 + 6);
    uVar12 = (uint)bVar1;
    puVar9 = (undefined4 *)func_0010BA78(uVar12 << 3);
    puVar3[8] = puVar9;
    if (uVar12 != 0) {
      puVar10 = puVar9 + -2;
      if ((bVar1 & 1) != 0) {
        uVar5 = puVar4[5];
        *puVar9 = puVar4[4];
        puVar9[1] = uVar5;
        puVar10 = puVar9;
      }
      for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar5 = puVar4[5];
        puVar10[2] = puVar4[4];
        puVar10[3] = uVar5;
        uVar5 = puVar4[5];
        puVar10[4] = puVar4[4];
        puVar10[5] = uVar5;
        puVar10 = puVar10 + 4;
      }
    }
    puVar9 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
    iVar6 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0x24;
      puVar9[1] = 10;
      iVar6 = func_00100118((int)(puVar9 + 2),DAT_00197144,0x24,10);
    }
    if (iVar6 != 0) {
      puVar3[3] = iVar6;
      puVar3[2] = 10;
    }
    iVar6 = DAT_00197148;
    puVar3[-0x32] = puVar3;
    *(undefined2 *)(iVar6 + (int)puVar15) = 10;
    local_3c = s_cState_Wait_0019714c;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,0,(int *)&local_40);
    puVar9 = (undefined4 *)puVar3[6];
    uVar5 = puVar4[2];
    uVar13 = *puVar4;
    uVar17 = puVar4[3];
    uVar21 = puVar4[4];
    uVar20 = puVar4[5];
    puVar9[1] = puVar4[1];
    *puVar9 = uVar13;
    puVar9 = (undefined4 *)puVar3[7];
    *puVar9 = uVar5;
    puVar9[1] = uVar17;
    puVar9 = (undefined4 *)puVar3[8];
    *puVar9 = uVar21;
    puVar9[1] = uVar20;
    local_3c = s_cState_Search_00197158;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,1,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[7];
    uVar13 = puVar4[8];
    uVar17 = puVar4[9];
    *(undefined4 *)(iVar6 + 8) = puVar4[6];
    *(undefined4 *)(iVar6 + 0xc) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 8) = uVar13;
    *(undefined4 *)(iVar6 + 0xc) = uVar17;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 8) = uVar21;
    *(undefined4 *)(iVar6 + 0xc) = uVar20;
    local_3c = s_cState_Walk_00197168;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,2,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0xb];
    uVar13 = puVar4[0xc];
    uVar17 = puVar4[0xd];
    *(undefined4 *)(iVar6 + 0x10) = puVar4[10];
    *(undefined4 *)(iVar6 + 0x14) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x10) = uVar13;
    *(undefined4 *)(iVar6 + 0x14) = uVar17;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x10) = uVar21;
    *(undefined4 *)(iVar6 + 0x14) = uVar20;
    local_3c = s_cState_Escape_00197174;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,3,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0xf];
    uVar13 = puVar4[0x10];
    uVar17 = puVar4[0x11];
    *(undefined4 *)(iVar6 + 0x18) = puVar4[0xe];
    *(undefined4 *)(iVar6 + 0x1c) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x18) = uVar13;
    *(undefined4 *)(iVar6 + 0x1c) = uVar17;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x18) = uVar21;
    *(undefined4 *)(iVar6 + 0x1c) = uVar20;
    local_3c = s_cState_OutScreen_00197184;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,4,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0x13];
    uVar13 = puVar4[0x14];
    uVar17 = puVar4[0x15];
    *(undefined4 *)(iVar6 + 0x20) = puVar4[0x12];
    *(undefined4 *)(iVar6 + 0x24) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x20) = uVar13;
    *(undefined4 *)(iVar6 + 0x24) = uVar17;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x20) = uVar21;
    *(undefined4 *)(iVar6 + 0x24) = uVar20;
    local_3c = s_cState_RailMove_00197198;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,5,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0x17];
    uVar17 = puVar4[0x18];
    uVar13 = puVar4[0x19];
    *(undefined4 *)(iVar6 + 0x28) = puVar4[0x16];
    *(undefined4 *)(iVar6 + 0x2c) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x28) = uVar17;
    *(undefined4 *)(iVar6 + 0x2c) = uVar13;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x28) = uVar21;
    *(undefined4 *)(iVar6 + 0x2c) = uVar20;
    local_3c = s_cState_Return_001971a8;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,6,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar17 = puVar4[0x1b];
    uVar5 = puVar4[0x1c];
    uVar13 = puVar4[0x1d];
    *(undefined4 *)(iVar6 + 0x30) = puVar4[0x1a];
    *(undefined4 *)(iVar6 + 0x34) = uVar17;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x30) = uVar5;
    *(undefined4 *)(iVar6 + 0x34) = uVar13;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x30) = uVar21;
    *(undefined4 *)(iVar6 + 0x34) = uVar20;
    local_3c = s_cState_BattleWait_00197390;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,7,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar13 = puVar4[0x1f];
    uVar17 = puVar4[0x20];
    uVar5 = puVar4[0x21];
    *(undefined4 *)(iVar6 + 0x38) = puVar4[0x1e];
    *(undefined4 *)(iVar6 + 0x3c) = uVar13;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x38) = uVar17;
    *(undefined4 *)(iVar6 + 0x3c) = uVar5;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x38) = uVar21;
    *(undefined4 *)(iVar6 + 0x3c) = uVar20;
    local_3c = s_cState_BattleEscape_001973a4;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,9,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0x23];
    uVar13 = puVar4[0x24];
    uVar17 = puVar4[0x25];
    *(undefined4 *)(iVar6 + 0x48) = puVar4[0x22];
    *(undefined4 *)(iVar6 + 0x4c) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x48) = uVar13;
    *(undefined4 *)(iVar6 + 0x4c) = uVar17;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x48) = uVar21;
    *(undefined4 *)(iVar6 + 0x4c) = uVar20;
    local_3c = s_cState_BattleWalk_001973b8;
    local_40 = uVar16;
    func_0010BEC4((int)puVar3,8,(int *)&local_40);
    iVar6 = puVar3[6];
    uVar5 = puVar4[0x27];
    uVar13 = puVar4[0x28];
    piVar2 = (int *)puVar4[0x29];
    *(undefined4 *)(iVar6 + 0x40) = puVar4[0x26];
    *(undefined4 *)(iVar6 + 0x44) = uVar5;
    iVar6 = puVar3[7];
    *(undefined4 *)(iVar6 + 0x40) = uVar13;
    *(int **)(iVar6 + 0x44) = piVar2;
    iVar6 = puVar3[8];
    *(undefined4 *)(iVar6 + 0x40) = uVar21;
    *(undefined4 *)(iVar6 + 0x44) = uVar20;
    if (*(char *)(*DAT_00196d70 + 0x18) == '\a' || *(char *)(*DAT_00196d70 + 0x18) == '%') {
      func_00659A54(puVar3,7);
      uVar5 = extraout_r1_00;
    }
    else if (iVar11 == 0) {
      if (*(char *)(puVar3 + 9) == '\x02' || *(char *)(puVar3 + 9) == '\x03') {
        func_00659A54(puVar3,2);
        uVar5 = extraout_r1_03;
      }
      else {
        func_00659A54(puVar3,0);
        uVar5 = extraout_r1_01;
      }
    }
    else {
      func_00659A54(puVar3,5);
      uVar5 = extraout_r1;
    }
    puVar4 = local_38;
    if ((int *)puVar3[-3] != (int *)0x0) {
      func_00169A80((int *)puVar3[-3],uVar5,uVar13,piVar2);
      uVar13 = 0;
      func_00168E9C((int *)*puVar4,puVar3[-4],(int *)0x0);
      uVar5 = extraout_r1_02;
    }
    if ((int *)puVar3[-2] != (int *)0x0) {
      func_00169A80((int *)puVar3[-2],uVar5,uVar13,piVar2);
      func_00168E9C((int *)puVar3[-2],puVar3[-4],(int *)0x0);
    }
    puVar3[-0x4f] = puVar3[-0x4f] | 2;
  }
  else {
    uVar16 = param_2[0xa7];
    if (((int)uVar16 < 0) || ((int)param_2[0xa8] < 0)) goto LAB_00196c44;
    iVar11 = *DAT_00196d68;
    iVar6 = func_00581B9C(iVar11);
    if (iVar6 == 1) {
      puVar7 = (uint *)func_00582250(iVar11);
      uVar12 = *puVar7;
      if ((uVar16 < uVar12) && (iVar11 = *(int *)(puVar7[2] + uVar16 * 4), iVar11 != 0)) {
        piVar8 = *(int **)(iVar11 + 0x28);
        if (piVar8 != (int *)0x0) {
          uVar12 = *(uint *)(iVar11 + 0x20);
        }
        if ((piVar8 == (int *)0x0 || uVar12 == 0) || (iVar6 = *piVar8, iVar6 == 0)) {
LAB_00196c44:
          *(undefined1 *)((int)puVar3 + -0x145) = 1;
          return puVar15;
        }
        puVar3[0x16] = *(undefined4 *)(iVar6 + 0x18);
        puVar3[0x17] = *(undefined4 *)(iVar6 + 0x1c);
        puVar3[0x18] = *(undefined4 *)(iVar6 + 0x20);
        if ((*(int *)(iVar11 + 0x28) == 0) ||
           ((uVar16 = *(uint *)(iVar11 + 0x20) - 1, *(uint *)(iVar11 + 0x20) <= uVar16 ||
            (iVar14 = *(int *)(*(int *)(iVar11 + 0x28) + uVar16 * 4), iVar14 == 0))))
        goto LAB_00196c44;
        uVar5 = *(undefined4 *)(iVar6 + 0x1c);
        fVar18 = *(float *)(iVar6 + 0x20);
        puVar3[-0x13] = *(undefined4 *)(iVar6 + 0x18);
        puVar3[-0x12] = uVar5;
        puVar3[-0x11] = ALBW_AS_U32(fVar18);
        fVar19 = ALBW_AS_F32(puVar3[-0x13]) - *(float *)(iVar14 + 0x18);
        fVar18 = fVar18 - *(float *)(iVar14 + 0x20);
        puVar3[0x19] = SQRT(fVar19 * fVar19 + fVar18 * fVar18);
        iVar6 = func_004D80EC((float *)(puVar3 + -0x13),(float *)(iVar14 + 0x18),0);
        puVar3[-0xd] = iVar6;
        goto LAB_00196bc4;
      }
    }
    *(undefined1 *)((int)puVar3 + -0x145) = 1;
  }
  return puVar15;
}

