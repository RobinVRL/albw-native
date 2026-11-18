#include "ghidra_types.h"

extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_00178CD8(int param_1,uint *param_2,int *param_3);
extern int func_00179104(int param_1,uint *param_2,uint *param_3);
extern int func_00582328(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_00582858(uint *param_1,uint param_2);
extern int func_00582888(int param_1,uint param_2);
extern int *DAT_00179b4c;
extern int DAT_00179b50;
extern char s_ItemNameUpper_00179ba8[];
extern char s_ItemName_00179bb8[];
extern char s_LocationNameUpper_00179b84[];
extern char s_LocationName_00179b98[];
extern char s_NPCName_00179b54[];
extern char s_sys_coloring_end_00179b70[];
extern char s_sys_coloring_start_00179b5c[];

// USA 0017988C <- EU 0017988C (Ghidra, non-matching)
// GLOBAL DAT_00179b4c int *
// GLOBAL DAT_00179b50 int
// GLOBAL s_ItemNameUpper_00179ba8 string
// GLOBAL s_ItemName_00179bb8 string
// GLOBAL s_LocationNameUpper_00179b84 string
// GLOBAL s_LocationName_00179b98 string
// GLOBAL s_NPCName_00179b54 string
// GLOBAL s_sys_coloring_end_00179b70 string
// GLOBAL s_sys_coloring_start_00179b5c string

uint * func_0017988C(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_00179b50;
  bVar8 = *(char *)(param_4 + 9) == '\x01';
  sVar1 = *(short *)(param_4 + 4);
  uVar7 = (uint)*(byte *)(param_4 + 8);
  iVar6 = *DAT_00179b4c;
  bVar9 = *(char *)(param_4 + 10) != '\x01';
  if (sVar1 == 0) {
    local_24 = s_NPCName_00179b54;
    local_28 = DAT_00179b50;
    puVar3 = (uint *)func_00582328(iVar6,&local_28,iVar6,param_4);
    puVar4 = func_00179104(param_1,param_2,param_3);
    if (puVar3 == (uint *)0x0) {
      return puVar4;
    }
    uVar5 = func_00582888((int)puVar3,uVar7);
    puVar3 = (uint *)func_00582858(puVar3,uVar7);
    if (puVar3 == (uint *)0x0) {
      return puVar4;
    }
    if (bVar8) {
      local_2c = s_sys_coloring_start_00179b5c;
      local_30 = iVar2;
      puVar4 = func_00178CD8(param_1,puVar4,&local_30);
      puVar4 = func_00178AE8(param_1,puVar4,puVar3,uVar5);
      local_2c = s_sys_coloring_end_00179b70;
      local_30 = iVar2;
      puVar4 = func_00178CD8(param_1,puVar4,&local_30);
      return puVar4;
    }
  }
  else {
    if (sVar1 == 1) {
      local_30 = DAT_00179b50;
      if (bVar9) {
        local_2c = s_LocationName_00179b98;
        puVar3 = (uint *)func_00582328(iVar6,&local_30,iVar6,param_4);
      }
      else {
        local_2c = s_LocationNameUpper_00179b84;
        puVar3 = (uint *)func_00582328(iVar6,&local_30,iVar6,param_4);
      }
      puVar4 = func_00179104(param_1,param_2,param_3);
      if (puVar3 == (uint *)0x0) {
        return puVar4;
      }
      uVar5 = func_00582888((int)puVar3,uVar7);
      puVar3 = (uint *)func_00582858(puVar3,uVar7);
    }
    else {
      if (sVar1 != 2) {
        return param_3;
      }
      local_30 = DAT_00179b50;
      if (bVar9) {
        local_2c = s_ItemName_00179bb8;
        puVar3 = (uint *)func_00582328(iVar6,&local_30,iVar6,param_4);
      }
      else {
        local_2c = s_ItemNameUpper_00179ba8;
        puVar3 = (uint *)func_00582328(iVar6,&local_30,iVar6,param_4);
      }
      puVar4 = func_00179104(param_1,param_2,param_3);
      if (puVar3 == (uint *)0x0) {
        return puVar4;
      }
      uVar5 = func_00582888((int)puVar3,uVar7);
      puVar3 = (uint *)func_00582858(puVar3,uVar7);
    }
    if (puVar3 == (uint *)0x0) {
      return puVar4;
    }
    if (bVar8) {
      local_2c = s_sys_coloring_start_00179b5c;
      local_30 = iVar2;
      puVar4 = func_00178CD8(param_1,puVar4,&local_30);
      puVar4 = func_00178AE8(param_1,puVar4,puVar3,uVar5);
      local_2c = s_sys_coloring_end_00179b70;
      local_30 = iVar2;
      puVar4 = func_00178CD8(param_1,puVar4,&local_30);
      return puVar4;
    }
  }
  puVar4 = func_00178AE8(param_1,puVar4,puVar3,uVar5);
  return puVar4;
}

