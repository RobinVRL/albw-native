#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f7a94;
extern undefined4 *DAT_005f7a98;
extern undefined4 DAT_005f7ab0;
extern undefined4 DAT_005f7ab4;
extern undefined4 DAT_005f7ab8;
extern undefined4 *DAT_005f7abc;
extern char s_Mn_KeyBoardGuideT_005f7a9c[];
extern char s_T_Message_00_005f7ac0[];

// USA 005F7A58 <- EU 005F7A30 (Ghidra, non-matching)
// GLOBAL DAT_005f7a94 undefined4 *
// GLOBAL DAT_005f7a98 undefined4 *
// GLOBAL DAT_005f7ab0 undefined4
// GLOBAL DAT_005f7ab4 undefined4
// GLOBAL DAT_005f7ab8 undefined4
// GLOBAL DAT_005f7abc undefined4 *
// GLOBAL s_Mn_KeyBoardGuideT_005f7a9c string
// GLOBAL s_T_Message_00_005f7ac0 string

undefined4 func_005F7A58(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f7a94;
  *DAT_005f7a94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f7ab0;
  puVar1 = DAT_005f7a98;
  *DAT_005f7a98 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Mn_KeyBoardGuideT_005f7a9c;
  puVar1[2] = uVar2;
  puVar1 = DAT_005f7abc;
  DAT_005f7abc[1] = s_T_Message_00_005f7ac0;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

