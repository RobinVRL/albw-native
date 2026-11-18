#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ead28;
extern undefined4 *DAT_005ead2c;
extern undefined4 DAT_005ead40;
extern undefined4 DAT_005ead44;
extern undefined4 DAT_005ead48;
extern undefined4 *DAT_005ead4c;
extern char s_Gm_WarpBalloon_005ead30[];
extern char s_T_DungeonName_00_005ead50[];

// USA 005EACEC <- EU 005EACC4 (Ghidra, non-matching)
// GLOBAL DAT_005ead28 undefined4 *
// GLOBAL DAT_005ead2c undefined4 *
// GLOBAL DAT_005ead40 undefined4
// GLOBAL DAT_005ead44 undefined4
// GLOBAL DAT_005ead48 undefined4
// GLOBAL DAT_005ead4c undefined4 *
// GLOBAL s_Gm_WarpBalloon_005ead30 string
// GLOBAL s_T_DungeonName_00_005ead50 string

undefined4 func_005EACEC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ead28;
  *DAT_005ead28 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ead40;
  puVar1 = DAT_005ead2c;
  *DAT_005ead2c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_WarpBalloon_005ead30;
  puVar1[2] = uVar2;
  puVar1 = DAT_005ead4c;
  DAT_005ead4c[1] = s_T_DungeonName_00_005ead50;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

