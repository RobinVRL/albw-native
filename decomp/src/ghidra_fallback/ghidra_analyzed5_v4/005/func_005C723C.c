#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c72a4;
extern undefined4 *DAT_005c72a8;
extern undefined4 DAT_005c72b8;
extern undefined4 DAT_005c72bc;
extern undefined4 DAT_005c72c0;
extern undefined4 *DAT_005c72c4;
extern undefined4 *DAT_005c72d4;
extern undefined4 DAT_005c72ec;
extern char s_center_005c72e4[];
extern char s_skl_root_005c72d8[];
extern char s_stomach_jnt_005c72ac[];
extern char s_waist_jnt_005c72c8[];

// USA 005C723C <- EU 005C7214 (Ghidra, non-matching)
// GLOBAL DAT_005c72a4 undefined4 *
// GLOBAL DAT_005c72a8 undefined4 *
// GLOBAL DAT_005c72b8 undefined4
// GLOBAL DAT_005c72bc undefined4
// GLOBAL DAT_005c72c0 undefined4
// GLOBAL DAT_005c72c4 undefined4 *
// GLOBAL DAT_005c72d4 undefined4 *
// GLOBAL DAT_005c72ec undefined4
// GLOBAL s_center_005c72e4 string
// GLOBAL s_skl_root_005c72d8 string
// GLOBAL s_stomach_jnt_005c72ac string
// GLOBAL s_waist_jnt_005c72c8 string

undefined4 func_005C723C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c72a4;
  *DAT_005c72a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005c72b8;
  puVar1 = DAT_005c72a8;
  *DAT_005c72a8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_stomach_jnt_005c72ac;
  puVar1[2] = uVar2;
  puVar1 = DAT_005c72c4;
  DAT_005c72c4[1] = s_waist_jnt_005c72c8;
  *puVar1 = uVar2;
  puVar1 = DAT_005c72d4;
  DAT_005c72d4[1] = s_skl_root_005c72d8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_center_005c72e4;
  return func_005902C0(0);
}

