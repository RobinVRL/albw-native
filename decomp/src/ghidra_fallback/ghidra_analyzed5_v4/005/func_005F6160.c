#include "ghidra_types.h"

extern undefined4 *DAT_005f63fc;
extern undefined4 *DAT_005f6400;
extern undefined4 *DAT_005f6404;
extern undefined4 DAT_005f6414;
extern undefined4 DAT_005f643c;
extern undefined4 DAT_005f6440;
extern undefined4 *DAT_005f6444;
extern undefined4 DAT_005f6458;
extern undefined4 *DAT_005f645c;
extern undefined4 *DAT_005f646c;
extern undefined4 *DAT_005f647c;
extern undefined4 *DAT_005f6490;
extern undefined4 *DAT_005f64a0;
extern undefined4 *DAT_005f64b0;
extern undefined4 *DAT_005f64c0;
extern undefined DAT_005f64c4;
extern undefined DAT_005f64cc;
extern undefined DAT_005f64d0;
extern undefined4 DAT_005f6504;
extern undefined4 *DAT_005f6508;
extern undefined4 DAT_005f6534;
extern undefined4 *DAT_005f6538;
extern undefined4 DAT_005f655c;
extern undefined4 *DAT_005f6560;
extern undefined4 DAT_005f657c;
extern undefined4 *DAT_005f6580;
extern undefined DAT_005f6584;
extern undefined DAT_005f6588;
extern undefined DAT_005f658c;
extern undefined DAT_005f6590;
extern undefined4 DAT_005f6594;
extern undefined4 DAT_005f6598;
extern undefined4 *DAT_005f659c;
extern undefined4 DAT_005f65a0;
extern undefined4 DAT_005f65a4;
extern undefined4 DAT_005f65a8;
extern undefined4 DAT_005f65ac;
extern undefined4 DAT_005f65b0;
extern char s_Change_005f64ec[];
extern char s_Gm_SRCSettingT_005f6448[];
extern char s_Heart1Line_005f64d4[];
extern char s_Heart2Line_005f64e0[];
extern char s_InBtn_005f64f4[];
extern char s_L_BtnL_00_005f6564[];
extern char s_L_BtnR_00_005f6570[];
extern char s_L_Clothes_00_005f6524[];
extern char s_L_ItemXBtn_00_005f654c[];
extern char s_L_ItemYBtn_00_005f653c[];
extern char s_L_Shield_00_005f6518[];
extern char s_L_Sword_00_005f650c[];
extern char s_N_ArrowB_00_005f6418[];
extern char s_N_ArrowL_00_005f6424[];
extern char s_N_ArrowR_00_005f6430[];
extern char s_N_ArrowT_00_005f6408[];
extern char s_N_Item_00_005f6494[];
extern char s_N_Item_01_005f64a4[];
extern char s_N_Item_02_005f64b4[];
extern char s_OutBtn_005f64fc[];
extern char s_P_Bee_00_005f6460[];
extern char s_P_Boots_00_005f6470[];
extern char s_P_Torisetsu_00_005f6480[];

// USA 005F6160 <- EU 005F6138 (Ghidra, non-matching)
// GLOBAL DAT_005f63fc undefined4 *
// GLOBAL DAT_005f6400 undefined4 *
// GLOBAL DAT_005f6404 undefined4 *
// GLOBAL DAT_005f6414 undefined4
// GLOBAL DAT_005f643c undefined4
// GLOBAL DAT_005f6440 undefined4
// GLOBAL DAT_005f6444 undefined4 *
// GLOBAL DAT_005f6458 undefined4
// GLOBAL DAT_005f645c undefined4 *
// GLOBAL DAT_005f646c undefined4 *
// GLOBAL DAT_005f647c undefined4 *
// GLOBAL DAT_005f6490 undefined4 *
// GLOBAL DAT_005f64a0 undefined4 *
// GLOBAL DAT_005f64b0 undefined4 *
// GLOBAL DAT_005f64c0 undefined4 *
// GLOBAL DAT_005f64c4 undefined
// GLOBAL DAT_005f64cc undefined
// GLOBAL DAT_005f64d0 undefined
// GLOBAL DAT_005f6504 undefined4
// GLOBAL DAT_005f6508 undefined4 *
// GLOBAL DAT_005f6534 undefined4
// GLOBAL DAT_005f6538 undefined4 *
// GLOBAL DAT_005f655c undefined4
// GLOBAL DAT_005f6560 undefined4 *
// GLOBAL DAT_005f657c undefined4
// GLOBAL DAT_005f6580 undefined4 *
// GLOBAL DAT_005f6584 undefined
// GLOBAL DAT_005f6588 undefined
// GLOBAL DAT_005f658c undefined
// GLOBAL DAT_005f6590 undefined
// GLOBAL DAT_005f6594 undefined4
// GLOBAL DAT_005f6598 undefined4
// GLOBAL DAT_005f659c undefined4 *
// GLOBAL DAT_005f65a0 undefined4
// GLOBAL DAT_005f65a4 undefined4
// GLOBAL DAT_005f65a8 undefined4
// GLOBAL DAT_005f65ac undefined4
// GLOBAL DAT_005f65b0 undefined4
// GLOBAL s_Change_005f64ec string
// GLOBAL s_Gm_SRCSettingT_005f6448 string
// GLOBAL s_Heart1Line_005f64d4 string
// GLOBAL s_Heart2Line_005f64e0 string
// GLOBAL s_InBtn_005f64f4 string
// GLOBAL s_L_BtnL_00_005f6564 string
// GLOBAL s_L_BtnR_00_005f6570 string
// GLOBAL s_L_Clothes_00_005f6524 string
// GLOBAL s_L_ItemXBtn_00_005f654c string
// GLOBAL s_L_ItemYBtn_00_005f653c string
// GLOBAL s_L_Shield_00_005f6518 string
// GLOBAL s_L_Sword_00_005f650c string
// GLOBAL s_N_ArrowB_00_005f6418 string
// GLOBAL s_N_ArrowL_00_005f6424 string
// GLOBAL s_N_ArrowR_00_005f6430 string
// GLOBAL s_N_ArrowT_00_005f6408 string
// GLOBAL s_N_Item_00_005f6494 string
// GLOBAL s_N_Item_01_005f64a4 string
// GLOBAL s_N_Item_02_005f64b4 string
// GLOBAL s_OutBtn_005f64fc string
// GLOBAL s_P_Bee_00_005f6460 string
// GLOBAL s_P_Boots_00_005f6470 string
// GLOBAL s_P_Torisetsu_00_005f6480 string

