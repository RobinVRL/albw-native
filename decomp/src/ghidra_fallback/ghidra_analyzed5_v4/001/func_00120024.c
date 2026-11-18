#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0012038c;
extern undefined4 *DAT_00120390;
extern undefined4 DAT_00120394;
extern undefined DAT_001203f4;
extern undefined4 DAT_001206b0;
extern undefined4 DAT_001206b4;
extern char s_AttractionDark_001204bc[];
extern char s_AttractionLight_001204ac[];
extern char s_CaveDark_001203d4[];
extern char s_CaveLight_001203c8[];
extern char s_CrossBattle_001203e8[];
extern char s_Dummy28_001204fc[];
extern char s_Dummy29_00120504[];
extern char s_Dummy30_0012050c[];
extern char s_Dummy31_00120514[];
extern char s_Dummy32_0012051c[];
extern char s_Dummy34_0012052c[];
extern char s_Dummy35_00120534[];
extern char s_Dummy36_0012053c[];
extern char s_Dummy63_001206a0[];
extern char s_Dummy64_001206a8[];
extern char s_Dummy7_001203e0[];
extern char s_DungeonBoss_001204a0[];
extern char s_DungeonCastle_00120420[];
extern char s_DungeonDark_00120430[];
extern char s_DungeonDokuro_0012044c[];
extern char s_DungeonEast_001203fc[];
extern char s_DungeonGanon_00120490[];
extern char s_DungeonHagure_0012045c[];
extern char s_DungeonHera_00120414[];
extern char s_DungeonIce_0012046c[];
extern char s_DungeonKame_00120484[];
extern char s_DungeonSand_00120478[];
extern char s_DungeonWater_0012043c[];
extern char s_DungeonWind_00120408[];
extern char s_E3Field_00120524[];
extern char s_EnemyAttackL_001204ec[];
extern char s_EnemyAttackM_001204dc[];
extern char s_EnemyAttackS_001204cc[];
extern char s_FieldDark_001203a4[];
extern char s_FieldLight_00120398[];
extern char s_IndoorDark_001203bc[];
extern char s_IndoorLight_001203b0[];
extern char s_TestAkama_00120694[];
extern char s_TestCrossBattle_00120554[];
extern char s_TestDemo_00120564[];
extern char s_TestDesigner_0012057c[];
extern char s_TestIkkaku_001205f0[];
extern char s_TestImamura_0012063c[];
extern char s_TestIwata_00120618[];
extern char s_TestKanno_00120630[];
extern char s_TestKiuchi_0012066c[];
extern char s_TestLocalize_00120544[];
extern char s_TestMinato_00120650[];
extern char s_TestMouri_001205b8[];
extern char s_TestNakamura_001205c4[];
extern char s_TestNarita_00120678[];
extern char s_TestOkane_001205e4[];
extern char s_TestSRD_00120648[];
extern char s_TestSakasai_0012060c[];
extern char s_TestSakuraba_001205d4[];
extern char s_TestShikata_00120624[];
extern char s_TestShirakawa_00120684[];
extern char s_TestSystem_00120570[];
extern char s_TestTakeuchi_001205fc[];
extern char s_TestTominaga_0012058c[];
extern char s_TestYamada_0012059c[];
extern char s_TestYamamura_001205a8[];
extern char s_TestYamashitaY_0012065c[];

