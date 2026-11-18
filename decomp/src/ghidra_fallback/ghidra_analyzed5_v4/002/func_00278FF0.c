#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001BA1EC(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *piRam002796d8;
extern int *piRam002796dc;
extern undefined4 *DAT_00279410;
extern undefined4 DAT_00279414;
extern undefined4 *DAT_00279418;
extern int *DAT_0027941c;
extern char s__sWave_002793ec[];
extern char s__s_StampSwitch_00279400[];
extern char s__s__s_bch_002793e0[];
extern char s__s_switch_002793f4[];
extern char s_animator_00279420[];
extern char s_cf_002793e0[];
extern char s_cf_002793ec[];
extern char s_cf_002793f4[];
extern char s_cf_00279400[];
extern char s_dgn_WaterSurfaceMain_1_0027942c[];
extern char s_dgn_WaterSurfaceMain_2_00279444[];
extern char s_dgn_WaterSurfaceMain_3_00279660[];
extern char s_dgn_WaterSurfaceMain_4_00279678[];
extern char s_dgn_WaterSurfaceMain_5_00279690[];
extern char s_dgn_WaterSurfaceMain_6_002796a8[];
extern char s_dgn_WaterSurface_Edge_002796c0[];

// USA 00278FF0 <- EU 00279018 (Ghidra, non-matching)
// GLOBAL DAT_00279410 undefined4 *
// GLOBAL DAT_00279414 undefined4
// GLOBAL DAT_00279418 undefined4 *
// GLOBAL DAT_0027941c int *
// GLOBAL UNK_002796d8 int *
// GLOBAL UNK_002796dc int *
// GLOBAL s_cf_002793e0 string
// GLOBAL s_cf_002793ec string
// GLOBAL s_cf_00279400 string
// GLOBAL s_cf_002793f4 string
// GLOBAL s_animator_00279420 string
// GLOBAL s_dgn_WaterSurfaceMain_1_0027942c string
// GLOBAL s_dgn_WaterSurfaceMain_2_00279444 string
// GLOBAL s_dgn_WaterSurfaceMain_3_00279660 string
// GLOBAL s_dgn_WaterSurfaceMain_4_00279678 string
// GLOBAL s_dgn_WaterSurfaceMain_5_00279690 string
// GLOBAL s_dgn_WaterSurfaceMain_6_002796a8 string
// GLOBAL s_dgn_WaterSurface_Edge_002796c0 string

