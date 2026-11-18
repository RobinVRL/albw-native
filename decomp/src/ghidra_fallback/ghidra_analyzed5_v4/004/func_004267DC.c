#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_00426b3c;
extern char s_cl_name_beebadge_00426b0c[];
extern char s_cl_name_bracelet_004269cc[];
extern char s_cl_name_charm_00426b50[];
extern char s_cl_name_clothesLv2_00426950[];
extern char s_cl_name_clothesLv3_00426964[];
extern char s_cl_name_clothesLv4_00426978[];
extern char s_cl_name_courage_00426b40[];
extern char s_cl_name_emptyBracelet_004269b4[];
extern char s_cl_name_ganbari_power_up_00426b20[];
extern char s_cl_name_heartpiece_00426b80[];
extern char s_cl_name_kinsta_00426ba4[];
extern char s_cl_name_liver_blue_00426bb4[];
extern char s_cl_name_liver_purple_00426c4c[];
extern char s_cl_name_liver_yellow_00426c64[];
extern char s_cl_name_masterswordLv1_00426908[];
extern char s_cl_name_masterswordLv2_00426920[];
extern char s_cl_name_masterswordLv3_00426938[];
extern char s_cl_name_ore_00426c7c[];
extern char s_cl_name_painting_blacksmithKid_00426ca0[];
extern char s_cl_name_painting_inpa_00426c88[];
extern char s_cl_name_painting_maple_00426cc0[];
extern char s_cl_name_painting_miner_00426d28[];
extern char s_cl_name_painting_prestgirl_00426cf4[];
extern char s_cl_name_painting_sahaspupil_00426cd8[];
extern char s_cl_name_painting_zora_00426d10[];
extern char s_cl_name_pegasus_00426adc[];
extern char s_cl_name_power_00426b70[];
extern char s_cl_name_powerglovesLv1_004269e0[];
extern char s_cl_name_powerglovesLv2_00426ac4[];
extern char s_cl_name_rupee_00426b94[];
extern char s_cl_name_shieldLv1_0042698c[];
extern char s_cl_name_shieldLv2_004269a0[];
extern char s_cl_name_stonebeauty_00426aec[];
extern char s_cl_name_sword_004268f8[];
extern char s_cl_name_web_00426b00[];
extern char s_cl_name_wisdom_00426b60[];

// USA 004267DC <- EU 004267BC (Ghidra, non-matching)
// GLOBAL DAT_00426b3c int *
// GLOBAL s_cl_name_beebadge_00426b0c string
// GLOBAL s_cl_name_bracelet_004269cc string
// GLOBAL s_cl_name_charm_00426b50 string
// GLOBAL s_cl_name_clothesLv2_00426950 string
// GLOBAL s_cl_name_clothesLv3_00426964 string
// GLOBAL s_cl_name_clothesLv4_00426978 string
// GLOBAL s_cl_name_courage_00426b40 string
// GLOBAL s_cl_name_emptyBracelet_004269b4 string
// GLOBAL s_cl_name_ganbari_power_up_00426b20 string
// GLOBAL s_cl_name_heartpiece_00426b80 string
// GLOBAL s_cl_name_kinsta_00426ba4 string
// GLOBAL s_cl_name_liver_blue_00426bb4 string
// GLOBAL s_cl_name_liver_purple_00426c4c string
// GLOBAL s_cl_name_liver_yellow_00426c64 string
// GLOBAL s_cl_name_masterswordLv1_00426908 string
// GLOBAL s_cl_name_masterswordLv2_00426920 string
// GLOBAL s_cl_name_masterswordLv3_00426938 string
// GLOBAL s_cl_name_ore_00426c7c string
// GLOBAL s_cl_name_painting_blacksmithKid_00426ca0 string
// GLOBAL s_cl_name_painting_inpa_00426c88 string
// GLOBAL s_cl_name_painting_maple_00426cc0 string
// GLOBAL s_cl_name_painting_miner_00426d28 string
// GLOBAL s_cl_name_painting_prestgirl_00426cf4 string
// GLOBAL s_cl_name_painting_sahaspupil_00426cd8 string
// GLOBAL s_cl_name_painting_zora_00426d10 string
// GLOBAL s_cl_name_pegasus_00426adc string
// GLOBAL s_cl_name_power_00426b70 string
// GLOBAL s_cl_name_powerglovesLv1_004269e0 string
// GLOBAL s_cl_name_powerglovesLv2_00426ac4 string
// GLOBAL s_cl_name_rupee_00426b94 string
// GLOBAL s_cl_name_shieldLv1_0042698c string
// GLOBAL s_cl_name_shieldLv2_004269a0 string
// GLOBAL s_cl_name_stonebeauty_00426aec string
// GLOBAL s_cl_name_sword_004268f8 string
// GLOBAL s_cl_name_web_00426b00 string
// GLOBAL s_cl_name_wisdom_00426b60 string

