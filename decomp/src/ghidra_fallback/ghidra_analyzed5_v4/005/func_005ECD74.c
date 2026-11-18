#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ecdd8;
extern undefined4 *DAT_005ecddc;
extern undefined4 *DAT_005ecde0;
extern undefined4 DAT_005ecdf0;
extern undefined4 DAT_005ece18;
extern undefined4 DAT_005ece1c;
extern undefined4 *DAT_005ece20;
extern undefined4 DAT_005ece30;
extern char s_L_Num_00_005ece24[];
extern char s_N_ArrowB_00_005ecdf4[];
extern char s_N_ArrowL_00_005ece00[];
extern char s_N_ArrowR_00_005ece0c[];
extern char s_N_ArrowT_00_005ecde4[];

// USA 005ECD74 <- EU 005ECD4C (Ghidra, non-matching)
// GLOBAL DAT_005ecdd8 undefined4 *
// GLOBAL DAT_005ecddc undefined4 *
// GLOBAL DAT_005ecde0 undefined4 *
// GLOBAL DAT_005ecdf0 undefined4
// GLOBAL DAT_005ece18 undefined4
// GLOBAL DAT_005ece1c undefined4
// GLOBAL DAT_005ece20 undefined4 *
// GLOBAL DAT_005ece30 undefined4
// GLOBAL s_L_Num_00_005ece24 string
// GLOBAL s_N_ArrowB_00_005ecdf4 string
// GLOBAL s_N_ArrowL_00_005ece00 string
// GLOBAL s_N_ArrowR_00_005ece0c string
// GLOBAL s_N_ArrowT_00_005ecde4 string

undefined4 func_005ECD74(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ecdd8;
  *DAT_005ecdd8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ecdf0;
  puVar1 = DAT_005ecddc;
  *DAT_005ecddc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ecde0;
  DAT_005ecde0[1] = s_N_ArrowT_00_005ecde4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ecdf4;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ece00;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ece0c;
  puVar1 = DAT_005ece20;
  DAT_005ece20[1] = s_L_Num_00_005ece24;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

