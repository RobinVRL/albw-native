#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005e59ac;
extern undefined4 *DAT_005e59b0;
extern int DAT_005e59b4;
extern undefined4 *DAT_005e59b8;
extern int DAT_005e59c4;
extern undefined DAT_005e59d8;
extern undefined4 DAT_005e5a9c;
extern undefined4 DAT_005e5aa0;
extern int *DAT_005e5aa4;
extern uint DAT_005e5abc;
extern uint DAT_005e5ac0;
extern uint DAT_005e5ac4;
extern uint DAT_005e5ac8;
extern uint DAT_005e5acc;
extern uint DAT_005e5ad0;
extern uint DAT_005e5ad4;
extern uint DAT_005e5ad8;
extern uint DAT_005e5adc;
extern uint DAT_005e5ae0;
extern uint DAT_005e5ae4;
extern uint DAT_005e5ae8;
extern uint DAT_005e5aec;
extern undefined4 DAT_005e5af0;
extern undefined4 DAT_005e5af4;
extern undefined4 *DAT_005e5af8;
extern undefined4 DAT_005e5afc;
extern undefined4 DAT_005e5b00;
extern undefined4 DAT_005e5b04;
extern undefined4 *DAT_005e5b18;
extern undefined4 DAT_005e5b1c;
extern undefined4 *DAT_005e5b20;
extern undefined DAT_005e5b24;
extern uint *DAT_005e5b40;
extern undefined4 DAT_005e5b44;
extern undefined4 *DAT_005e5b48;
extern undefined4 DAT_005e5b4c;
extern char s_BlackShueyes_005e5b08[];
extern char s_EnemyBlackShueyes_005e5b2c[];
extern char s_end_ed_005e59fc[];
extern char s_end_st_005e59f4[];
extern char s_fall_ed_005e5a0c[];
extern char s_fall_st_005e5a04[];
extern char s_freeze_ed_005e5a20[];
extern char s_freeze_st_005e5a14[];
extern char s_ice_child_attack_005e5a2c[];
extern char s_ice_damage2_005e5a4c[];
extern char s_ice_damage_005e5a40[];
extern char s_ice_triangle_attack_005e5a58[];
extern char s_ice_wait_005e59e8[];
extern char s_opening_warp_005e5a6c[];
extern char s_revive_005e59e0[];
extern char s_transform_warp_005e5a8c[];
extern char s_walk_ed_005e59d0[];
extern char s_walk_md_005e59c8[];
extern char s_walk_st_005e59bc[];
extern char s_warp_ed_005e5a84[];
extern char s_warp_st_005e5a7c[];
extern char s_water_005e5aa8[];
extern char s_water_stop_005e5ab0[];

