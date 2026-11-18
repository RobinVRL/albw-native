#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DB90(void);
extern int func_001BBF24(int param_1,uint param_2);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_002761A0(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00277240(undefined4 *param_1);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004AC884(int param_1,char *param_2);
extern int func_004D15E8(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_0052A0A0(int param_1,undefined4 *param_2,int *param_3);
extern int func_00556EAC(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern undefined4 *DAT_004abd90;
extern uint DAT_004abd9c;
extern int *DAT_004abda0;
extern int *DAT_004abda4;
extern uint DAT_004abdfc;
extern int *DAT_004abe00;
extern int *DAT_004abe04;
extern int DAT_004abe08;
extern int *DAT_004abe0c;
extern int *DAT_004abe10;
extern int DAT_004abe14;
extern undefined4 DAT_004abe18;
extern int DAT_004abfc4;
extern int DAT_004abfc8;
extern int DAT_004abfcc;
extern undefined4 *DAT_004abfd0;
extern int DAT_004abfd4;
extern char s_Course_Demo050_Common_bch_004abdc4[];
extern char s_Course_Demo090_Common_bch_004abde0[];
extern char s_Course_dgn_EastCommon_bch_004abda8[];
extern char s_MapMgr_004abd94[];
extern char s_cf_004abda8[];
extern char s_cf_004abdc4[];
extern char s_cf_004abde0[];

// USA 004ABA98 <- EU 004ABA70 (Ghidra, non-matching)
// GLOBAL DAT_004abd90 undefined4 *
// GLOBAL DAT_004abd9c uint
// GLOBAL DAT_004abda0 int *
// GLOBAL DAT_004abda4 int *
// GLOBAL DAT_004abdfc uint
// GLOBAL DAT_004abe00 int *
// GLOBAL DAT_004abe04 int *
// GLOBAL DAT_004abe08 int
// GLOBAL DAT_004abe0c int *
// GLOBAL DAT_004abe10 int *
// GLOBAL DAT_004abe14 int
// GLOBAL DAT_004abe18 undefined4
// GLOBAL DAT_004abfc4 int
// GLOBAL DAT_004abfc8 int
// GLOBAL DAT_004abfcc int
// GLOBAL DAT_004abfd0 undefined4 *
// GLOBAL DAT_004abfd4 int
// GLOBAL s_cf_004abdc4 string
// GLOBAL s_cf_004abde0 string
// GLOBAL s_cf_004abda8 string
// GLOBAL s_MapMgr_004abd94 string

/* WARNING: Variable defined which should be unmapped: objStack_90 */

void func_004ABA98(int param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int extraout_r1;
  int iVar8;
  int extraout_r1_00;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_90 ((uint *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x54))
  #define local_38 (*(uint *)(albw_frame + 0x58))
  #define local_34 (*(int * *)(albw_frame + 0x5c))
  #define local_30 (*(uint *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  piVar3 = (int *)func_0010DB90();
  uVar1 = DAT_004abd9c;
  local_2c = s_MapMgr_004abd94;
  iVar10 = 1;
  objStack_90[0] = 0;
  local_30 = DAT_004abd9c;
  piVar3 = func_004A107C(0,(int)&local_30,piVar3,1,0);
  if (piVar3 == (int *)0x0) {
    objStack_90[0x14] = 1;
  }
  else {
    objStack_90[0x14] = func_0010983C(*DAT_004abd90,piVar3);
  }
  *(undefined4 *)(param_1 + 0x76a4) = 0;
  *(undefined4 *)(param_1 + 0x76a8) = 0;
  piVar7 = DAT_004abda4;
  pcVar4 = (char *)DAT_004abda0;
  iVar12 = *DAT_004abda0;
  pcVar13 = (char *)(iVar12 + 0x18);
  uVar15 = (uint)*pcVar13;
  uVar14 = *(uint *)(iVar12 + 0x1c);
  if (uVar15 == 8) {
    piVar16 = (int *)(param_1 + 0x772c);
    *piVar16 = 0;
    if (uVar14 == 2) {
      pcVar4 = s_Course_dgn_EastCommon_bch_004abda8;
    }
    local_34 = piVar7;
    local_38 = uVar1;
    if (uVar14 != 2) {
      if (uVar14 == 4) {
        pcVar4 = s_Course_Demo050_Common_bch_004abdc4;
      }
      else {
        pcVar4 = (char *)local_34;
        if (uVar14 == 8) {
          local_34 = (int *)s_Course_Demo090_Common_bch_004abde0;
          pcVar4 = (char *)local_34;
        }
      }
    }
    local_34 = (int *)pcVar4;
    if ((char)*local_34 != '\0') {
      objStack_90[0] = uVar1;
      objStack_90[1] = (uint)piVar7;
      objStack_90[2] = 0;
      objStack_90[3] = 0;
      objStack_90[4] = 0x20;
      objStack_90[5] = 0;
      objStack_90[7] = 0;
      objStack_90[8] = 0;
      objStack_90[0xc] = DAT_004abdfc;
      (*(undefined1 *)((char *)&objStack_90[0xd] + 0)) = 7;
      (*(undefined1 *)((char *)&objStack_90[0xd] + 1)) = 4;
      (*(undefined1 *)((char *)&objStack_90[0xd] + 2)) = 0;
      (*(undefined1 *)((char *)&objStack_90[0xd] + 3)) = 0;
      objStack_90[6] = 0;
      objStack_90[0xb] = uVar1;
      objStack_90[9] = 0;
      objStack_90[0x10] = (uint)local_34;
      (*(undefined1 *)((char *)&objStack_90[0xe] + 0)) = 0;
      (*(undefined1 *)((char *)&objStack_90[0x13] + 0)) = 1;
      objStack_90[10] = 0;
      objStack_90[0xf] = uVar1;
      objStack_90[0x11] = 0;
      objStack_90[0x12] = 0;
      objStack_90[0x12] = (uint)func_001E2444(*DAT_004abe00,(int *)&local_38,-1,iVar10);
      if ((int *)objStack_90[0x12] != (int *)0x0) {
        puVar5 = func_00504D48(*DAT_004abe04,(int)objStack_90);
        *piVar16 = (int)puVar5;
      }
    }
    if (*piVar16 != 0) {
      *(int *)(DAT_004abe08 + param_1) = *piVar16;
    }
  }
  bVar2 = func_00556EAC(*DAT_004abe0c,0xa6);
  piVar7 = DAT_004abe10;
  if (bVar2) {
    *(undefined2 *)(*(int *)(*DAT_004abe10 + 0x3dbe4) + 0x30) = 0;
  }
  func_001BBF24(*(int *)(param_1 + 0x40),uVar14);
  if (0x3f < uVar15) {
    uVar15 = 2;
  }
  *(uint *)(DAT_004abe14 + param_1) = uVar14;
  piVar16 = (int *)(param_1 + 0x44 + uVar15 * 0x16c);
  if (((int)uVar14 < 0) || (*piVar16 <= (int)uVar14)) {
    uVar14 = 0;
  }
  puVar5 = (undefined4 *)piVar16[0x3b];
  if (uVar14 < (uint)piVar16[0x3a]) {
    puVar5 = puVar5 + uVar14 * 8;
  }
  *(undefined4 *)(param_1 + 0x5b54) = *puVar5;
  *(undefined4 *)(param_1 + 0x5b5c) = puVar5[2];
  *(undefined4 *)(param_1 + 0x5b64) = puVar5[4];
  *(undefined4 *)(param_1 + 0x5b6c) = puVar5[6];
  func_004AC884(param_1,pcVar13);
  piVar16 = (int *)(param_1 + 0x5b58);
  func_0052A0A0(*(int *)(param_1 + 0x40),(undefined4 *)(param_1 + 0x5b44),piVar16);
  uVar9 = DAT_004abe18;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  puVar6 = (undefined4 *)func_0010BAB4(uVar9);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_00277240(puVar6);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar5;
  local_3c = (int)*(short *)(iVar12 + 0x20);
  func_002761A0(*(int *)(param_1 + 0x38),&local_3c,piVar16,iVar10);
  if (local_3c < 0) {
    iVar10 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar10 + 0xe3c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar10 + 0xe40);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar10 + 0xe44);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar10 + 0xe48);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar10 + 0xe4c);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar10 + 0xe50);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar10 + 0xe54);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar10 + 0xe58);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar10 + 0xe5a);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar10 + 0xe5c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar10 + 0xe5e);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar10 + 0xe60);
    iVar10 = DAT_004abfc8;
    if (*(char *)(DAT_004abfc4 + param_1) != '\0') {
      *(undefined1 *)(DAT_004abfc4 + param_1) = 0;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar10 + param_1);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x770c);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x7710);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x7714);
      iVar10 = DAT_004abfcc;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x7710);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
      *(short *)(param_1 + 0x2e) = (short)*(undefined4 *)(iVar10 + param_1);
      *(undefined2 *)(param_1 + 0x30) = 0xffff;
    }
  }
  else {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x38) + 0xe3c + local_3c * 0x28);
    *(undefined4 *)(param_1 + 0x10) = *puVar5;
    *(undefined4 *)(param_1 + 0x14) = puVar5[1];
    *(undefined4 *)(param_1 + 0x18) = puVar5[2];
    *(undefined4 *)(param_1 + 0x1c) = puVar5[3];
    *(undefined4 *)(param_1 + 0x20) = puVar5[4];
    *(undefined4 *)(param_1 + 0x24) = puVar5[5];
    *(undefined4 *)(param_1 + 0x28) = puVar5[6];
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(puVar5 + 7);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)puVar5 + 0x1e);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar5 + 8);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((int)puVar5 + 0x22);
    *(undefined4 *)(param_1 + 0x34) = puVar5[9];
  }
  puVar5 = DAT_004abfd0;
  if (((int)*pcVar13 - 9U < 0xd) || (0x23 < *pcVar13)) {
    if (*(short *)(param_1 + 0x2c) != 1) goto LAB_004abf28;
  }
  else {
    iVar10 = *piVar7;
    if (iVar10 != 0) {
      piVar7 = (int *)func_005841A8(iVar10,*DAT_004abfd0,*(int **)(DAT_004abfd4 + iVar10));
      iVar8 = extraout_r1;
      if (*(int **)(iVar10 + 0x3dbc8) != piVar7) {
        do {
          if (*piVar7 != 0) {
            func_004D15E8(*piVar7,iVar8);
          }
          piVar7 = (int *)func_005841A8(iVar10,*puVar5,piVar7 + 1);
          iVar8 = extraout_r1_00;
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar7);
      }
    }
  }
  uVar9 = *(undefined4 *)(iVar12 + 0x1c);
  uVar11 = *(undefined4 *)(iVar12 + 0x20);
  iVar10 = *DAT_004abda0;
  *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)pcVar13;
  *(undefined4 *)(iVar10 + 0x28) = uVar9;
  *(undefined4 *)(iVar10 + 0x2c) = uVar11;
LAB_004abf28:
  (**(code **)(*piVar3 + 0x14))(piVar3);
  if (objStack_90[0x14] != 1) {
    func_0010983C(*DAT_004abd90,objStack_90[0x14]);
  }
  return;
}

