#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00173cd0;
extern float DAT_00173cd4;
extern int *DAT_00173cd8;
extern undefined4 DAT_00173cdc;
extern undefined4 DAT_00173ce0;
extern float DAT_00173ce4;
extern int *DAT_00173cfc;
extern undefined4 DAT_00173e9c;
extern int *DAT_00173ea0;
extern int DAT_00173ea4;
extern int DAT_00173ea8;
extern char s_Actor_DoorBoss_kcl_00173ce8[];
extern char s_Actor_DoorBoss_open_kcl_00173d00[];
extern char s_cf_00173ce8[];
extern char s_cf_00173d00[];

// USA 001739B0 <- EU 001739B0 (Ghidra, non-matching)
// GLOBAL DAT_00173cd0 int
// GLOBAL DAT_00173cd4 float
// GLOBAL DAT_00173cd8 int *
// GLOBAL DAT_00173cdc undefined4
// GLOBAL DAT_00173ce0 undefined4
// GLOBAL DAT_00173ce4 float
// GLOBAL DAT_00173cfc int *
// GLOBAL DAT_00173e9c undefined4
// GLOBAL DAT_00173ea0 int *
// GLOBAL DAT_00173ea4 int
// GLOBAL DAT_00173ea8 int
// GLOBAL s_cf_00173ce8 string
// GLOBAL s_cf_00173d00 string