// USA 00120024 <- EU 00120024 (Ghidra, non-matching)
// GLOBAL DAT_0012038c uint *
// GLOBAL DAT_00120390 undefined4 *
// GLOBAL DAT_00120394 undefined4
// GLOBAL DAT_001203f4 undefined
// GLOBAL DAT_001206b0 undefined4
// GLOBAL DAT_001206b4 undefined4
// GLOBAL s_AttractionDark_001204bc string
// GLOBAL s_AttractionLight_001204ac string
// GLOBAL s_CaveDark_001203d4 string
// GLOBAL s_CaveLight_001203c8 string
// GLOBAL s_CrossBattle_001203e8 string
// GLOBAL s_Dummy28_001204fc string
// GLOBAL s_Dummy29_00120504 string
// GLOBAL s_Dummy30_0012050c string
// GLOBAL s_Dummy31_00120514 string
// GLOBAL s_Dummy32_0012051c string
// GLOBAL s_Dummy34_0012052c string
// GLOBAL s_Dummy35_00120534 string
// GLOBAL s_Dummy36_0012053c string
// GLOBAL s_Dummy63_001206a0 string
// GLOBAL s_Dummy64_001206a8 string
// GLOBAL s_Dummy7_001203e0 string
// GLOBAL s_DungeonBoss_001204a0 string
// GLOBAL s_DungeonCastle_00120420 string
// GLOBAL s_DungeonDark_00120430 string
// GLOBAL s_DungeonDokuro_0012044c string
// GLOBAL s_DungeonEast_001203fc string
// GLOBAL s_DungeonGanon_00120490 string
// GLOBAL s_DungeonHagure_0012045c string
// GLOBAL s_DungeonHera_00120414 string
// GLOBAL s_DungeonIce_0012046c string
// GLOBAL s_DungeonKame_00120484 string
// GLOBAL s_DungeonSand_00120478 string
// GLOBAL s_DungeonWater_0012043c string
// GLOBAL s_DungeonWind_00120408 string
// GLOBAL s_E3Field_00120524 string
// GLOBAL s_EnemyAttackL_001204ec string
// GLOBAL s_EnemyAttackM_001204dc string
// GLOBAL s_EnemyAttackS_001204cc string
// GLOBAL s_FieldDark_001203a4 string
// GLOBAL s_FieldLight_00120398 string
// GLOBAL s_IndoorDark_001203bc string
// GLOBAL s_IndoorLight_001203b0 string
// GLOBAL s_TestAkama_00120694 string
// GLOBAL s_TestCrossBattle_00120554 string
// GLOBAL s_TestDemo_00120564 string
// GLOBAL s_TestDesigner_0012057c string
// GLOBAL s_TestIkkaku_001205f0 string
// GLOBAL s_TestImamura_0012063c string
// GLOBAL s_TestIwata_00120618 string
// GLOBAL s_TestKanno_00120630 string
// GLOBAL s_TestKiuchi_0012066c string
// GLOBAL s_TestLocalize_00120544 string
// GLOBAL s_TestMinato_00120650 string
// GLOBAL s_TestMouri_001205b8 string
// GLOBAL s_TestNakamura_001205c4 string
// GLOBAL s_TestNarita_00120678 string
// GLOBAL s_TestOkane_001205e4 string
// GLOBAL s_TestSRD_00120648 string
// GLOBAL s_TestSakasai_0012060c string
// GLOBAL s_TestSakuraba_001205d4 string
// GLOBAL s_TestShikata_00120624 string
// GLOBAL s_TestShirakawa_00120684 string
// GLOBAL s_TestSystem_00120570 string
// GLOBAL s_TestTakeuchi_001205fc string
// GLOBAL s_TestTominaga_0012058c string
// GLOBAL s_TestYamada_0012059c string
// GLOBAL s_TestYamamura_001205a8 string
// GLOBAL s_TestYamashitaY_0012065c string

