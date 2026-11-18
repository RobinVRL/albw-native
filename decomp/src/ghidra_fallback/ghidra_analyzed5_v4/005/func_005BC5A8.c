#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bc808;
extern int *DAT_005bc80c;
extern undefined DAT_005bc810;
extern int DAT_005bc814;
extern undefined DAT_005bc828;
extern undefined DAT_005bc830;
extern undefined DAT_005bc854;
extern undefined DAT_005bc86c;
extern undefined4 DAT_005bc918;
extern undefined4 DAT_005bc91c;
extern uint DAT_005bc920;
extern uint DAT_005bc924;
extern undefined4 *DAT_005bc928;
extern undefined4 DAT_005bc92c;
extern undefined4 *DAT_005bc930;
extern undefined DAT_005bc934;
extern int DAT_005bc954;
extern uint *DAT_005bc958;
extern undefined4 DAT_005bc95c;
extern undefined4 *DAT_005bc960;
extern undefined4 DAT_005bc964;
extern char s_EnemySandBoss_005bc944[];
extern char s_beam_ed_005bc85c[];
extern char s_beam_st_005bc84c[];
extern char s_bear_bf_005bc8bc[];
extern char s_bear_ed_005bc874[];
extern char s_bear_ed_bf_005bc8c4[];
extern char s_bear_st_005bc864[];
extern char s_bear_st_bf_005bc8b0[];
extern char s_charge_005bc844[];
extern char s_charge_st_005bc838[];
extern char s_damage_005bc87c[];
extern char s_damage_bf_005bc8a4[];
extern char s_down_1_005bc910[];
extern char s_down_st_005bc820[];
extern char s_down_st_1_005bc904[];
extern char s_down_st_bf_005bc890[];
extern char s_down_st_bf_1_005bc8f4[];
extern char s_end_ed_005bc8e4[];
extern char s_end_st_005bc8dc[];
extern char s_opening_005bc8ec[];
extern char s_up_ed_005bc818[];
extern char s_up_ed_bf_005bc884[];
extern char s_up_ed_demo_005bc8d0[];
extern char s_wait_bf_005bc89c[];

// USA 005BC5A8 <- EU 005BC580 (Ghidra, non-matching)
// GLOBAL DAT_005bc808 int *
// GLOBAL DAT_005bc80c int *
// GLOBAL DAT_005bc810 undefined
// GLOBAL DAT_005bc814 int
// GLOBAL DAT_005bc828 undefined
// GLOBAL DAT_005bc830 undefined
// GLOBAL DAT_005bc854 undefined
// GLOBAL DAT_005bc86c undefined
// GLOBAL DAT_005bc918 undefined4
// GLOBAL DAT_005bc91c undefined4
// GLOBAL DAT_005bc920 uint
// GLOBAL DAT_005bc924 uint
// GLOBAL DAT_005bc928 undefined4 *
// GLOBAL DAT_005bc92c undefined4
// GLOBAL DAT_005bc930 undefined4 *
// GLOBAL DAT_005bc934 undefined
// GLOBAL DAT_005bc954 int
// GLOBAL DAT_005bc958 uint *
// GLOBAL DAT_005bc95c undefined4
// GLOBAL DAT_005bc960 undefined4 *
// GLOBAL DAT_005bc964 undefined4
// GLOBAL s_EnemySandBoss_005bc944 string
// GLOBAL s_beam_ed_005bc85c string
// GLOBAL s_beam_st_005bc84c string
// GLOBAL s_bear_bf_005bc8bc string
// GLOBAL s_bear_ed_005bc874 string
// GLOBAL s_bear_ed_bf_005bc8c4 string
// GLOBAL s_bear_st_005bc864 string
// GLOBAL s_bear_st_bf_005bc8b0 string
// GLOBAL s_charge_005bc844 string
// GLOBAL s_charge_st_005bc838 string
// GLOBAL s_damage_005bc87c string
// GLOBAL s_damage_bf_005bc8a4 string
// GLOBAL s_down_1_005bc910 string
// GLOBAL s_down_st_005bc820 string
// GLOBAL s_down_st_1_005bc904 string
// GLOBAL s_down_st_bf_005bc890 string
// GLOBAL s_down_st_bf_1_005bc8f4 string
// GLOBAL s_end_ed_005bc8e4 string
// GLOBAL s_end_st_005bc8dc string
// GLOBAL s_opening_005bc8ec string
// GLOBAL s_up_ed_005bc818 string
// GLOBAL s_up_ed_bf_005bc884 string
// GLOBAL s_up_ed_demo_005bc8d0 string
// GLOBAL s_wait_bf_005bc89c string

