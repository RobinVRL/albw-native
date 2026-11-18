#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005ec778;
extern undefined4 *DAT_005ec77c;
extern undefined4 *DAT_005ec780;
extern undefined4 DAT_005ec790;
extern undefined4 DAT_005ec7b8;
extern uint DAT_005ec7bc;
extern uint DAT_005ec7c0;
extern char s_N_ArrowB_00_005ec794[];
extern char s_N_ArrowL_00_005ec7a0[];
extern char s_N_ArrowR_00_005ec7ac[];
extern char s_N_ArrowT_00_005ec784[];

// USA 005EC720 <- EU 005EC6F8 (Ghidra, non-matching)
// GLOBAL DAT_005ec778 undefined4 *
// GLOBAL DAT_005ec77c undefined4 *
// GLOBAL DAT_005ec780 undefined4 *
// GLOBAL DAT_005ec790 undefined4
// GLOBAL DAT_005ec7b8 undefined4
// GLOBAL DAT_005ec7bc uint
// GLOBAL DAT_005ec7c0 uint
// GLOBAL s_N_ArrowB_00_005ec794 string
// GLOBAL s_N_ArrowL_00_005ec7a0 string
// GLOBAL s_N_ArrowR_00_005ec7ac string
// GLOBAL s_N_ArrowT_00_005ec784 string

void func_005EC720(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = DAT_005ec778;
  DAT_005ec778[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005ec77c;
  *DAT_005ec77c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ec790;
  puVar1 = DAT_005ec780;
  DAT_005ec780[1] = s_N_ArrowT_00_005ec784;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ec794;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ec7a0;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ec7ac;
  puVar1 = DAT_005ec778;
  uVar3 = func_00114608(DAT_005ec7c0,DAT_005ec7bc);
  *puVar1 = (int)uVar3;
  return;
}

