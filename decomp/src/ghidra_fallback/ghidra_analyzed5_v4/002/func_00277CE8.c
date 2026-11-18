#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001BA1EC(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined DAT_002780cc;
extern int DAT_002780e8;
extern int DAT_0027810c;
extern undefined4 *DAT_00278110;
extern int *DAT_00278114;
extern char s_WaterSurface_1_002780d8[];
extern char s_WaterSurface_2_002780ec[];
extern char s_WaterSurface_3_002780fc[];
extern char s__s__s_bch_002780c0[];
extern char s_animator_00278118[];
extern char s_cf_002780c0[];
extern char s_switch_002780d0[];

// USA 00277CE8 <- EU 00277D10 (Ghidra, non-matching)
// GLOBAL DAT_002780cc undefined
// GLOBAL DAT_002780e8 int
// GLOBAL DAT_0027810c int
// GLOBAL DAT_00278110 undefined4 *
// GLOBAL DAT_00278114 int *
// GLOBAL s_cf_002780c0 string
// GLOBAL s_WaterSurface_1_002780d8 string
// GLOBAL s_WaterSurface_2_002780ec string
// GLOBAL s_WaterSurface_3_002780fc string
// GLOBAL s_animator_00278118 string
// GLOBAL s_switch_002780d0 string

void func_00277CE8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x1d0];
  #define local_1d0 (*(int *)(albw_frame + 0x0))
  #define local_1cc (*(char * *)(albw_frame + 0x4))
  #define aiStack_1c8 ((int *)(albw_frame + 0x8))
  #define auStack_168 ((undefined4 *)(albw_frame + 0x68))
  #define aiStack_11c ((int *)(albw_frame + 0xb4))
  #define aiStack_d0 ((int *)(albw_frame + 0x100))
  #define aiStack_84 ((int *)(albw_frame + 0x14c))
  func_001BA1EC(param_1);
  piVar8 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar8 + 8))(piVar8);
  iVar6 = piVar8[1];
  func_00689794(auStack_168,s__s__s_bch_002780c0,(int)"MapActor" /* EU 002780B4 */,iVar6);
  piVar8 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar8 + 8))(piVar8);
  func_00689794(aiStack_11c,&DAT_002780cc,piVar8[1],iVar6);
  piVar8 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar8 + 8))(piVar8);
  uVar5 = piVar8[1];
  func_00689794(aiStack_d0,&DAT_002780cc,uVar5,iVar6);
  func_00689794(aiStack_84,s_switch_002780d0,uVar5,iVar6);
  iVar6 = DAT_002780e8;
  local_1cc = s_WaterSurface_1_002780d8;
  local_1d0 = DAT_002780e8;
  piVar8 = (int *)(param_1 + 0x40c);
  uVar5 = func_00584C14(*(int *)(param_1 + 0x40c),&local_1d0);
  *(char *)(param_1 + 0x4ac) = (char)uVar5;
  local_1cc = s_WaterSurface_2_002780ec;
  local_1d0 = iVar6;
  uVar5 = func_00584C14(*piVar8,&local_1d0);
  *(char *)(param_1 + 0x4ad) = (char)uVar5;
  local_1cc = s_WaterSurface_3_002780fc;
  local_1d0 = iVar6;
  uVar5 = func_00584C14(*piVar8,&local_1d0);
  *(char *)(param_1 + 0x4ae) = (char)uVar5;
  if (*(char *)(param_1 + 0x418) == '\x02') {
    func_004CEA18(*(int *)(param_1 + 0x40c),0,(uint)*(byte *)(param_1 + 0x4ac));
    func_004CEA18(*piVar8,0,(uint)*(byte *)(param_1 + 0x4ad));
    func_004CEA18(*piVar8,1,(uint)*(byte *)(param_1 + 0x4ae));
    *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = 0;
  }
  else {
    func_004CEA18(*(int *)(param_1 + 0x40c),1,(uint)*(byte *)(param_1 + 0x4ac));
    func_004CEA18(*piVar8,0,(uint)*(byte *)(param_1 + 0x4ad));
    func_004CEA18(*piVar8,0,(uint)*(byte *)(param_1 + 0x4ae));
    iVar7 = DAT_0027810c;
    *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = 1;
    *(undefined2 *)(iVar7 + param_1) = 0xffff;
  }
  puVar2 = func_00504CC0(*DAT_00278110,auStack_168,0xffffffff);
  iVar7 = *(int *)(param_1 + 0x2d0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  piVar8 = DAT_00278114;
  puVar4 = (uint *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    if (iVar7 == 0) {
      local_1cc = s_animator_00278118;
    }
    else {
      (**(code **)(*DAT_00278114 + 8))(DAT_00278114);
      local_1cc = (char *)piVar8[1];
    }
    local_1d0 = iVar6;
    puVar4 = func_0016A2FC(puVar3,1,&local_1d0,1);
  }
  *(uint **)(param_1 + 0x498) = puVar4;
  func_00169608(puVar4,0,aiStack_d0,(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x498),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar4 = (uint *)func_002C11E8(aiStack_1c8,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x498),puVar4);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (uint *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    if (iVar7 == 0) {
      local_1cc = s_animator_00278118;
    }
    else {
      (**(code **)(*piVar8 + 8))(piVar8);
      local_1cc = (char *)piVar8[1];
    }
    local_1d0 = iVar6;
    puVar4 = func_0016A2FC(puVar3,1,&local_1d0,1);
  }
  *(uint **)(param_1 + 0x49c) = puVar4;
  func_00169608(puVar4,0,aiStack_84,(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x49c),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar4 = (uint *)func_002C11E8(aiStack_1c8,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x49c),puVar4);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (uint *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    if (iVar7 == 0) {
      local_1cc = s_animator_00278118;
    }
    else {
      (**(code **)(*piVar8 + 8))(piVar8);
      local_1cc = (char *)piVar8[1];
    }
    local_1d0 = iVar6;
    puVar4 = func_0016A2FC(puVar3,1,&local_1d0,1);
  }
  *(uint **)(param_1 + 0x4a0) = puVar4;
  func_00169688(puVar4,0,aiStack_11c,(int)puVar2);
  func_0016A02C(*(int *)(param_1 + 0x4a0),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar4 = (uint *)func_002C11E8(aiStack_1c8,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x4a0),puVar4);
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x4a0) + 0x14);
    if (*(float *)(iVar6 + 8) != *(float *)(iVar6 + 0x14)) {
      *(float *)(iVar6 + 8) = *(float *)(iVar6 + 0x14);
      *(undefined1 *)(iVar6 + 0x26) = 1;
    }
    func_00168E9C(*(int **)(param_1 + 0x4a0),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  return;
}