undefined8 func_005BC5A8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
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
  piVar1 = DAT_005bc808;
  DAT_005bc808[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005bc814;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005bc80c;
  DAT_005bc80c[1] = (int)&DAT_005bc810;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_up_ed_005bc818;
  piVar2[2] = iVar5;
  piVar2[5] = (int)s_down_st_005bc820;
  piVar2[4] = iVar5;
  piVar2[7] = (int)&DAT_005bc828;
  piVar2[6] = iVar5;
  piVar2[9] = (int)&DAT_005bc830;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_charge_st_005bc838;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_charge_005bc844;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_beam_st_005bc84c;
  piVar2[0xe] = iVar5;
  piVar2[0x11] = (int)&DAT_005bc854;
  piVar2[0x10] = iVar5;
  piVar2[0x13] = (int)s_beam_ed_005bc85c;
  piVar2[0x12] = iVar5;
  piVar2[0x15] = (int)s_bear_st_005bc864;
  piVar2[0x14] = iVar5;
  piVar2[0x17] = (int)&DAT_005bc86c;
  piVar2[0x16] = iVar5;
  piVar2[0x19] = (int)s_bear_ed_005bc874;
  piVar2[0x18] = iVar5;
  piVar2[0x1b] = (int)s_damage_005bc87c;
  piVar2[0x1a] = iVar5;
  piVar2[0x1d] = (int)s_up_ed_bf_005bc884;
  piVar2[0x1c] = iVar5;
  piVar2[0x1f] = (int)s_down_st_bf_005bc890;
  piVar2[0x1e] = iVar5;
  piVar2[0x21] = (int)s_wait_bf_005bc89c;
  piVar2[0x20] = iVar5;
  piVar2[0x23] = (int)s_damage_bf_005bc8a4;
  piVar2[0x22] = iVar5;
  piVar2[0x25] = (int)s_bear_st_bf_005bc8b0;
  piVar2[0x24] = iVar5;
  piVar2[0x27] = (int)s_bear_bf_005bc8bc;
  piVar2[0x26] = iVar5;
  piVar2[0x29] = (int)s_bear_ed_bf_005bc8c4;
  piVar2[0x28] = iVar5;
  piVar2[0x2b] = (int)s_up_ed_demo_005bc8d0;
  piVar2[0x2a] = iVar5;
  piVar2[0x2d] = (int)s_end_st_005bc8dc;
  piVar2[0x2c] = iVar5;
  piVar2[0x2f] = (int)s_end_ed_005bc8e4;
  piVar2[0x2e] = iVar5;
  piVar2[0x31] = (int)s_opening_005bc8ec;
  piVar2[0x30] = iVar5;
  piVar2[0x33] = (int)s_down_st_bf_1_005bc8f4;
  piVar2[0x32] = iVar5;
  piVar2[0x35] = (int)s_down_st_1_005bc904;
  piVar2[0x34] = iVar5;
  piVar2[0x36] = iVar5;
  piVar2[0x37] = (int)s_down_1_005bc910;
  piVar1[7] = (int)s_end_st_005bc8dc;
  piVar1[6] = iVar5;
  uVar6 = func_00114608(DAT_005bc924,DAT_005bc920);
  piVar1[1] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005bc928,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005bc930;
  DAT_005bc930[2] = DAT_005bc930 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_14 = &DAT_005bc934;
  local_18 = iVar5;
  local_1c = s_EnemySandBoss_005bc944;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005bc954;
  }
  uVar4 = func_0019B51C(DAT_005bc960,DAT_005bc95c,*DAT_005bc958,(int)&local_20,DAT_005bc930,
                        &local_18,iVar5);
  return CONCAT44(DAT_005bc964,uVar4);
}

