#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c18e0;
extern undefined4 *DAT_005c18e4;
extern undefined4 *DAT_005c18e8;
extern undefined4 DAT_005c18f8;
extern undefined4 DAT_005c1920;
extern undefined4 DAT_005c1924;
extern char s_N_ArrowB_00_005c18fc[];
extern char s_N_ArrowL_00_005c1908[];
extern char s_N_ArrowR_00_005c1914[];
extern char s_N_ArrowT_00_005c18ec[];

// USA 005C18A0 <- EU 005C1878 (Ghidra, non-matching)
// GLOBAL DAT_005c18e0 undefined4 *
// GLOBAL DAT_005c18e4 undefined4 *
// GLOBAL DAT_005c18e8 undefined4 *
// GLOBAL DAT_005c18f8 undefined4
// GLOBAL DAT_005c1920 undefined4
// GLOBAL DAT_005c1924 undefined4
// GLOBAL s_N_ArrowB_00_005c18fc string
// GLOBAL s_N_ArrowL_00_005c1908 string
// GLOBAL s_N_ArrowR_00_005c1914 string
// GLOBAL s_N_ArrowT_00_005c18ec string

undefined4 func_005C18A0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c18e0;
  *DAT_005c18e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c18e4;
  *DAT_005c18e4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c18f8;
  puVar1 = DAT_005c18e8;
  DAT_005c18e8[1] = s_N_ArrowT_00_005c18ec;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c18fc;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c1908;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c1914;
  return func_005902C0(0);
}