int * func_001739B0(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_e4 (*(uint * *)(albw_frame + 0xc))
  #define local_e0 (*(int *)(albw_frame + 0x10))
  #define local_dc ((uint *)(albw_frame + 0x14))
  #define uStack_9d (*(undefined1 *)(albw_frame + 0x53))
  #define local_98 (*(float *)(albw_frame + 0x58))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define fStack_88 (*(float *)(albw_frame + 0x68))
  #define local_84 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x70))
  #define local_7c (*(undefined4 *)(albw_frame + 0x74))
  #define fStack_78 (*(float *)(albw_frame + 0x78))
  #define local_74 (*(float *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define local_6c (*(uint * *)(albw_frame + 0x84))
  #define local_60 (*(uint *)(albw_frame + 0x90))
  #define afStack_5c ((float *)(albw_frame + 0x94))
  #define local_50 (*(float *)(albw_frame + 0xa0))
  #define local_4c (*(uint * *)(albw_frame + 0xa4))
  #define local_48 ((uint *)(albw_frame + 0xa8))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xc4))
  #define local_28 (*(uint * *)(albw_frame + 0xc8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = func_001E4414(param_1,param_2);
  fVar12 = DAT_00173cd4;
  iVar4 = DAT_00173cd0;
  piVar3[200] = DAT_00173cd0 + 0x5c;
  *piVar3 = iVar4;
  *(undefined1 *)(piVar3 + 0x126) = 0;
  piVar3[0x127] = 0;
  piVar3[0x129] = 100;
  piVar3[0x128] = 0;
  piVar3[0x12a] = (int)ALBW_AS_U32(fVar12);
  piVar3[299] = 0;
  piVar3[300] = 0;
  piVar3[0x12d] = (int)ALBW_AS_U32(fVar12);
  piVar3[0x12e] = 0;
  piVar7 = piVar3 + 0x127;
  *(undefined1 *)(piVar3 + 0x12f) = 0;
  bVar2 = func_00588BF0((int)piVar3,1);
  if (bVar2) {
    *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
  }
  else {
    func_003249E0((int)piVar3,0);
    func_00324964((int)piVar3);
    iVar4 = func_0014E428((int)piVar3,1,0,0,1,0,0);
    piVar3[0x11f] = iVar4;
    iVar4 = func_00581D48(*DAT_00173cd8,(float *)(piVar3 + 0xf4));
    piVar3[0x12e] = iVar4;
    func_001E3FD8((int)piVar3);
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    piVar3[0x121] = (int)puVar6;
    uVar1 = DAT_00173ce0;
    piVar8 = piVar3 + 0x121;
    local_74 = DAT_00173ce4;
    uVar11 = DAT_00173cdc;
    if (puVar6 != (undefined4 *)0x0) {
      local_e0 = 0x40;
      uStack_9d = 0;
      (*(undefined1 *)((char *)&local_dc[0] + 0)) = 0;
      local_e8 = DAT_00173ce0;
      local_70 = DAT_00173ce4;
      local_6c = (uint *)s_Actor_DoorBoss_kcl_00173ce8;
      local_e4 = local_dc;
      (**(code **)((int)ALBW_AS_U32(DAT_00173ce4) + 8))(&local_70);
      uVar9 = 0;
      do {
        if (*(char *)((int)local_6c + uVar9) == '\0') {
          if ((int)uVar9 < 0x40001) goto LAB_00173b4c;
          break;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 0x40001);
      uVar9 = 0;
LAB_00173b4c:
      if (local_e0 <= (int)uVar9) {
        uVar9 = local_e0 - 1;
      }
      (**(code **)((int)ALBW_AS_U32(local_70) + 8))(&local_70);
      func_0010E3C4(local_dc,local_6c,uVar9);
      *(undefined1 *)((int)local_dc + uVar9) = 0;
      func_004EDB28(piVar3[0x121],(int)&local_e8);
      local_98 = fVar12;
      local_94 = uVar11;
      local_90 = uVar11;
      local_8c = uVar11;
      fStack_88 = fVar12;
      local_84 = uVar11;
      local_80 = uVar11;
      local_7c = uVar11;
      fStack_78 = fVar12;
      func_00491624(afStack_5c,0,piVar3[0xfa],0);
      func_0011549C(&local_98,&local_98,afStack_5c);
      func_00435ED0(*(int *)(*piVar8 + 0x14),&local_98);
      func_0043625C(*(int **)(*piVar8 + 0x14),piVar3 + 0xf4);
      func_0043610C(*(int *)(*piVar8 + 0x14),(float *)(local_28 + 4));
      local_60 = piVar3[0xb3];
      func_004EDAD0(*piVar8,&local_60);
      *(short *)(*piVar8 + 0x2c) = (short)piVar3[0x15];
      func_004ED9C8(*piVar8);
      func_004A879C(*DAT_00173cfc,*piVar8,0);
    }
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = func_004EDC9C(puVar5);
    }
    piVar3[0x127] = (int)puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      local_e0 = 0x40;
      uStack_9d = 0;
      (*(undefined1 *)((char *)&local_dc[0] + 0)) = 0;
      local_e8 = uVar1;
      local_50 = local_74;
      local_4c = (uint *)s_Actor_DoorBoss_open_kcl_00173d00;
      local_e4 = local_dc;
      (**(code **)((int)ALBW_AS_U32(local_74) + 8))(&local_50);
      uVar9 = 0;
      do {
        if (*(char *)((int)local_4c + uVar9) == '\0') {
          if ((int)uVar9 < 0x40001) goto LAB_00173d24;
          break;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 0x40001);
      uVar9 = 0;
LAB_00173d24:
      if (local_e0 <= (int)uVar9) {
        uVar9 = local_e0 - 1;
      }
      (**(code **)((int)ALBW_AS_U32(local_50) + 8))(&local_50);
      func_0010E3C4(local_dc,local_4c,uVar9);
      *(undefined1 *)((int)local_dc + uVar9) = 0;
      func_004EDB28(piVar3[0x127],(int)&local_e8);
      local_98 = fVar12;
      local_94 = uVar11;
      local_90 = uVar11;
      local_8c = uVar11;
      fStack_88 = fVar12;
      local_84 = uVar11;
      local_80 = uVar11;
      local_7c = uVar11;
      fStack_78 = fVar12;
      func_00491624(&local_74,0,piVar3[0xfa],0);
      func_0011549C(&local_98,&local_98,&local_74);
      func_00435ED0(*(int *)(*piVar7 + 0x14),&local_98);
      func_0043625C(*(int **)(*piVar7 + 0x14),piVar3 + 0xf4);
      func_0043610C(*(int *)(*piVar7 + 0x14),(float *)(local_28 + 4));
      local_48[0] = piVar3[0xb3];
      func_004EDAD0(*piVar7,local_48);
      *(short *)(*piVar7 + 0x2c) = (short)piVar3[0x15];
      func_004ED9C8(*piVar7);
      func_004A879C(*DAT_00173cfc,*piVar7,0);
      *(undefined1 *)(*piVar7 + 0x44) = 0;
    }
    func_001E40F4((int)piVar3,1);
    func_00169678((int)piVar3,0,DAT_00173e9c);
    func_001E4378((int)piVar3);
    if (*DAT_00173ea0 != 0) {
      if (*(char *)(*DAT_00173ea0 + 0x18) == '\v') {
        iVar4 = 6;
        iVar10 = DAT_00173ea4;
      }
      else {
        iVar4 = 0x1e;
        iVar10 = DAT_00173ea8;
      }
      piVar3[300] = iVar4;
      piVar3[0x12d] = iVar10;
      piVar3[299] = 0;
    }
    func_004ECF6C((int)piVar3);
  }
  return piVar3;
}

