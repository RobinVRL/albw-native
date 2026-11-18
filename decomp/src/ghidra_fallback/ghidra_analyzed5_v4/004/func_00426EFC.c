// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556A2C(int param_1);
extern int func_00556A9C();
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00427288;
extern int DAT_0042740c;
extern int *DAT_00427410;
extern char s_cl_instruction_beebadge_00427250[];
extern char s_cl_instruction_bracelet_004271b0[];
extern char s_cl_instruction_charm_00427390[];
extern char s_cl_instruction_clothesLv2_0042706c[];
extern char s_cl_instruction_clothesLv3_00427088[];
extern char s_cl_instruction_clothesLv4_004270a4[];
extern char s_cl_instruction_courage_0042728c[];
extern char s_cl_instruction_emptyBracelet_00427190[];
extern char s_cl_instruction_ganbari_power_up_00427268[];
extern char s_cl_instruction_heartpiece_004273d8[];
extern char s_cl_instruction_kinstaFlagOn_00_0042746c[];
extern char s_cl_instruction_kinstaFlagOn_01_0042742c[];
extern char s_cl_instruction_kinsta_00427414[];
extern char s_cl_instruction_kinstacomplete_0042744c[];
extern char s_cl_instruction_liver_blue_0042748c[];
extern char s_cl_instruction_liver_purple_00427514[];
extern char s_cl_instruction_liver_yellow_00427530[];
extern char s_cl_instruction_masterswordLv1_0042700c[];
extern char s_cl_instruction_masterswordLv2_0042702c[];
extern char s_cl_instruction_masterswordLv3_0042704c[];
extern char s_cl_instruction_ore_0042754c[];
extern char s_cl_instruction_painting_blacksmi_00427580[];
extern char s_cl_instruction_painting_inpa_00427560[];
extern char s_cl_instruction_painting_maple_004275a8[];
extern char s_cl_instruction_painting_miner_00427648[];
extern char s_cl_instruction_painting_prestgir_004275ec[];
extern char s_cl_instruction_painting_sahaspup_004275c8[];
extern char s_cl_instruction_painting_zora_00427610[];
extern char s_cl_instruction_pegasus_00427208[];
extern char s_cl_instruction_power_004273c0[];
extern char s_cl_instruction_powerglovesLv1_004271c8[];
extern char s_cl_instruction_powerglovesLv2_004271e8[];
extern char s_cl_instruction_rupee_004273f4[];
extern char s_cl_instruction_shieldLv1_004270c0[];
extern char s_cl_instruction_shieldLv2_004270dc[];
extern char s_cl_instruction_stonebeauty_00427220[];
extern char s_cl_instruction_sword_00426ff4[];
extern char s_cl_instruction_web_0042723c[];
extern char s_cl_instruction_wisdom_004273a8[];

// USA 00426EFC <- EU 00426EDC (Ghidra, non-matching)
// GLOBAL DAT_00427288 int *
// GLOBAL DAT_0042740c int
// GLOBAL DAT_00427410 int *
// GLOBAL s_cl_instruction_beebadge_00427250 string
// GLOBAL s_cl_instruction_bracelet_004271b0 string
// GLOBAL s_cl_instruction_charm_00427390 string
// GLOBAL s_cl_instruction_clothesLv2_0042706c string
// GLOBAL s_cl_instruction_clothesLv3_00427088 string
// GLOBAL s_cl_instruction_clothesLv4_004270a4 string
// GLOBAL s_cl_instruction_courage_0042728c string
// GLOBAL s_cl_instruction_emptyBracelet_00427190 string
// GLOBAL s_cl_instruction_ganbari_power_up_00427268 string
// GLOBAL s_cl_instruction_heartpiece_004273d8 string
// GLOBAL s_cl_instruction_kinstaFlagOn_00_0042746c string
// GLOBAL s_cl_instruction_kinstaFlagOn_01_0042742c string
// GLOBAL s_cl_instruction_kinsta_00427414 string
// GLOBAL s_cl_instruction_kinstacomplete_0042744c string
// GLOBAL s_cl_instruction_liver_blue_0042748c string
// GLOBAL s_cl_instruction_liver_purple_00427514 string
// GLOBAL s_cl_instruction_liver_yellow_00427530 string
// GLOBAL s_cl_instruction_masterswordLv1_0042700c string
// GLOBAL s_cl_instruction_masterswordLv2_0042702c string
// GLOBAL s_cl_instruction_masterswordLv3_0042704c string
// GLOBAL s_cl_instruction_ore_0042754c string
// GLOBAL s_cl_instruction_painting_blacksmi_00427580 string
// GLOBAL s_cl_instruction_painting_inpa_00427560 string
// GLOBAL s_cl_instruction_painting_maple_004275a8 string
// GLOBAL s_cl_instruction_painting_miner_00427648 string
// GLOBAL s_cl_instruction_painting_prestgir_004275ec string
// GLOBAL s_cl_instruction_painting_sahaspup_004275c8 string
// GLOBAL s_cl_instruction_painting_zora_00427610 string
// GLOBAL s_cl_instruction_pegasus_00427208 string
// GLOBAL s_cl_instruction_power_004273c0 string
// GLOBAL s_cl_instruction_powerglovesLv1_004271c8 string
// GLOBAL s_cl_instruction_powerglovesLv2_004271e8 string
// GLOBAL s_cl_instruction_rupee_004273f4 string
// GLOBAL s_cl_instruction_shieldLv1_004270c0 string
// GLOBAL s_cl_instruction_shieldLv2_004270dc string
// GLOBAL s_cl_instruction_stonebeauty_00427220 string
// GLOBAL s_cl_instruction_sword_00426ff4 string
// GLOBAL s_cl_instruction_web_0042723c string
// GLOBAL s_cl_instruction_wisdom_004273a8 string

