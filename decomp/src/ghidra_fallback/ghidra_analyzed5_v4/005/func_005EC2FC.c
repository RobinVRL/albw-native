#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ec33c;
extern undefined4 *DAT_005ec340;
extern undefined4 *DAT_005ec344;
extern undefined4 DAT_005ec354;
extern undefined4 DAT_005ec37c;
extern undefined4 DAT_005ec380;
extern char s_N_ArrowB_00_005ec358[];
extern char s_N_ArrowL_00_005ec364[];
extern char s_N_ArrowR_00_005ec370[];
extern char s_N_ArrowT_00_005ec348[];

// USA 005EC2FC <- EU 005EC2D4 (Ghidra, non-matching)
// GLOBAL DAT_005ec33c undefined4 *
// GLOBAL DAT_005ec340 undefined4 *
// GLOBAL DAT_005ec344 undefined4 *
// GLOBAL DAT_005ec354 undefined4
// GLOBAL DAT_005ec37c undefined4
// GLOBAL DAT_005ec380 undefined4
// GLOBAL s_N_ArrowB_00_005ec358 string
// GLOBAL s_N_ArrowL_00_005ec364 string
// GLOBAL s_N_ArrowR_00_005ec370 string
// GLOBAL s_N_ArrowT_00_005ec348 string

undefined4 func_005EC2FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ec33c;
  *DAT_005ec33c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec340;
  *DAT_005ec340 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ec354;
  puVar1 = DAT_005ec344;
  DAT_005ec344[1] = s_N_ArrowT_00_005ec348;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ec358;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ec364;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ec370;
  return func_005902C0(0);
}

