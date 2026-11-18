#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f3360;
extern undefined4 *DAT_005f3364;
extern undefined4 *DAT_005f3368;
extern undefined4 DAT_005f3378;
extern undefined4 DAT_005f33a0;
extern undefined4 DAT_005f33a4;
extern undefined4 *DAT_005f33a8;
extern undefined DAT_005f33ac;
extern uint *DAT_005f33dc;
extern undefined4 DAT_005f33e0;
extern undefined4 *DAT_005f33e4;
extern undefined4 DAT_005f33e8;
extern char s_AreaEventTalkEpilogue_005f33c4[];
extern char s_N_ArrowB_00_005f337c[];
extern char s_N_ArrowL_00_005f3388[];
extern char s_N_ArrowR_00_005f3394[];
extern char s_N_ArrowT_00_005f336c[];

// USA 005F32A8 <- EU 005F3280 (Ghidra, non-matching)
// GLOBAL DAT_005f3360 undefined4 *
// GLOBAL DAT_005f3364 undefined4 *
// GLOBAL DAT_005f3368 undefined4 *
// GLOBAL DAT_005f3378 undefined4
// GLOBAL DAT_005f33a0 undefined4
// GLOBAL DAT_005f33a4 undefined4
// GLOBAL DAT_005f33a8 undefined4 *
// GLOBAL DAT_005f33ac undefined
// GLOBAL DAT_005f33dc uint *
// GLOBAL DAT_005f33e0 undefined4
// GLOBAL DAT_005f33e4 undefined4 *
// GLOBAL DAT_005f33e8 undefined4
// GLOBAL s_AreaEventTalkEpilogue_005f33c4 string
// GLOBAL s_N_ArrowB_00_005f337c string
// GLOBAL s_N_ArrowL_00_005f3388 string
// GLOBAL s_N_ArrowR_00_005f3394 string
// GLOBAL s_N_ArrowT_00_005f336c string

undefined8 func_005F32A8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005f3360;
  *DAT_005f3360 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005f3378;
  puVar1 = DAT_005f3364;
  *DAT_005f3364 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f3368;
  DAT_005f3368[1] = s_N_ArrowT_00_005f336c;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005f337c;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005f3388;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005f3394;
  puVar1 = DAT_005f33a8;
  puVar3 = DAT_005f33a8 + 3;
  *DAT_005f33a8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005f33ac;
  uStack_10 = local_18;
  local_c = s_AreaEventTalkEpilogue_005f33c4;
  uVar2 = func_0019B51C(DAT_005f33e4,DAT_005f33e0,*DAT_005f33dc,(int)&uStack_10,DAT_005f33a8,
                        &local_18,0);
  return CONCAT44(DAT_005f33e8,uVar2);
}