undefined4 func_004267DC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    return func_004994B0(param_1,s_cl_name_sword_004268f8,param_3,param_4);
  case 1:
    return func_004994B0(param_1,s_cl_name_masterswordLv1_00426908,param_3,param_4);
  case 2:
    return func_004994B0(param_1,s_cl_name_masterswordLv2_00426920,param_3,param_4);
  case 3:
    return func_004994B0(param_1,s_cl_name_masterswordLv3_00426938,param_3,param_4);
  case 4:
    return func_004994B0(param_1,s_cl_name_clothesLv2_00426950,param_3,param_4);
  case 5:
    return func_004994B0(param_1,s_cl_name_clothesLv3_00426964,param_3,param_4);
  case 6:
    return func_004994B0(param_1,s_cl_name_clothesLv4_00426978,param_3,param_4);
  case 7:
    return func_004994B0(param_1,s_cl_name_shieldLv1_0042698c,param_3,param_4);
  case 8:
    return func_004994B0(param_1,s_cl_name_shieldLv2_004269a0,param_3,param_4);
  case 9:
    return func_004994B0(param_1,s_cl_name_emptyBracelet_004269b4,param_3,param_4);
  case 10:
    return func_004994B0(param_1,s_cl_name_bracelet_004269cc,param_3,param_4);
  case 0xb:
    return func_004994B0(param_1,s_cl_name_powerglovesLv1_004269e0,param_3,param_4);
  case 0xc:
    return func_004994B0(param_1,s_cl_name_powerglovesLv2_00426ac4,param_3,param_4);
  case 0xd:
    return func_004994B0(param_1,s_cl_name_pegasus_00426adc,param_3,param_4);
  case 0xe:
    return func_004994B0(param_1,s_cl_name_stonebeauty_00426aec,param_3,param_4);
  case 0xf:
    return func_004994B0(param_1,s_cl_name_web_00426b00,param_3,param_4);
  case 0x10:
    return func_004994B0(param_1,s_cl_name_beebadge_00426b0c,param_3,param_4);
  case 0x11:
    return func_004994B0(param_1,s_cl_name_ganbari_power_up_00426b20,param_3,param_4);
  case 0x12:
    return func_004994B0(param_1,s_cl_name_power_00426b70,param_3,param_4);
  case 0x13:
    return func_004994B0(param_1,s_cl_name_wisdom_00426b60,param_3,param_4);
  case 0x14:
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    return func_004994B0(param_1,s_cl_name_heartpiece_00426b80,param_3,param_4);
  case 0x19:
    return func_004994B0(param_1,s_cl_name_rupee_00426b94,param_3,param_4);
  case 0x1a:
    return func_004994B0(param_1,s_cl_name_kinsta_00426ba4,param_3,param_4);
  case 0x1b:
    return func_004994B0(param_1,s_cl_name_liver_blue_00426bb4,param_3,param_4);
  case 0x1c:
    return func_004994B0(param_1,s_cl_name_liver_purple_00426c4c,param_3,param_4);
  case 0x1d:
    return func_004994B0(param_1,s_cl_name_liver_yellow_00426c64,param_3,param_4);
  case 0x1e:
    return func_004994B0(param_1,s_cl_name_ore_00426c7c,param_3,param_4);
  case 0x1f:
    return func_004994B0(param_1,s_cl_name_painting_inpa_00426c88,param_3,param_4);
  case 0x20:
    return func_004994B0(param_1,s_cl_name_painting_blacksmithKid_00426ca0,param_3,param_4);
  case 0x21:
    return func_004994B0(param_1,s_cl_name_painting_maple_00426cc0,param_3,param_4);
  case 0x22:
    return func_004994B0(param_1,s_cl_name_painting_sahaspupil_00426cd8,param_3,param_4);
  case 0x23:
    return func_004994B0(param_1,s_cl_name_painting_prestgirl_00426cf4,param_3,param_4);
  case 0x24:
    return func_004994B0(param_1,s_cl_name_painting_zora_00426d10,param_3,param_4);
  case 0x25:
    return func_004994B0(param_1,s_cl_name_painting_miner_00426d28,param_3,param_4);
  default:
    return func_004994B0(param_1,s_cl_name_liver_purple_00426c4c + 0x14,param_3,param_4);
  }
  iVar1 = func_0055696C(*DAT_00426b3c,0x1a);
  if (iVar1 == 0) {
    return func_004994B0(param_1,s_cl_name_charm_00426b50,param_3,param_4);
  }
  return func_004994B0(param_1,s_cl_name_courage_00426b40,param_3,param_4);
}

