#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b1be8;
extern undefined4 *DAT_005b1bec;
extern undefined DAT_005b1bf0;
extern undefined4 DAT_005b1c00;
extern int DAT_005b1c14;
extern uint *DAT_005b1c18;
extern undefined4 DAT_005b1c1c;
extern undefined4 *DAT_005b1c20;
extern undefined4 DAT_005b1c24;
extern undefined4 DAT_005b1c28;
extern undefined4 *DAT_005b1c2c;
extern undefined DAT_005b1c30;
extern int DAT_005b1c54;
extern uint *DAT_005b1c58;
extern undefined4 DAT_005b1c5c;
extern undefined4 *DAT_005b1c60;
extern undefined4 *DAT_005b1c64;
extern undefined DAT_005b1c68;
extern undefined DAT_005b1c70;
extern undefined DAT_005b1c78;
extern uint DAT_005b1cc4;
extern uint DAT_005b1cc8;
extern undefined4 *DAT_005b1ccc;
extern uint DAT_005b1cd0;
extern undefined4 DAT_005b1cd4;
extern undefined4 *DAT_005b1cd8;
extern undefined4 DAT_005b1cdc;
extern undefined4 DAT_005b1ce0;
extern uint DAT_005b1ce4;
extern undefined4 *DAT_005b1ce8;
extern undefined4 DAT_005b1cec;
extern undefined4 DAT_005b1cf0;
extern uint DAT_005b1cf4;
extern undefined4 *DAT_005b1cf8;
extern uint DAT_005b1cfc;
extern undefined4 *DAT_005b1d00;
extern undefined4 DAT_005b1d04;
extern undefined4 DAT_005b1d08;
extern uint DAT_005b1d0c;
extern uint DAT_005b1d10;
extern undefined4 *DAT_005b1d14;
extern char s_EnemyStalfosBone_005b1c40[];
extern char s_EnemyStalfos_005b1c04[];
extern char s_asunder_005b1cbc[];
extern char s_damage_005b1c8c[];
extern char s_jitabata_005b1c9c[];
extern char s_jump_ed_005b1c84[];
extern char s_jump_st_005b1c7c[];
extern char s_piyopiyo_005b1ca8[];
extern char s_revival_005b1cb4[];
extern char s_throw_005b1c94[];

// USA 005B190C <- EU 005B18E4 (Ghidra, non-matching)
// GLOBAL DAT_005b1be8 int *
// GLOBAL DAT_005b1bec undefined4 *
// GLOBAL DAT_005b1bf0 undefined
// GLOBAL DAT_005b1c00 undefined4
// GLOBAL DAT_005b1c14 int
// GLOBAL DAT_005b1c18 uint *
// GLOBAL DAT_005b1c1c undefined4
// GLOBAL DAT_005b1c20 undefined4 *
// GLOBAL DAT_005b1c24 undefined4
// GLOBAL DAT_005b1c28 undefined4
// GLOBAL DAT_005b1c2c undefined4 *
// GLOBAL DAT_005b1c30 undefined
// GLOBAL DAT_005b1c54 int
// GLOBAL DAT_005b1c58 uint *
// GLOBAL DAT_005b1c5c undefined4
// GLOBAL DAT_005b1c60 undefined4 *
// GLOBAL DAT_005b1c64 undefined4 *
// GLOBAL DAT_005b1c68 undefined
// GLOBAL DAT_005b1c70 undefined
// GLOBAL DAT_005b1c78 undefined
// GLOBAL DAT_005b1cc4 uint
// GLOBAL DAT_005b1cc8 uint
// GLOBAL DAT_005b1ccc undefined4 *
// GLOBAL DAT_005b1cd0 uint
// GLOBAL DAT_005b1cd4 undefined4
// GLOBAL DAT_005b1cd8 undefined4 *
// GLOBAL DAT_005b1cdc undefined4
// GLOBAL DAT_005b1ce0 undefined4
// GLOBAL DAT_005b1ce4 uint
// GLOBAL DAT_005b1ce8 undefined4 *
// GLOBAL DAT_005b1cec undefined4
// GLOBAL DAT_005b1cf0 undefined4
// GLOBAL DAT_005b1cf4 uint
// GLOBAL DAT_005b1cf8 undefined4 *
// GLOBAL DAT_005b1cfc uint
// GLOBAL DAT_005b1d00 undefined4 *
// GLOBAL DAT_005b1d04 undefined4
// GLOBAL DAT_005b1d08 undefined4
// GLOBAL DAT_005b1d0c uint
// GLOBAL DAT_005b1d10 uint
// GLOBAL DAT_005b1d14 undefined4 *
// GLOBAL s_EnemyStalfosBone_005b1c40 string
// GLOBAL s_EnemyStalfos_005b1c04 string
// GLOBAL s_asunder_005b1cbc string
// GLOBAL s_damage_005b1c8c string
// GLOBAL s_jitabata_005b1c9c string
// GLOBAL s_jump_ed_005b1c84 string
// GLOBAL s_jump_st_005b1c7c string
// GLOBAL s_piyopiyo_005b1ca8 string
// GLOBAL s_revival_005b1cb4 string
// GLOBAL s_throw_005b1c94 string

