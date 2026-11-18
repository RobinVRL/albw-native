#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f7780;
extern undefined4 *DAT_005f7784;
extern undefined4 *DAT_005f7788;
extern undefined4 DAT_005f7798;
extern undefined4 DAT_005f77c0;
extern undefined4 DAT_005f77c4;
extern char s_N_ArrowB_00_005f779c[];
extern char s_N_ArrowL_00_005f77a8[];
extern char s_N_ArrowR_00_005f77b4[];
extern char s_N_ArrowT_00_005f778c[];

// USA 005F7740 <- EU 005F7718 (Ghidra, non-matching)
// GLOBAL DAT_005f7780 undefined4 *
// GLOBAL DAT_005f7784 undefined4 *
// GLOBAL DAT_005f7788 undefined4 *
// GLOBAL DAT_005f7798 undefined4
// GLOBAL DAT_005f77c0 undefined4
// GLOBAL DAT_005f77c4 undefined4
// GLOBAL s_N_ArrowB_00_005f779c string
// GLOBAL s_N_ArrowL_00_005f77a8 string
// GLOBAL s_N_ArrowR_00_005f77b4 string
// GLOBAL s_N_ArrowT_00_005f778c string

undefined4 func_005F7740(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f7780;
  *DAT_005f7780 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7784;
  *DAT_005f7784 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f7798;
  puVar1 = DAT_005f7788;
  DAT_005f7788[1] = s_N_ArrowT_00_005f778c;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f779c;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f77a8;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f77b4;
  return func_005902C0(0);
}

