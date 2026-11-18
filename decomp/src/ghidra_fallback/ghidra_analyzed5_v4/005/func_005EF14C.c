#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ef1e8;
extern undefined4 *DAT_005ef1ec;
extern undefined4 *DAT_005ef1f0;
extern undefined4 DAT_005ef200;
extern undefined4 DAT_005ef228;
extern undefined4 DAT_005ef22c;
extern undefined4 *DAT_005ef230;
extern undefined4 DAT_005ef244;
extern undefined4 *DAT_005ef248;
extern undefined4 *DAT_005ef25c;
extern char s_L_NumKinsuta_00_005ef234[];
extern char s_N_ArrowB_00_005ef204[];
extern char s_N_ArrowL_00_005ef210[];
extern char s_N_ArrowR_00_005ef21c[];
extern char s_N_ArrowT_00_005ef1f4[];
extern char s_N_Kinsuta_00_005ef24c[];
extern char s_SE_S_KINSTA_COUNT_005ef260[];

// USA 005EF14C <- EU 005EF124 (Ghidra, non-matching)
// GLOBAL DAT_005ef1e8 undefined4 *
// GLOBAL DAT_005ef1ec undefined4 *
// GLOBAL DAT_005ef1f0 undefined4 *
// GLOBAL DAT_005ef200 undefined4
// GLOBAL DAT_005ef228 undefined4
// GLOBAL DAT_005ef22c undefined4
// GLOBAL DAT_005ef230 undefined4 *
// GLOBAL DAT_005ef244 undefined4
// GLOBAL DAT_005ef248 undefined4 *
// GLOBAL DAT_005ef25c undefined4 *
// GLOBAL s_L_NumKinsuta_00_005ef234 string
// GLOBAL s_N_ArrowB_00_005ef204 string
// GLOBAL s_N_ArrowL_00_005ef210 string
// GLOBAL s_N_ArrowR_00_005ef21c string
// GLOBAL s_N_ArrowT_00_005ef1f4 string
// GLOBAL s_N_Kinsuta_00_005ef24c string
// GLOBAL s_SE_S_KINSTA_COUNT_005ef260 string

undefined4 func_005EF14C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ef1e8;
  *DAT_005ef1e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ef200;
  puVar1 = DAT_005ef1ec;
  *DAT_005ef1ec = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ef1f0;
  DAT_005ef1f0[1] = s_N_ArrowT_00_005ef1f4;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ef204;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ef210;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ef21c;
  puVar1 = DAT_005ef230;
  DAT_005ef230[1] = s_L_NumKinsuta_00_005ef234;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef248;
  DAT_005ef248[1] = s_N_Kinsuta_00_005ef24c;
  *puVar1 = uVar2;
  puVar1 = DAT_005ef25c;
  DAT_005ef25c[1] = s_SE_S_KINSTA_COUNT_005ef260;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