undefined8 func_005B190C(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined1 *)(albw_frame + 0x0))
  #define local_4f (*(undefined1 *)(albw_frame + 0x1))
  #define local_4e (*(undefined1 *)(albw_frame + 0x2))
  #define local_4d (*(undefined1 *)(albw_frame + 0x3))
  #define local_4c (*(undefined1 *)(albw_frame + 0x4))
  #define local_48 (*(undefined1 *)(albw_frame + 0x8))
  #define local_47 (*(undefined1 *)(albw_frame + 0x9))
  #define local_46 (*(undefined1 *)(albw_frame + 0xa))
  #define local_45 (*(undefined1 *)(albw_frame + 0xb))
  #define local_44 (*(undefined1 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005b1be8;
  DAT_005b1be8[10] = -1;
  piVar1[0xb] = -1;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  uVar8 = DAT_005b1c00;
  puVar6 = DAT_005b1bec;
  DAT_005b1bec[2] = DAT_005b1bec + 3;
  puVar6[1] = 5;
  *puVar6 = 0;
  local_34 = &DAT_005b1bf0;
  local_38 = uVar8;
  local_3c = s_EnemyStalfos_005b1c04;
  local_40 = uVar8;
  iVar7 = *piVar1;
  if (*piVar1 == 0) {
    iVar7 = DAT_005b1c14;
  }
  func_0019B51C(DAT_005b1c20,DAT_005b1c1c,*DAT_005b1c18,(int)&local_40,DAT_005b1bec,&local_38,iVar7)
  ;
  puVar6 = DAT_005b1c2c;
  DAT_005b1c2c[2] = DAT_005b1c2c + 3;
  puVar6[1] = 5;
  *puVar6 = 0;
  local_24 = &DAT_005b1c30;
  local_28 = uVar8;
  local_2c = s_EnemyStalfosBone_005b1c40;
  local_30 = uVar8;
  iVar7 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar7 = DAT_005b1c54;
  }
  func_0019B51C(DAT_005b1c60,DAT_005b1c5c,*DAT_005b1c58,(int)&local_30,DAT_005b1c2c,&local_28,iVar7)
  ;
  puVar6 = DAT_005b1c64;
  DAT_005b1c64[1] = &DAT_005b1c68;
  *puVar6 = uVar8;
  puVar6[3] = &DAT_005b1c70;
  puVar6[2] = uVar8;
  puVar6[5] = &DAT_005b1c78;
  puVar6[4] = uVar8;
  puVar6[7] = s_jump_st_005b1c7c;
  puVar6[6] = uVar8;
  puVar6[9] = s_jump_ed_005b1c84;
  puVar6[8] = uVar8;
  puVar6[0xb] = s_damage_005b1c8c;
  puVar6[10] = uVar8;
  puVar6[0xd] = s_throw_005b1c94;
  puVar6[0xc] = uVar8;
  puVar6[0xf] = s_jitabata_005b1c9c;
  puVar6[0xe] = uVar8;
  puVar6[0x11] = s_piyopiyo_005b1ca8;
  puVar6[0x10] = uVar8;
  puVar6[0x13] = s_revival_005b1cb4;
  puVar6[0x12] = uVar8;
  puVar6[0x14] = uVar8;
  puVar6[0x15] = s_asunder_005b1cbc;
  uVar9 = func_00114608(DAT_005b1cc8,DAT_005b1cc4);
  piVar1[2] = (int)uVar9;
  puVar6 = DAT_005b1ccc;
  uVar9 = func_00114608(DAT_005b1cd0,(uint)((ulonglong)uVar9 >> 0x20));
  *puVar6 = (int)uVar9;
  uVar4 = DAT_005b1ce0;
  uVar3 = DAT_005b1cdc;
  puVar2 = DAT_005b1cd8;
  uVar8 = DAT_005b1cd4;
  *DAT_005b1cd8 = DAT_005b1cd4;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  uVar9 = func_00114608(DAT_005b1ce4,(uint)((ulonglong)uVar9 >> 0x20));
  puVar6[1] = (int)uVar9;
  uVar3 = DAT_005b1cf0;
  puVar2 = DAT_005b1ce8;
  *DAT_005b1ce8 = DAT_005b1cec;
  puVar2[1] = uVar8;
  puVar2[2] = uVar3;
  uVar9 = func_00114608(DAT_005b1cf4,(uint)((ulonglong)uVar9 >> 0x20));
  puVar6[2] = (int)uVar9;
  uVar9 = func_00114608(0x4e000000,(uint)((ulonglong)uVar9 >> 0x20));
  puVar6[3] = (int)uVar9;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4c = 0xff;
  local_4d = 0xff;
  func_004FC6FC(DAT_005b1cf8,1,0,0,0,(undefined4 *)&local_50,0xb);
  uVar4 = DAT_005b1d08;
  uVar3 = DAT_005b1d04;
  puVar2 = DAT_005b1d00;
  uVar5 = DAT_005b1cfc;
  *DAT_005b1d00 = uVar8;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  uVar9 = func_00114608(DAT_005b1d0c,uVar5);
  puVar6[4] = (int)uVar9;
  uVar9 = func_00114608(DAT_005b1d10,(uint)((ulonglong)uVar9 >> 0x20));
  puVar6[5] = (int)uVar9;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0xff;
  local_44 = 0xff;
  puVar6 = func_004FC6FC(DAT_005b1d14,1,0,0,1,(undefined4 *)&local_48,0xb);
  return CONCAT44(DAT_005b1cfc,puVar6);
}

