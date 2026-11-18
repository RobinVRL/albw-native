#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 DAT_00436b70;
extern uint *DAT_00436b7c;
extern undefined4 *DAT_00436b80;
extern undefined DAT_00437038;
extern undefined4 DAT_0043711c;
extern undefined4 DAT_00437120;
extern char s_BardFluteUra_00437094[];
extern char s_BardFlute_00436e80[];
extern char s_BirdLift_00436d4c[];
extern char s_BirdUra_00437114[];
extern char s_BlacksmithUra_00436c9c[];
extern char s_BlacksmithWifeUra_00436c7c[];
extern char s_BlacksmithWife_00436c6c[];
extern char s_Blacksmith_00436c90[];
extern char s_BridgeManUra_00436e08[];
extern char s_BridgeMan_00436dfc[];
extern char s_BugMan_00436e6c[];
extern char s_Climber_00436df4[];
extern char s_CommanderUra_004370ec[];
extern char s_Commander_00436ea4[];
extern char s_CrossOldMan_00436d64[];
extern char s_CustomerUra_00436d34[];
extern char s_Customer_00436d40[];
extern char s_DanpeiUra_00436dd4[];
extern char s_Danpei_00436dcc[];
extern char s_DressWoman_00436be8[];
extern char s_DungeonGoal_00436dc0[];
extern char s_DungeonStart_00436db0[];
extern char s_DwarfUra_00436c60[];
extern char s_Dwarf_00436c58[];
extern char s_FairyBigRupee_00437040[];
extern char s_FairyBig_00437088[];
extern char s_GossipMan_00436d18[];
extern char s_GuardMan_00436cd0[];
extern char s_ItemHusband_00436ba0[];
extern char s_KakarikoBoy_00436bfc[];
extern char s_KakarikoGirl_00436c34[];
extern char s_LakeMan_00437030[];
extern char s_MaskMan_00436cdc[];
extern char s_MaskPriest_00436cb8[];
extern char s_MaskWoman_00436cc4[];
extern char s_MiddleLadyUra_004370a4[];
extern char s_MiddleLady_00436c28[];
extern char s_MiddleManUra_00436e8c[];
extern char s_MiddleMan_00436bdc[];
extern char s_MilkBarMasterUra_00436e4c[];
extern char s_MilkBarMaster_00436e3c[];
extern char s_MiniGameKokko_00436d24[];
extern char s_MobWomanUra_004370fc[];
extern char s_MobWoman_00436c1c[];
extern char s_NPCHinox_00436e74[];
extern char s_NPCOctorok_00436bd0[];
extern char s_NpcGameGiriGiriUra_00436ce4[];
extern char s_NpcGameGiriGiri_00436cf8[];
extern char s_NpcGameRaceGoal_00437064[];
extern char s_NpcGameRaceStart_00437050[];
extern char s_NpcGameStadiumBoy_00436c08[];
extern char s_NpcGameStadiumGirl_00436c44[];
extern char s_NpcGameTower_00436d08[];
extern char s_NpcGameTreasureUra_00436d9c[];
extern char s_NpcGameTreasure_00436d8c[];
extern char s_NpcKinSta_00436eb0[];
extern char s_NpcSoldier_00436e60[];
extern char s_OldLadyUra_00436cac[];
extern char s_OldLady_00436bf4[];
extern char s_PriestUra_00436d58[];
extern char s_Scholar_00436e9c[];
extern char s_ShadowLink_00437108[];
extern char s_ShopManBomb_00436d80[];
extern char s_ShopManFortuneUra_00436bbc[];
extern char s_ShopManFortune_00436bac[];
extern char s_ShopManGoldenBee_00436eec[];
extern char s_ShopManItemLakeUra_0043701c[];
extern char s_ShopManItemLake_00436f00[];
extern char s_ShopManItemUra_00436b90[];
extern char s_ShopManItem_00436b84[];
extern char s_ShopManKinSta_00436ebc[];
extern char s_ShopManMagicUra_00436edc[];
extern char s_ShopManMagic_00436ecc[];
extern char s_ShopManStallkeeper_00437074[];
extern char s_ThiefGirl_00436de8[];
extern char s_Thief_00436de0[];
extern char s_TreasureHunterUra_00436e28[];
extern char s_TreasureHunter_00436e18[];
extern char s_TurtleBullied_004370d0[];
extern char s_TurtleMother_004370b4[];
extern char s_TurtleTurn_004370e0[];
extern char s_TurtleWall_004370c4[];
extern char s_Unknown_00436b74[];
extern char s_ZoraAttendant_00436d70[];

