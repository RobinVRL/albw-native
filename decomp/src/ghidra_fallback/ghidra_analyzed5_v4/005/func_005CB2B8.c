#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005cb31c;
extern undefined4 *DAT_005cb320;
extern undefined4 *DAT_005cb324;
extern undefined4 DAT_005cb334;
extern undefined4 DAT_005cb35c;
extern undefined4 DAT_005cb360;
extern undefined4 *DAT_005cb364;
extern undefined4 DAT_005cb374;
extern char s_Cm_ScreenB_005cb368[];
extern char s_N_ArrowB_00_005cb338[];
extern char s_N_ArrowL_00_005cb344[];
extern char s_N_ArrowR_00_005cb350[];
extern char s_N_ArrowT_00_005cb328[];

// USA 005CB2B8 <- EU 005CB290 (Ghidra, non-matching)
// GLOBAL DAT_005cb31c undefined4 *
// GLOBAL DAT_005cb320 undefined4 *
// GLOBAL DAT_005cb324 undefined4 *
// GLOBAL DAT_005cb334 undefined4
// GLOBAL DAT_005cb35c undefined4
// GLOBAL DAT_005cb360 undefined4
// GLOBAL DAT_005cb364 undefined4 *
// GLOBAL DAT_005cb374 undefined4
// GLOBAL s_Cm_ScreenB_005cb368 string
// GLOBAL s_N_ArrowB_00_005cb338 string
// GLOBAL s_N_ArrowL_00_005cb344 string
// GLOBAL s_N_ArrowR_00_005cb350 string
// GLOBAL s_N_ArrowT_00_005cb328 string

undefined4 func_005CB2B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005cb31c;
  *DAT_005cb31c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005cb334;
  puVar1 = DAT_005cb320;
  *DAT_005cb320 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cb324;
  DAT_005cb324[1] = s_N_ArrowT_00_005cb328;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005cb338;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005cb344;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005cb350;
  puVar1 = DAT_005cb364;
  DAT_005cb364[1] = s_Cm_ScreenB_005cb368;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

