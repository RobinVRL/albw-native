#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_002C00A8(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00476898;
extern undefined4 DAT_0047689c;
extern int DAT_004768a8;
extern int *DAT_004768f0;
extern int *DAT_004768f4;
extern undefined4 *DAT_0047690c;
extern undefined *DAT_00476b20;
extern char s_B_FloorButton_00_004768f8[];
extern char s_CheckOff_004768b8[];
extern char s_Decide_004768a0[];
extern char s_IconSet_004768cc[];
extern char s_LinkColor_004768e4[];
extern char s_N_Icon_00_00476b6c[];
extern char s_SelectedLoop_004768d4[];
extern char s_TouchDecide_004768ac[];
extern char s_TouchOn_004768c4[];
extern char s_cState_CheckOffAnim_00476b58[];
extern char s_cState_CheckOff_00476b24[];
extern char s_cState_CheckOnAnim_00476b34[];
extern char s_cState_CheckOn_00476b48[];

// USA 004764BC <- EU 00476494 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00476898 undefined4
// GLOBAL DAT_0047689c undefined4
// GLOBAL DAT_004768a8 int
// GLOBAL DAT_004768f0 int *
// GLOBAL DAT_004768f4 int *
// GLOBAL DAT_0047690c undefined4 *
// GLOBAL DAT_00476b20 undefined *
// GLOBAL s_B_FloorButton_00_004768f8 string
// GLOBAL s_CheckOff_004768b8 string
// GLOBAL s_Decide_004768a0 string
// GLOBAL s_IconSet_004768cc string
// GLOBAL s_LinkColor_004768e4 string
// GLOBAL s_N_Icon_00_00476b6c string
// GLOBAL s_SelectedLoop_004768d4 string
// GLOBAL s_TouchDecide_004768ac string
// GLOBAL s_TouchOn_004768c4 string
// GLOBAL s_cState_CheckOffAnim_00476b58 string
// GLOBAL s_cState_CheckOff_00476b24 string
// GLOBAL s_cState_CheckOnAnim_00476b34 string
// GLOBAL s_cState_CheckOn_00476b48 string

