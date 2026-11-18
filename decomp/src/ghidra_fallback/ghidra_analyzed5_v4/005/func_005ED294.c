#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ed2f8;
extern undefined4 *DAT_005ed2fc;
extern undefined4 *DAT_005ed300;
extern undefined4 DAT_005ed310;
extern undefined4 DAT_005ed338;
extern undefined4 DAT_005ed33c;
extern undefined4 *DAT_005ed340;
extern undefined4 DAT_005ed34c;
extern char s_Gm_Pin_005ed344[];
extern char s_N_ArrowB_00_005ed314[];
extern char s_N_ArrowL_00_005ed320[];
extern char s_N_ArrowR_00_005ed32c[];
extern char s_N_ArrowT_00_005ed304[];

// USA 005ED294 <- EU 005ED26C (Ghidra, non-matching)
// GLOBAL DAT_005ed2f8 undefined4 *
// GLOBAL DAT_005ed2fc undefined4 *
// GLOBAL DAT_005ed300 undefined4 *
// GLOBAL DAT_005ed310 undefined4
// GLOBAL DAT_005ed338 undefined4
// GLOBAL DAT_005ed33c undefined4
// GLOBAL DAT_005ed340 undefined4 *
// GLOBAL DAT_005ed34c undefined4
// GLOBAL s_Gm_Pin_005ed344 string
// GLOBAL s_N_ArrowB_00_005ed314 string
// GLOBAL s_N_ArrowL_00_005ed320 string
// GLOBAL s_N_ArrowR_00_005ed32c string
// GLOBAL s_N_ArrowT_00_005ed304 string

undefined4 func_005ED294(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed2f8;
  *DAT_005ed2f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed310;
  puVar1 = DAT_005ed2fc;
  *DAT_005ed2fc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ed300;
  DAT_005ed300[1] = s_N_ArrowT_00_005ed304;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ed314;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ed320;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ed32c;
  puVar1 = DAT_005ed340;
  DAT_005ed340[1] = s_Gm_Pin_005ed344;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