void func_00120024(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_00120394;
  puVar1 = DAT_00120390;
  if (((*DAT_0012038c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0012038c), iVar3 != 0)) {
    puVar1[1] = s_FieldLight_00120398;
    *puVar1 = uVar2;
    puVar1[3] = s_FieldDark_001203a4;
    puVar1[2] = uVar2;
    puVar1[5] = s_IndoorLight_001203b0;
    puVar1[4] = uVar2;
    puVar1[7] = s_IndoorDark_001203bc;
    puVar1[6] = uVar2;
    puVar1[9] = s_CaveLight_001203c8;
    puVar1[8] = uVar2;
    puVar1[0xb] = s_CaveDark_001203d4;
    puVar1[10] = uVar2;
    puVar1[0xd] = s_Dummy7_001203e0;
    puVar1[0xc] = uVar2;
    puVar1[0xf] = s_CrossBattle_001203e8;
    puVar1[0xe] = uVar2;
    puVar1[0x11] = &DAT_001203f4;
    puVar1[0x10] = uVar2;
    puVar1[0x13] = s_DungeonEast_001203fc;
    puVar1[0x12] = uVar2;
    puVar1[0x15] = s_DungeonWind_00120408;
    puVar1[0x14] = uVar2;
    puVar1[0x17] = s_DungeonHera_00120414;
    puVar1[0x16] = uVar2;
    puVar1[0x19] = s_DungeonCastle_00120420;
    puVar1[0x18] = uVar2;
    puVar1[0x1b] = s_DungeonDark_00120430;
    puVar1[0x1a] = uVar2;
    puVar1[0x1d] = s_DungeonWater_0012043c;
    puVar1[0x1c] = uVar2;
    puVar1[0x1f] = s_DungeonDokuro_0012044c;
    puVar1[0x1e] = uVar2;
    puVar1[0x21] = s_DungeonHagure_0012045c;
    puVar1[0x20] = uVar2;
    puVar1[0x23] = s_DungeonIce_0012046c;
    puVar1[0x22] = uVar2;
    puVar1[0x25] = s_DungeonSand_00120478;
    puVar1[0x24] = uVar2;
    puVar1[0x27] = s_DungeonKame_00120484;
    puVar1[0x26] = uVar2;
    puVar1[0x29] = s_DungeonGanon_00120490;
    puVar1[0x28] = uVar2;
    puVar1[0x2b] = s_DungeonBoss_001204a0;
    puVar1[0x2a] = uVar2;
    puVar1[0x2d] = s_AttractionLight_001204ac;
    puVar1[0x2c] = uVar2;
    puVar1[0x2f] = s_AttractionDark_001204bc;
    puVar1[0x2e] = uVar2;
    puVar1[0x31] = s_EnemyAttackS_001204cc;
    puVar1[0x30] = uVar2;
    puVar1[0x33] = s_EnemyAttackM_001204dc;
    puVar1[0x32] = uVar2;
    puVar1[0x35] = s_EnemyAttackL_001204ec;
    puVar1[0x34] = uVar2;
    puVar1[0x37] = s_Dummy28_001204fc;
    puVar1[0x36] = uVar2;
    puVar1[0x39] = s_Dummy29_00120504;
    puVar1[0x38] = uVar2;
    puVar1[0x3b] = s_Dummy30_0012050c;
    puVar1[0x3a] = uVar2;
    puVar1[0x3d] = s_Dummy31_00120514;
    puVar1[0x3c] = uVar2;
    puVar1[0x3f] = s_Dummy32_0012051c;
    puVar1[0x3e] = uVar2;
    puVar1[0x41] = s_E3Field_00120524;
    puVar1[0x40] = uVar2;
    puVar1[0x43] = s_Dummy34_0012052c;
    puVar1[0x42] = uVar2;
    puVar1[0x45] = s_Dummy35_00120534;
    puVar1[0x44] = uVar2;
    puVar1[0x47] = s_Dummy36_0012053c;
    puVar1[0x46] = uVar2;
    puVar1[0x49] = s_TestLocalize_00120544;
    puVar1[0x48] = uVar2;
    puVar1[0x4b] = s_TestCrossBattle_00120554;
    puVar1[0x4a] = uVar2;
    puVar1[0x4d] = s_TestDemo_00120564;
    puVar1[0x4c] = uVar2;
    puVar1[0x4f] = s_TestSystem_00120570;
    puVar1[0x4e] = uVar2;
    puVar1[0x51] = s_TestDesigner_0012057c;
    puVar1[0x50] = uVar2;
    puVar1[0x53] = s_TestTominaga_0012058c;
    puVar1[0x52] = uVar2;
    puVar1[0x55] = s_TestYamada_0012059c;
    puVar1[0x54] = uVar2;
    puVar1[0x57] = s_TestYamamura_001205a8;
    puVar1[0x56] = uVar2;
    puVar1[0x59] = s_TestMouri_001205b8;
    puVar1[0x58] = uVar2;
    puVar1[0x5b] = s_TestNakamura_001205c4;
    puVar1[0x5a] = uVar2;
    puVar1[0x5d] = s_TestSakuraba_001205d4;
    puVar1[0x5c] = uVar2;
    puVar1[0x5f] = s_TestOkane_001205e4;
    puVar1[0x5e] = uVar2;
    puVar1[0x61] = s_TestIkkaku_001205f0;
    puVar1[0x60] = uVar2;
    puVar1[99] = s_TestTakeuchi_001205fc;
    puVar1[0x62] = uVar2;
    puVar1[0x65] = s_TestSakasai_0012060c;
    puVar1[100] = uVar2;
    puVar1[0x67] = s_TestIwata_00120618;
    puVar1[0x66] = uVar2;
    puVar1[0x69] = s_TestShikata_00120624;
    puVar1[0x68] = uVar2;
    puVar1[0x6b] = s_TestKanno_00120630;
    puVar1[0x6a] = uVar2;
    puVar1[0x6d] = s_TestImamura_0012063c;
    puVar1[0x6c] = uVar2;
    puVar1[0x6f] = s_TestSRD_00120648;
    puVar1[0x6e] = uVar2;
    puVar1[0x71] = s_TestMinato_00120650;
    puVar1[0x70] = uVar2;
    puVar1[0x73] = s_TestYamashitaY_0012065c;
    puVar1[0x72] = uVar2;
    puVar1[0x75] = s_TestKiuchi_0012066c;
    puVar1[0x74] = uVar2;
    puVar1[0x77] = s_TestNarita_00120678;
    puVar1[0x76] = uVar2;
    puVar1[0x79] = s_TestShirakawa_00120684;
    puVar1[0x78] = uVar2;
    puVar1[0x7b] = s_TestAkama_00120694;
    puVar1[0x7a] = uVar2;
    puVar1[0x7d] = s_Dummy63_001206a0;
    puVar1[0x7c] = uVar2;
    puVar1[0x7e] = uVar2;
    puVar1[0x7f] = s_Dummy64_001206a8;
  }
  *param_1 = uVar2;
  param_1[1] = puVar1[param_2 * 2 + 1];
  return;
}

