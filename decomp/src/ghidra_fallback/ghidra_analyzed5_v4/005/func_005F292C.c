#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005f29ac;
extern undefined4 *DAT_005f29b0;
extern undefined4 *DAT_005f29b4;
extern undefined4 DAT_005f29c4;
extern undefined4 DAT_005f29ec;
extern undefined4 DAT_005f29f0;
extern undefined4 *DAT_005f29f4;
extern undefined4 DAT_005f2a08;
extern undefined4 *DAT_005f2a0c;
extern char s_Gm_GameOverT_005f29f8[];
extern char s_N_ArrowB_00_005f29c8[];
extern char s_N_ArrowL_00_005f29d4[];
extern char s_N_ArrowR_00_005f29e0[];
extern char s_N_ArrowT_00_005f29b8[];
extern char s_T_Message_00_005f2a10[];

// USA 005F292C <- EU 005F2904 (Ghidra, non-matching)
// GLOBAL DAT_005f29ac int
// GLOBAL DAT_005f29b0 undefined4 *
// GLOBAL DAT_005f29b4 undefined4 *
// GLOBAL DAT_005f29c4 undefined4
// GLOBAL DAT_005f29ec undefined4
// GLOBAL DAT_005f29f0 undefined4
// GLOBAL DAT_005f29f4 undefined4 *
// GLOBAL DAT_005f2a08 undefined4
// GLOBAL DAT_005f2a0c undefined4 *
// GLOBAL s_Gm_GameOverT_005f29f8 string
// GLOBAL s_N_ArrowB_00_005f29c8 string
// GLOBAL s_N_ArrowL_00_005f29d4 string
// GLOBAL s_N_ArrowR_00_005f29e0 string
// GLOBAL s_N_ArrowT_00_005f29b8 string
// GLOBAL s_T_Message_00_005f2a10 string

undefined4 func_005F292C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005f29ac;
  *(undefined4 *)(DAT_005f29ac + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  uVar3 = DAT_005f29c4;
  puVar2 = DAT_005f29b0;
  *DAT_005f29b0 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f29b4;
  DAT_005f29b4[1] = s_N_ArrowT_00_005f29b8;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005f29c8;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005f29d4;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005f29e0;
  puVar2 = DAT_005f29f4;
  DAT_005f29f4[1] = s_Gm_GameOverT_005f29f8;
  *puVar2 = uVar3;
  puVar2 = DAT_005f2a0c;
  DAT_005f2a0c[1] = s_T_Message_00_005f2a10;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

