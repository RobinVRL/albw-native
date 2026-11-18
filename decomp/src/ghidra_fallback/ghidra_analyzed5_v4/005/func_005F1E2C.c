#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f1e6c;
extern undefined4 *DAT_005f1e70;
extern undefined4 *DAT_005f1e74;
extern undefined4 DAT_005f1e84;
extern undefined4 DAT_005f1eac;
extern undefined4 DAT_005f1eb0;
extern char s_N_ArrowB_00_005f1e88[];
extern char s_N_ArrowL_00_005f1e94[];
extern char s_N_ArrowR_00_005f1ea0[];
extern char s_N_ArrowT_00_005f1e78[];

// USA 005F1E2C <- EU 005F1E04 (Ghidra, non-matching)
// GLOBAL DAT_005f1e6c undefined4 *
// GLOBAL DAT_005f1e70 undefined4 *
// GLOBAL DAT_005f1e74 undefined4 *
// GLOBAL DAT_005f1e84 undefined4
// GLOBAL DAT_005f1eac undefined4
// GLOBAL DAT_005f1eb0 undefined4
// GLOBAL s_N_ArrowB_00_005f1e88 string
// GLOBAL s_N_ArrowL_00_005f1e94 string
// GLOBAL s_N_ArrowR_00_005f1ea0 string
// GLOBAL s_N_ArrowT_00_005f1e78 string

undefined4 func_005F1E2C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f1e6c;
  *DAT_005f1e6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1e70;
  *DAT_005f1e70 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f1e84;
  puVar1 = DAT_005f1e74;
  DAT_005f1e74[1] = s_N_ArrowT_00_005f1e78;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f1e88;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f1e94;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f1ea0;
  return func_005902C0(0);
}

