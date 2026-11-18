#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0108;
extern undefined4 *DAT_005d010c;
extern undefined4 *DAT_005d0110;
extern undefined4 DAT_005d0120;
extern undefined4 DAT_005d0148;
extern undefined4 DAT_005d014c;
extern char s_N_ArrowB_00_005d0124[];
extern char s_N_ArrowL_00_005d0130[];
extern char s_N_ArrowR_00_005d013c[];
extern char s_N_ArrowT_00_005d0114[];

// USA 005D00C8 <- EU 005D00A0 (Ghidra, non-matching)
// GLOBAL DAT_005d0108 undefined4 *
// GLOBAL DAT_005d010c undefined4 *
// GLOBAL DAT_005d0110 undefined4 *
// GLOBAL DAT_005d0120 undefined4
// GLOBAL DAT_005d0148 undefined4
// GLOBAL DAT_005d014c undefined4
// GLOBAL s_N_ArrowB_00_005d0124 string
// GLOBAL s_N_ArrowL_00_005d0130 string
// GLOBAL s_N_ArrowR_00_005d013c string
// GLOBAL s_N_ArrowT_00_005d0114 string

undefined4 func_005D00C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d0108;
  *DAT_005d0108 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d010c;
  *DAT_005d010c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005d0120;
  puVar1 = DAT_005d0110;
  DAT_005d0110[1] = s_N_ArrowT_00_005d0114;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005d0124;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005d0130;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005d013c;
  return func_005902C0(0);
}