// USA 005E54B8 <- EU 005E5490 (Ghidra, non-matching)
// GLOBAL DAT_005e59ac int *
// GLOBAL DAT_005e59b0 undefined4 *
// GLOBAL DAT_005e59b4 int
// GLOBAL DAT_005e59b8 undefined4 *
// GLOBAL DAT_005e59c4 int
// GLOBAL DAT_005e59d8 undefined
// GLOBAL DAT_005e5a9c undefined4
// GLOBAL DAT_005e5aa0 undefined4
// GLOBAL DAT_005e5aa4 int *
// GLOBAL DAT_005e5abc uint
// GLOBAL DAT_005e5ac0 uint
// GLOBAL DAT_005e5ac4 uint
// GLOBAL DAT_005e5ac8 uint
// GLOBAL DAT_005e5acc uint
// GLOBAL DAT_005e5ad0 uint
// GLOBAL DAT_005e5ad4 uint
// GLOBAL DAT_005e5ad8 uint
// GLOBAL DAT_005e5adc uint
// GLOBAL DAT_005e5ae0 uint
// GLOBAL DAT_005e5ae4 uint
// GLOBAL DAT_005e5ae8 uint
// GLOBAL DAT_005e5aec uint
// GLOBAL DAT_005e5af0 undefined4
// GLOBAL DAT_005e5af4 undefined4
// GLOBAL DAT_005e5af8 undefined4 *
// GLOBAL DAT_005e5afc undefined4
// GLOBAL DAT_005e5b00 undefined4
// GLOBAL DAT_005e5b04 undefined4
// GLOBAL DAT_005e5b18 undefined4 *
// GLOBAL DAT_005e5b1c undefined4
// GLOBAL DAT_005e5b20 undefined4 *
// GLOBAL DAT_005e5b24 undefined
// GLOBAL DAT_005e5b40 uint *
// GLOBAL DAT_005e5b44 undefined4
// GLOBAL DAT_005e5b48 undefined4 *
// GLOBAL DAT_005e5b4c undefined4
// GLOBAL s_BlackShueyes_005e5b08 string
// GLOBAL s_EnemyBlackShueyes_005e5b2c string
// GLOBAL s_end_ed_005e59fc string
// GLOBAL s_end_st_005e59f4 string
// GLOBAL s_fall_ed_005e5a0c string
// GLOBAL s_fall_st_005e5a04 string
// GLOBAL s_freeze_ed_005e5a20 string
// GLOBAL s_freeze_st_005e5a14 string
// GLOBAL s_ice_child_attack_005e5a2c string
// GLOBAL s_ice_damage2_005e5a4c string
// GLOBAL s_ice_damage_005e5a40 string
// GLOBAL s_ice_triangle_attack_005e5a58 string
// GLOBAL s_ice_wait_005e59e8 string
// GLOBAL s_opening_warp_005e5a6c string
// GLOBAL s_revive_005e59e0 string
// GLOBAL s_transform_warp_005e5a8c string
// GLOBAL s_walk_ed_005e59d0 string
// GLOBAL s_walk_md_005e59c8 string
// GLOBAL s_walk_st_005e59bc string
// GLOBAL s_warp_ed_005e5a84 string
// GLOBAL s_warp_st_005e5a7c string
// GLOBAL s_water_005e5aa8 string
// GLOBAL s_water_stop_005e5ab0 string

