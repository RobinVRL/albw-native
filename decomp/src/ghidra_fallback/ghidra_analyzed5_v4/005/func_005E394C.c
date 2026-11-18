#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005e39f8;
extern undefined4 *DAT_005e39fc;
extern undefined4 DAT_005e3a1c;
extern undefined4 DAT_005e3a20;
extern undefined4 DAT_005e3a24;
extern undefined4 *DAT_005e3a28;
extern undefined4 *DAT_005e3a44;
extern undefined4 *DAT_005e3a5c;
extern undefined4 *DAT_005e3a70;
extern undefined4 *DAT_005e3a88;
extern char s_Gm_FloorButtonBright_005e3a2c[];
extern char s_Gm_MainSystemDungeonMapB_005e3a00[];
extern char s_P_DungeonMapMask_00_005e3a74[];
extern char s_P_SampleMap_00_005e3a60[];
extern char s_T_DungeonName_00_005e3a48[];
extern char s_T_FloorNumber_00_005e3a8c[];

// USA 005E394C <- EU 005E3924 (Ghidra, non-matching)
// GLOBAL DAT_005e39f8 int
// GLOBAL DAT_005e39fc undefined4 *
// GLOBAL DAT_005e3a1c undefined4
// GLOBAL DAT_005e3a20 undefined4
// GLOBAL DAT_005e3a24 undefined4
// GLOBAL DAT_005e3a28 undefined4 *
// GLOBAL DAT_005e3a44 undefined4 *
// GLOBAL DAT_005e3a5c undefined4 *
// GLOBAL DAT_005e3a70 undefined4 *
// GLOBAL DAT_005e3a88 undefined4 *
// GLOBAL s_Gm_FloorButtonBright_005e3a2c string
// GLOBAL s_Gm_MainSystemDungeonMapB_005e3a00 string
// GLOBAL s_P_DungeonMapMask_00_005e3a74 string
// GLOBAL s_P_SampleMap_00_005e3a60 string
// GLOBAL s_T_DungeonName_00_005e3a48 string
// GLOBAL s_T_FloorNumber_00_005e3a8c string

undefined4 func_005E394C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005e39f8;
  *(undefined4 *)(DAT_005e39f8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005e3a1c;
  puVar2 = DAT_005e39fc;
  *DAT_005e39fc = 0;
  puVar2[1] = 0;
  puVar2[3] = s_Gm_MainSystemDungeonMapB_005e3a00;
  puVar2[2] = uVar3;
  puVar2 = DAT_005e3a28;
  DAT_005e3a28[1] = s_Gm_FloorButtonBright_005e3a2c;
  *puVar2 = uVar3;
  puVar2 = DAT_005e3a44;
  DAT_005e3a44[1] = s_T_DungeonName_00_005e3a48;
  *puVar2 = uVar3;
  puVar2 = DAT_005e3a5c;
  DAT_005e3a5c[1] = s_P_SampleMap_00_005e3a60;
  *puVar2 = uVar3;
  puVar2 = DAT_005e3a70;
  DAT_005e3a70[1] = s_P_DungeonMapMask_00_005e3a74;
  *puVar2 = uVar3;
  puVar2 = DAT_005e3a88;
  DAT_005e3a88[1] = s_T_FloorNumber_00_005e3a8c;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

