#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005f79f4;
extern undefined4 *DAT_005f79f8;
extern undefined4 DAT_005f7a0c;
extern undefined4 DAT_005f7a10;
extern undefined4 DAT_005f7a14;
extern undefined4 *DAT_005f7a18;
extern char s_Gm_FloorNumberT_005f79fc[];
extern char s_T_DungeonName_00_005f7a1c[];

// USA 005F79B8 <- EU 005F7990 (Ghidra, non-matching)
// GLOBAL DAT_005f79f4 int
// GLOBAL DAT_005f79f8 undefined4 *
// GLOBAL DAT_005f7a0c undefined4
// GLOBAL DAT_005f7a10 undefined4
// GLOBAL DAT_005f7a14 undefined4
// GLOBAL DAT_005f7a18 undefined4 *
// GLOBAL s_Gm_FloorNumberT_005f79fc string
// GLOBAL s_T_DungeonName_00_005f7a1c string

undefined4 func_005F79B8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005f79f4;
  *(undefined4 *)(DAT_005f79f4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005f7a0c;
  puVar2 = DAT_005f79f8;
  *DAT_005f79f8 = 0;
  puVar2[1] = 0;
  puVar2[3] = s_Gm_FloorNumberT_005f79fc;
  puVar2[2] = uVar3;
  puVar2 = DAT_005f7a18;
  DAT_005f7a18[1] = s_T_DungeonName_00_005f7a1c;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