// USA 00436824 <- EU 00436804 (Ghidra, non-matching)
// GLOBAL DAT_00436b70 undefined4
// GLOBAL DAT_00436b7c uint *
// GLOBAL DAT_00436b80 undefined4 *
// GLOBAL DAT_00437038 undefined
// GLOBAL DAT_0043711c undefined4
// GLOBAL DAT_00437120 undefined4
// GLOBAL s_BardFluteUra_00437094 string
// GLOBAL s_BardFlute_00436e80 string
// GLOBAL s_BirdLift_00436d4c string
// GLOBAL s_BirdUra_00437114 string
// GLOBAL s_BlacksmithUra_00436c9c string
// GLOBAL s_BlacksmithWifeUra_00436c7c string
// GLOBAL s_BlacksmithWife_00436c6c string
// GLOBAL s_Blacksmith_00436c90 string
// GLOBAL s_BridgeManUra_00436e08 string
// GLOBAL s_BridgeMan_00436dfc string
// GLOBAL s_BugMan_00436e6c string
// GLOBAL s_Climber_00436df4 string
// GLOBAL s_CommanderUra_004370ec string
// GLOBAL s_Commander_00436ea4 string
// GLOBAL s_CrossOldMan_00436d64 string
// GLOBAL s_CustomerUra_00436d34 string
// GLOBAL s_Customer_00436d40 string
// GLOBAL s_DanpeiUra_00436dd4 string
// GLOBAL s_Danpei_00436dcc string
// GLOBAL s_DressWoman_00436be8 string
// GLOBAL s_DungeonGoal_00436dc0 string
// GLOBAL s_DungeonStart_00436db0 string
// GLOBAL s_DwarfUra_00436c60 string
// GLOBAL s_Dwarf_00436c58 string
// GLOBAL s_FairyBigRupee_00437040 string
// GLOBAL s_FairyBig_00437088 string
// GLOBAL s_GossipMan_00436d18 string
// GLOBAL s_GuardMan_00436cd0 string
// GLOBAL s_ItemHusband_00436ba0 string
// GLOBAL s_KakarikoBoy_00436bfc string
// GLOBAL s_KakarikoGirl_00436c34 string
// GLOBAL s_LakeMan_00437030 string
// GLOBAL s_MaskMan_00436cdc string
// GLOBAL s_MaskPriest_00436cb8 string
// GLOBAL s_MaskWoman_00436cc4 string
// GLOBAL s_MiddleLadyUra_004370a4 string
// GLOBAL s_MiddleLady_00436c28 string
// GLOBAL s_MiddleManUra_00436e8c string
// GLOBAL s_MiddleMan_00436bdc string
// GLOBAL s_MilkBarMasterUra_00436e4c string
// GLOBAL s_MilkBarMaster_00436e3c string
// GLOBAL s_MiniGameKokko_00436d24 string
// GLOBAL s_MobWomanUra_004370fc string
// GLOBAL s_MobWoman_00436c1c string
// GLOBAL s_NPCHinox_00436e74 string
// GLOBAL s_NPCOctorok_00436bd0 string
// GLOBAL s_NpcGameGiriGiriUra_00436ce4 string
// GLOBAL s_NpcGameGiriGiri_00436cf8 string
// GLOBAL s_NpcGameRaceGoal_00437064 string
// GLOBAL s_NpcGameRaceStart_00437050 string
// GLOBAL s_NpcGameStadiumBoy_00436c08 string
// GLOBAL s_NpcGameStadiumGirl_00436c44 string
// GLOBAL s_NpcGameTower_00436d08 string
// GLOBAL s_NpcGameTreasureUra_00436d9c string
// GLOBAL s_NpcGameTreasure_00436d8c string
// GLOBAL s_NpcKinSta_00436eb0 string
// GLOBAL s_NpcSoldier_00436e60 string
// GLOBAL s_OldLadyUra_00436cac string
// GLOBAL s_OldLady_00436bf4 string
// GLOBAL s_PriestUra_00436d58 string
// GLOBAL s_Scholar_00436e9c string
// GLOBAL s_ShadowLink_00437108 string
// GLOBAL s_ShopManBomb_00436d80 string
// GLOBAL s_ShopManFortuneUra_00436bbc string
// GLOBAL s_ShopManFortune_00436bac string
// GLOBAL s_ShopManGoldenBee_00436eec string
// GLOBAL s_ShopManItemLakeUra_0043701c string
// GLOBAL s_ShopManItemLake_00436f00 string
// GLOBAL s_ShopManItemUra_00436b90 string
// GLOBAL s_ShopManItem_00436b84 string
// GLOBAL s_ShopManKinSta_00436ebc string
// GLOBAL s_ShopManMagicUra_00436edc string
// GLOBAL s_ShopManMagic_00436ecc string
// GLOBAL s_ShopManStallkeeper_00437074 string
// GLOBAL s_ThiefGirl_00436de8 string
// GLOBAL s_Thief_00436de0 string
// GLOBAL s_TreasureHunterUra_00436e28 string
// GLOBAL s_TreasureHunter_00436e18 string
// GLOBAL s_TurtleBullied_004370d0 string
// GLOBAL s_TurtleMother_004370b4 string
// GLOBAL s_TurtleTurn_004370e0 string
// GLOBAL s_TurtleWall_004370c4 string
// GLOBAL s_Unknown_00436b74 string
// GLOBAL s_ZoraAttendant_00436d70 string

