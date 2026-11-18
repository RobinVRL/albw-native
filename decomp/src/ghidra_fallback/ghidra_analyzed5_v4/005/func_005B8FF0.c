#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005b9054;
extern undefined4 *DAT_005b9058;
extern undefined4 DAT_005b9068;
extern undefined4 DAT_005b906c;
extern undefined4 DAT_005b9070;
extern undefined4 *DAT_005b9074;
extern undefined4 DAT_005b90ac;
extern char s_Gm_RupeeT_005b905c[];
extern char s_N_GameCoin_00_005b909c[];
extern char s_N_KimoB_00_005b9078[];
extern char s_N_KimoP_00_005b9090[];
extern char s_N_KimoY_00_005b9084[];

// USA 005B8FF0 <- EU 005B8FC8 (Ghidra, non-matching)
// GLOBAL DAT_005b9054 undefined4 *
// GLOBAL DAT_005b9058 undefined4 *
// GLOBAL DAT_005b9068 undefined4
// GLOBAL DAT_005b906c undefined4
// GLOBAL DAT_005b9070 undefined4
// GLOBAL DAT_005b9074 undefined4 *
// GLOBAL DAT_005b90ac undefined4
// GLOBAL s_Gm_RupeeT_005b905c string
// GLOBAL s_N_GameCoin_00_005b909c string
// GLOBAL s_N_KimoB_00_005b9078 string
// GLOBAL s_N_KimoP_00_005b9090 string
// GLOBAL s_N_KimoY_00_005b9084 string

undefined4 func_005B8FF0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005b9054;
  *DAT_005b9054 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005b9068;
  puVar1 = DAT_005b9058;
  *DAT_005b9058 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_RupeeT_005b905c;
  puVar1[2] = uVar2;
  puVar1 = DAT_005b9074;
  DAT_005b9074[1] = s_N_KimoB_00_005b9078;
  *puVar1 = uVar2;
  puVar1[3] = s_N_KimoY_00_005b9084;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_KimoP_00_005b9090;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_GameCoin_00_005b909c;
  return func_005902C0(0);
}

