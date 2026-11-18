#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00667DD0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00389db0;
extern undefined4 DAT_00389db4;
extern undefined4 DAT_00389db8;
extern int DAT_00389dbc;
extern int *DAT_00389dc0;
extern undefined4 *DAT_00389dc4;
extern undefined *DAT_00389dc8;
extern int DAT_00389dcc;
extern int DAT_00389de0;
extern char s_cState_Display_00389dd0[];
extern char s_cState_Float_00389df0[];
extern char s_cState_Hide_00389de4[];
extern char s_cState_Move_00389e00[];
extern char s_cState_PutAway_00389f3c[];

// USA 003899B8 <- EU 00389994 (Ghidra, non-matching)
// GLOBAL DAT_00389db0 int
// GLOBAL DAT_00389db4 undefined4
// GLOBAL DAT_00389db8 undefined4
// GLOBAL DAT_00389dbc int
// GLOBAL DAT_00389dc0 int *
// GLOBAL DAT_00389dc4 undefined4 *
// GLOBAL DAT_00389dc8 undefined *
// GLOBAL DAT_00389dcc int
// GLOBAL DAT_00389de0 int
// GLOBAL s_cState_Display_00389dd0 string
// GLOBAL s_cState_Float_00389df0 string
// GLOBAL s_cState_Hide_00389de4 string
// GLOBAL s_cState_Move_00389e00 string
// GLOBAL s_cState_PutAway_00389f3c string

