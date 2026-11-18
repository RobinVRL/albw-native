#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f791c;
extern undefined4 *DAT_005f7920;
extern undefined4 *DAT_005f7924;
extern undefined4 DAT_005f7934;
extern undefined4 DAT_005f795c;
extern undefined4 DAT_005f7960;
extern char s_N_ArrowB_00_005f7938[];
extern char s_N_ArrowL_00_005f7944[];
extern char s_N_ArrowR_00_005f7950[];
extern char s_N_ArrowT_00_005f7928[];

// USA 005F78DC <- EU 005F78B4 (Ghidra, non-matching)
// GLOBAL DAT_005f791c undefined4 *
// GLOBAL DAT_005f7920 undefined4 *
// GLOBAL DAT_005f7924 undefined4 *
// GLOBAL DAT_005f7934 undefined4
// GLOBAL DAT_005f795c undefined4
// GLOBAL DAT_005f7960 undefined4
// GLOBAL s_N_ArrowB_00_005f7938 string
// GLOBAL s_N_ArrowL_00_005f7944 string
// GLOBAL s_N_ArrowR_00_005f7950 string
// GLOBAL s_N_ArrowT_00_005f7928 string

undefined4 func_005F78DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f791c;
  *DAT_005f791c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7920;
  *DAT_005f7920 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f7934;
  puVar1 = DAT_005f7924;
  DAT_005f7924[1] = s_N_ArrowT_00_005f7928;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f7938;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f7944;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f7950;
  return func_005902C0(0);
}

