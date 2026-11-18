#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005af1d8;
extern undefined4 *DAT_005af1dc;
extern undefined4 DAT_005af1ec;
extern undefined4 DAT_005af1f0;
extern undefined4 DAT_005af1f4;
extern undefined4 *DAT_005af1f8;
extern undefined4 *DAT_005af20c;
extern char s_BoxIcon48_ctpk_005af1fc[];
extern char s_MessageIcon40_ctpk_005af210[];
extern char s_World_Cross_005af1e0[];
extern char s_cf_005af1e0[];
extern char s_cf_005af1fc[];
extern char s_cf_005af210[];

// USA 005AF180 <- EU 005AF158 (Ghidra, non-matching)
// GLOBAL DAT_005af1d8 undefined4 *
// GLOBAL DAT_005af1dc undefined4 *
// GLOBAL DAT_005af1ec undefined4
// GLOBAL DAT_005af1f0 undefined4
// GLOBAL DAT_005af1f4 undefined4
// GLOBAL DAT_005af1f8 undefined4 *
// GLOBAL DAT_005af20c undefined4 *
// GLOBAL s_cf_005af1fc string
// GLOBAL s_cf_005af210 string
// GLOBAL s_cf_005af1e0 string

undefined4 func_005AF180(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005af1d8;
  *DAT_005af1d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005af1ec;
  puVar1 = DAT_005af1dc;
  *DAT_005af1dc = 0;
  puVar1[1] = 0;
  puVar1[3] = s_World_Cross_005af1e0;
  puVar1[2] = uVar2;
  puVar1 = DAT_005af1f8;
  DAT_005af1f8[1] = s_BoxIcon48_ctpk_005af1fc;
  *puVar1 = uVar2;
  puVar1 = DAT_005af20c;
  DAT_005af20c[1] = s_MessageIcon40_ctpk_005af210;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

