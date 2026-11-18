#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a9420;
extern undefined4 *DAT_005a9424;
extern undefined4 DAT_005a9430;
extern undefined4 DAT_005a9434;
extern undefined4 DAT_005a9438;
extern undefined4 *DAT_005a943c;
extern undefined4 *DAT_005a9450;
extern char s_Common_005a9428[];
extern char s_cmn_cross_message_005a9454[];
extern char s_cmn_cross_title_005a9440[];

// USA 005A93C8 <- EU 005A93A0 (Ghidra, non-matching)
// GLOBAL DAT_005a9420 undefined4 *
// GLOBAL DAT_005a9424 undefined4 *
// GLOBAL DAT_005a9430 undefined4
// GLOBAL DAT_005a9434 undefined4
// GLOBAL DAT_005a9438 undefined4
// GLOBAL DAT_005a943c undefined4 *
// GLOBAL DAT_005a9450 undefined4 *
// GLOBAL s_Common_005a9428 string
// GLOBAL s_cmn_cross_message_005a9454 string
// GLOBAL s_cmn_cross_title_005a9440 string

undefined4 func_005A93C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a9420;
  *DAT_005a9420 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005a9430;
  puVar1 = DAT_005a9424;
  *DAT_005a9424 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Common_005a9428;
  puVar1[2] = uVar2;
  puVar1 = DAT_005a943c;
  DAT_005a943c[1] = s_cmn_cross_title_005a9440;
  *puVar1 = uVar2;
  puVar1 = DAT_005a9450;
  DAT_005a9450[1] = s_cmn_cross_message_005a9454;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