undefined8 func_005E54B8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define puStack_2c (*(undefined * *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  iVar5 = DAT_005e59b4;
  piVar1 = DAT_005e59ac;
  DAT_005e59ac[0x12] = -1;
  piVar1[0x13] = -1;
  piVar1[0x14] = 0;
  piVar1[0x15] = 0;
  puVar2 = DAT_005e59b0;
  uVar6 = *(undefined4 *)(iVar5 + 0x1c4);
  uVar7 = *(undefined4 *)(iVar5 + 0x1c8);
  uVar8 = *(undefined4 *)(iVar5 + 0x1d0);
  DAT_005e59b0[2] = *(undefined4 *)(iVar5 + 0x1cc);
  puVar2[3] = uVar8;
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[4] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[5] = uVar6;
  puVar2 = DAT_005e59b0;
  uVar6 = *(undefined4 *)(iVar5 + 0x1d8);
  uVar7 = *(undefined4 *)(iVar5 + 0x1dc);
  uVar8 = *(undefined4 *)(iVar5 + 0x1e0);
  DAT_005e59b0[6] = *(undefined4 *)(iVar5 + 0x1d4);
  puVar2[7] = uVar6;
  puVar2[8] = uVar7;
  puVar2[9] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[10] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0xb] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x1e8);
  uVar7 = *(undefined4 *)(iVar5 + 0x1ec);
  uVar8 = *(undefined4 *)(iVar5 + 0x1f0);
  puVar2[0xc] = *(undefined4 *)(iVar5 + 0x1e4);
  puVar2[0xd] = uVar6;
  puVar2[0xe] = uVar7;
  puVar2[0xf] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x10] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x11] = uVar6;
  uVar7 = *(undefined4 *)(iVar5 + 500);
  uVar8 = *(undefined4 *)(iVar5 + 0x1f8);
  uVar6 = DAT_005e59b8[1];
  puVar2[0x14] = *DAT_005e59b8;
  puVar2[0x15] = uVar6;
  puVar2[0x12] = uVar7;
  puVar2[0x13] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x16] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x17] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x208);
  uVar7 = *(undefined4 *)(iVar5 + 0x20c);
  uVar8 = *(undefined4 *)(iVar5 + 0x210);
  puVar2[0x18] = *(undefined4 *)(iVar5 + 0x204);
  puVar2[0x19] = uVar6;
  puVar2[0x1a] = uVar7;
  puVar2[0x1b] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x1c] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x1d] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x218);
  uVar7 = *(undefined4 *)(iVar5 + 0x21c);
  uVar8 = *(undefined4 *)(iVar5 + 0x220);
  puVar2[0x1e] = *(undefined4 *)(iVar5 + 0x214);
  puVar2[0x1f] = uVar6;
  puVar2[0x20] = uVar7;
  puVar2[0x21] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x22] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x23] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x228);
  uVar7 = *(undefined4 *)(iVar5 + 0x22c);
  uVar8 = *(undefined4 *)(iVar5 + 0x230);
  uVar9 = *(undefined4 *)(iVar5 + 0x234);
  uVar10 = *(undefined4 *)(iVar5 + 0x238);
  puVar2[0x24] = *(undefined4 *)(iVar5 + 0x224);
  puVar2[0x25] = uVar6;
  puVar2[0x26] = uVar7;
  puVar2[0x27] = uVar8;
  puVar2[0x28] = uVar9;
  puVar2[0x29] = uVar10;
  uVar6 = *(undefined4 *)(iVar5 + 0x240);
  uVar7 = *(undefined4 *)(iVar5 + 0x244);
  uVar8 = *(undefined4 *)(iVar5 + 0x248);
  puVar2[0x2a] = *(undefined4 *)(iVar5 + 0x23c);
  puVar2[0x2b] = uVar6;
  puVar2[0x2c] = uVar7;
  puVar2[0x2d] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x2e] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x2f] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x250);
  uVar7 = *(undefined4 *)(iVar5 + 0x254);
  uVar8 = *(undefined4 *)(iVar5 + 600);
  puVar2[0x30] = *(undefined4 *)(iVar5 + 0x24c);
  puVar2[0x31] = uVar6;
  puVar2[0x32] = uVar7;
  puVar2[0x33] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x34] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x35] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x260);
  uVar7 = *(undefined4 *)(iVar5 + 0x264);
  uVar8 = *(undefined4 *)(iVar5 + 0x268);
  puVar2[0x36] = *(undefined4 *)(iVar5 + 0x25c);
  puVar2[0x37] = uVar6;
  puVar2[0x38] = uVar7;
  puVar2[0x39] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x3a] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x3b] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x270);
  uVar7 = *(undefined4 *)(iVar5 + 0x274);
  uVar8 = *(undefined4 *)(iVar5 + 0x278);
  puVar2[0x3c] = *(undefined4 *)(iVar5 + 0x26c);
  puVar2[0x3d] = uVar6;
  puVar2[0x3e] = uVar7;
  puVar2[0x3f] = uVar8;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x40] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x41] = uVar6;
  uVar6 = *(undefined4 *)(iVar5 + 0x280);
  uVar7 = *(undefined4 *)(iVar5 + 0x284);
  uVar8 = *(undefined4 *)(iVar5 + 0x288);
  puVar2[0x42] = *(undefined4 *)(iVar5 + 0x27c);
  puVar2[0x43] = uVar6;
  puVar2[0x44] = uVar7;
  puVar2[0x45] = uVar8;
  iVar3 = DAT_005e59c4;
  uVar6 = *(undefined4 *)(iVar5 + 0x290);
  puVar2[0x46] = *(undefined4 *)(iVar5 + 0x28c);
  puVar2[0x47] = uVar6;
  puVar2[0x49] = s_walk_st_005e59bc;
  puVar2[0x48] = iVar3;
  puVar2[0x4b] = s_walk_md_005e59c8;
  puVar2[0x4a] = iVar3;
  puVar2[0x4d] = s_walk_ed_005e59d0;
  puVar2[0x4c] = iVar3;
  puVar2[0x4f] = &DAT_005e59d8;
  puVar2[0x4e] = iVar3;
  puVar2[0x51] = s_revive_005e59e0;
  puVar2[0x50] = iVar3;
  puVar2[0x53] = s_ice_wait_005e59e8;
  puVar2[0x52] = iVar3;
  puVar2[0x55] = s_end_st_005e59f4;
  puVar2[0x54] = iVar3;
  puVar2[0x57] = s_end_ed_005e59fc;
  puVar2[0x56] = iVar3;
  puVar2[0x59] = s_fall_st_005e5a04;
  puVar2[0x58] = iVar3;
  puVar2[0x5b] = s_fall_ed_005e5a0c;
  puVar2[0x5a] = iVar3;
  puVar2[0x5d] = s_freeze_st_005e5a14;
  puVar2[0x5c] = iVar3;
  puVar2[0x5f] = s_freeze_ed_005e5a20;
  puVar2[0x5e] = iVar3;
  puVar2[0x61] = s_ice_child_attack_005e5a2c;
  puVar2[0x60] = iVar3;
  puVar2[99] = s_ice_damage_005e5a40;
  puVar2[0x62] = iVar3;
  puVar2[0x65] = s_ice_damage2_005e5a4c;
  puVar2[100] = iVar3;
  puVar2[0x67] = s_ice_triangle_attack_005e5a58;
  puVar2[0x66] = iVar3;
  puVar2[0x69] = s_opening_warp_005e5a6c;
  puVar2[0x68] = iVar3;
  puVar2[0x6b] = s_warp_st_005e5a7c;
  puVar2[0x6a] = iVar3;
  puVar2[0x6d] = s_warp_ed_005e5a84;
  puVar2[0x6c] = iVar3;
  puVar2[0x6e] = iVar3;
  puVar2[0x6f] = s_transform_warp_005e5a8c;
  piVar4 = DAT_005e5aa4;
  DAT_005e5aa4[1] = (int)s_end_st_005e59f4;
  *piVar4 = iVar3;
  piVar4[3] = (int)s_water_005e5aa8;
  piVar4[2] = iVar3;
  piVar4[5] = (int)s_transform_warp_005e5a8c;
  piVar4[4] = iVar3;
  piVar4[6] = iVar3;
  piVar4[7] = (int)s_water_stop_005e5ab0;
  uVar11 = func_00114608(DAT_005e5ac0,DAT_005e5abc);
  piVar1[1] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ac4,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[2] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ac8,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[3] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5acc,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[4] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ad0,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[5] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ad4,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[6] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ad8,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[7] = (int)uVar11;
  uVar11 = func_00114608(0x4e000000,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[8] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5adc,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[9] = (int)uVar11;
  uVar12 = func_00114608(DAT_005e5ae0,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[10] = (int)uVar12;
  uVar13 = func_00114608(DAT_005e5ae4,(uint)((ulonglong)uVar12 >> 0x20));
  piVar1[0xb] = (int)uVar13;
  piVar1[0xc] = (int)uVar11;
  uVar11 = func_00114608(DAT_005e5ae8,(uint)((ulonglong)uVar13 >> 0x20));
  piVar1[0xd] = (int)uVar11;
  piVar1[0xe] = (int)uVar12;
  uVar11 = func_00114608(DAT_005e5aec,(uint)((ulonglong)uVar11 >> 0x20));
  piVar1[0xf] = (int)uVar11;
  uVar8 = DAT_005e5afc;
  puVar2 = DAT_005e5af8;
  uVar7 = DAT_005e5af4;
  uVar6 = DAT_005e5af0;
  *DAT_005e5af8 = DAT_005e5af0;
  puVar2[1] = uVar7;
  puVar2[2] = uVar7;
  uVar7 = DAT_005e5b00;
  puVar2[3] = uVar6;
  puVar2[4] = uVar8;
  puVar2[5] = uVar7;
  uVar7 = DAT_005e5b04;
  puVar2[6] = uVar6;
  puVar2[7] = uVar6;
  puVar2[8] = uVar7;
  *(undefined1 *)(piVar1 + 0x10) = 0;
  *(undefined1 *)((int)piVar1 + 0x41) = 0;
  *(undefined1 *)((int)piVar1 + 0x42) = 0;
  *(undefined1 *)((int)piVar1 + 0x43) = 1;
  *(undefined1 *)(piVar1 + 0x11) = 0xff;
  local_34 = s_BlackShueyes_005e5b08;
  local_38 = iVar3;
  func_004FC5F8(DAT_005e5b18,&local_38,0,1,0,piVar1 + 0x10,0xb);
  puVar2 = DAT_005e5b20;
  DAT_005e5b20[2] = DAT_005e5b20 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_30 = iVar3;
  puStack_2c = &DAT_005e5b24;
  iStack_28 = iVar3;
  local_24 = s_EnemyBlackShueyes_005e5b2c;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005e59b4;
  }
  uVar6 = func_0019B51C(DAT_005e5b48,DAT_005e5b44,*DAT_005e5b40,(int)&iStack_28,DAT_005e5b20,
                        &local_30,iVar5);
  return CONCAT44(DAT_005e5b4c,uVar6);
}

