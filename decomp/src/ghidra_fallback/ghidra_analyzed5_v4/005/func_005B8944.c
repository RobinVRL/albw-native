#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b8a10;
extern undefined4 *DAT_005b8a14;
extern undefined4 *DAT_005b8a18;
extern undefined4 DAT_005b8a28;
extern undefined4 DAT_005b8a50;
extern undefined4 DAT_005b8a54;
extern undefined4 *DAT_005b8a58;
extern undefined4 DAT_005b8a5c;
extern undefined4 DAT_005b8a60;
extern undefined4 DAT_005b8a64;
extern undefined DAT_005b8a68;
extern undefined4 DAT_005b8a90;
extern uint *DAT_005b8a94;
extern undefined4 DAT_005b8a98;
extern undefined4 *DAT_005b8a9c;
extern undefined4 DAT_005b8aa0;
extern char s_N_ArrowB_00_005b8a2c[];
extern char s_N_ArrowL_00_005b8a38[];
extern char s_N_ArrowR_00_005b8a44[];
extern char s_N_ArrowT_00_005b8a1c[];
extern char s_PlayerObject_005b8a80[];

// USA 005B8944 <- EU 005B891C (Ghidra, non-matching)
// GLOBAL DAT_005b8a10 int
// GLOBAL DAT_005b8a14 undefined4 *
// GLOBAL DAT_005b8a18 undefined4 *
// GLOBAL DAT_005b8a28 undefined4
// GLOBAL DAT_005b8a50 undefined4
// GLOBAL DAT_005b8a54 undefined4
// GLOBAL DAT_005b8a58 undefined4 *
// GLOBAL DAT_005b8a5c undefined4
// GLOBAL DAT_005b8a60 undefined4
// GLOBAL DAT_005b8a64 undefined4
// GLOBAL DAT_005b8a68 undefined
// GLOBAL DAT_005b8a90 undefined4
// GLOBAL DAT_005b8a94 uint *
// GLOBAL DAT_005b8a98 undefined4
// GLOBAL DAT_005b8a9c undefined4 *
// GLOBAL DAT_005b8aa0 undefined4
// GLOBAL s_N_ArrowB_00_005b8a2c string
// GLOBAL s_N_ArrowL_00_005b8a38 string
// GLOBAL s_N_ArrowR_00_005b8a44 string
// GLOBAL s_N_ArrowT_00_005b8a1c string
// GLOBAL s_PlayerObject_005b8a80 string

undefined8 func_005B8944(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_005b8a10;
  *(undefined4 *)(DAT_005b8a10 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_18 = DAT_005b8a28;
  puVar2 = DAT_005b8a14;
  *DAT_005b8a14 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005b8a18;
  DAT_005b8a18[1] = s_N_ArrowT_00_005b8a1c;
  *puVar2 = local_18;
  puVar2[3] = s_N_ArrowB_00_005b8a2c;
  puVar2[2] = local_18;
  puVar2[5] = s_N_ArrowL_00_005b8a38;
  puVar2[4] = local_18;
  puVar2[6] = local_18;
  puVar2[7] = s_N_ArrowR_00_005b8a44;
  uVar3 = DAT_005b8a64;
  uVar4 = DAT_005b8a60;
  puVar2 = DAT_005b8a58;
  *DAT_005b8a58 = DAT_005b8a5c;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  puVar2[-0xa2] = 0;
  puVar2[-0xa1] = 5;
  puVar2[-0xa0] = puVar2 + -0x9f;
  puStack_14 = &DAT_005b8a68;
  uStack_10 = local_18;
  local_c = s_PlayerObject_005b8a80;
  uVar4 = func_0019B51C(DAT_005b8a9c,DAT_005b8a98,*DAT_005b8a94,(int)&uStack_10,DAT_005b8a90,
                        &local_18,0);
  return CONCAT44(DAT_005b8aa0,uVar4);
}

