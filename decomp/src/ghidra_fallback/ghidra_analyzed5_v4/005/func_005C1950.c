#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005c19dc;
extern undefined4 *DAT_005c19e0;
extern undefined4 *DAT_005c19e4;
extern undefined4 DAT_005c19f4;
extern undefined4 DAT_005c1a1c;
extern uint DAT_005c1a20;
extern undefined4 DAT_005c1a24;
extern undefined4 *DAT_005c1a28;
extern undefined4 DAT_005c1a2c;
extern undefined4 DAT_005c1a30;
extern uint DAT_005c1a34;
extern char s_N_ArrowB_00_005c19f8[];
extern char s_N_ArrowL_00_005c1a04[];
extern char s_N_ArrowR_00_005c1a10[];
extern char s_N_ArrowT_00_005c19e8[];

// USA 005C1950 <- EU 005C1928 (Ghidra, non-matching)
// GLOBAL DAT_005c19dc undefined4 *
// GLOBAL DAT_005c19e0 undefined4 *
// GLOBAL DAT_005c19e4 undefined4 *
// GLOBAL DAT_005c19f4 undefined4
// GLOBAL DAT_005c1a1c undefined4
// GLOBAL DAT_005c1a20 uint
// GLOBAL DAT_005c1a24 undefined4
// GLOBAL DAT_005c1a28 undefined4 *
// GLOBAL DAT_005c1a2c undefined4
// GLOBAL DAT_005c1a30 undefined4
// GLOBAL DAT_005c1a34 uint
// GLOBAL s_N_ArrowB_00_005c19f8 string
// GLOBAL s_N_ArrowL_00_005c1a04 string
// GLOBAL s_N_ArrowR_00_005c1a10 string
// GLOBAL s_N_ArrowT_00_005c19e8 string

void func_005C1950(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = DAT_005c19dc;
  DAT_005c19dc[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005c19e0;
  *DAT_005c19e0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c19f4;
  puVar1 = DAT_005c19e4;
  DAT_005c19e4[1] = s_N_ArrowT_00_005c19e8;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c19f8;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c1a04;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c1a10;
  puVar4 = DAT_005c1a28;
  uVar2 = DAT_005c1a24;
  uVar3 = DAT_005c1a20;
  puVar1 = DAT_005c19dc;
  *DAT_005c1a28 = DAT_005c1a2c;
  puVar4[1] = uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = DAT_005c1a30;
  puVar4[4] = uVar2;
  puVar4[5] = uVar2;
  uVar5 = func_00114608(DAT_005c1a34,uVar3);
  *puVar1 = (int)uVar5;
  puVar1[1] = (int)uVar5;
  return;
}

