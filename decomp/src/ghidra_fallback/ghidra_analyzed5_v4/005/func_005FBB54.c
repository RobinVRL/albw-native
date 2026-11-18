#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fbbb0;
extern undefined4 *DAT_005fbbb4;
extern undefined4 DAT_005fbbcc;
extern undefined4 DAT_005fbbd0;
extern undefined4 DAT_005fbbd4;
extern undefined4 *DAT_005fbbd8;
extern undefined4 DAT_005fbbec;
extern char s_Count_005fbbe4[];
extern char s_Gm_DigitalTimerT_005fbbb8[];
extern char s_InOut_005fbbdc[];

// USA 005FBB54 <- EU 005FBB2C (Ghidra, non-matching)
// GLOBAL DAT_005fbbb0 undefined4 *
// GLOBAL DAT_005fbbb4 undefined4 *
// GLOBAL DAT_005fbbcc undefined4
// GLOBAL DAT_005fbbd0 undefined4
// GLOBAL DAT_005fbbd4 undefined4
// GLOBAL DAT_005fbbd8 undefined4 *
// GLOBAL DAT_005fbbec undefined4
// GLOBAL s_Count_005fbbe4 string
// GLOBAL s_Gm_DigitalTimerT_005fbbb8 string
// GLOBAL s_InOut_005fbbdc string

undefined4 func_005FBB54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fbbb0;
  *DAT_005fbbb0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005fbbcc;
  puVar1 = DAT_005fbbb4;
  *DAT_005fbbb4 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_DigitalTimerT_005fbbb8;
  puVar1[2] = uVar2;
  puVar1 = DAT_005fbbd8;
  DAT_005fbbd8[1] = s_InOut_005fbbdc;
  *puVar1 = uVar2;
  puVar1[3] = s_InOut_005fbbdc;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_Count_005fbbe4;
  return func_005902C0(0);
}

