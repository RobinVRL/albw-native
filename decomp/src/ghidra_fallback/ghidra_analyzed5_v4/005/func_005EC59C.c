#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005ec5dc;
extern undefined4 *DAT_005ec5e0;
extern undefined4 *DAT_005ec5e4;
extern undefined4 DAT_005ec5f4;
extern undefined4 DAT_005ec61c;
extern undefined4 DAT_005ec620;
extern char s_N_ArrowB_00_005ec5f8[];
extern char s_N_ArrowL_00_005ec604[];
extern char s_N_ArrowR_00_005ec610[];
extern char s_N_ArrowT_00_005ec5e8[];

// USA 005EC59C <- EU 005EC574 (Ghidra, non-matching)
// GLOBAL DAT_005ec5dc int
// GLOBAL DAT_005ec5e0 undefined4 *
// GLOBAL DAT_005ec5e4 undefined4 *
// GLOBAL DAT_005ec5f4 undefined4
// GLOBAL DAT_005ec61c undefined4
// GLOBAL DAT_005ec620 undefined4
// GLOBAL s_N_ArrowB_00_005ec5f8 string
// GLOBAL s_N_ArrowL_00_005ec604 string
// GLOBAL s_N_ArrowR_00_005ec610 string
// GLOBAL s_N_ArrowT_00_005ec5e8 string

undefined4 func_005EC59C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005ec5dc;
  *(undefined4 *)(DAT_005ec5dc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ec5e0;
  *DAT_005ec5e0 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005ec5f4;
  puVar2 = DAT_005ec5e4;
  DAT_005ec5e4[1] = s_N_ArrowT_00_005ec5e8;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005ec5f8;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005ec604;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005ec610;
  return func_005902C0(0);
}

