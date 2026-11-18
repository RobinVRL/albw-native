#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b0050;
extern undefined4 *DAT_005b0054;
extern undefined DAT_005b0058;
extern undefined4 DAT_005b0060;
extern undefined DAT_005b0088;
extern undefined DAT_005b008c;
extern undefined DAT_005b0090;
extern undefined4 DAT_005b00d0;
extern uint DAT_005b00d4;
extern uint DAT_005b00d8;
extern uint DAT_005b00dc;
extern undefined4 *DAT_005b00e0;
extern undefined4 DAT_005b00e4;
extern undefined4 DAT_005b00e8;
extern undefined4 DAT_005b00ec;
extern undefined4 *DAT_005b00f0;
extern undefined4 DAT_005b00f4;
extern undefined4 *DAT_005b00f8;
extern undefined DAT_005b00fc;
extern int DAT_005b0118;
extern uint *DAT_005b011c;
extern undefined4 DAT_005b0120;
extern undefined4 *DAT_005b0124;
extern undefined4 DAT_005b0128;
extern char s_EnemyFunguin_005b0108[];
extern char s_appear_005b00b0[];
extern char s_damage_005b0074[];
extern char s_damage_big_005b007c[];
extern char s_dead_ed_005b006c[];
extern char s_dead_st_005b0064[];
extern char s_jitabata_005b00b8[];
extern char s_piyopiyo_005b00c4[];
extern char s_slip_ed_005b00a8[];
extern char s_slip_md_005b00a0[];
extern char s_slip_st_005b0098[];

// USA 005AFE98 <- EU 005AFE70 (Ghidra, non-matching)
// GLOBAL DAT_005b0050 int *
// GLOBAL DAT_005b0054 undefined4 *
// GLOBAL DAT_005b0058 undefined
// GLOBAL DAT_005b0060 undefined4
// GLOBAL DAT_005b0088 undefined
// GLOBAL DAT_005b008c undefined
// GLOBAL DAT_005b0090 undefined
// GLOBAL DAT_005b00d0 undefined4
// GLOBAL DAT_005b00d4 uint
// GLOBAL DAT_005b00d8 uint
// GLOBAL DAT_005b00dc uint
// GLOBAL DAT_005b00e0 undefined4 *
// GLOBAL DAT_005b00e4 undefined4
// GLOBAL DAT_005b00e8 undefined4
// GLOBAL DAT_005b00ec undefined4
// GLOBAL DAT_005b00f0 undefined4 *
// GLOBAL DAT_005b00f4 undefined4
// GLOBAL DAT_005b00f8 undefined4 *
// GLOBAL DAT_005b00fc undefined
// GLOBAL DAT_005b0118 int
// GLOBAL DAT_005b011c uint *
// GLOBAL DAT_005b0120 undefined4
// GLOBAL DAT_005b0124 undefined4 *
// GLOBAL DAT_005b0128 undefined4
// GLOBAL s_EnemyFunguin_005b0108 string
// GLOBAL s_appear_005b00b0 string
// GLOBAL s_damage_005b0074 string
// GLOBAL s_damage_big_005b007c string
// GLOBAL s_dead_ed_005b006c string
// GLOBAL s_dead_st_005b0064 string
// GLOBAL s_jitabata_005b00b8 string
// GLOBAL s_piyopiyo_005b00c4 string
// GLOBAL s_slip_ed_005b00a8 string
// GLOBAL s_slip_md_005b00a0 string
// GLOBAL s_slip_st_005b0098 string

undefined8 func_005AFE98(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005b0050;
  DAT_005b0050[4] = -1;
  piVar1[5] = -1;
  uVar5 = DAT_005b0060;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005b0054;
  DAT_005b0054[1] = &DAT_005b0058;
  *puVar2 = uVar5;
  puVar2[3] = s_dead_st_005b0064;
  puVar2[2] = uVar5;
  puVar2[5] = s_dead_ed_005b006c;
  puVar2[4] = uVar5;
  puVar2[7] = s_damage_005b0074;
  puVar2[6] = uVar5;
  puVar2[9] = s_damage_big_005b007c;
  puVar2[8] = uVar5;
  puVar2[0xb] = &DAT_005b0088;
  puVar2[10] = uVar5;
  puVar2[0xd] = &DAT_005b008c;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = &DAT_005b0090;
  puVar2[0xe] = uVar5;
  puVar2[0x11] = s_slip_st_005b0098;
  puVar2[0x10] = uVar5;
  puVar2[0x13] = s_slip_md_005b00a0;
  puVar2[0x12] = uVar5;
  puVar2[0x15] = s_slip_ed_005b00a8;
  puVar2[0x14] = uVar5;
  puVar2[0x17] = s_appear_005b00b0;
  puVar2[0x16] = uVar5;
  puVar2[0x19] = s_jitabata_005b00b8;
  puVar2[0x18] = uVar5;
  puVar2[0x1a] = uVar5;
  puVar2[0x1b] = s_piyopiyo_005b00c4;
  uVar8 = func_00114608(DAT_005b00d8,DAT_005b00d4);
  piVar1[1] = (int)uVar8;
  uVar8 = func_00114608(DAT_005b00dc,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[2] = (int)uVar8;
  uVar4 = DAT_005b00ec;
  uVar3 = DAT_005b00e8;
  puVar2 = DAT_005b00e0;
  *DAT_005b00e0 = DAT_005b00e4;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005b00f0,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005b00f8;
  puVar7 = DAT_005b00f8 + 3;
  DAT_005b00f8[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005b00fc;
  local_18 = uVar5;
  local_1c = s_EnemyFunguin_005b0108;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005b0118;
  }
  uVar5 = func_0019B51C(DAT_005b0124,DAT_005b0120,*DAT_005b011c,(int)&local_20,DAT_005b00f8,
                        &local_18,iVar6);
  return CONCAT44(DAT_005b0128,uVar5);
}

