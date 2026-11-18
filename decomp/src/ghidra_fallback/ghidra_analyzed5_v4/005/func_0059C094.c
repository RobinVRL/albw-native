#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059c178;
extern undefined4 *DAT_0059c17c;
extern undefined4 *DAT_0059c180;
extern undefined4 DAT_0059c190;
extern undefined4 DAT_0059c1b8;
extern undefined4 DAT_0059c1bc;
extern undefined4 *DAT_0059c1c0;
extern undefined DAT_0059c1c4;
extern undefined4 DAT_0059c1d4;
extern undefined4 *DAT_0059c1d8;
extern undefined DAT_0059c1dc;
extern uint *DAT_0059c1f8;
extern undefined4 DAT_0059c1fc;
extern undefined4 *DAT_0059c200;
extern undefined4 DAT_0059c204;
extern char s_MojDiary_0059c1ec[];
extern char s_N_ArrowB_00_0059c194[];
extern char s_N_ArrowL_00_0059c1a0[];
extern char s_N_ArrowR_00_0059c1ac[];
extern char s_N_ArrowT_00_0059c184[];
extern char s_close_0059c1cc[];

// USA 0059C094 <- EU 0059C06C (Ghidra, non-matching)
// GLOBAL DAT_0059c178 undefined4 *
// GLOBAL DAT_0059c17c undefined4 *
// GLOBAL DAT_0059c180 undefined4 *
// GLOBAL DAT_0059c190 undefined4
// GLOBAL DAT_0059c1b8 undefined4
// GLOBAL DAT_0059c1bc undefined4
// GLOBAL DAT_0059c1c0 undefined4 *
// GLOBAL DAT_0059c1c4 undefined
// GLOBAL DAT_0059c1d4 undefined4
// GLOBAL DAT_0059c1d8 undefined4 *
// GLOBAL DAT_0059c1dc undefined
// GLOBAL DAT_0059c1f8 uint *
// GLOBAL DAT_0059c1fc undefined4
// GLOBAL DAT_0059c200 undefined4 *
// GLOBAL DAT_0059c204 undefined4
// GLOBAL s_MojDiary_0059c1ec string
// GLOBAL s_N_ArrowB_00_0059c194 string
// GLOBAL s_N_ArrowL_00_0059c1a0 string
// GLOBAL s_N_ArrowR_00_0059c1ac string
// GLOBAL s_N_ArrowT_00_0059c184 string
// GLOBAL s_close_0059c1cc string

undefined8 func_0059C094(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_0059c178;
  *DAT_0059c178 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_0059c190;
  puVar1 = DAT_0059c17c;
  *DAT_0059c17c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059c180;
  DAT_0059c180[1] = s_N_ArrowT_00_0059c184;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_0059c194;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_0059c1a0;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_0059c1ac;
  puVar1 = DAT_0059c1c0;
  DAT_0059c1c0[1] = &DAT_0059c1c4;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_close_0059c1cc;
  puVar1 = DAT_0059c1d8;
  puVar3 = DAT_0059c1d8 + 3;
  *DAT_0059c1d8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_0059c1dc;
  uStack_10 = local_18;
  local_c = s_MojDiary_0059c1ec;
  uVar2 = func_0019B51C(DAT_0059c200,DAT_0059c1fc,*DAT_0059c1f8,(int)&uStack_10,DAT_0059c1d8,
                        &local_18,0);
  return CONCAT44(DAT_0059c204,uVar2);
}

