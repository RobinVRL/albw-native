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
extern int func_00584C14(int param_1,int *param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_006916F0(int *param_1,int *param_2);
extern int *piRam00278690;
extern undefined DAT_00278544;
extern undefined4 *DAT_0027854c;
extern undefined4 *DAT_00278550;
extern undefined4 DAT_00278554;
extern int *DAT_00278558;
extern char s__sWave_00278530[];
extern char s__s__s_bch_00278524[];
extern char s__s_switch_00278538[];
extern char s_animator_0027855c[];
extern char s_cf_00278524[];
extern char s_cf_00278530[];
extern char s_cf_00278538[];
extern char s_dgn_MiniC_WaterOn1_0027857c[];
extern char s_dgn_MiniC_WaterOn2_00278668[];
extern char s_dgn_MiniC_WaterOn3_0027867c[];
extern char s_dgn_MiniC_WaterOn_00278568[];

// USA 00278130 <- EU 00278158 (Ghidra, non-matching)
// GLOBAL DAT_00278544 undefined
// GLOBAL DAT_0027854c undefined4 *
// GLOBAL DAT_00278550 undefined4 *
// GLOBAL DAT_00278554 undefined4
// GLOBAL DAT_00278558 int *
// GLOBAL UNK_00278690 int *
// GLOBAL s_cf_00278524 string
// GLOBAL s_cf_00278530 string
// GLOBAL s_cf_00278538 string
// GLOBAL s_animator_0027855c string
// GLOBAL s_dgn_MiniC_WaterOn1_0027857c string
// GLOBAL s_dgn_MiniC_WaterOn2_00278668 string
// GLOBAL s_dgn_MiniC_WaterOn3_0027867c string
// GLOBAL s_dgn_MiniC_WaterOn_00278568 string

undefined4 func_00278130(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x230];
  #define local_228 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_224 (*(char * *)(albw_frame + 0xc))
  #define local_21c (*(undefined4 * *)(albw_frame + 0x14))
  #define uStack_218 (*(undefined4 *)(albw_frame + 0x18))
  #define puStack_214 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_210 (*(undefined4 *)(albw_frame + 0x20))
  #define local_20c (*(int *)(albw_frame + 0x24))
  #define uStack_208 (*(undefined4 *)(albw_frame + 0x28))
  #define local_204 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_200 (*(undefined1 *)(albw_frame + 0x30))
  #define local_1ff (*(undefined1 *)(albw_frame + 0x31))
  #define local_1fc (*(undefined4 *)(albw_frame + 0x34))
  #define local_1f8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_1f4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_1f0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1ec (*(undefined4 *)(albw_frame + 0x44))
  #define local_1e8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_1e4 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_1e3 (*(undefined1 *)(albw_frame + 0x4d))
  #define aiStack_1e0 ((int *)(albw_frame + 0x50))
  #define local_184 (*(int *)(albw_frame + 0xac))
  #define local_180 (*(uint *)(albw_frame + 0xb0))
  #define auStack_138 ((undefined4 *)(albw_frame + 0xf8))
  #define aiStack_ec ((int *)(albw_frame + 0x144))
  #define aiStack_a0 ((int *)(albw_frame + 0x190))
  #define local_50 (*(undefined4 * *)(albw_frame + 0x1e0))
  #define local_4c (*(char * *)(albw_frame + 0x1e4))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x1f0))
  #define local_3c (*(char * *)(albw_frame + 0x1f4))
  func_001BA1EC(param_1);
  piVar7 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar7 + 8))(piVar7);
  iVar6 = piVar7[1];
  func_00689794(auStack_138,s__s__s_bch_00278524,(int)"MapActor" /* EU 00278518 */,iVar6);
  piVar7 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar7 + 8))(piVar7);
  func_00689794(&local_184,s__sWave_00278530,piVar7[1],iVar6);
  piVar7 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar7 + 8))(piVar7);
  func_00689794(aiStack_ec,s__s_switch_00278538,piVar7[1],iVar6);
  (**(code **)(local_184 + 8))(&local_184);
  func_00689794(aiStack_a0,s__s_switch_00278538,local_180,iVar6);
  puVar1 = DAT_0027854c;
  local_3c = &DAT_00278544;
  local_40 = DAT_0027854c;
  uVar2 = func_006916F0(*(int **)(param_1 + 0x2c0),(int *)&local_40);
  *(char *)(param_1 + 0x4aa) = (char)uVar2;
  local_228 = func_00504CC0(*DAT_00278550,auStack_138,0xffffffff);
  local_20c = func_00533400((int)local_228,&local_184);
  local_21c = puVar1;
  uStack_218 = DAT_00278554;
  puStack_214 = puVar1;
  local_210 = DAT_00278554;
  uStack_208 = 0;
  local_1e4 = 1;
  local_1ff = 0;
  local_1ec = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1f8 = 0;
  local_200 = 1;
  local_204 = 1;
  local_1fc = 0;
  local_1f4 = 0;
  local_1e3 = 0xc4;
  piVar7 = func_002C2D00((int *)&local_21c);
  *(int **)(param_1 + 0x494) = piVar7;
  (**(code **)(*piVar7 + 0x10))(piVar7,0x24);
  iVar6 = *(int *)(param_1 + 0x494);
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x90000;
  iVar6 = *(int *)(param_1 + 0x2d0);
  local_224 = (char *)func_0010BAB4(0xa8);
  piVar7 = DAT_00278558;
  puVar3 = (uint *)0x0;
  if (local_224 != (char *)0x0) {
    if (iVar6 == 0) {
      local_4c = s_animator_0027855c;
    }
    else {
      (**(code **)(*DAT_00278558 + 8))(DAT_00278558);
      local_4c = (char *)piVar7[1];
    }
    local_50 = puVar1;
    puVar3 = func_0016A2FC((undefined4 *)local_224,1,&local_50,1);
  }
  *(uint **)(param_1 + 0x498) = puVar3;
  func_00169608(puVar3,0,*(int **)(param_1 + 0x2c0),(int)local_228);
  piVar8 = (int *)(param_1 + 0x40c);
  func_0016A02C(*(int *)(param_1 + 0x498),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar3 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x498),puVar3);
  local_224 = (char *)func_0010BAB4(0xa8);
  puVar3 = (uint *)0x0;
  if (local_224 != (char *)0x0) {
    if (iVar6 == 0) {
      local_4c = s_animator_0027855c;
    }
    else {
      (**(code **)(*piVar7 + 8))(piVar7);
      local_4c = (char *)piVar7[1];
    }
    local_50 = puVar1;
    puVar3 = func_0016A2FC((undefined4 *)local_224,1,&local_50,1);
  }
  *(uint **)(param_1 + 0x49c) = puVar3;
  func_00169608(puVar3,0,aiStack_ec,(int)local_228);
  func_0016A02C(*(int *)(param_1 + 0x49c),-1,(int *)0xffffffff,*(int *)(param_1 + 0x40c));
  puVar3 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x49c),puVar3);
  local_224 = (char *)func_0010BAB4(0xa8);
  puVar3 = (uint *)0x0;
  if (local_224 != (char *)0x0) {
    if (iVar6 == 0) {
      local_4c = s_animator_0027855c;
    }
    else {
      (**(code **)(*piVar7 + 8))(piVar7);
      local_4c = (char *)piVar7[1];
    }
    local_50 = puVar1;
    puVar3 = func_0016A2FC((undefined4 *)local_224,1,&local_50,1);
  }
  *(uint **)(param_1 + 0x4a0) = puVar3;
  func_00169608(puVar3,0,aiStack_a0,(int)local_228);
  func_0016A02C(*(int *)(param_1 + 0x4a0),-1,(int *)0xffffffff,*(int *)(param_1 + 0x494));
  puVar3 = (uint *)func_002C11E8(aiStack_1e0,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x4a0),puVar3);
  func_004CF478(*(int *)(param_1 + 0x494),0);
  local_3c = s_dgn_MiniC_WaterOn_00278568;
  local_40 = puVar1;
  iVar6 = func_006916F0(*(int **)(param_1 + 0x2c0),(int *)&local_40);
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + 0x4ac) = 0;
    *(undefined1 *)(param_1 + 0x4ad) = 1;
    *(undefined1 *)(param_1 + 0x4ae) = 2;
  }
  else {
    local_224 = s_dgn_MiniC_WaterOn1_0027857c;
    local_228 = puVar1;
    uVar4 = func_00584C14(*(int *)(param_1 + 0x40c),(int *)&local_228);
    *(char *)(param_1 + 0x4ac) = (char)uVar4;
    local_224 = s_dgn_MiniC_WaterOn2_00278668;
    local_228 = puVar1;
    uVar4 = func_00584C14(*piVar8,(int *)&local_228);
    *(char *)(param_1 + 0x4ad) = (char)uVar4;
    local_224 = s_dgn_MiniC_WaterOn3_0027867c;
    local_228 = puVar1;
    uVar4 = func_00584C14(*piVar8,(int *)&local_228);
    *(char *)(param_1 + 0x4ae) = (char)uVar4;
  }
  func_004CEA18(*(int *)(param_1 + 0x40c),0,(uint)*(byte *)(param_1 + 0x4ac));
  func_004CEA18(*piVar8,0,(uint)*(byte *)(param_1 + 0x4ad));
  func_004CEA18(*piVar8,0,(uint)*(byte *)(param_1 + 0x4ae));
  if (*(short *)(param_1 + 0x492) == 0) {
    sVar5 = *(short *)(*(int *)(*piRam00278690 + 0x3dbe4) + 0x30);
  }
  else {
    sVar5 = *(short *)(*(int *)(*piRam00278690 + 0x3dbe4) + 0x32);
  }
  *(short *)(param_1 + 0x490) = sVar5;
  return func_004CEA18(*(int *)(param_1 + 0x40c),1,(uint)*(byte *)((int)sVar5 + param_1 + 0x4ac));
}