undefined4 func_00278FF0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2c4 (*(undefined4 * *)(albw_frame + 0xc))
  #define uStack_2c0 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_2bc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2b4 (*(int *)(albw_frame + 0x1c))
  #define uStack_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a8 (*(undefined1 *)(albw_frame + 0x28))
  #define local_2a7 (*(undefined1 *)(albw_frame + 0x29))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_29c (*(undefined4 *)(albw_frame + 0x34))
  #define local_298 (*(undefined4 *)(albw_frame + 0x38))
  #define local_294 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_290 (*(undefined4 *)(albw_frame + 0x40))
  #define local_28c (*(undefined1 *)(albw_frame + 0x44))
  #define local_28b (*(undefined1 *)(albw_frame + 0x45))
  #define local_288 (*(undefined4 * *)(albw_frame + 0x48))
  #define local_284 (*(char * *)(albw_frame + 0x4c))
  #define aiStack_280 ((int *)(albw_frame + 0x50))
  #define local_224 (*(int *)(albw_frame + 0xac))
  #define local_220 (*(uint *)(albw_frame + 0xb0))
  #define local_1d8 (*(undefined4 * *)(albw_frame + 0xf8))
  #define auStack_1d4 ((undefined4 *)(albw_frame + 0xfc))
  #define aiStack_188 ((int *)(albw_frame + 0x148))
  #define aiStack_13c ((int *)(albw_frame + 0x194))
  #define aiStack_f0 ((int *)(albw_frame + 0x1e0))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x238))
  #define pcStack_94 (*(char * *)(albw_frame + 0x23c))
  #define puStack_8c (*(undefined4 * *)(albw_frame + 0x244))
  #define aiStack_84 ((int *)(albw_frame + 0x24c))
  func_001BA1EC(param_1);
  piVar10 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar10 + 8))(piVar10);
  iVar8 = piVar10[1];
  func_00689794(auStack_1d4,s__s__s_bch_002793e0,(int)"MapActor" /* EU 002793D4 */,iVar8);
  piVar10 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar10 + 8))(piVar10);
  func_00689794(&local_224,s__sWave_002793ec,piVar10[1],iVar8);
  piVar10 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar10 + 8))(piVar10);
  func_00689794(aiStack_188,s__s_switch_002793f4,piVar10[1],iVar8);
  (**(code **)(local_224 + 8))(&local_224);
  func_00689794(aiStack_13c,s__s_switch_002793f4,local_220,iVar8);
  piVar10 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar10 + 8))(piVar10);
  func_00689794(aiStack_f0,s__s_StampSwitch_00279400,piVar10[1],iVar8);
  local_1d8 = func_00504CC0(*DAT_00279410,auStack_1d4,0xffffffff);
  local_2b4 = func_00533400((int)local_1d8,&local_224);
  puVar1 = DAT_00279418;
  local_2c4 = DAT_00279418;
  uStack_2c0 = DAT_00279414;
  puStack_2bc = DAT_00279418;
  local_2b8 = DAT_00279414;
  uStack_2b0 = 0;
  local_28c = 1;
  local_2a7 = 0;
  local_294 = 0;
  local_298 = 0;
  local_290 = 0;
  local_2a0 = 0;
  local_2a8 = 1;
  local_2ac = 1;
  local_2a4 = 0;
  local_29c = 0;
  local_28b = 0xc4;
  piVar10 = func_002C2D00((int *)&local_2c4);
  *(int **)(param_1 + 0x494) = piVar10;
  (**(code **)(*piVar10 + 0x10))(piVar10,0x24);
  iVar8 = *(int *)(param_1 + 0x494);
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x90000;
  iVar8 = *(int *)(param_1 + 0x2d0);
  local_98 = (undefined4 *)func_0010BAB4(0xa8);
  piVar10 = DAT_0027941c;
  puVar5 = (uint *)0x0;
  if (local_98 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      local_284 = s_animator_00279420;
    }
    else {
      (**(code **)(*DAT_0027941c + 8))(DAT_0027941c);
      local_284 = (char *)piVar10[1];
    }
    local_288 = puVar1;
    puVar5 = func_0016A2FC(local_98,1,&local_288,1);
  }
  *(uint **)(param_1 + 0x498) = puVar5;
  func_00169608(puVar5,0,*(int **)(param_1 + 0x2c0),(int)local_1d8);
  piVar11 = (int *)(param_1 + 0x40c);
  func_0016A02C(*(int *)(param_1 + 0x498),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar5 = (uint *)func_002C11E8(aiStack_280,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x498),puVar5);
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (uint *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      local_284 = s_animator_00279420;
    }
    else {
      (**(code **)(*piVar10 + 8))(piVar10);
      local_284 = (char *)piVar10[1];
    }
    local_288 = puVar1;
    puVar5 = func_0016A2FC(puVar6,1,&local_288,1);
  }
  *(uint **)(param_1 + 0x49c) = puVar5;
  func_00169608(puVar5,0,aiStack_188,(int)local_1d8);
  func_0016A02C(*(int *)(param_1 + 0x49c),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar5 = (uint *)func_002C11E8(aiStack_280,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x49c),puVar5);
  local_98 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (uint *)0x0;
  if (local_98 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      local_284 = s_animator_00279420;
    }
    else {
      (**(code **)(*piVar10 + 8))(piVar10);
      local_284 = (char *)piVar10[1];
    }
    local_288 = puVar1;
    puVar5 = func_0016A2FC(local_98,1,&local_288,1);
  }
  *(uint **)(param_1 + 0x4a0) = puVar5;
  func_00169608(puVar5,0,aiStack_13c,(int)local_1d8);
  func_0016A02C(*(int *)(param_1 + 0x4a0),-1,(int *)0xffffffff,*(int *)(param_1 + 0x494));
  puVar5 = (uint *)func_002C11E8(aiStack_280,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x4a0),puVar5);
  func_004CF478(*(int *)(param_1 + 0x494),0);
  local_284 = s_dgn_WaterSurfaceMain_1_0027942c;
  local_288 = puVar1;
  uVar7 = func_00584C14(*(int *)(param_1 + 0x40c),(int *)&local_288);
  *(char *)(param_1 + 0x4ac) = (char)uVar7;
  local_284 = s_dgn_WaterSurfaceMain_2_00279444;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  *(char *)(param_1 + 0x4ad) = (char)uVar7;
  local_284 = s_dgn_WaterSurfaceMain_3_00279660;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  *(char *)(param_1 + 0x4ae) = (char)uVar7;
  local_284 = s_dgn_WaterSurfaceMain_4_00279678;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  *(char *)(param_1 + 0x4af) = (char)uVar7;
  local_284 = s_dgn_WaterSurfaceMain_5_00279690;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  *(char *)(param_1 + 0x4b0) = (char)uVar7;
  local_284 = s_dgn_WaterSurfaceMain_6_002796a8;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  *(char *)(param_1 + 0x4b1) = (char)uVar7;
  local_284 = s_dgn_WaterSurface_Edge_002796c0;
  local_288 = puVar1;
  uVar7 = func_00584C14(*piVar11,(int *)&local_288);
  iVar9 = 0;
  *(char *)(param_1 + 0x4b2) = (char)uVar7;
  do {
    func_004CEA18(*(int *)(param_1 + 0x40c),0,(uint)*(byte *)(param_1 + iVar9 + 0x4ac));
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 7);
  if (*(char *)(param_1 + 0x4a9) == '\0') {
    puStack_8c = (undefined4 *)func_0010BAB4(0xa8);
    puVar5 = (uint *)0x0;
    if (puStack_8c != (undefined4 *)0x0) {
      if (iVar8 == 0) {
        pcStack_94 = s_animator_00279420;
      }
      else {
        (**(code **)(*piVar10 + 8))(piVar10);
        pcStack_94 = (char *)piVar10[1];
      }
      local_98 = puVar1;
      puVar5 = func_0016A2FC(puStack_8c,1,&local_98,1);
    }
    *(uint **)(param_1 + 0x4a4) = puVar5;
    func_00169608(puVar5,0,aiStack_f0,(int)local_1d8);
    func_0016A02C(*(int *)(param_1 + 0x4a4),-1,(int *)0xffffffff,*(int *)(param_1 + 0x494));
    puVar5 = (uint *)func_002C11E8(aiStack_84,0,10,0);
    func_0016898C(*(int *)(param_1 + 0x4a4),puVar5);
  }
  piVar10 = piRam002796dc;
  if (*(short *)(param_1 + 0x492) == 0) {
    uVar4 = *(undefined2 *)(*(int *)(*piRam002796d8 + 0x3dbe4) + 0x30);
  }
  else {
    uVar4 = *(undefined2 *)(*(int *)(*piRam002796d8 + 0x3dbe4) + 0x32);
  }
  *(undefined2 *)(param_1 + 0x490) = uVar4;
  bVar2 = func_005822A0(*piVar10,0x7e,3);
  uVar3 = 0;
  if (bVar2) {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0x4b3) = uVar3;
  func_004CEA18(*(int *)(param_1 + 0x40c),1,
                (uint)*(byte *)((uint)*(byte *)(param_1 + 0x4b3) + (int)*(short *)(param_1 + 0x490)
                               + param_1 + 0x4ac));
  bVar2 = func_005822A0(*piVar10,7,3);
  *(bool *)(param_1 + 0x4a9) = bVar2;
  return func_004CEA18(*piVar11,(uint)bVar2,(uint)*(byte *)(param_1 + 0x4b2));
}

