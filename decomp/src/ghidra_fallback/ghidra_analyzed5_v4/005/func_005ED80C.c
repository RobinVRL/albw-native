#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ed870;
extern undefined4 *DAT_005ed874;
extern undefined4 *DAT_005ed878;
extern undefined4 DAT_005ed888;
extern undefined4 DAT_005ed8b0;
extern undefined4 DAT_005ed8b4;
extern undefined4 *DAT_005ed8b8;
extern undefined4 DAT_005ed8d0;
extern char s_Gm_SelectWarpPointT_005ed8bc[];
extern char s_N_ArrowB_00_005ed88c[];
extern char s_N_ArrowL_00_005ed898[];
extern char s_N_ArrowR_00_005ed8a4[];
extern char s_N_ArrowT_00_005ed87c[];

// USA 005ED80C <- EU 005ED7E4 (Ghidra, non-matching)
// GLOBAL DAT_005ed870 undefined4 *
// GLOBAL DAT_005ed874 undefined4 *
// GLOBAL DAT_005ed878 undefined4 *
// GLOBAL DAT_005ed888 undefined4
// GLOBAL DAT_005ed8b0 undefined4
// GLOBAL DAT_005ed8b4 undefined4
// GLOBAL DAT_005ed8b8 undefined4 *
// GLOBAL DAT_005ed8d0 undefined4
// GLOBAL s_Gm_SelectWarpPointT_005ed8bc string
// GLOBAL s_N_ArrowB_00_005ed88c string
// GLOBAL s_N_ArrowL_00_005ed898 string
// GLOBAL s_N_ArrowR_00_005ed8a4 string
// GLOBAL s_N_ArrowT_00_005ed87c string

undefined4 func_005ED80C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed870;
  *DAT_005ed870 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed888;
  puVar1 = DAT_005ed874;
  *DAT_005ed874 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ed878;
  DAT_005ed878[1] = s_N_ArrowT_00_005ed87c;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ed88c;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ed898;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ed8a4;
  puVar1 = DAT_005ed8b8;
  DAT_005ed8b8[1] = s_Gm_SelectWarpPointT_005ed8bc;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

