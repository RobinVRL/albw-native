#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a433c;
extern undefined4 *DAT_005a4340;
extern undefined DAT_005a4344;
extern undefined4 DAT_005a434c;
extern undefined4 DAT_005a43b8;
extern uint DAT_005a43bc;
extern uint DAT_005a43c0;
extern undefined4 *DAT_005a43c4;
extern undefined4 DAT_005a43c8;
extern undefined4 DAT_005a43cc;
extern undefined4 DAT_005a43d0;
extern undefined4 *DAT_005a43d4;
extern undefined4 DAT_005a43d8;
extern undefined4 *DAT_005a43dc;
extern undefined DAT_005a43e0;
extern int DAT_005a43f4;
extern uint *DAT_005a43f8;
extern undefined4 DAT_005a43fc;
extern undefined4 *DAT_005a4400;
extern undefined4 DAT_005a4404;
extern char s_EnemyGibdo_005a43e8[];
extern char s_change_005a4358[];
extern char s_damage_005a4350[];
extern char s_dead_back_ed_005a4390[];
extern char s_dead_back_st_005a4380[];
extern char s_dead_front_ed_005a4370[];
extern char s_dead_front_st_005a4360[];
extern char s_jitabata_005a43a0[];
extern char s_piyopiyo_005a43ac[];

// USA 005A41D0 <- EU 005A41A8 (Ghidra, non-matching)
// GLOBAL DAT_005a433c int *
// GLOBAL DAT_005a4340 undefined4 *
// GLOBAL DAT_005a4344 undefined
// GLOBAL DAT_005a434c undefined4
// GLOBAL DAT_005a43b8 undefined4
// GLOBAL DAT_005a43bc uint
// GLOBAL DAT_005a43c0 uint
// GLOBAL DAT_005a43c4 undefined4 *
// GLOBAL DAT_005a43c8 undefined4
// GLOBAL DAT_005a43cc undefined4
// GLOBAL DAT_005a43d0 undefined4
// GLOBAL DAT_005a43d4 undefined4 *
// GLOBAL DAT_005a43d8 undefined4
// GLOBAL DAT_005a43dc undefined4 *
// GLOBAL DAT_005a43e0 undefined
// GLOBAL DAT_005a43f4 int
// GLOBAL DAT_005a43f8 uint *
// GLOBAL DAT_005a43fc undefined4
// GLOBAL DAT_005a4400 undefined4 *
// GLOBAL DAT_005a4404 undefined4
// GLOBAL s_EnemyGibdo_005a43e8 string
// GLOBAL s_change_005a4358 string
// GLOBAL s_damage_005a4350 string
// GLOBAL s_dead_back_ed_005a4390 string
// GLOBAL s_dead_back_st_005a4380 string
// GLOBAL s_dead_front_ed_005a4370 string
// GLOBAL s_dead_front_st_005a4360 string
// GLOBAL s_jitabata_005a43a0 string
// GLOBAL s_piyopiyo_005a43ac string

undefined8 func_005A41D0(void)

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
  piVar1 = DAT_005a433c;
  DAT_005a433c[2] = -1;
  piVar1[3] = -1;
  uVar5 = DAT_005a434c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005a4340;
  DAT_005a4340[1] = &DAT_005a4344;
  *puVar2 = uVar5;
  puVar2[3] = s_damage_005a4350;
  puVar2[2] = uVar5;
  puVar2[5] = s_change_005a4358;
  puVar2[4] = uVar5;
  puVar2[7] = s_dead_front_st_005a4360;
  puVar2[6] = uVar5;
  puVar2[9] = s_dead_front_ed_005a4370;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_dead_back_st_005a4380;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_dead_back_ed_005a4390;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_jitabata_005a43a0;
  puVar2[0xe] = uVar5;
  puVar2[0x10] = uVar5;
  puVar2[0x11] = s_piyopiyo_005a43ac;
  uVar8 = func_00114608(DAT_005a43c0,DAT_005a43bc);
  piVar1[1] = (int)uVar8;
  uVar4 = DAT_005a43d0;
  uVar3 = DAT_005a43cc;
  puVar2 = DAT_005a43c4;
  *DAT_005a43c4 = DAT_005a43c8;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a43d4,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005a43dc;
  puVar7 = DAT_005a43dc + 3;
  DAT_005a43dc[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005a43e0;
  local_18 = uVar5;
  local_1c = s_EnemyGibdo_005a43e8;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005a43f4;
  }
  uVar5 = func_0019B51C(DAT_005a4400,DAT_005a43fc,*DAT_005a43f8,(int)&local_20,DAT_005a43dc,
                        &local_18,iVar6);
  return CONCAT44(DAT_005a4404,uVar5);
}

