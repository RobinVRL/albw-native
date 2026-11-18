#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e2cd4;
extern undefined4 *DAT_005e2cd8;
extern undefined4 *DAT_005e2cdc;
extern undefined4 DAT_005e2ce8;
extern undefined4 DAT_005e2cfc;
extern undefined4 DAT_005e2d00;
extern undefined4 *DAT_005e2d04;
extern undefined DAT_005e2d08;
extern uint *DAT_005e2d34;
extern undefined4 DAT_005e2d38;
extern undefined4 *DAT_005e2d3c;
extern undefined4 DAT_005e2d40;
extern char s_ObjMediumSummons_005e2d20[];
extern char s_summonB_005e2cec[];
extern char s_summonG_005e2ce0[];
extern char s_summonR_005e2cf4[];

// USA 005E2BD4 <- EU 005E2BAC (Ghidra, non-matching)
// GLOBAL DAT_005e2cd4 undefined4 *
// GLOBAL DAT_005e2cd8 undefined4 *
// GLOBAL DAT_005e2cdc undefined4 *
// GLOBAL DAT_005e2ce8 undefined4
// GLOBAL DAT_005e2cfc undefined4
// GLOBAL DAT_005e2d00 undefined4
// GLOBAL DAT_005e2d04 undefined4 *
// GLOBAL DAT_005e2d08 undefined
// GLOBAL DAT_005e2d34 uint *
// GLOBAL DAT_005e2d38 undefined4
// GLOBAL DAT_005e2d3c undefined4 *
// GLOBAL DAT_005e2d40 undefined4
// GLOBAL s_ObjMediumSummons_005e2d20 string
// GLOBAL s_summonB_005e2cec string
// GLOBAL s_summonG_005e2ce0 string
// GLOBAL s_summonR_005e2cf4 string

undefined8 func_005E2BD4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e2cd4;
  *DAT_005e2cd4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e2ce8;
  puVar1 = DAT_005e2cd8;
  *DAT_005e2cd8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e2cdc;
  DAT_005e2cdc[1] = s_summonG_005e2ce0;
  *puVar1 = local_18;
  puVar1[3] = s_summonB_005e2cec;
  puVar1[2] = local_18;
  puVar1[5] = s_summonR_005e2cf4;
  puVar1[4] = local_18;
  puVar1[7] = s_summonG_005e2ce0;
  puVar1[6] = local_18;
  puVar1[9] = s_summonG_005e2ce0;
  puVar1[8] = local_18;
  puVar1[0xb] = s_summonR_005e2cf4;
  puVar1[10] = local_18;
  puVar1[0xd] = s_summonB_005e2cec;
  puVar1[0xc] = local_18;
  puVar1[0xf] = s_summonR_005e2cf4;
  puVar1[0xe] = local_18;
  puVar1[0x11] = s_summonR_005e2cf4;
  puVar1[0x10] = local_18;
  puVar1[0x12] = local_18;
  puVar1[0x13] = s_summonR_005e2cf4;
  puVar1 = DAT_005e2d04;
  puVar3 = DAT_005e2d04 + 3;
  *DAT_005e2d04 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e2d08;
  uStack_10 = local_18;
  local_c = s_ObjMediumSummons_005e2d20;
  uVar2 = func_0019B51C(DAT_005e2d3c,DAT_005e2d38,*DAT_005e2d34,(int)&uStack_10,DAT_005e2d04,
                        &local_18,0);
  return CONCAT44(DAT_005e2d40,uVar2);
}

