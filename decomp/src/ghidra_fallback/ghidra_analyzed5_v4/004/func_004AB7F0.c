#include "ghidra_types.h"

extern int func_001BAC90(int *param_1,int param_2);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056122C(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern uint DAT_004aba3c;
extern uint DAT_004aba40;
extern undefined4 DAT_004aba44;
extern int *DAT_004aba5c;
extern char s_Byaml_Mapdata_byaml_004aba48[];
extern char s_cf_004aba48[];
extern char s_numeric_004aba60[];
extern char s_scene_004aba68[];

// USA 004AB7F0 <- EU 004AB7C8 (Ghidra, non-matching)
// GLOBAL DAT_004aba3c uint
// GLOBAL DAT_004aba40 uint
// GLOBAL DAT_004aba44 undefined4
// GLOBAL DAT_004aba5c int *
// GLOBAL s_cf_004aba48 string
// GLOBAL s_numeric_004aba60 string
// GLOBAL s_scene_004aba68 string

void func_004AB7F0(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define uStack_a4 (*(uint *)(albw_frame + 0xc))
  #define local_a0 (*(char * *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(uint *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x40))
  #define local_6f (*(undefined1 *)(albw_frame + 0x41))
  #define local_6e (*(undefined1 *)(albw_frame + 0x42))
  #define local_6d (*(undefined1 *)(albw_frame + 0x43))
  #define local_6c (*(undefined1 *)(albw_frame + 0x44))
  #define local_64 (*(uint *)(albw_frame + 0x4c))
  #define local_60 (*(uint *)(albw_frame + 0x50))
  #define local_5c (*(uint *)(albw_frame + 0x54))
  #define uStack_58 (*(uint *)(albw_frame + 0x58))
  #define local_54 (*(uint *)(albw_frame + 0x5c))
  #define uStack_50 (*(uint *)(albw_frame + 0x60))
  #define local_4c (*(uint *)(albw_frame + 0x64))
  #define local_44 (*(uint *)(albw_frame + 0x6c))
  #define local_40 (*(uint *)(albw_frame + 0x70))
  #define local_3c (*(uint *)(albw_frame + 0x74))
  #define aiStack_38 ((int *)(albw_frame + 0x78))
  #define aiStack_30 ((int *)(albw_frame + 0x80))
  #define aiStack_28 ((int *)(albw_frame + 0x88))
  uVar2 = DAT_004aba40;
  uVar1 = DAT_004aba3c;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0x20;
  uStack_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  uStack_a4 = DAT_004aba40;
  local_74 = DAT_004aba44;
  local_70 = 7;
  local_78 = DAT_004aba40;
  local_a0 = s_Byaml_Mapdata_byaml_004aba48;
  local_6c = 1;
  local_6e = 0;
  local_6d = 0;
  local_6f = 0;
  puVar4 = func_001E1EDC(*DAT_004aba5c,(int *)&uStack_a4);
  func_003C7A20(aiStack_30,(short *)puVar4[5]);
  func_003C7A70(aiStack_38);
  bVar3 = func_00560EF8(aiStack_30,aiStack_38,(uint *)s_numeric_004aba60);
  if (bVar3) {
    uVar5 = func_0056128C((int)aiStack_38);
    iVar8 = 0;
    if (0 < (int)uVar5) {
      do {
        local_60 = 0;
        iVar6 = func_00560FA0((int)aiStack_38,&local_60,iVar8);
        if (iVar6 != 0) {
          func_001BAC90((int *)(param_1 + 0x44 + iVar8 * 0x16c),local_60);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar5);
    }
  }
  bVar3 = func_00560EF8(aiStack_30,aiStack_38,(uint *)s_scene_004aba68);
  if (bVar3) {
    uVar5 = func_0056128C((int)aiStack_38);
    func_003C7A70(aiStack_28);
    iVar8 = 0;
    if (0 < (int)uVar5) {
      do {
        bVar3 = func_005610A8(aiStack_38,aiStack_28,iVar8);
        if (!bVar3) {
          return;
        }
        local_64 = 0;
        local_60 = uVar2;
        local_5c = uVar1;
        uStack_58 = uVar2;
        local_54 = uVar1;
        local_3c = 0;
        uStack_50 = uVar2;
        local_4c = uVar1;
        iVar6 = func_0056122C(aiStack_28,(int *)&local_3c,0);
        if (iVar6 != 0) {
          local_5c = local_3c;
        }
        local_3c = 0;
        iVar6 = func_0056122C(aiStack_28,(int *)&local_3c,1);
        if (iVar6 != 0) {
          local_54 = local_3c;
        }
        local_3c = 0;
        iVar6 = func_0056122C(aiStack_28,(int *)&local_3c,4);
        if (iVar6 != 0) {
          local_4c = local_3c;
        }
        local_44 = 0;
        func_00560FA0((int)aiStack_28,&local_44,2);
        local_40 = 0;
        func_00560FA0((int)aiStack_28,&local_40,3);
        func_00560FA0((int)aiStack_28,&local_64,5);
        iVar8 = iVar8 + 1;
        iVar6 = param_1 + local_44 * 0x16c;
        if (local_40 < *(uint *)(iVar6 + 300)) {
          puVar7 = (uint *)(*(int *)(iVar6 + 0x130) + local_40 * 0x20);
        }
        else {
          puVar7 = *(uint **)(iVar6 + 0x130);
        }
        *puVar7 = local_64;
        puVar7[2] = local_5c;
        puVar7[4] = local_54;
        puVar7[6] = local_4c;
      } while (iVar8 < (int)uVar5);
    }
  }
  return;
}

