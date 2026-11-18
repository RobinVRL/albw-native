#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f2be4;
extern undefined4 *DAT_005f2be8;
extern undefined4 *DAT_005f2bec;
extern undefined4 DAT_005f2bfc;
extern undefined4 DAT_005f2c24;
extern undefined4 DAT_005f2c28;
extern undefined4 *DAT_005f2c2c;
extern undefined4 DAT_005f2c3c;
extern undefined4 *DAT_005f2c40;
extern undefined DAT_005f2c44;
extern undefined4 DAT_005f2c74;
extern char s_CountEnd_005f2c5c[];
extern char s_Gm_StadiumT_005f2c30[];
extern char s_InCount_005f2c54[];
extern char s_LinkColor_005f2c68[];
extern char s_N_ArrowB_00_005f2c00[];
extern char s_N_ArrowL_00_005f2c0c[];
extern char s_N_ArrowR_00_005f2c18[];
extern char s_N_ArrowT_00_005f2bf0[];
extern char s_OutCount_005f2c48[];

// USA 005F2B30 <- EU 005F2B08 (Ghidra, non-matching)
// GLOBAL DAT_005f2be4 undefined4 *
// GLOBAL DAT_005f2be8 undefined4 *
// GLOBAL DAT_005f2bec undefined4 *
// GLOBAL DAT_005f2bfc undefined4
// GLOBAL DAT_005f2c24 undefined4
// GLOBAL DAT_005f2c28 undefined4
// GLOBAL DAT_005f2c2c undefined4 *
// GLOBAL DAT_005f2c3c undefined4
// GLOBAL DAT_005f2c40 undefined4 *
// GLOBAL DAT_005f2c44 undefined
// GLOBAL DAT_005f2c74 undefined4
// GLOBAL s_CountEnd_005f2c5c string
// GLOBAL s_Gm_StadiumT_005f2c30 string
// GLOBAL s_InCount_005f2c54 string
// GLOBAL s_LinkColor_005f2c68 string
// GLOBAL s_N_ArrowB_00_005f2c00 string
// GLOBAL s_N_ArrowL_00_005f2c0c string
// GLOBAL s_N_ArrowR_00_005f2c18 string
// GLOBAL s_N_ArrowT_00_005f2bf0 string
// GLOBAL s_OutCount_005f2c48 string

undefined4 func_005F2B30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f2be4;
  *DAT_005f2be4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f2bfc;
  puVar1 = DAT_005f2be8;
  *DAT_005f2be8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f2bec;
  DAT_005f2bec[1] = s_N_ArrowT_00_005f2bf0;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f2c00;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f2c0c;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f2c18;
  puVar1 = DAT_005f2c2c;
  DAT_005f2c2c[1] = s_Gm_StadiumT_005f2c30;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2c40;
  DAT_005f2c40[1] = &DAT_005f2c44;
  *puVar1 = uVar2;
  puVar1[3] = s_OutCount_005f2c48;
  puVar1[2] = uVar2;
  puVar1[5] = s_InCount_005f2c54;
  puVar1[4] = uVar2;
  puVar1[7] = s_CountEnd_005f2c5c;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = s_LinkColor_005f2c68;
  return func_005902C0(0);
}