undefined4 * func_003899B8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int unaff_r11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_b0 ((int *)(albw_frame + 0x0))
  #define local_48 (*(int *)(albw_frame + 0x68))
  #define local_44 (*(char * *)(albw_frame + 0x6c))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x84))
  #define local_28 (*(uint * *)(albw_frame + 0x88))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar2 = func_00150E40(param_1,param_2);
  iVar4 = DAT_00389db0;
  *piVar2 = DAT_00389db0;
  piVar2[200] = iVar4 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar11 = puVar3 + -0x103;
  iVar4 = func_0014E428((int)puVar11,1,0,0,1,0,0);
  uVar13 = DAT_00389db4;
  piVar2 = puVar3 + 0x15;
  *piVar2 = iVar4;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = uVar13;
  puVar3[0x1a] = uVar13;
  puVar3[0x1b] = uVar13;
  puVar3[0x1c] = 0;
  *(undefined1 *)(puVar3 + 0x1d) = 0;
  *(undefined1 *)((int)puVar3 + 0x75) = 0;
  if (puVar3[0x15] != 0) {
    iVar4 = *(int *)(puVar3[-0x4f] + 0x1c8);
    puVar5 = (undefined4 *)func_0010BAB4(0xa8);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_0016A2FC(puVar5,3,DAT_00389db8,1);
    }
    if (puVar6 != (undefined4 *)0x0 && iVar4 != 0) {
      unaff_r11 = DAT_00389dbc;
    }
    uVar12 = 0;
    puVar3[0x16] = puVar6;
    if (puVar6 != (undefined4 *)0x0 && iVar4 != 0) {
      do {
        func_00169688((uint *)puVar3[0x16],uVar12,(int *)(unaff_r11 + uVar12 * 8),iVar4);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 3);
      func_0016A02C(puVar3[0x16],-1,(int *)0xffffffff,0);
      puVar7 = (uint *)func_002C11E8(aiStack_b0,0,0,0);
      func_0016898C(puVar3[0x16],puVar7);
      puVar6 = (undefined4 *)func_0010BAB4(0xa8);
      puVar7 = (uint *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = func_0016A2FC(puVar6,1,DAT_00389db8,1);
      }
      puVar3[0x17] = puVar7;
      if (puVar7 == (uint *)0x0 || iVar4 == 0) {
        *(undefined1 *)((int)puVar3 + -0x135) = 1;
        return puVar11;
      }
      func_00169608(puVar7,0,DAT_00389dc0,iVar4);
      func_0016A02C(puVar3[0x17],-1,(int *)0xffffffff,0);
      puVar7 = (uint *)func_002C11E8(aiStack_b0,0,0,0);
      func_0016898C(puVar3[0x17],puVar7);
      *(undefined1 *)((int)puVar3 + 6) = 5;
      puVar3[5] = puVar11;
      iVar4 = func_0010BA78(0x50);
      puVar3[6] = iVar4;
      puVar6 = DAT_00389dc4;
      puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
      iVar9 = 5;
      puVar5 = (undefined4 *)(iVar4 + -8);
      do {
        uVar13 = puVar6[0x17];
        iVar9 = iVar9 + -1;
        puVar5[2] = puVar6[0x16];
        puVar5[3] = uVar13;
        uVar13 = puVar6[0x17];
        puVar5[4] = puVar6[0x16];
        puVar5[5] = uVar13;
        puVar5 = puVar5 + 4;
      } while (iVar9 != 0);
      bVar1 = *(byte *)((int)puVar3 + 6);
      uVar12 = (uint)bVar1;
      puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
      puVar3[8] = puVar5;
      if (uVar12 != 0) {
        puVar8 = puVar5 + -2;
        if ((bVar1 & 1) != 0) {
          uVar13 = puVar6[5];
          *puVar5 = puVar6[4];
          puVar5[1] = uVar13;
          puVar8 = puVar5;
        }
        for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar13 = puVar6[5];
          puVar8[2] = puVar6[4];
          puVar8[3] = uVar13;
          uVar13 = puVar6[5];
          puVar8[4] = puVar6[4];
          puVar8[5] = uVar13;
          puVar8 = puVar8 + 4;
        }
      }
      puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
      iVar4 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0x24;
        puVar5[1] = 5;
        iVar4 = func_00100118((int)(puVar5 + 2),DAT_00389dc8,0x24,5);
      }
      if (iVar4 != 0) {
        puVar3[3] = iVar4;
        puVar3[2] = 5;
      }
      iVar4 = DAT_00389dcc;
      puVar3[-0x2e] = puVar3;
      iVar9 = DAT_00389de0;
      *(undefined2 *)(iVar4 + (int)puVar11) = 5;
      local_44 = s_cState_Display_00389dd0;
      local_48 = iVar9;
      func_0010BEC4((int)puVar3,0,&local_48);
      puVar5 = (undefined4 *)puVar3[6];
      uVar10 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      uVar16 = puVar6[4];
      uVar15 = puVar6[5];
      *puVar5 = *puVar6;
      puVar5[1] = uVar10;
      puVar5 = (undefined4 *)puVar3[7];
      *puVar5 = uVar13;
      puVar5[1] = uVar14;
      puVar5 = (undefined4 *)puVar3[8];
      *puVar5 = uVar16;
      puVar5[1] = uVar15;
      local_44 = s_cState_Hide_00389de4;
      local_48 = iVar9;
      func_0010BEC4((int)puVar3,1,&local_48);
      iVar4 = puVar3[6];
      uVar13 = puVar6[7];
      uVar10 = puVar6[8];
      uVar14 = puVar6[9];
      *(undefined4 *)(iVar4 + 8) = puVar6[6];
      *(undefined4 *)(iVar4 + 0xc) = uVar13;
      iVar4 = puVar3[7];
      *(undefined4 *)(iVar4 + 8) = uVar10;
      *(undefined4 *)(iVar4 + 0xc) = uVar14;
      iVar4 = puVar3[8];
      *(undefined4 *)(iVar4 + 8) = uVar16;
      *(undefined4 *)(iVar4 + 0xc) = uVar15;
      local_44 = s_cState_Float_00389df0;
      local_48 = iVar9;
      func_0010BEC4((int)puVar3,2,&local_48);
      iVar4 = puVar3[6];
      uVar13 = puVar6[0xc];
      uVar14 = puVar6[0xd];
      uVar10 = puVar6[0xb];
      *(undefined4 *)(iVar4 + 0x10) = puVar6[10];
      *(undefined4 *)(iVar4 + 0x14) = uVar10;
      iVar4 = puVar3[7];
      *(undefined4 *)(iVar4 + 0x10) = uVar13;
      *(undefined4 *)(iVar4 + 0x14) = uVar14;
      iVar4 = puVar3[8];
      *(undefined4 *)(iVar4 + 0x10) = uVar16;
      *(undefined4 *)(iVar4 + 0x14) = uVar15;
      local_44 = s_cState_Move_00389e00;
      local_48 = iVar9;
      func_0010BEC4((int)puVar3,3,&local_48);
      iVar4 = puVar3[6];
      uVar13 = puVar6[0xf];
      uVar10 = puVar6[0x10];
      uVar14 = puVar6[0x11];
      *(undefined4 *)(iVar4 + 0x18) = puVar6[0xe];
      *(undefined4 *)(iVar4 + 0x1c) = uVar13;
      iVar4 = puVar3[7];
      *(undefined4 *)(iVar4 + 0x18) = uVar10;
      *(undefined4 *)(iVar4 + 0x1c) = uVar14;
      iVar4 = puVar3[8];
      *(undefined4 *)(iVar4 + 0x18) = uVar16;
      *(undefined4 *)(iVar4 + 0x1c) = uVar15;
      local_44 = s_cState_PutAway_00389f3c;
      local_48 = iVar9;
      func_0010BEC4((int)puVar3,4,&local_48);
      iVar4 = puVar3[6];
      uVar13 = puVar6[0x13];
      uVar10 = puVar6[0x14];
      uVar14 = puVar6[0x15];
      *(undefined4 *)(iVar4 + 0x20) = puVar6[0x12];
      *(undefined4 *)(iVar4 + 0x24) = uVar13;
      iVar4 = puVar3[7];
      *(undefined4 *)(iVar4 + 0x20) = uVar10;
      *(undefined4 *)(iVar4 + 0x24) = uVar14;
      iVar4 = puVar3[8];
      *(undefined4 *)(iVar4 + 0x20) = uVar16;
      *(undefined4 *)(iVar4 + 0x24) = uVar15;
      puVar3[-0x4b] = puVar3[-0x4b] | 2;
      if (*(short *)((int)local_28 + 0x2a) == 0) {
        func_00667DD0(puVar3,0);
      }
      else {
        func_00667DD0(puVar3,1);
      }
      iVar4 = puVar3[0x15];
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar4 + 0x80),puVar3[-9],(float *)(puVar3 + -0xf));
      iVar4 = *piVar2;
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC(puVar3 + 9,(undefined4 *)(iVar4 + 0x80));
      func_00168E9C((int *)puVar3[0x17],*piVar2,(int *)0x0);
      func_00168E9C((int *)puVar3[0x16],*piVar2,(int *)0x0);
      func_004CEAF0(*piVar2);
      return puVar11;
    }
  }
  *(undefined1 *)((int)puVar3 + -0x135) = 1;
  return puVar11;
}

