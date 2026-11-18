#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a8038;
extern undefined4 *DAT_005a803c;
extern undefined4 *DAT_005a8040;
extern undefined4 DAT_005a8050;
extern undefined4 DAT_005a8078;
extern undefined4 DAT_005a807c;
extern char s_N_ArrowB_00_005a8054[];
extern char s_N_ArrowL_00_005a8060[];
extern char s_N_ArrowR_00_005a806c[];
extern char s_N_ArrowT_00_005a8044[];

// USA 005A7FF8 <- EU 005A7FD0 (Ghidra, non-matching)
// GLOBAL DAT_005a8038 undefined4 *
// GLOBAL DAT_005a803c undefined4 *
// GLOBAL DAT_005a8040 undefined4 *
// GLOBAL DAT_005a8050 undefined4
// GLOBAL DAT_005a8078 undefined4
// GLOBAL DAT_005a807c undefined4
// GLOBAL s_N_ArrowB_00_005a8054 string
// GLOBAL s_N_ArrowL_00_005a8060 string
// GLOBAL s_N_ArrowR_00_005a806c string
// GLOBAL s_N_ArrowT_00_005a8044 string

undefined4 func_005A7FF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a8038;
  *DAT_005a8038 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a803c;
  *DAT_005a803c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a8050;
  puVar1 = DAT_005a8040;
  DAT_005a8040[1] = s_N_ArrowT_00_005a8044;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a8054;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a8060;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a806c;
  return func_005902C0(0);
}

