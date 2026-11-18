#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a4118;
extern undefined4 *DAT_005a411c;
extern undefined DAT_005a4120;
extern undefined4 DAT_005a4128;
extern undefined DAT_005a412c;
extern undefined4 DAT_005a416c;
extern undefined4 DAT_005a4170;
extern undefined4 *DAT_005a4174;
extern undefined4 DAT_005a4178;
extern undefined4 *DAT_005a417c;
extern undefined DAT_005a4180;
extern int DAT_005a4194;
extern uint *DAT_005a4198;
extern undefined4 DAT_005a419c;
extern undefined4 *DAT_005a41a0;
extern undefined4 DAT_005a41a4;
extern char s_EnemyCoppi_005a4188[];
extern char s_damage_005a413c[];
extern char s_dead_ed_005a414c[];
extern char s_dead_st_005a4144[];
extern char s_guard_005a4134[];
extern char s_jitabata_005a4160[];
extern char s_piyopiyo_005a4154[];

// USA 005A3FD8 <- EU 005A3FB0 (Ghidra, non-matching)
// GLOBAL DAT_005a4118 int *
// GLOBAL DAT_005a411c undefined4 *
// GLOBAL DAT_005a4120 undefined
// GLOBAL DAT_005a4128 undefined4
// GLOBAL DAT_005a412c undefined
// GLOBAL DAT_005a416c undefined4
// GLOBAL DAT_005a4170 undefined4
// GLOBAL DAT_005a4174 undefined4 *
// GLOBAL DAT_005a4178 undefined4
// GLOBAL DAT_005a417c undefined4 *
// GLOBAL DAT_005a4180 undefined
// GLOBAL DAT_005a4194 int
// GLOBAL DAT_005a4198 uint *
// GLOBAL DAT_005a419c undefined4
// GLOBAL DAT_005a41a0 undefined4 *
// GLOBAL DAT_005a41a4 undefined4
// GLOBAL s_EnemyCoppi_005a4188 string
// GLOBAL s_damage_005a413c string
// GLOBAL s_dead_ed_005a414c string
// GLOBAL s_dead_st_005a4144 string
// GLOBAL s_guard_005a4134 string
// GLOBAL s_jitabata_005a4160 string
// GLOBAL s_piyopiyo_005a4154 string

undefined8 func_005A3FD8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
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
  piVar1 = DAT_005a4118;
  DAT_005a4118[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005a4128;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005a411c;
  DAT_005a411c[1] = &DAT_005a4120;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005a412c;
  puVar2[2] = uVar3;
  puVar2[5] = s_guard_005a4134;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage_005a413c;
  puVar2[6] = uVar3;
  puVar2[9] = s_dead_st_005a4144;
  puVar2[8] = uVar3;
  puVar2[0xb] = s_dead_ed_005a414c;
  puVar2[10] = uVar3;
  puVar2[0xd] = s_piyopiyo_005a4154;
  puVar2[0xc] = uVar3;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = s_jitabata_005a4160;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a4174,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005a417c;
  DAT_005a417c[2] = DAT_005a417c + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005a4180;
  local_18 = uVar3;
  local_1c = s_EnemyCoppi_005a4188;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a4194;
  }
  uVar3 = func_0019B51C(DAT_005a41a0,DAT_005a419c,*DAT_005a4198,(int)&local_20,DAT_005a417c,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a41a4,uVar3);
}

