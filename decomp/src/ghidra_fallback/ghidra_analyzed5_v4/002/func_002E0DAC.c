#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_005474CC(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663D20(undefined4 *param_1,undefined1 param_2);
extern int DAT_002e1118;
extern undefined4 *DAT_002e111c;
extern undefined4 DAT_002e1120;
extern undefined *DAT_002e1124;
extern int DAT_002e1128;
extern int DAT_002e1138;
extern char s_cState_End_002e113c[];
extern char s_cState_Wait_002e112c[];

// USA 002E0DAC <- EU 002E0D88 (Ghidra, non-matching)
// GLOBAL DAT_002e1118 int
// GLOBAL DAT_002e111c undefined4 *
// GLOBAL DAT_002e1120 undefined4
// GLOBAL DAT_002e1124 undefined *
// GLOBAL DAT_002e1128 int
// GLOBAL DAT_002e1138 int
// GLOBAL s_cState_End_002e113c string
// GLOBAL s_cState_Wait_002e112c string

undefined4 * func_002E0DAC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_002e1118;
  *piVar5 = DAT_002e1118;
  piVar5[200] = iVar7 + 0x58;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  iVar7 = func_0054D964((int)(puVar6 + -0x103),0);
  puVar2 = DAT_002e111c;
  puVar6[9] = iVar7;
  puVar6[0xb] = 0;
  uVar10 = puVar2[0xd];
  puVar6[0xc] = puVar2[0xc];
  puVar6[0xd] = uVar10;
  puVar12 = puVar6 + -0x103;
  puVar6[10] = DAT_002e1120;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  func_004356B4((int *)puVar6[9]);
  *(undefined1 *)((int)puVar6 + 6) = 2;
  puVar6[5] = puVar12;
  iVar7 = func_0010BA78(0x20);
  puVar6[6] = iVar7;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar11 = 2;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar10 = puVar2[0xb];
    iVar11 = iVar11 + -1;
    puVar8[2] = puVar2[10];
    puVar8[3] = uVar10;
    uVar10 = puVar2[0xb];
    puVar8[4] = puVar2[10];
    puVar8[5] = uVar10;
    puVar8 = puVar8 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar13 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar6[8] = puVar8;
  if (uVar13 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar8 = puVar2[4];
      puVar8[1] = uVar10;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar10 = puVar2[5];
      puVar9[2] = puVar2[4];
      puVar9[3] = uVar10;
      uVar10 = puVar2[5];
      puVar9[4] = puVar2[4];
      puVar9[5] = uVar10;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_002e1124;
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 2;
    *puVar8 = 0x24;
    iVar7 = func_00100118((int)(puVar8 + 2),puVar3,0x24,2);
  }
  if (iVar7 != 0) {
    puVar6[3] = iVar7;
    puVar6[2] = 2;
  }
  iVar7 = DAT_002e1128;
  puVar6[-0x2e] = puVar6;
  iVar11 = DAT_002e1138;
  *(undefined2 *)(iVar7 + (int)puVar12) = 2;
  local_2c = (uint *)s_cState_Wait_002e112c;
  local_30 = iVar11;
  iVar7 = puVar6[3];
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar11 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_002e0f80;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_002e0f80:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar13) {
    uVar13 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar8 = (undefined4 *)puVar6[6];
  uVar10 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  uVar17 = puVar2[4];
  uVar18 = puVar2[5];
  *puVar8 = *puVar2;
  puVar8[1] = uVar10;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar15;
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  local_2c = (uint *)s_cState_End_002e113c;
  local_30 = iVar11;
  if ((uint)puVar6[2] < 2) {
    iVar7 = puVar6[3];
  }
  else {
    iVar7 = puVar6[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar11 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_002e1040;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_002e1040:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar6[6];
  uVar18 = puVar2[7];
  uVar10 = puVar2[4];
  uVar17 = puVar2[5];
  uVar15 = puVar2[9];
  uVar16 = puVar2[8];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  bVar4 = func_005474CC((int)(puVar6 + -0x102));
  if ((bVar4) ||
     ((*(short *)((int)puVar6 + -0x3d6) != 0 && (bVar4 = func_00588BF0((int)puVar12,0), bVar4)))) {
    func_00663D20(puVar6,1);
  }
  else {
    func_00663D20(puVar6,0);
  }
  return puVar12;
}

