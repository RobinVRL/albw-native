#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_0026EC7C(int *param_1);
extern int func_002C2D00(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00533400(int param_1,int *param_2);
extern undefined4 DAT_00132688;
extern char *DAT_0013268c;
extern int *DAT_001326ac;
extern uint *DAT_001326b0;
extern int DAT_001326c4;
extern char s_Actor_ZSurface_bch_00132690[];
extern char s_StencilPlane_001326c8[];
extern char s_StencilSphere_001326b4[];
extern char s_World_001326a4[];
extern char s_cf_00132690[];

// USA 00132384 <- EU 00132384 (Ghidra, non-matching)
// GLOBAL DAT_00132688 undefined4
// GLOBAL DAT_0013268c char *
// GLOBAL DAT_001326ac int *
// GLOBAL DAT_001326b0 uint *
// GLOBAL DAT_001326c4 int
// GLOBAL s_cf_00132690 string
// GLOBAL s_StencilPlane_001326c8 string
// GLOBAL s_StencilSphere_001326b4 string
// GLOBAL s_World_001326a4 string

void func_00132384(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define pcStack_b8 (*(char * *)(albw_frame + 0x8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(char * *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(int *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(char * *)(albw_frame + 0x34))
  #define local_88 (*(char * *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(undefined1 *)(albw_frame + 0x40))
  #define local_7f (*(undefined1 *)(albw_frame + 0x41))
  #define local_7c (*(char * *)(albw_frame + 0x44))
  #define local_78 (*(char * *)(albw_frame + 0x48))
  #define local_74 (*(char * *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define local_6c (*(undefined1 *)(albw_frame + 0x54))
  #define pcStack_68 (*(char * *)(albw_frame + 0x58))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define pcStack_60 (*(char * *)(albw_frame + 0x60))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 * *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_4c (*(undefined1 *)(albw_frame + 0x74))
  #define local_4b (*(undefined1 *)(albw_frame + 0x75))
  #define local_48 (*(undefined4 *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(undefined4 *)(albw_frame + 0x88))
  #define local_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x90))
  #define local_2f (*(undefined1 *)(albw_frame + 0x91))
  piVar6 = (int *)(param_1 + 0x2be4);
  *(undefined1 *)(param_1 + 0x2c1e) = 0;
  pcVar2 = DAT_0013268c;
  uVar1 = DAT_00132688;
  if (*piVar6 == 0) {
    local_b0 = (char *)0x0;
    local_ac = 0;
    local_a8 = 0x20;
    uStack_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    pcStack_b8 = DAT_0013268c;
    uStack_b4 = DAT_00132688;
    local_88 = s_World_001326a4;
    local_8c = DAT_0013268c;
    local_80 = 0;
    local_7c = DAT_0013268c;
    local_78 = s_Actor_ZSurface_bch_00132690;
    local_74 = (char *)0x0;
    local_70 = 0;
    local_84 = 0xf0207;
    local_6c = 1;
    local_58 = func_00504D48(*DAT_001326ac,(int)&pcStack_b8);
    piVar3 = local_58 + 0x32;
    if (*piVar3 != 0) {
      local_58 = *(undefined4 **)local_58[0x34];
    }
    pcStack_68 = pcVar2;
    uStack_64 = uVar1;
    if (*piVar3 == 0) {
      local_58 = (undefined4 *)0x0;
    }
    uStack_54 = 0;
    local_50 = 0;
    pcStack_60 = pcVar2;
    uStack_5c = uVar1;
    local_30 = 1;
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    local_2f = 0xc4;
    local_4b = 1;
    local_48 = 0;
    local_3c = 0;
    local_40 = 0;
    local_4c = 1;
    piVar3 = func_002C2D00((int *)&pcStack_68);
    *piVar6 = (int)piVar3;
    func_004CF478((int)piVar3,0);
    *(uint *)(*piVar6 + 0x164) = *(uint *)(*piVar6 + 0x164) | 1;
  }
  uVar7 = 0;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x28d0);
    if (uVar7 < 3) {
      puVar4 = (undefined4 *)(param_1 + 0x28d0) + uVar7;
    }
    func_0026EC7C((int *)*puVar4);
    puVar4 = (undefined4 *)(param_1 + 0x28dc);
    if (uVar7 < 3) {
      puVar4 = (undefined4 *)(param_1 + 0x28dc) + uVar7;
    }
    func_0026EC7C((int *)*puVar4);
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 3);
  piVar6 = (int *)(param_1 + 0x2c2c);
  if (*piVar6 == 0) {
    iVar5 = func_0019B04C(*DAT_001326b0);
    iVar8 = *(int *)(iVar5 + 0x1c8);
    local_74 = s_StencilSphere_001326b4;
    local_78 = pcVar2;
    local_a8 = func_00533400(iVar8,(int *)&local_78);
    pcStack_b8 = pcVar2;
    uStack_b4 = uVar1;
    uStack_a4 = 0;
    local_a0 = 0;
    local_b0 = pcVar2;
    local_ac = uVar1;
    local_80 = 1;
    local_88 = (char *)0x0;
    local_84 = 0;
    local_94 = 0;
    local_9c = CONCAT22((*(undefined2 *)((char *)&local_9c + 2)),0x100);
    local_98 = 0;
    local_8c = (char *)0x0;
    local_90 = 0;
    local_7f = 0xc4;
    local_9c = CONCAT31((*(undefined4 *)((char *)&local_9c + 1) & 0xFFFFFF),1);
    piVar3 = func_002C2D00((int *)&pcStack_b8);
    iVar5 = DAT_001326c4;
    *piVar6 = (int)piVar3;
    piVar3[0x4d] = iVar5;
    *(uint *)(*piVar6 + 0x164) = *(uint *)(*piVar6 + 0x164) | 1;
    func_004CF478(*piVar6,0);
    (**(code **)(*(int *)*piVar6 + 0x10))((int *)*piVar6,0xf1);
    local_74 = s_StencilPlane_001326c8;
    local_78 = pcVar2;
    local_a8 = func_00533400(iVar8,(int *)&local_78);
    pcStack_b8 = pcVar2;
    uStack_b4 = uVar1;
    uStack_a4 = 0;
    local_a0 = 0;
    local_b0 = pcVar2;
    local_ac = uVar1;
    local_80 = 1;
    local_88 = (char *)0x0;
    local_84 = 0;
    local_94 = 0;
    local_9c = CONCAT22((*(undefined2 *)((char *)&local_9c + 2)),0x100);
    local_98 = 0;
    local_8c = (char *)0x0;
    local_90 = 0;
    local_7f = 0xc4;
    local_9c = CONCAT31((*(undefined4 *)((char *)&local_9c + 1) & 0xFFFFFF),1);
    piVar6 = func_002C2D00((int *)&pcStack_b8);
    piVar3 = (int *)(param_1 + 0x2c30);
    *piVar3 = (int)piVar6;
    piVar6[0x4d] = iVar5;
    *(uint *)(*piVar3 + 0x164) = *(uint *)(*piVar3 + 0x164) | 1;
    func_004CF478(*piVar3,0);
    (**(code **)(*(int *)*piVar3 + 0x10))((int *)*piVar3,0xf2);
  }
  return;
}

