#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eaca0;
extern undefined4 *DAT_005eaca4;
extern undefined4 DAT_005eaca8;
extern undefined4 DAT_005eacbc;
extern undefined4 DAT_005eacc0;
extern char s_Gm_DungeonIconB_005eacac[];

// USA 005EAC88 <- EU 005EAC60 (Ghidra, non-matching)
// GLOBAL DAT_005eaca0 undefined4 *
// GLOBAL DAT_005eaca4 undefined4 *
// GLOBAL DAT_005eaca8 undefined4
// GLOBAL DAT_005eacbc undefined4
// GLOBAL DAT_005eacc0 undefined4
// GLOBAL s_Gm_DungeonIconB_005eacac string

undefined4 func_005EAC88(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eaca0;
  *DAT_005eaca0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eaca4;
  *DAT_005eaca4 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005eaca8;
  puVar1[3] = s_Gm_DungeonIconB_005eacac;
  return func_005902C0(puVar1 + 2);
}

