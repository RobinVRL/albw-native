#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb33c;
extern undefined4 *DAT_005eb340;
extern undefined4 *DAT_005eb344;
extern undefined4 DAT_005eb354;
extern undefined4 DAT_005eb37c;
extern undefined4 DAT_005eb380;
extern undefined4 *DAT_005eb384;
extern undefined4 DAT_005eb398;
extern undefined4 *DAT_005eb39c;
extern undefined4 *DAT_005eb3b0;
extern undefined4 *DAT_005eb3c4;
extern undefined DAT_005eb3c8;
extern undefined DAT_005eb3d8;
extern undefined4 DAT_005eb3e8;
extern undefined4 *DAT_005eb3ec;
extern undefined DAT_005eb3f0;
extern undefined DAT_005eb3f4;
extern undefined DAT_005eb3f8;
extern undefined DAT_005eb3fc;
extern undefined4 DAT_005eb400;
extern char s_CountEnd_005eb3cc[];
extern char s_Gm_SRCResultT_005eb388[];
extern char s_L_RupeeNumL_00_005eb3b4[];
extern char s_L_RupeeNumS_00_005eb3a0[];
extern char s_LinkColor_005eb3dc[];
extern char s_N_ArrowB_00_005eb358[];
extern char s_N_ArrowL_00_005eb364[];
extern char s_N_ArrowR_00_005eb370[];
extern char s_N_ArrowT_00_005eb348[];

// USA 005EB218 <- EU 005EB1F0 (Ghidra, non-matching)
// GLOBAL DAT_005eb33c undefined4 *
// GLOBAL DAT_005eb340 undefined4 *
// GLOBAL DAT_005eb344 undefined4 *
// GLOBAL DAT_005eb354 undefined4
// GLOBAL DAT_005eb37c undefined4
// GLOBAL DAT_005eb380 undefined4
// GLOBAL DAT_005eb384 undefined4 *
// GLOBAL DAT_005eb398 undefined4
// GLOBAL DAT_005eb39c undefined4 *
// GLOBAL DAT_005eb3b0 undefined4 *
// GLOBAL DAT_005eb3c4 undefined4 *
// GLOBAL DAT_005eb3c8 undefined
// GLOBAL DAT_005eb3d8 undefined
// GLOBAL DAT_005eb3e8 undefined4
// GLOBAL DAT_005eb3ec undefined4 *
// GLOBAL DAT_005eb3f0 undefined
// GLOBAL DAT_005eb3f4 undefined
// GLOBAL DAT_005eb3f8 undefined
// GLOBAL DAT_005eb3fc undefined
// GLOBAL DAT_005eb400 undefined4
// GLOBAL s_CountEnd_005eb3cc string
// GLOBAL s_Gm_SRCResultT_005eb388 string
// GLOBAL s_L_RupeeNumL_00_005eb3b4 string
// GLOBAL s_L_RupeeNumS_00_005eb3a0 string
// GLOBAL s_LinkColor_005eb3dc string
// GLOBAL s_N_ArrowB_00_005eb358 string
// GLOBAL s_N_ArrowL_00_005eb364 string
// GLOBAL s_N_ArrowR_00_005eb370 string
// GLOBAL s_N_ArrowT_00_005eb348 string

undefined4 func_005EB218(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005eb33c;
  *DAT_005eb33c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005eb354;
  puVar1 = DAT_005eb340;
  *DAT_005eb340 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eb344;
  DAT_005eb344[1] = s_N_ArrowT_00_005eb348;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005eb358;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005eb364;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005eb370;
  puVar1 = DAT_005eb384;
  DAT_005eb384[1] = s_Gm_SRCResultT_005eb388;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb39c;
  DAT_005eb39c[1] = s_L_RupeeNumS_00_005eb3a0;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb3b0;
  DAT_005eb3b0[1] = s_L_RupeeNumL_00_005eb3b4;
  *puVar1 = uVar2;
  puVar1 = DAT_005eb3c4;
  DAT_005eb3c4[1] = &DAT_005eb3c8;
  *puVar1 = uVar2;
  puVar1[3] = s_CountEnd_005eb3cc;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005eb3d8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_LinkColor_005eb3dc;
  puVar1 = DAT_005eb3ec;
  DAT_005eb3ec[1] = &DAT_005eb3f0;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005eb3f4;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005eb3f8;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005eb3fc;
  return func_005902C0(0);
}

