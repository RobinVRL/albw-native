#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef884;
extern undefined4 *DAT_005ef888;
extern undefined4 *DAT_005ef88c;
extern undefined4 DAT_005ef89c;
extern undefined4 DAT_005ef8c4;
extern undefined4 DAT_005ef8c8;
extern char s_N_ArrowB_00_005ef8a0[];
extern char s_N_ArrowL_00_005ef8ac[];
extern char s_N_ArrowR_00_005ef8b8[];
extern char s_N_ArrowT_00_005ef890[];

// USA 005EF844 <- EU 005EF81C (Ghidra, non-matching)
// GLOBAL DAT_005ef884 undefined4 *
// GLOBAL DAT_005ef888 undefined4 *
// GLOBAL DAT_005ef88c undefined4 *
// GLOBAL DAT_005ef89c undefined4
// GLOBAL DAT_005ef8c4 undefined4
// GLOBAL DAT_005ef8c8 undefined4
// GLOBAL s_N_ArrowB_00_005ef8a0 string
// GLOBAL s_N_ArrowL_00_005ef8ac string
// GLOBAL s_N_ArrowR_00_005ef8b8 string
// GLOBAL s_N_ArrowT_00_005ef890 string

undefined4 func_005EF844(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef884;
  *DAT_005ef884 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef888;
  *DAT_005ef888 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ef89c;
  puVar1 = DAT_005ef88c;
  DAT_005ef88c[1] = s_N_ArrowT_00_005ef890;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ef8a0;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ef8ac;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ef8b8;
  return func_005902C0(0);
}

