#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00172CC0(int param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006589D0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00173690;
extern undefined4 DAT_00173694;
extern undefined4 DAT_00173698;
extern undefined4 DAT_0017369c;
extern undefined4 DAT_001736a0;
extern undefined4 *DAT_001736a4;
extern undefined *DAT_001736a8;
extern int DAT_001736ac;
extern int DAT_001736bc;
extern float DAT_001737f8;
extern undefined DAT_001737fc;
extern int *DAT_00173814;
extern char s__Actor_BossSand_kcl_001737ff[];
extern char s_cState_Done_001736e4[];
extern char s_cState_Fall_001736c0[];
extern char s_cState_Hide_001736cc[];
extern char s_cState_Rise_001736d8[];
extern char s_cState_Stay_001736b0[];
extern char s_cf_001737ff[];
extern undefined4 _DAT_001737fc;

// USA 001732B4 <- EU 001732B4 (Ghidra, non-matching)
// GLOBAL DAT_00173690 int
// GLOBAL DAT_00173694 undefined4
// GLOBAL DAT_00173698 undefined4
// GLOBAL DAT_0017369c undefined4
// GLOBAL DAT_001736a0 undefined4
// GLOBAL DAT_001736a4 undefined4 *
// GLOBAL DAT_001736a8 undefined *
// GLOBAL DAT_001736ac int
// GLOBAL DAT_001736bc int
// GLOBAL DAT_001737f8 float
// GLOBAL DAT_001737fc undefined
// GLOBAL DAT_00173814 int *
// GLOBAL s_cf_001737ff string
// GLOBAL s_cState_Done_001736e4 string
// GLOBAL s_cState_Fall_001736c0 string
// GLOBAL s_cState_Hide_001736cc string
// GLOBAL s_cState_Rise_001736d8 string
// GLOBAL s_cState_Stay_001736b0 string

/* WARNING: Variable defined which should be unmapped: objStack_40 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_001732B4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_00150E40(param_1,param_2);
  iVar7 = DAT_00173690;
  *piVar3 = DAT_00173690;
  piVar3[200] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  uVar15 = DAT_00173694;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar17 = DAT_00173698;
  puVar4[10] = uVar15;
  puVar4[0xb] = uVar17;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar11 = puVar4 + -0x103;
  uVar15 = DAT_0017369c;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  uVar17 = DAT_001736a0;
  puVar4[0xd] = puVar6;
  puVar4[0xe] = uVar17;
  puVar4[0xf] = uVar17;
  puVar4[0x10] = uVar17;
  puVar4[0x11] = uVar15;
  piVar14 = puVar4 + 0xd;
  objStack_40[0] = 0;
  objStack_40[1] = 0;
  piVar3 = func_0014DF18(puVar4[-0x4f],0,0,0,0,0);
  puVar4[0xc] = piVar3;
  piVar12 = puVar4 + 0xc;
  (**(code **)(*piVar3 + 0x10))(piVar3,0x24);
  iVar7 = *piVar12;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar7 + 0x80) = uVar15;
  *(undefined4 *)(iVar7 + 0x84) = uVar17;
  *(undefined4 *)(iVar7 + 0x88) = uVar17;
  *(undefined4 *)(iVar7 + 0x90) = uVar17;
  *(undefined4 *)(iVar7 + 0x94) = uVar15;
  *(undefined4 *)(iVar7 + 0x98) = uVar17;
  *(undefined4 *)(iVar7 + 0xa0) = uVar17;
  *(undefined4 *)(iVar7 + 0xa4) = uVar17;
  *(undefined4 *)(iVar7 + 0xa8) = uVar15;
  *(uint *)(iVar7 + 0x8c) = param_2[1];
  *(uint *)(iVar7 + 0x9c) = param_2[2];
  *(uint *)(iVar7 + 0xac) = param_2[3];
  iVar7 = *piVar12;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(uint *)(iVar7 + 0x74) = param_2[4];
  *(uint *)(iVar7 + 0x78) = param_2[5];
  *(uint *)(iVar7 + 0x7c) = param_2[6];
  func_004CEAF0(*piVar12);
  *(undefined1 *)((int)puVar4 + 6) = 5;
  puVar4[5] = puVar11;
  iVar7 = func_0010BA78(0x50);
  puVar4[6] = iVar7;
  puVar6 = DAT_001736a4;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 5;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar6[0x17];
    iVar10 = iVar10 + -1;
    puVar5[2] = puVar6[0x16];
    puVar5[3] = uVar15;
    uVar15 = puVar6[0x17];
    puVar5[4] = puVar6[0x16];
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar15;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar15;
      uVar15 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 5;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_001736a8,0x24,5);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 5;
  }
  iVar7 = DAT_001736ac;
  puVar4[-0x2e] = puVar4;
  iVar10 = DAT_001736bc;
  *(undefined2 *)(iVar7 + (int)puVar11) = 5;
  local_34 = s_cState_Stay_001736b0;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar5 = (undefined4 *)puVar4[6];
  uVar15 = puVar6[2];
  uVar17 = puVar6[1];
  uVar18 = puVar6[3];
  uVar19 = *(undefined8 *)(puVar6 + 4);
  *puVar5 = *puVar6;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar15;
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = (int)uVar19;
  puVar5[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Fall_001736c0;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar7 = puVar4[6];
  uVar17 = puVar6[7];
  uVar15 = puVar6[8];
  uVar18 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 8) = (int)uVar19;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Hide_001736cc;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0xb];
  uVar17 = puVar6[0xc];
  uVar18 = puVar6[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar17;
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x10) = (int)uVar19;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Rise_001736d8;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0xf];
  uVar17 = puVar6[0x10];
  uVar18 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar17;
  *(undefined4 *)(iVar7 + 0x1c) = uVar18;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x18) = (int)uVar19;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Done_001736e4;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar7 = puVar4[6];
  uVar15 = puVar6[0x13];
  uVar17 = puVar6[0x14];
  uVar18 = puVar6[0x15];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar17;
  *(undefined4 *)(iVar7 + 0x24) = uVar18;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x20) = (int)uVar19;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  func_006589D0(puVar4,0);
  bVar2 = func_00588BF0((int)puVar11,1);
  if (bVar2) {
    puVar4[-0xe] = ALBW_AS_U32((ALBW_AS_F32(puVar4[-0xe]) - DAT_001737f8) + ALBW_AS_F32(_DAT_001737fc));
    func_006589D0(puVar4,4);
  }
  local_34 = s__Actor_BossSand_kcl_001737ff + 1;
  local_38 = iVar10;
  func_004EDB28(puVar4[0xd],(int)&local_38);
  fVar16 = func_0054DE3C(puVar11,0,1);
  puVar4[0xe] = ALBW_AS_U32(fVar16);
  func_00172CC0((int)puVar11);
  objStack_40[0] = puVar4[-0x50];
  func_004EDAD0(*piVar14,objStack_40);
  *(undefined2 *)(*piVar14 + 0x2c) = *(undefined2 *)(puVar4 + -0xee);
  func_004A7F00(*DAT_00173814,*piVar14,0);
  puVar9 = (ushort *)**(undefined4 **)(puVar4[0xc] + 0x20);
  if (puVar9 != (ushort *)0x0) {
    *puVar9 = *puVar9 | 0x400;
  }
  return puVar11;
}

