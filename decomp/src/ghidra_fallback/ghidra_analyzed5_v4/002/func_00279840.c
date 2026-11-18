#include "ghidra_types.h"

extern int func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern int func_00277CE8(int param_1);
extern int func_00278130(int param_1);
extern int func_00278BE0(int param_1);
extern int func_00278FF0(int param_1);
extern int func_00523510(int param_1);
extern int func_0058FB14(undefined4 *param_1);
extern int func_006916F0(int *param_1,int *param_2);
extern int func_00691884(int *param_1,int *param_2);
extern int DAT_00279b04;
extern int DAT_00279b08;
extern undefined DAT_00279ba4;
extern char s_MapActor_00279af8[];
extern char s_WaterSurface_33_00279b7c[];
extern char s_dgn_HagureSurfaceB3_00279b68[];
extern char s_dgn_WaterSurfaceB1Na_00279b20[];
extern char s_dgn_WaterSurfaceB1Nb_00279b38[];
extern char s_dgn_WaterSurfaceB1Nc_00279b50[];
extern char s_dgn_WaterSurfaceEnt_00279b0c[];
extern char s_dgn_WaterSurfaceMain_00279b8c[];

// USA 00279840 <- EU 00279868 (Ghidra, non-matching)
// GLOBAL DAT_00279b04 int
// GLOBAL DAT_00279b08 int
// GLOBAL DAT_00279ba4 undefined
// GLOBAL s_MapActor_00279af8 string
// GLOBAL s_WaterSurface_33_00279b7c string
// GLOBAL s_dgn_HagureSurfaceB3_00279b68 string
// GLOBAL s_dgn_WaterSurfaceB1Na_00279b20 string
// GLOBAL s_dgn_WaterSurfaceB1Nb_00279b38 string
// GLOBAL s_dgn_WaterSurfaceB1Nc_00279b50 string
// GLOBAL s_dgn_WaterSurfaceEnt_00279b0c string
// GLOBAL s_dgn_WaterSurfaceMain_00279b8c string

int * func_00279840(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_44 (*(char * *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(char * *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  iVar6 = DAT_00279b04;
  local_2c = s_MapActor_00279af8;
  local_30 = DAT_00279b04;
  piVar3 = func_001BA8C4(param_1,param_2,0,(int)&local_30);
  iVar5 = DAT_00279b08;
  *piVar3 = DAT_00279b08;
  piVar3[200] = iVar5 + 0x5c;
  *(undefined2 *)(piVar3 + 0x124) = 0;
  *(undefined2 *)((int)piVar3 + 0x492) = *(undefined2 *)((int)param_2 + 0x2e);
  piVar3[0x125] = 0;
  piVar3[0x126] = 0;
  piVar3[0x127] = 0;
  piVar3[0x128] = 0;
  piVar3[0x129] = 0;
  *(undefined1 *)(piVar3 + 0x12a) = 0;
  *(undefined1 *)((int)piVar3 + 0x4a9) = 0;
  *(undefined1 *)((int)piVar3 + 0x4aa) = 0;
  piVar4 = (int *)param_2[0xaf];
  local_70 = iVar6;
  local_6c = s_dgn_WaterSurfaceEnt_00279b0c;
  iVar5 = func_00691884(piVar4,&local_70);
  if (iVar5 == 0) {
    local_44 = s_dgn_WaterSurfaceB1Na_00279b20;
    local_48 = iVar6;
    iVar5 = func_00691884(piVar4,&local_48);
    if (iVar5 == 0) {
      local_3c = s_dgn_WaterSurfaceB1Nb_00279b38;
      local_40 = iVar6;
      iVar5 = func_00691884(piVar4,&local_40);
      if (iVar5 == 0) {
        local_34 = s_dgn_WaterSurfaceB1Nc_00279b50;
        local_38 = iVar6;
        iVar5 = func_00691884(piVar4,&local_38);
        if (iVar5 == 0) {
          local_5c = s_dgn_HagureSurfaceB3_00279b68;
          local_60 = iVar6;
          iVar5 = func_00691884(piVar4,&local_60);
          bVar2 = false;
          if (iVar5 == 0) goto LAB_00279988;
        }
      }
    }
  }
  bVar2 = true;
LAB_00279988:
  if (bVar2) {
    uVar9 = 3;
  }
  else {
    local_5c = s_WaterSurface_33_00279b7c;
    local_60 = iVar6;
    iVar5 = func_00691884(piVar4,&local_60);
    if (iVar5 == 0) {
      local_5c = s_dgn_WaterSurfaceMain_00279b8c;
      local_60 = iVar6;
      iVar5 = func_006916F0(piVar4,&local_60);
      uVar9 = 0;
      if (iVar5 == 0) {
        local_5c = &DAT_00279ba4;
        local_60 = iVar6;
        iVar6 = func_006916F0(piVar4,&local_60);
        if (iVar6 != 0) {
          uVar9 = 1;
        }
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 4;
    }
  }
  *(undefined1 *)((int)piVar3 + 0x4ab) = uVar9;
  *(undefined1 *)((int)piVar3 + 0x4b3) = 0;
  *(undefined2 *)(piVar3 + 0x12d) = 0;
  *(undefined2 *)((int)piVar3 + 0x4b6) = 0xffff;
  *(undefined2 *)(piVar3 + 0x12e) = 0xffff;
  *(undefined2 *)((int)piVar3 + 0x4ba) = 0x20;
  func_0058FB14(piVar3 + 299);
  cVar1 = *(char *)((int)piVar3 + 0x4ab);
  if (cVar1 == '\x01') {
    func_00278130((int)piVar3);
  }
  else if (cVar1 == '\x02') {
    func_00278FF0((int)piVar3);
  }
  else if (cVar1 == '\x03') {
    func_00278BE0((int)piVar3);
  }
  else if (cVar1 == '\x04') {
    func_00277CE8((int)piVar3);
  }
  uVar8 = 0;
  while( true ) {
    uVar7 = *(uint *)(piVar3[0x103] + 0x5c);
    if ((int)uVar7 <= (int)uVar8) break;
    if (uVar8 < uVar7) {
      iVar6 = *(int *)(*(int *)(piVar3[0x103] + 100) + uVar8 * 4);
    }
    else {
      iVar6 = 0;
    }
    uVar7 = func_00523510(iVar6);
    if (uVar7 == 0) {
      *(undefined1 *)(iVar6 + 0x87) = 0x73;
      *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) & 0xf807ffff | 0x3980000;
    }
    uVar8 = uVar8 + 1;
  }
  return piVar3;
}