void func_005F6160(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_005f63fc;
  *DAT_005f63fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f6414;
  puVar1 = DAT_005f6400;
  *DAT_005f6400 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f6404;
  DAT_005f6404[1] = s_N_ArrowT_00_005f6408;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f6418;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f6424;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f6430;
  puVar1 = DAT_005f6444;
  DAT_005f6444[1] = s_Gm_SRCSettingT_005f6448;
  *puVar1 = uVar2;
  puVar1 = DAT_005f645c;
  DAT_005f645c[1] = s_P_Bee_00_005f6460;
  *puVar1 = uVar2;
  puVar1 = DAT_005f646c;
  DAT_005f646c[1] = s_P_Boots_00_005f6470;
  *puVar1 = uVar2;
  puVar1 = DAT_005f647c;
  DAT_005f647c[1] = s_P_Torisetsu_00_005f6480;
  *puVar1 = uVar2;
  puVar1 = DAT_005f6490;
  DAT_005f6490[1] = s_N_Item_00_005f6494;
  *puVar1 = uVar2;
  puVar1 = DAT_005f64a0;
  DAT_005f64a0[1] = s_N_Item_01_005f64a4;
  *puVar1 = uVar2;
  puVar1 = DAT_005f64b0;
  DAT_005f64b0[1] = s_N_Item_02_005f64b4;
  *puVar1 = uVar2;
  puVar1 = DAT_005f64c0;
  DAT_005f64c0[1] = &DAT_005f64c4;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f64cc;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005f64d0;
  puVar1[4] = uVar2;
  puVar1[7] = s_Heart1Line_005f64d4;
  puVar1[6] = uVar2;
  puVar1[9] = s_Heart2Line_005f64e0;
  puVar1[8] = uVar2;
  puVar1[0xb] = s_Change_005f64ec;
  puVar1[10] = uVar2;
  puVar1[0xd] = s_InBtn_005f64f4;
  puVar1[0xc] = uVar2;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = s_OutBtn_005f64fc;
  puVar1 = DAT_005f6508;
  DAT_005f6508[1] = s_L_Sword_00_005f650c;
  *puVar1 = uVar2;
  puVar1[3] = s_L_Shield_00_005f6518;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_L_Clothes_00_005f6524;
  puVar1 = DAT_005f6538;
  DAT_005f6538[1] = s_L_ItemYBtn_00_005f653c;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_L_ItemXBtn_00_005f654c;
  puVar1 = DAT_005f6560;
  DAT_005f6560[1] = s_L_BtnL_00_005f6564;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_L_BtnR_00_005f6570;
  puVar1 = DAT_005f6580;
  DAT_005f6580[1] = &DAT_005f6584;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f6588;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005f658c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f6590;
  uVar4 = DAT_005f65a4;
  uVar3 = DAT_005f65a0;
  puVar1 = DAT_005f659c;
  uVar2 = DAT_005f6598;
  *DAT_005f659c = DAT_005f6598;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  uVar3 = DAT_005f65ac;
  puVar1[3] = DAT_005f65a8;
  puVar1[4] = uVar3;
  puVar1[5] = uVar2;
  uVar3 = DAT_005f65b0;
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar2;
  return;
}

