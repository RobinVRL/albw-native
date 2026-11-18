#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c2468;
extern undefined4 *DAT_005c246c;
extern undefined4 *DAT_005c2470;
extern undefined4 DAT_005c2480;
extern undefined4 DAT_005c24a8;
extern undefined4 DAT_005c24ac;
extern char s_N_ArrowB_00_005c2484[];
extern char s_N_ArrowL_00_005c2490[];
extern char s_N_ArrowR_00_005c249c[];
extern char s_N_ArrowT_00_005c2474[];

// USA 005C2428 <- EU 005C2400 (Ghidra, non-matching)
// GLOBAL DAT_005c2468 undefined4 *
// GLOBAL DAT_005c246c undefined4 *
// GLOBAL DAT_005c2470 undefined4 *
// GLOBAL DAT_005c2480 undefined4
// GLOBAL DAT_005c24a8 undefined4
// GLOBAL DAT_005c24ac undefined4
// GLOBAL s_N_ArrowB_00_005c2484 string
// GLOBAL s_N_ArrowL_00_005c2490 string
// GLOBAL s_N_ArrowR_00_005c249c string
// GLOBAL s_N_ArrowT_00_005c2474 string

undefined4 func_005C2428(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c2468;
  *DAT_005c2468 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c246c;
  *DAT_005c246c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c2480;
  puVar1 = DAT_005c2470;
  DAT_005c2470[1] = s_N_ArrowT_00_005c2474;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c2484;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c2490;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c249c;
  return func_005902C0(0);
}

