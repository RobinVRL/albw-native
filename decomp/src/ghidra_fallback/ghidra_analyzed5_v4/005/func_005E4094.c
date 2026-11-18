#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e40ec;
extern undefined4 *DAT_005e40f0;
extern undefined4 DAT_005e4114;
extern undefined4 DAT_005e4118;
extern undefined4 DAT_005e411c;
extern undefined4 *DAT_005e4120;
extern undefined4 *DAT_005e4134;
extern char s_Gm_MainSystemCollectTutorialT_005e40f4[];
extern char s_T_ItemName_00_005e4124[];
extern char s_T_ItemText_00_005e4138[];

// USA 005E4094 <- EU 005E406C (Ghidra, non-matching)
// GLOBAL DAT_005e40ec undefined4 *
// GLOBAL DAT_005e40f0 undefined4 *
// GLOBAL DAT_005e4114 undefined4
// GLOBAL DAT_005e4118 undefined4
// GLOBAL DAT_005e411c undefined4
// GLOBAL DAT_005e4120 undefined4 *
// GLOBAL DAT_005e4134 undefined4 *
// GLOBAL s_Gm_MainSystemCollectTutorialT_005e40f4 string
// GLOBAL s_T_ItemName_00_005e4124 string
// GLOBAL s_T_ItemText_00_005e4138 string

undefined4 func_005E4094(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e40ec;
  *DAT_005e40ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e4114;
  puVar1 = DAT_005e40f0;
  *DAT_005e40f0 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_MainSystemCollectTutorialT_005e40f4;
  puVar1[2] = uVar2;
  puVar1 = DAT_005e4120;
  DAT_005e4120[1] = s_T_ItemName_00_005e4124;
  *puVar1 = uVar2;
  puVar1 = DAT_005e4134;
  DAT_005e4134[1] = s_T_ItemText_00_005e4138;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