undefined4 func_00426EFC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  switch(param_2) {
  case 0:
    return func_004994B0(param_1,s_cl_instruction_sword_00426ff4,param_3,param_4);
  case 1:
    return func_004994B0(param_1,s_cl_instruction_masterswordLv1_0042700c,param_3,param_4);
  case 2:
    return func_004994B0(param_1,s_cl_instruction_masterswordLv2_0042702c,param_3,param_4);
  case 3:
    return func_004994B0(param_1,s_cl_instruction_masterswordLv3_0042704c,param_3,param_4);
  case 4:
    return func_004994B0(param_1,s_cl_instruction_clothesLv2_0042706c,param_3,param_4);
  case 5:
    return func_004994B0(param_1,s_cl_instruction_clothesLv3_00427088,param_3,param_4);
  case 6:
    return func_004994B0(param_1,s_cl_instruction_clothesLv4_004270a4,param_3,param_4);
  case 7:
    return func_004994B0(param_1,s_cl_instruction_shieldLv1_004270c0,param_3,param_4);
  case 8:
    return func_004994B0(param_1,s_cl_instruction_shieldLv2_004270dc,param_3,param_4);
  case 9:
    return func_004994B0(param_1,s_cl_instruction_emptyBracelet_00427190,param_3,param_4);
  case 10:
    return func_004994B0(param_1,s_cl_instruction_bracelet_004271b0,param_3,param_4);
  case 0xb:
    return func_004994B0(param_1,s_cl_instruction_powerglovesLv1_004271c8,param_3,param_4);
  case 0xc:
    return func_004994B0(param_1,s_cl_instruction_powerglovesLv2_004271e8,param_3,param_4);
  case 0xd:
    return func_004994B0(param_1,s_cl_instruction_pegasus_00427208,param_3,param_4);
  case 0xe:
    return func_004994B0(param_1,s_cl_instruction_stonebeauty_00427220,param_3,param_4);
  case 0xf:
    return func_004994B0(param_1,s_cl_instruction_web_0042723c,param_3,param_4);
  case 0x10:
    return func_004994B0(param_1,s_cl_instruction_beebadge_00427250,param_3,param_4);
  case 0x11:
    return func_004994B0(param_1,s_cl_instruction_ganbari_power_up_00427268,param_3,param_4);
  case 0x12:
    return func_004994B0(param_1,s_cl_instruction_power_004273c0,param_3,param_4);
  case 0x13:
    return func_004994B0(param_1,s_cl_instruction_wisdom_004273a8,param_3,param_4);
  case 0x14:
    iVar4 = func_0055696C(*DAT_00427288,0x1a);
    if (iVar4 == 0) {
      return func_004994B0(param_1,s_cl_instruction_charm_00427390,param_3,param_4);
    }
    return func_004994B0(param_1,s_cl_instruction_courage_0042728c,param_3,param_4);
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    return func_004994B0(param_1,s_cl_instruction_heartpiece_004273d8,param_3,param_4);
  case 0x19:
    return func_004994B0(param_1,s_cl_instruction_rupee_004273f4,param_3,param_4);
  case 0x1a:
    break;
  case 0x1b:
    return func_004994B0(param_1,s_cl_instruction_liver_blue_0042748c,param_3,param_4);
  case 0x1c:
    return func_004994B0(param_1,s_cl_instruction_liver_purple_00427514,param_3,param_4);
  case 0x1d:
    return func_004994B0(param_1,s_cl_instruction_liver_yellow_00427530,param_3,param_4);
  case 0x1e:
    return func_004994B0(param_1,s_cl_instruction_ore_0042754c,param_3,param_4);
  case 0x1f:
    return func_004994B0(param_1,s_cl_instruction_painting_inpa_00427560,param_3,param_4);
  case 0x20:
    return func_004994B0(param_1,s_cl_instruction_painting_blacksmi_00427580,param_3,param_4);
  case 0x21:
    return func_004994B0(param_1,s_cl_instruction_painting_maple_004275a8,param_3,param_4);
  case 0x22:
    return func_004994B0(param_1,s_cl_instruction_painting_sahaspup_004275c8,param_3,param_4);
  case 0x23:
    return func_004994B0(param_1,s_cl_instruction_painting_prestgir_004275ec,param_3,param_4);
  case 0x24:
    return func_004994B0(param_1,s_cl_instruction_painting_zora_00427610,param_3,param_4);
  case 0x25:
    return func_004994B0(param_1,s_cl_instruction_painting_miner_00427648,param_3,param_4);
  default:
    return func_004994B0(param_1,s_cl_instruction_painting_inpa_00427560 + 0x1c,param_3,param_4);
  }
  bVar2 = func_00584B94(*DAT_00427410,DAT_0042740c);
  piVar1 = DAT_00427288;
  if (!bVar2) {
    return func_004994B0(param_1,s_cl_instruction_kinsta_00427414,param_3,param_4);
  }
  cVar3 = func_00556A2C(*DAT_00427288);
  if ((cVar3 == 'd') && (cVar3 = func_00556A9C(*piVar1), cVar3 == '\0')) {
    return func_004994B0(param_1,s_cl_instruction_kinstacomplete_0042744c,param_3,param_4);
  }
  cVar3 = func_00556A9C(*piVar1);
  if (cVar3 == '\0') {
    return func_004994B0(param_1,s_cl_instruction_kinstaFlagOn_00_0042746c,param_3,param_4);
  }
  return func_004994B0(param_1,s_cl_instruction_kinstaFlagOn_01_0042742c,param_3,param_4);
}

