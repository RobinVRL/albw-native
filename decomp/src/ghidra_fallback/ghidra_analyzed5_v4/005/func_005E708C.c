#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e717c;
extern undefined4 *DAT_005e7180;
extern undefined4 *DAT_005e7184;
extern undefined4 DAT_005e7194;
extern undefined4 DAT_005e71bc;
extern undefined4 DAT_005e71c0;
extern undefined4 *DAT_005e71c4;
extern undefined4 DAT_005e71dc;
extern undefined4 *DAT_005e71e0;
extern undefined4 *DAT_005e71f8;
extern undefined DAT_005e71fc;
extern uint *DAT_005e7218;
extern undefined4 DAT_005e721c;
extern undefined4 *DAT_005e7220;
extern undefined4 DAT_005e7224;
extern char s_MessageBoad_Back_005e71c8[];
extern char s_MessageBoad_Dark_005e71e4[];
extern char s_MojSignboardStone_005e7204[];
extern char s_N_ArrowB_00_005e7198[];
extern char s_N_ArrowL_00_005e71a4[];
extern char s_N_ArrowR_00_005e71b0[];
extern char s_N_ArrowT_00_005e7188[];

// USA 005E708C <- EU 005E7064 (Ghidra, non-matching)
// GLOBAL DAT_005e717c undefined4 *
// GLOBAL DAT_005e7180 undefined4 *
// GLOBAL DAT_005e7184 undefined4 *
// GLOBAL DAT_005e7194 undefined4
// GLOBAL DAT_005e71bc undefined4
// GLOBAL DAT_005e71c0 undefined4
// GLOBAL DAT_005e71c4 undefined4 *
// GLOBAL DAT_005e71dc undefined4
// GLOBAL DAT_005e71e0 undefined4 *
// GLOBAL DAT_005e71f8 undefined4 *
// GLOBAL DAT_005e71fc undefined
// GLOBAL DAT_005e7218 uint *
// GLOBAL DAT_005e721c undefined4
// GLOBAL DAT_005e7220 undefined4 *
// GLOBAL DAT_005e7224 undefined4
// GLOBAL s_MessageBoad_Back_005e71c8 string
// GLOBAL s_MessageBoad_Dark_005e71e4 string
// GLOBAL s_MojSignboardStone_005e7204 string
// GLOBAL s_N_ArrowB_00_005e7198 string
// GLOBAL s_N_ArrowL_00_005e71a4 string
// GLOBAL s_N_ArrowR_00_005e71b0 string
// GLOBAL s_N_ArrowT_00_005e7188 string

undefined8 func_005E708C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e717c;
  *DAT_005e717c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e7194;
  puVar1 = DAT_005e7180;
  *DAT_005e7180 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e7184;
  DAT_005e7184[1] = s_N_ArrowT_00_005e7188;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005e7198;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005e71a4;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005e71b0;
  puVar1 = DAT_005e71c4;
  DAT_005e71c4[1] = s_MessageBoad_Back_005e71c8;
  *puVar1 = local_18;
  puVar1 = DAT_005e71e0;
  DAT_005e71e0[1] = s_MessageBoad_Dark_005e71e4;
  *puVar1 = local_18;
  puVar1 = DAT_005e71f8;
  puVar3 = DAT_005e71f8 + 3;
  *DAT_005e71f8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e71fc;
  uStack_10 = local_18;
  local_c = s_MojSignboardStone_005e7204;
  uVar2 = func_0019B51C(DAT_005e7220,DAT_005e721c,*DAT_005e7218,(int)&uStack_10,DAT_005e71f8,
                        &local_18,0);
  return CONCAT44(DAT_005e7224,uVar2);
}

