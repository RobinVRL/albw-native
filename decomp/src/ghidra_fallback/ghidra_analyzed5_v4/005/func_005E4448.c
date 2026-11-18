#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e451c;
extern undefined4 *DAT_005e4520;
extern undefined4 *DAT_005e4524;
extern undefined4 DAT_005e4534;
extern undefined4 DAT_005e455c;
extern undefined4 DAT_005e4560;
extern undefined4 *DAT_005e4564;
extern undefined4 DAT_005e4578;
extern undefined4 *DAT_005e457c;
extern undefined4 *DAT_005e458c;
extern undefined4 *DAT_005e459c;
extern undefined4 *DAT_005e45b0;
extern char s_Gm_WarpBtnD_005e4590[];
extern char s_Gm_WarpBtnL_005e4580[];
extern char s_Gm_WarpChoices_005e4568[];
extern char s_Gm_WarpIconD_005e45b4[];
extern char s_Gm_WarpIconL_005e45a0[];
extern char s_N_ArrowB_00_005e4538[];
extern char s_N_ArrowL_00_005e4544[];
extern char s_N_ArrowR_00_005e4550[];
extern char s_N_ArrowT_00_005e4528[];

// USA 005E4448 <- EU 005E4420 (Ghidra, non-matching)
// GLOBAL DAT_005e451c undefined4 *
// GLOBAL DAT_005e4520 undefined4 *
// GLOBAL DAT_005e4524 undefined4 *
// GLOBAL DAT_005e4534 undefined4
// GLOBAL DAT_005e455c undefined4
// GLOBAL DAT_005e4560 undefined4
// GLOBAL DAT_005e4564 undefined4 *
// GLOBAL DAT_005e4578 undefined4
// GLOBAL DAT_005e457c undefined4 *
// GLOBAL DAT_005e458c undefined4 *
// GLOBAL DAT_005e459c undefined4 *
// GLOBAL DAT_005e45b0 undefined4 *
// GLOBAL s_Gm_WarpBtnD_005e4590 string
// GLOBAL s_Gm_WarpBtnL_005e4580 string
// GLOBAL s_Gm_WarpChoices_005e4568 string
// GLOBAL s_Gm_WarpIconD_005e45b4 string
// GLOBAL s_Gm_WarpIconL_005e45a0 string
// GLOBAL s_N_ArrowB_00_005e4538 string
// GLOBAL s_N_ArrowL_00_005e4544 string
// GLOBAL s_N_ArrowR_00_005e4550 string
// GLOBAL s_N_ArrowT_00_005e4528 string

undefined4 func_005E4448(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e451c;
  *DAT_005e451c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e4534;
  puVar1 = DAT_005e4520;
  *DAT_005e4520 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e4524;
  DAT_005e4524[1] = s_N_ArrowT_00_005e4528;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e4538;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e4544;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e4550;
  puVar1 = DAT_005e4564;
  DAT_005e4564[1] = s_Gm_WarpChoices_005e4568;
  *puVar1 = uVar2;
  puVar1 = DAT_005e457c;
  DAT_005e457c[1] = s_Gm_WarpBtnL_005e4580;
  *puVar1 = uVar2;
  puVar1 = DAT_005e458c;
  DAT_005e458c[1] = s_Gm_WarpBtnD_005e4590;
  *puVar1 = uVar2;
  puVar1 = DAT_005e459c;
  DAT_005e459c[1] = s_Gm_WarpIconL_005e45a0;
  *puVar1 = uVar2;
  puVar1 = DAT_005e45b0;
  DAT_005e45b0[1] = s_Gm_WarpIconD_005e45b4;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

