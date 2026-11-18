#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 *DAT_005ecc6c;
extern undefined4 *DAT_005ecc70;
extern undefined4 *DAT_005ecc74;
extern undefined4 DAT_005ecc84;
extern undefined4 DAT_005eccac;
extern undefined4 DAT_005eccb0;
extern undefined4 *DAT_005eccb4;
extern undefined4 DAT_005eccc8;
extern undefined4 *DAT_005ecccc;
extern undefined4 *DAT_005ecce0;
extern undefined4 *DAT_005eccf4;
extern undefined4 *DAT_005ecd04;
extern undefined4 *DAT_005ecd14;
extern undefined4 *DAT_005ecd24;
extern uint *DAT_005ecd3c;
extern undefined4 DAT_005ecd40;
extern undefined4 *DAT_005ecd44;
extern undefined4 *DAT_005ecd48;
extern char s_L_NumKimoB_00_005eccb8[];
extern char s_L_NumKimoP_00_005eccd0[];
extern char s_L_NumKimoY_00_005ecce4[];
extern char s_N_ArrowB_00_005ecc88[];
extern char s_N_ArrowL_00_005ecc94[];
extern char s_N_ArrowR_00_005ecca0[];
extern char s_N_ArrowT_00_005ecc78[];
extern char s_N_KimoB_00_005eccf8[];
extern char s_N_KimoP_00_005ecd08[];
extern char s_N_KimoY_00_005ecd18[];
extern char s_SE_S_LIVER_COUNT_005ecd28[];

// USA 005ECB0C <- EU 005ECAE4 (Ghidra, non-matching)
// GLOBAL DAT_005ecc6c undefined4 *
// GLOBAL DAT_005ecc70 undefined4 *
// GLOBAL DAT_005ecc74 undefined4 *
// GLOBAL DAT_005ecc84 undefined4
// GLOBAL DAT_005eccac undefined4
// GLOBAL DAT_005eccb0 undefined4
// GLOBAL DAT_005eccb4 undefined4 *
// GLOBAL DAT_005eccc8 undefined4
// GLOBAL DAT_005ecccc undefined4 *
// GLOBAL DAT_005ecce0 undefined4 *
// GLOBAL DAT_005eccf4 undefined4 *
// GLOBAL DAT_005ecd04 undefined4 *
// GLOBAL DAT_005ecd14 undefined4 *
// GLOBAL DAT_005ecd24 undefined4 *
// GLOBAL DAT_005ecd3c uint *
// GLOBAL DAT_005ecd40 undefined4
// GLOBAL DAT_005ecd44 undefined4 *
// GLOBAL DAT_005ecd48 undefined4 *
// GLOBAL s_L_NumKimoB_00_005eccb8 string
// GLOBAL s_L_NumKimoP_00_005eccd0 string
// GLOBAL s_L_NumKimoY_00_005ecce4 string
// GLOBAL s_N_ArrowB_00_005ecc88 string
// GLOBAL s_N_ArrowL_00_005ecc94 string
// GLOBAL s_N_ArrowR_00_005ecca0 string
// GLOBAL s_N_ArrowT_00_005ecc78 string
// GLOBAL s_N_KimoB_00_005eccf8 string
// GLOBAL s_N_KimoP_00_005ecd08 string
// GLOBAL s_N_KimoY_00_005ecd18 string
// GLOBAL s_SE_S_LIVER_COUNT_005ecd28 string

void func_005ECB0C(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_005ecc6c;
  *DAT_005ecc6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = DAT_005ecc84;
  puVar1 = DAT_005ecc70;
  *DAT_005ecc70 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ecc74;
  DAT_005ecc74[1] = s_N_ArrowT_00_005ecc78;
  *puVar1 = uVar3;
  puVar1[3] = s_N_ArrowB_00_005ecc88;
  puVar1[2] = uVar3;
  puVar1[5] = s_N_ArrowL_00_005ecc94;
  puVar1[4] = uVar3;
  puVar1[6] = uVar3;
  puVar1[7] = s_N_ArrowR_00_005ecca0;
  puVar1 = DAT_005eccb4;
  DAT_005eccb4[1] = s_L_NumKimoB_00_005eccb8;
  *puVar1 = uVar3;
  puVar1 = DAT_005ecccc;
  DAT_005ecccc[1] = s_L_NumKimoP_00_005eccd0;
  *puVar1 = uVar3;
  puVar1 = DAT_005ecce0;
  DAT_005ecce0[1] = s_L_NumKimoY_00_005ecce4;
  *puVar1 = uVar3;
  puVar1 = DAT_005eccf4;
  DAT_005eccf4[1] = s_N_KimoB_00_005eccf8;
  *puVar1 = uVar3;
  puVar1 = DAT_005ecd04;
  DAT_005ecd04[1] = s_N_KimoP_00_005ecd08;
  *puVar1 = uVar3;
  puVar1 = DAT_005ecd14;
  DAT_005ecd14[1] = s_N_KimoY_00_005ecd18;
  *puVar1 = uVar3;
  puVar1 = DAT_005ecd24;
  DAT_005ecd24[1] = s_SE_S_LIVER_COUNT_005ecd28;
  *puVar1 = uVar3;
  if (((*DAT_005ecd3c & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_005ecd3c), puVar1 = DAT_005ecd44, uVar3 = DAT_005ecd40,
     iVar2 != 0)) {
    *DAT_005ecd44 = DAT_005ecd40;
    puVar1[1] = uVar3;
    puVar1[2] = uVar3;
  }
  puVar1 = DAT_005ecd48;
  uVar3 = *DAT_005ecd44;
  uVar4 = DAT_005ecd44[1];
  DAT_005ecd48[2] = DAT_005ecd44[2];
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  return;
}

