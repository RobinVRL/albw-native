#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined4 uRam0016d370;
extern uint DAT_0016d32c;
extern undefined4 *DAT_0016d330;
extern uint DAT_0016d334;
extern int *DAT_0016d340;
extern uint DAT_0016d344;
extern char s_Environment_PEMorningFog_bch_0016d348[];
extern char s_Filter_0016d324[];
extern char s_World_0016d338[];
extern char s__scroll_0016d368[];
extern char s_cf_0016d348[];
extern char s_cf_0016d368[];

// USA 0016CF38 <- EU 0016CF38 (Ghidra, non-matching)
// GLOBAL DAT_0016d32c uint
// GLOBAL DAT_0016d330 undefined4 *
// GLOBAL DAT_0016d334 uint
// GLOBAL DAT_0016d340 int *
// GLOBAL DAT_0016d344 uint
// GLOBAL UNK_0016d370 uint
// GLOBAL s_cf_0016d368 string
// GLOBAL s_cf_0016d348 string
// GLOBAL s_Filter_0016d324 string
// GLOBAL s_World_0016d338 string

/* WARNING: Variable defined which should be unmapped: objStack_88 */

void func_0016CF38(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int unaff_r8;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_48 (*(uint *)(albw_frame + 0x48))
  #define local_44 (*(char * *)(albw_frame + 0x4c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x50))
  #define local_3c (*(undefined1 *)(albw_frame + 0x54))
  #define local_38 (*(uint *)(albw_frame + 0x58))
  #define local_34 (*(char * *)(albw_frame + 0x5c))
  *(undefined1 *)(param_1 + 0xd) = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0x10))((int *)param_1[9]);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[9] = 0;
  }
  uVar6 = DAT_0016d32c;
  local_34 = s_Filter_0016d324;
  local_38 = DAT_0016d32c;
  objStack_88[0] = 0;
  piVar2 = func_0010B954(0,(int)&local_38,param_3,1,0);
  if (piVar2 == (int *)0x0) {
    unaff_r8 = 1;
  }
  param_1[9] = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    unaff_r8 = func_0010983C(*DAT_0016d330,piVar2);
  }
  uVar9 = DAT_0016d334;
  objStack_88[0] = uVar6;
  objStack_88[1] = DAT_0016d334;
  objStack_88[2] = 0;
  objStack_88[3] = 0;
  objStack_88[4] = 0x20;
  objStack_88[5] = 0;
  objStack_88[7] = 0;
  objStack_88[0xc] = (uint)s_World_0016d338;
  objStack_88[8] = 0;
  objStack_88[6] = 0;
  objStack_88[9] = 0;
  objStack_88[10] = 0;
  objStack_88[0xb] = uVar6;
  objStack_88[0xf] = uVar6;
  local_48 = param_2[1];
  local_40 = 0;
  local_3c = 0;
  objStack_88[0xd] = 0x100ff07;
  (*(undefined1 *)((char *)&objStack_88[0xe] + 0)) = 1;
  local_44 = (char *)param_1[9];
  puVar3 = func_00504D48(*DAT_0016d340,(int)objStack_88);
  param_1[1] = (int)puVar3;
  if (puVar3[0x32] == 0) {
    objStack_88[4] = 0;
  }
  else {
    objStack_88[4] = *(uint *)puVar3[0x34];
  }
  objStack_88[0] = uVar6;
  objStack_88[1] = uVar9;
  objStack_88[5] = 0;
  objStack_88[6] = 0;
  objStack_88[2] = uVar6;
  objStack_88[3] = uVar9;
  (*(undefined1 *)((char *)&objStack_88[0xe] + 0)) = 1;
  objStack_88[0xc] = 0;
  objStack_88[9] = 0;
  objStack_88[0xd] = 0;
  objStack_88[7] = CONCAT22((*(undefined2 *)((char *)&objStack_88[7] + 2)),0x100);
  (*(undefined1 *)((char *)&objStack_88[0xe] + 1)) = 0xf0;
  objStack_88[8] = 0;
  objStack_88[0xb] = 0;
  objStack_88[10] = 0;
  objStack_88[7] = CONCAT31((*(undefined4 *)((char *)&objStack_88[7] + 1) & 0xFFFFFF),1);
  piVar2 = func_002C2D00((int *)objStack_88);
  *param_1 = (int)piVar2;
  uVar9 = piVar2[0x59];
  piVar2[0x59] = uVar9 | 1;
  *(uint *)(*param_1 + 0x164) = uVar9 | 0x90001;
  func_004CE68C(*param_1,0,param_1[2]);
  uVar14 = (ulonglong)DAT_0016d344;
  *(uint *)(*param_1 + 0x134) = DAT_0016d344;
  func_004CF478(*param_1,0);
  puVar4 = (uint *)func_00584CA8(*param_1,0,0);
  uVar9 = *puVar4;
  param_1[4] = uVar9;
  param_1[5] = uVar9;
  iVar5 = param_1[2];
  *(undefined1 *)(iVar5 + 0x3d) = 1;
  *(uint *)(iVar5 + 0x39) = uVar9 & 0xffffff;
  local_44 = s_Environment_PEMorningFog_bch_0016d348;
  local_48 = uVar6;
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*param_2 + 8))(param_2);
  pcVar13 = (char *)param_2[1];
  (**(code **)(local_48 + 8))(&local_48);
  if (pcVar13 == local_44) {
LAB_0016d374:
    uVar1 = 1;
  }
  else {
    iVar5 = 0;
    do {
      if (*(char *)(param_2[1] + iVar5) != local_44[iVar5]) break;
      if (*(char *)(param_2[1] + iVar5) == '\0') goto LAB_0016d374;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x37) = uVar1;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  if (*(int *)(param_1[1] + 200) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1[1] + 0xd0);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 8) + 0x94);
  if ((iVar5 != 0) &&
     (uVar6 = func_00564ABC((short *)(iVar5 + 4),(uint *)s__scroll_0016d368,7),
     uVar6 != uRam0016d370)) {
    *(undefined1 *)((int)param_1 + 0x36) = 1;
    iVar12 = *(int *)(*(int *)(*param_1 + 0x20) + 4);
    iVar5 = 0;
    if (0 < iVar12) {
      do {
        iVar7 = iVar5 + 1;
        puVar10 = (ushort *)(**(int **)(*param_1 + 0x20) + iVar5 * 0x154);
        *puVar10 = *puVar10 | 0x3000;
        iVar5 = iVar7;
      } while (iVar7 < iVar12);
    }
  }
  iVar12 = (int)uVar14;
  iVar5 = *(int *)(param_1[1] + 0xd4);
  if (0 < iVar5) {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar3 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar3 = func_0016A2FC(puVar8,iVar5,param_2,1);
    }
    uVar6 = 0;
    param_1[3] = (int)puVar3;
    do {
      uVar11 = *(uint *)(param_1[1] + 0xd4);
      uVar9 = uVar11;
      if (uVar6 < uVar11) {
        uVar9 = *(uint *)(param_1[1] + 0xdc);
      }
      if (uVar6 < uVar11) {
        piVar2 = *(int **)(uVar9 + uVar6 * 4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      func_0016A2A4((uint *)param_1[3],uVar6,piVar2);
      iVar12 = (int)uVar14;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
    func_0016A02C(param_1[3],-1,(int *)0xffffffff,*param_1);
  }
  param_1[7] = 0;
  param_1[8] = iVar12;
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  (**(code **)(*(int *)param_1[9] + 0x14))((int *)param_1[9]);
  if (unaff_r8 != 1) {
    func_0010983C(*DAT_0016d330,unaff_r8);
  }
  return;
}

