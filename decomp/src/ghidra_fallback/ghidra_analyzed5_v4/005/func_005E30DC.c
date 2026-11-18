#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e31fc;
extern undefined4 *DAT_005e3200;
extern undefined4 *DAT_005e3204;
extern undefined4 DAT_005e3214;
extern undefined4 DAT_005e323c;
extern undefined4 DAT_005e3240;
extern undefined4 *DAT_005e3244;
extern undefined DAT_005e3258;
extern undefined DAT_005e3260;
extern undefined DAT_005e3268;
extern undefined DAT_005e3270;
extern undefined DAT_005e3278;
extern undefined DAT_005e3280;
extern undefined4 DAT_005e3288;
extern undefined4 *DAT_005e328c;
extern undefined DAT_005e3290;
extern uint *DAT_005e32c0;
extern undefined4 DAT_005e32c4;
extern undefined4 *DAT_005e32c8;
extern undefined4 DAT_005e32cc;
extern char s_N_ArrowB_00_005e3218[];
extern char s_N_ArrowL_00_005e3224[];
extern char s_N_ArrowR_00_005e3230[];
extern char s_N_ArrowT_00_005e3208[];
extern char s_ObjTurtleBullied_005e32ac[];
extern char s_wait_bullied_005e3248[];

// USA 005E30DC <- EU 005E30B4 (Ghidra, non-matching)
// GLOBAL DAT_005e31fc undefined4 *
// GLOBAL DAT_005e3200 undefined4 *
// GLOBAL DAT_005e3204 undefined4 *
// GLOBAL DAT_005e3214 undefined4
// GLOBAL DAT_005e323c undefined4
// GLOBAL DAT_005e3240 undefined4
// GLOBAL DAT_005e3244 undefined4 *
// GLOBAL DAT_005e3258 undefined
// GLOBAL DAT_005e3260 undefined
// GLOBAL DAT_005e3268 undefined
// GLOBAL DAT_005e3270 undefined
// GLOBAL DAT_005e3278 undefined
// GLOBAL DAT_005e3280 undefined
// GLOBAL DAT_005e3288 undefined4
// GLOBAL DAT_005e328c undefined4 *
// GLOBAL DAT_005e3290 undefined
// GLOBAL DAT_005e32c0 uint *
// GLOBAL DAT_005e32c4 undefined4
// GLOBAL DAT_005e32c8 undefined4 *
// GLOBAL DAT_005e32cc undefined4
// GLOBAL s_N_ArrowB_00_005e3218 string
// GLOBAL s_N_ArrowL_00_005e3224 string
// GLOBAL s_N_ArrowR_00_005e3230 string
// GLOBAL s_N_ArrowT_00_005e3208 string
// GLOBAL s_ObjTurtleBullied_005e32ac string
// GLOBAL s_wait_bullied_005e3248 string

undefined8 func_005E30DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e31fc;
  *DAT_005e31fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e3214;
  puVar1 = DAT_005e3200;
  *DAT_005e3200 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e3204;
  DAT_005e3204[1] = s_N_ArrowT_00_005e3208;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005e3218;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005e3224;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005e3230;
  puVar1 = DAT_005e3244;
  DAT_005e3244[1] = s_wait_bullied_005e3248;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005e3258;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005e3260;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005e3268;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005e3270;
  puVar1[8] = local_18;
  puVar1[0xb] = &DAT_005e3278;
  puVar1[10] = local_18;
  puVar1[0xc] = local_18;
  puVar1[0xd] = &DAT_005e3280;
  puVar1 = DAT_005e328c;
  puVar3 = DAT_005e328c + 3;
  *DAT_005e328c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e3290;
  uStack_10 = local_18;
  local_c = s_ObjTurtleBullied_005e32ac;
  uVar2 = func_0019B51C(DAT_005e32c8,DAT_005e32c4,*DAT_005e32c0,(int)&uStack_10,DAT_005e328c,
                        &local_18,0);
  return CONCAT44(DAT_005e32cc,uVar2);
}