undefined4 *
func_004764BC(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 extraout_r1;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_00232540(param_1);
  *puVar3 = DAT_00476898;
  uVar7 = DAT_0047689c;
  *(undefined2 *)(puVar3 + 8) = 0;
  *(undefined2 *)((int)puVar3 + 0x22) = 0xffff;
  puVar3[9] = uVar7;
  puVar3[10] = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  *(undefined2 *)((int)puVar3 + 0x2e) = 0xffff;
  puVar3[0xc] = uVar7;
  puVar3[0xd] = 0;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined2 *)((int)puVar3 + 0x3a) = 0xffff;
  puVar3[0xf] = uVar7;
  puVar3[0x10] = 0;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  *(undefined2 *)((int)puVar3 + 0x46) = 0xffff;
  puVar3[0x12] = uVar7;
  puVar3[0x13] = 0;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  *(undefined2 *)((int)puVar3 + 0x52) = 0xffff;
  puVar3[0x15] = uVar7;
  puVar3[0x16] = 0;
  *(undefined2 *)(puVar3 + 0x17) = 0;
  *(undefined2 *)((int)puVar3 + 0x5e) = 0xffff;
  puVar3[0x18] = uVar7;
  puVar3[0x19] = 0;
  *(undefined2 *)(puVar3 + 0x1a) = 0;
  *(undefined2 *)((int)puVar3 + 0x6a) = 0xffff;
  puVar3[0x1b] = uVar7;
  puVar3[0x1c] = 0;
  *(undefined2 *)(puVar3 + 0x1d) = 0;
  *(undefined2 *)((int)puVar3 + 0x76) = 0xffff;
  puVar3[0x1e] = uVar7;
  puVar3[0x1f] = 0;
  puVar3 = func_0010A794(puVar3 + 0x20);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  *(undefined1 *)((int)puVar3 + 0x35) = 0;
  puVar15 = puVar3 + -0x20;
  puVar3[0xc] = param_4;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = func_00168434(puVar4);
  }
  func_00168100(piVar16,param_2,param_3);
  puVar3[-0x19] = piVar16;
  puVar3[-0x1a] = puVar3[-0x1a] | 0x10;
  func_0016773C((int)piVar16,7);
  iVar11 = DAT_004768a8;
  local_2c = s_Decide_004768a0;
  local_30 = DAT_004768a8;
  func_00166C20(piVar16,0,&local_30,0);
  local_2c = s_TouchDecide_004768ac;
  local_30 = iVar11;
  func_00166C20(piVar16,1,&local_30,0);
  local_2c = s_CheckOff_004768b8;
  local_30 = iVar11;
  func_00166C20(piVar16,2,&local_30,0);
  local_2c = s_TouchOn_004768c4;
  local_30 = iVar11;
  func_00166C20(piVar16,3,&local_30,0);
  local_2c = s_IconSet_004768cc;
  local_30 = iVar11;
  func_00166C20(piVar16,4,&local_30,0);
  local_2c = s_SelectedLoop_004768d4;
  local_30 = iVar11;
  func_00166C20(piVar16,5,&local_30,0);
  local_2c = s_LinkColor_004768e4;
  uVar14 = 0;
  local_30 = iVar11;
  func_00166C20(piVar16,6,&local_30,0);
  puVar3[-0x16] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x5e) = 0;
  *(undefined2 *)(puVar3 + -0x18) = 0;
  puVar3[-0x13] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x52) = 1;
  *(undefined2 *)(puVar3 + -0x15) = 0;
  puVar3[-0x10] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x46) = 2;
  *(undefined2 *)(puVar3 + -0x12) = 0;
  puVar3[-0xd] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x3a) = 3;
  *(undefined2 *)(puVar3 + -0xf) = 0;
  puVar3[-10] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x2e) = 3;
  *(undefined2 *)(puVar3 + -0xc) = 2;
  puVar3[-7] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x22) = 4;
  *(undefined2 *)(puVar3 + -9) = 5;
  puVar3[-4] = piVar16;
  *(undefined2 *)((int)puVar3 + -0x16) = 5;
  *(undefined2 *)(puVar3 + -6) = 0;
  uVar13 = 6;
  puVar3[-1] = piVar16;
  *(undefined2 *)((int)puVar3 + -10) = 6;
  *(undefined2 *)(puVar3 + -3) = 5;
  piVar5 = (int *)func_005229AC((int *)puVar3[-0x19],DAT_004768f0);
  piVar2 = DAT_004768f4;
  uVar7 = extraout_r1;
  if (piVar5 != (int *)0x0) {
    uVar20 = (**(code **)(*piVar5 + 8))(piVar5);
    uVar7 = (undefined4)((ulonglong)uVar20 >> 0x20);
    piVar6 = (int *)uVar20;
    do {
      if (piVar6 == piVar2) goto LAB_00476770;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_00476770:
  puVar3[9] = piVar5;
  func_004762C4((int)puVar15,uVar7,uVar13,uVar14);
  local_2c = s_B_FloorButton_00_004768f8;
  local_30 = iVar11;
  uVar7 = func_005229AC(piVar16,&local_30);
  puVar3[10] = uVar7;
  *(undefined1 *)((int)puVar3 + -0x71) = 0x82;
  puVar8 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar8);
  }
  puVar3[-0x1b] = puVar4;
  func_002C00D4(puVar4,puVar15,piVar16);
  puVar3[5] = puVar15;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar9 = func_0010BA78(0x40);
  puVar4 = DAT_0047690c;
  puVar3[6] = iVar9;
  puVar3[7] = iVar9 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar12 = 4;
  puVar8 = (undefined4 *)(iVar9 + -8);
  do {
    uVar7 = puVar4[0x25];
    iVar12 = iVar12 + -1;
    puVar8[2] = puVar4[0x24];
    puVar8[3] = uVar7;
    uVar7 = puVar4[0x25];
    puVar8[4] = puVar4[0x24];
    puVar8[5] = uVar7;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar17 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar3[8] = puVar8;
  if (uVar17 != 0) {
    puVar10 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar4[5];
      *puVar8 = puVar4[4];
      puVar8[1] = uVar7;
      puVar10 = puVar8;
    }
    for (iVar9 = (int)uVar17 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar7 = puVar4[5];
      puVar10[2] = puVar4[4];
      puVar10[3] = uVar7;
      uVar7 = puVar4[5];
      puVar10[4] = puVar4[4];
      puVar10[5] = uVar7;
      puVar10 = puVar10 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 4;
    iVar9 = func_00100118((int)(puVar8 + 2),DAT_00476b20,0x24,4);
  }
  if (iVar9 != 0) {
    puVar3[3] = iVar9;
    puVar3[2] = 4;
  }
  local_2c = s_cState_CheckOff_00476b24;
  local_30 = iVar11;
  func_0010BEC4((int)puVar3,0,&local_30);
  puVar8 = (undefined4 *)puVar3[6];
  uVar7 = puVar4[2];
  uVar13 = puVar4[1];
  uVar19 = puVar4[4];
  uVar14 = puVar4[3];
  uVar18 = puVar4[5];
  *puVar8 = *puVar4;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar3[7];
  *puVar8 = uVar7;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar3[8];
  *puVar8 = uVar19;
  puVar8[1] = uVar18;
  local_2c = s_cState_CheckOnAnim_00476b34;
  local_30 = iVar11;
  func_0010BEC4((int)puVar3,1,&local_30);
  iVar9 = puVar3[6];
  uVar7 = puVar4[7];
  uVar13 = puVar4[8];
  uVar14 = puVar4[9];
  *(undefined4 *)(iVar9 + 8) = puVar4[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar7;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  local_2c = s_cState_CheckOn_00476b48;
  local_30 = iVar11;
  func_0010BEC4((int)puVar3,2,&local_30);
  iVar9 = puVar3[6];
  uVar13 = puVar4[0xb];
  uVar7 = puVar4[0xc];
  uVar14 = puVar4[0xd];
  *(undefined4 *)(iVar9 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar13;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar7;
  *(undefined4 *)(iVar9 + 0x14) = uVar14;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar19;
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  local_2c = s_cState_CheckOffAnim_00476b58;
  local_30 = iVar11;
  func_0010BEC4((int)puVar3,3,&local_30);
  uVar13 = puVar4[0x11];
  iVar9 = puVar3[6];
  uVar7 = puVar4[0xf];
  uVar14 = puVar4[0x10];
  *(undefined4 *)(iVar9 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar9 + 0x1c) = uVar7;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar14;
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = puVar3[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  if (param_5 == 0) {
    func_0066E65C(puVar3,0);
  }
  else {
    func_0066E65C(puVar3,2);
  }
  local_2c = s_N_Icon_00_00476b6c;
  local_30 = iVar11;
  iVar11 = func_005229AC(piVar16,&local_30);
  puVar3[0xb] = iVar11;
  func_00167E04(puVar3[-0x19],iVar11,0);
  *(ushort *)(puVar3[-0x1b] + 0x16) = *(ushort *)(puVar3[-0x1b] + 0x16) & 0xffbf;
  func_002C00A8(puVar3[-0x1b]);
  *(ushort *)(puVar3[-0x1b] + 0x16) = *(ushort *)(puVar3[-0x1b] + 0x16) & 0xfffd;
  return puVar15;
}

