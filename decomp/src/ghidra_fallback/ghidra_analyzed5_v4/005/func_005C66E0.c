#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c67a4;
extern undefined4 *DAT_005c67a8;
extern undefined4 *DAT_005c67ac;
extern undefined4 DAT_005c67bc;
extern undefined4 DAT_005c67f0;
extern undefined4 DAT_005c67f4;
extern undefined4 *DAT_005c67f8;
extern undefined DAT_005c67fc;
extern uint *DAT_005c681c;
extern undefined4 DAT_005c6820;
extern undefined4 *DAT_005c6824;
extern undefined4 DAT_005c6828;
extern char s_ObjCrystalBall_005c680c[];
extern char s_twinkle_005c67c0[];
extern char s_twinkle_ed_005c67c8[];
extern char s_twinkle_fail_005c67d4[];
extern char s_twinkle_low_005c67e4[];
extern char s_twinkle_st_005c67b0[];

// USA 005C66E0 <- EU 005C66B8 (Ghidra, non-matching)
// GLOBAL DAT_005c67a4 undefined4 *
// GLOBAL DAT_005c67a8 undefined4 *
// GLOBAL DAT_005c67ac undefined4 *
// GLOBAL DAT_005c67bc undefined4
// GLOBAL DAT_005c67f0 undefined4
// GLOBAL DAT_005c67f4 undefined4
// GLOBAL DAT_005c67f8 undefined4 *
// GLOBAL DAT_005c67fc undefined
// GLOBAL DAT_005c681c uint *
// GLOBAL DAT_005c6820 undefined4
// GLOBAL DAT_005c6824 undefined4 *
// GLOBAL DAT_005c6828 undefined4
// GLOBAL s_ObjCrystalBall_005c680c string
// GLOBAL s_twinkle_005c67c0 string
// GLOBAL s_twinkle_ed_005c67c8 string
// GLOBAL s_twinkle_fail_005c67d4 string
// GLOBAL s_twinkle_low_005c67e4 string
// GLOBAL s_twinkle_st_005c67b0 string

undefined8 func_005C66E0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c67a4;
  *DAT_005c67a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c67bc;
  puVar1 = DAT_005c67a8;
  *DAT_005c67a8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c67ac;
  DAT_005c67ac[1] = s_twinkle_st_005c67b0;
  *puVar1 = local_18;
  puVar1[3] = s_twinkle_005c67c0;
  puVar1[2] = local_18;
  puVar1[5] = s_twinkle_ed_005c67c8;
  puVar1[4] = local_18;
  puVar1[7] = s_twinkle_fail_005c67d4;
  puVar1[6] = local_18;
  puVar1[8] = local_18;
  puVar1[9] = s_twinkle_low_005c67e4;
  puVar1 = DAT_005c67f8;
  puVar3 = DAT_005c67f8 + 3;
  *DAT_005c67f8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c67fc;
  uStack_10 = local_18;
  local_c = s_ObjCrystalBall_005c680c;
  uVar2 = func_0019B51C(DAT_005c6824,DAT_005c6820,*DAT_005c681c,(int)&uStack_10,DAT_005c67f8,
                        &local_18,0);
  return CONCAT44(DAT_005c6828,uVar2);
}