void func_00436824(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  puVar2 = DAT_00436b80;
  uVar1 = DAT_00436b70;
  if (param_2 < 0x55) {
    if (((*DAT_00436b7c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00436b7c), iVar4 != 0)) {
      puVar2[1] = s_ShopManItem_00436b84;
      *puVar2 = uVar1;
      puVar2[3] = s_ShopManItemUra_00436b90;
      puVar2[2] = uVar1;
      puVar2[5] = s_ItemHusband_00436ba0;
      puVar2[4] = uVar1;
      puVar2[7] = s_ShopManFortune_00436bac;
      puVar2[6] = uVar1;
      puVar2[9] = s_ShopManFortuneUra_00436bbc;
      puVar2[8] = uVar1;
      puVar2[0xb] = s_NPCOctorok_00436bd0;
      puVar2[10] = uVar1;
      puVar2[0xd] = s_MiddleMan_00436bdc;
      puVar2[0xc] = uVar1;
      puVar2[0xf] = s_DressWoman_00436be8;
      puVar2[0xe] = uVar1;
      puVar2[0x11] = s_OldLady_00436bf4;
      puVar2[0x10] = uVar1;
      puVar2[0x13] = s_KakarikoBoy_00436bfc;
      puVar2[0x12] = uVar1;
      puVar2[0x15] = s_NpcGameStadiumBoy_00436c08;
      puVar2[0x14] = uVar1;
      puVar2[0x17] = s_MobWoman_00436c1c;
      puVar2[0x16] = uVar1;
      puVar2[0x19] = s_MiddleLady_00436c28;
      puVar2[0x18] = uVar1;
      puVar2[0x1b] = s_KakarikoGirl_00436c34;
      puVar2[0x1a] = uVar1;
      puVar2[0x1d] = s_NpcGameStadiumGirl_00436c44;
      puVar2[0x1c] = uVar1;
      puVar2[0x1f] = s_Dwarf_00436c58;
      puVar2[0x1e] = uVar1;
      puVar2[0x21] = s_DwarfUra_00436c60;
      puVar2[0x20] = uVar1;
      puVar2[0x23] = s_BlacksmithWife_00436c6c;
      puVar2[0x22] = uVar1;
      puVar2[0x25] = s_BlacksmithWifeUra_00436c7c;
      puVar2[0x24] = uVar1;
      puVar2[0x27] = s_Blacksmith_00436c90;
      puVar2[0x26] = uVar1;
      puVar2[0x29] = s_BlacksmithUra_00436c9c;
      puVar2[0x28] = uVar1;
      puVar2[0x2b] = s_OldLadyUra_00436cac;
      puVar2[0x2a] = uVar1;
      puVar2[0x2d] = s_MaskPriest_00436cb8;
      puVar2[0x2c] = uVar1;
      puVar2[0x2f] = s_MaskWoman_00436cc4;
      puVar2[0x2e] = uVar1;
      puVar2[0x31] = s_GuardMan_00436cd0;
      puVar2[0x30] = uVar1;
      puVar2[0x33] = s_MaskMan_00436cdc;
      puVar2[0x32] = uVar1;
      puVar2[0x35] = s_NpcGameGiriGiriUra_00436ce4;
      puVar2[0x34] = uVar1;
      puVar2[0x37] = s_NpcGameGiriGiri_00436cf8;
      puVar2[0x36] = uVar1;
      puVar2[0x39] = s_NpcGameTower_00436d08;
      puVar2[0x38] = uVar1;
      puVar2[0x3b] = s_GossipMan_00436d18;
      puVar2[0x3a] = uVar1;
      puVar2[0x3d] = s_MiniGameKokko_00436d24;
      puVar2[0x3c] = uVar1;
      puVar2[0x3f] = s_CustomerUra_00436d34;
      puVar2[0x3e] = uVar1;
      puVar2[0x41] = s_Customer_00436d40;
      puVar2[0x40] = uVar1;
      puVar2[0x43] = s_BirdLift_00436d4c;
      puVar2[0x42] = uVar1;
      puVar2[0x45] = s_MaskPriest_00436cb8 + 4;
      puVar2[0x44] = uVar1;
      puVar2[0x47] = s_PriestUra_00436d58;
      puVar2[0x46] = uVar1;
      puVar2[0x49] = s_CrossOldMan_00436d64;
      puVar2[0x48] = uVar1;
      puVar2[0x4b] = s_ZoraAttendant_00436d70;
      puVar2[0x4a] = uVar1;
      puVar2[0x4d] = s_ShopManBomb_00436d80;
      puVar2[0x4c] = uVar1;
      puVar2[0x4f] = s_NpcGameTreasure_00436d8c;
      puVar2[0x4e] = uVar1;
      puVar2[0x51] = s_NpcGameTreasureUra_00436d9c;
      puVar2[0x50] = uVar1;
      puVar2[0x53] = s_DungeonStart_00436db0;
      puVar2[0x52] = uVar1;
      puVar2[0x55] = s_DungeonGoal_00436dc0;
      puVar2[0x54] = uVar1;
      puVar2[0x57] = s_Danpei_00436dcc;
      puVar2[0x56] = uVar1;
      puVar2[0x59] = s_DanpeiUra_00436dd4;
      puVar2[0x58] = uVar1;
      puVar2[0x5b] = s_Thief_00436de0;
      puVar2[0x5a] = uVar1;
      puVar2[0x5d] = s_ThiefGirl_00436de8;
      puVar2[0x5c] = uVar1;
      puVar2[0x5f] = s_Climber_00436df4;
      puVar2[0x5e] = uVar1;
      puVar2[0x61] = s_BridgeMan_00436dfc;
      puVar2[0x60] = uVar1;
      puVar2[99] = s_BridgeManUra_00436e08;
      puVar2[0x62] = uVar1;
      puVar2[0x65] = s_TreasureHunter_00436e18;
      puVar2[100] = uVar1;
      puVar2[0x67] = s_TreasureHunterUra_00436e28;
      puVar2[0x66] = uVar1;
      puVar2[0x69] = s_MilkBarMaster_00436e3c;
      puVar2[0x68] = uVar1;
      puVar2[0x6b] = s_MilkBarMasterUra_00436e4c;
      puVar2[0x6a] = uVar1;
      puVar2[0x6d] = s_NpcSoldier_00436e60;
      puVar2[0x6c] = uVar1;
      puVar2[0x6f] = s_BugMan_00436e6c;
      puVar2[0x6e] = uVar1;
      puVar2[0x71] = s_NPCHinox_00436e74;
      puVar2[0x70] = uVar1;
      puVar2[0x73] = s_BardFlute_00436e80;
      puVar2[0x72] = uVar1;
      puVar2[0x75] = s_MiddleManUra_00436e8c;
      puVar2[0x74] = uVar1;
      puVar2[0x77] = s_Scholar_00436e9c;
      puVar2[0x76] = uVar1;
      puVar2[0x79] = s_Commander_00436ea4;
      puVar2[0x78] = uVar1;
      puVar2[0x7b] = s_NpcKinSta_00436eb0;
      puVar2[0x7a] = uVar1;
      puVar2[0x7d] = s_ShopManKinSta_00436ebc;
      puVar2[0x7c] = uVar1;
      puVar2[0x7f] = s_ShopManMagic_00436ecc;
      puVar2[0x7e] = uVar1;
      puVar2[0x81] = s_ShopManMagicUra_00436edc;
      puVar2[0x80] = uVar1;
      puVar2[0x83] = s_ShopManGoldenBee_00436eec;
      puVar2[0x82] = uVar1;
      puVar2[0x85] = s_ShopManItemLake_00436f00;
      puVar2[0x84] = uVar1;
      puVar2[0x87] = s_ShopManItemLakeUra_0043701c;
      puVar2[0x86] = uVar1;
      puVar2[0x89] = s_LakeMan_00437030;
      puVar2[0x88] = uVar1;
      puVar2[0x8b] = &DAT_00437038;
      puVar2[0x8a] = uVar1;
      puVar2[0x8d] = s_FairyBigRupee_00437040;
      puVar2[0x8c] = uVar1;
      puVar2[0x8f] = s_NpcGameRaceStart_00437050;
      puVar2[0x8e] = uVar1;
      puVar2[0x91] = s_NpcGameRaceGoal_00437064;
      puVar2[0x90] = uVar1;
      puVar2[0x93] = s_ShopManStallkeeper_00437074;
      puVar2[0x92] = uVar1;
      puVar2[0x95] = s_FairyBig_00437088;
      puVar2[0x94] = uVar1;
      puVar2[0x97] = s_BardFluteUra_00437094;
      puVar2[0x96] = uVar1;
      puVar2[0x99] = s_MiddleLadyUra_004370a4;
      puVar2[0x98] = uVar1;
      puVar2[0x9b] = s_TurtleMother_004370b4;
      puVar2[0x9a] = uVar1;
      puVar2[0x9d] = s_TurtleWall_004370c4;
      puVar2[0x9c] = uVar1;
      puVar2[0x9f] = s_TurtleBullied_004370d0;
      puVar2[0x9e] = uVar1;
      puVar2[0xa1] = s_TurtleTurn_004370e0;
      puVar2[0xa0] = uVar1;
      puVar2[0xa3] = s_CommanderUra_004370ec;
      puVar2[0xa2] = uVar1;
      puVar2[0xa5] = s_MobWomanUra_004370fc;
      puVar2[0xa4] = uVar1;
      puVar2[0xa6] = uVar1;
      puVar2[0xa7] = s_ShadowLink_00437108;
      puVar2[0xa9] = s_BirdUra_00437114;
      puVar2[0xa8] = uVar1;
    }
    *param_1 = uVar1;
    pcVar3 = (char *)puVar2[param_2 * 2 + 1];
  }
  else {
    pcVar3 = s_Unknown_00436b74;
    *param_1 = DAT_00436b70;
  }
  param_1[1] = pcVar3;
  return;
}

