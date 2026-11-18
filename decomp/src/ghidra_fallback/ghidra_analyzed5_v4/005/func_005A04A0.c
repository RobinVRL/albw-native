#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a061c;
extern undefined4 *DAT_005a0620;
extern undefined DAT_005a0624;
extern undefined4 DAT_005a062c;
extern undefined4 DAT_005a0678;
extern uint DAT_005a067c;
extern uint DAT_005a0680;
extern uint DAT_005a0684;
extern undefined4 *DAT_005a0688;
extern undefined4 DAT_005a068c;
extern undefined4 DAT_005a0690;
extern undefined4 DAT_005a0694;
extern undefined4 *DAT_005a0698;
extern undefined4 DAT_005a069c;
extern undefined4 *DAT_005a06a0;
extern undefined DAT_005a06a4;
extern int DAT_005a06b8;
extern uint *DAT_005a06bc;
extern undefined4 DAT_005a06c0;
extern undefined4 *DAT_005a06c4;
extern undefined4 DAT_005a06c8;
extern char s_EnemyRopa_005a06ac[];
extern char s_damage_005a0648[];
extern char s_dead_ed_005a0658[];
extern char s_dead_st_005a0650[];
extern char s_jitabata_005a0660[];
extern char s_jump_ed_005a0640[];
extern char s_jump_md_005a0638[];
extern char s_jump_st_005a0630[];
extern char s_piyopiyo_005a066c[];

// USA 005A04A0 <- EU 005A0478 (Ghidra, non-matching)
// GLOBAL DAT_005a061c int *
// GLOBAL DAT_005a0620 undefined4 *
// GLOBAL DAT_005a0624 undefined
// GLOBAL DAT_005a062c undefined4
// GLOBAL DAT_005a0678 undefined4
// GLOBAL DAT_005a067c uint
// GLOBAL DAT_005a0680 uint
// GLOBAL DAT_005a0684 uint
// GLOBAL DAT_005a0688 undefined4 *
// GLOBAL DAT_005a068c undefined4
// GLOBAL DAT_005a0690 undefined4
// GLOBAL DAT_005a0694 undefined4
// GLOBAL DAT_005a0698 undefined4 *
// GLOBAL DAT_005a069c undefined4
// GLOBAL DAT_005a06a0 undefined4 *
// GLOBAL DAT_005a06a4 undefined
// GLOBAL DAT_005a06b8 int
// GLOBAL DAT_005a06bc uint *
// GLOBAL DAT_005a06c0 undefined4
// GLOBAL DAT_005a06c4 undefined4 *
// GLOBAL DAT_005a06c8 undefined4
// GLOBAL s_EnemyRopa_005a06ac string
// GLOBAL s_damage_005a0648 string
// GLOBAL s_dead_ed_005a0658 string
// GLOBAL s_dead_st_005a0650 string
// GLOBAL s_jitabata_005a0660 string
// GLOBAL s_jump_ed_005a0640 string
// GLOBAL s_jump_md_005a0638 string
// GLOBAL s_jump_st_005a0630 string
// GLOBAL s_piyopiyo_005a066c string

undefined8 func_005A04A0(void)

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
  piVar1 = DAT_005a061c;
  DAT_005a061c[4] = -1;
  piVar1[5] = -1;
  uVar5 = DAT_005a062c;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005a0620;
  DAT_005a0620[1] = &DAT_005a0624;
  *puVar2 = uVar5;
  puVar2[3] = s_jump_st_005a0630;
  puVar2[2] = uVar5;
  puVar2[5] = s_jump_md_005a0638;
  puVar2[4] = uVar5;
  puVar2[7] = s_jump_ed_005a0640;
  puVar2[6] = uVar5;
  puVar2[9] = s_damage_005a0648;
  puVar2[8] = uVar5;
  puVar2[0xb] = s_dead_st_005a0650;
  puVar2[10] = uVar5;
  puVar2[0xd] = s_dead_ed_005a0658;
  puVar2[0xc] = uVar5;
  puVar2[0xf] = s_jitabata_005a0660;
  puVar2[0xe] = uVar5;
  puVar2[0x10] = uVar5;
  puVar2[0x11] = s_piyopiyo_005a066c;
  uVar8 = func_00114608(DAT_005a0680,DAT_005a067c);
  piVar1[1] = (int)uVar8;
  uVar8 = func_00114608(DAT_005a0684,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[2] = (int)uVar8;
  uVar4 = DAT_005a0694;
  uVar3 = DAT_005a0690;
  puVar2 = DAT_005a0688;
  *DAT_005a0688 = DAT_005a068c;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a0698,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005a06a0;
  puVar7 = DAT_005a06a0 + 3;
  DAT_005a06a0[1] = 5;
  puVar2[2] = puVar7;
  *puVar2 = 0;
  local_14 = &DAT_005a06a4;
  local_18 = uVar5;
  local_1c = s_EnemyRopa_005a06ac;
  local_20 = uVar5;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005a06b8;
  }
  uVar5 = func_0019B51C(DAT_005a06c4,DAT_005a06c0,*DAT_005a06bc,(int)&local_20,DAT_005a06a0,
                        &local_18,iVar6);
  return CONCAT44(DAT_005a06c8,uVar5);
}

