#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eadf4;
extern undefined4 *DAT_005eadf8;
extern undefined4 DAT_005eae0c;
extern undefined4 DAT_005eae10;
extern undefined4 DAT_005eae14;
extern undefined4 *DAT_005eae18;
extern char s_Gm_DungeonNameT_005eadfc[];
extern char s_T_DungeonName_00_005eae1c[];

// USA 005EADB8 <- EU 005EAD90 (Ghidra, non-matching)
// GLOBAL DAT_005eadf4 undefined4 *
// GLOBAL DAT_005eadf8 undefined4 *
// GLOBAL DAT_005eae0c undefined4
// GLOBAL DAT_005eae10 undefined4
// GLOBAL DAT_005eae14 undefined4
// GLOBAL DAT_005eae18 undefined4 *
// GLOBAL s_Gm_DungeonNameT_005eadfc string
// GLOBAL s_T_DungeonName_00_005eae1c string

undefined4 func_005EADB8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eadf4;
  *DAT_005eadf4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005eae0c;
  puVar1 = DAT_005eadf8;
  *DAT_005eadf8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_DungeonNameT_005eadfc;
  puVar1[2] = uVar2;
  puVar1 = DAT_005eae18;
  DAT_005eae18[1] = s_T_DungeonName_00_005eae1c;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

