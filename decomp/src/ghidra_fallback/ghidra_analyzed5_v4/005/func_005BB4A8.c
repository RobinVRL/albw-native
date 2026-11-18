#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bb648;
extern int *DAT_005bb64c;
extern undefined DAT_005bb650;
extern int DAT_005bb658;
extern undefined DAT_005bb664;
extern undefined DAT_005bb688;
extern undefined4 DAT_005bb698;
extern undefined4 DAT_005bb69c;
extern uint DAT_005bb6ac;
extern uint DAT_005bb6b0;
extern uint DAT_005bb6b4;
extern uint DAT_005bb6b8;
extern undefined4 *DAT_005bb6bc;
extern undefined4 DAT_005bb6c0;
extern undefined4 DAT_005bb6c4;
extern undefined4 DAT_005bb6c8;
extern undefined4 *DAT_005bb6cc;
extern undefined4 DAT_005bb6d0;
extern undefined4 *DAT_005bb6d4;
extern undefined DAT_005bb6d8;
extern int DAT_005bb6f4;
extern uint *DAT_005bb6f8;
extern undefined4 DAT_005bb6fc;
extern undefined4 *DAT_005bb700;
extern undefined4 DAT_005bb704;
extern char s_EnemyGueldMan_005bb6e4[];
extern char s_GueldMan_005bb6a0[];
extern char s_damage_005bb65c[];
extern char s_jitabata_005bb66c[];
extern char s_piyopiyo_005bb68c[];
extern char s_run_ed_005bb680[];
extern char s_run_st_005bb678[];

// USA 005BB4A8 <- EU 005BB480 (Ghidra, non-matching)
// GLOBAL DAT_005bb648 int *
// GLOBAL DAT_005bb64c int *
// GLOBAL DAT_005bb650 undefined
// GLOBAL DAT_005bb658 int
// GLOBAL DAT_005bb664 undefined
// GLOBAL DAT_005bb688 undefined
// GLOBAL DAT_005bb698 undefined4
// GLOBAL DAT_005bb69c undefined4
// GLOBAL DAT_005bb6ac uint
// GLOBAL DAT_005bb6b0 uint
// GLOBAL DAT_005bb6b4 uint
// GLOBAL DAT_005bb6b8 uint
// GLOBAL DAT_005bb6bc undefined4 *
// GLOBAL DAT_005bb6c0 undefined4
// GLOBAL DAT_005bb6c4 undefined4
// GLOBAL DAT_005bb6c8 undefined4
// GLOBAL DAT_005bb6cc undefined4 *
// GLOBAL DAT_005bb6d0 undefined4
// GLOBAL DAT_005bb6d4 undefined4 *
// GLOBAL DAT_005bb6d8 undefined
// GLOBAL DAT_005bb6f4 int
// GLOBAL DAT_005bb6f8 uint *
// GLOBAL DAT_005bb6fc undefined4
// GLOBAL DAT_005bb700 undefined4 *
// GLOBAL DAT_005bb704 undefined4
// GLOBAL s_EnemyGueldMan_005bb6e4 string
// GLOBAL s_GueldMan_005bb6a0 string
// GLOBAL s_damage_005bb65c string
// GLOBAL s_jitabata_005bb66c string
// GLOBAL s_piyopiyo_005bb68c string
// GLOBAL s_run_ed_005bb680 string
// GLOBAL s_run_st_005bb678 string

undefined8 func_005BB4A8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
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
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005bb648;
  DAT_005bb648[4] = -1;
  piVar1[5] = -1;
  iVar6 = DAT_005bb658;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar2 = DAT_005bb64c;
  DAT_005bb64c[1] = (int)&DAT_005bb650;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_damage_005bb65c;
  piVar2[2] = iVar6;
  piVar2[5] = (int)&DAT_005bb664;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_jitabata_005bb66c;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_run_st_005bb678;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_run_ed_005bb680;
  piVar2[10] = iVar6;
  piVar2[0xd] = (int)&DAT_005bb688;
  piVar2[0xc] = iVar6;
  piVar2[0xe] = iVar6;
  piVar2[0xf] = (int)s_piyopiyo_005bb68c;
  piVar1[9] = (int)s_GueldMan_005bb6a0;
  piVar1[8] = iVar6;
  uVar8 = func_00114608(DAT_005bb6b0,DAT_005bb6ac);
  piVar1[1] = (int)uVar8;
  uVar8 = func_00114608(DAT_005bb6b4,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[2] = (int)uVar8;
  uVar8 = func_00114608(DAT_005bb6b8,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[3] = (int)uVar8;
  uVar4 = DAT_005bb6c8;
  uVar5 = DAT_005bb6c4;
  puVar3 = DAT_005bb6bc;
  *DAT_005bb6bc = DAT_005bb6c0;
  puVar3[1] = uVar5;
  puVar3[2] = uVar4;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005bb6cc,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005bb6d4;
  puVar7 = DAT_005bb6d4 + 3;
  DAT_005bb6d4[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_14 = &DAT_005bb6d8;
  local_18 = iVar6;
  local_1c = s_EnemyGueldMan_005bb6e4;
  local_20 = iVar6;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005bb6f4;
  }
  uVar5 = func_0019B51C(DAT_005bb700,DAT_005bb6fc,*DAT_005bb6f8,(int)&local_20,DAT_005bb6d4,
                        &local_18,iVar6);
  return CONCAT44(DAT_005bb704,uVar5);
}

