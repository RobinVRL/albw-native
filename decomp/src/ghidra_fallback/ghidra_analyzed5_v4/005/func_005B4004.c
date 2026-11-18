#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b4070;
extern undefined4 *DAT_005b4074;
extern undefined4 *DAT_005b4078;
extern undefined DAT_005b407c;
extern undefined4 DAT_005b408c;
extern uint *DAT_005b40a0;
extern undefined4 DAT_005b40a4;
extern undefined4 *DAT_005b40a8;
extern undefined4 DAT_005b40ac;
extern undefined4 DAT_005b40b0;
extern char s_MojBoardHook_005b4090[];

// USA 005B4004 <- EU 005B3FDC (Ghidra, non-matching)
// GLOBAL DAT_005b4070 undefined4 *
// GLOBAL DAT_005b4074 undefined4 *
// GLOBAL DAT_005b4078 undefined4 *
// GLOBAL DAT_005b407c undefined
// GLOBAL DAT_005b408c undefined4
// GLOBAL DAT_005b40a0 uint *
// GLOBAL DAT_005b40a4 undefined4
// GLOBAL DAT_005b40a8 undefined4 *
// GLOBAL DAT_005b40ac undefined4
// GLOBAL DAT_005b40b0 undefined4
// GLOBAL s_MojBoardHook_005b4090 string

undefined8 func_005B4004(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b4070;
  *DAT_005b4070 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b4074;
  *DAT_005b4074 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b4078;
  puVar3 = DAT_005b4078 + 3;
  *DAT_005b4078 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b408c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b407c;
  local_18 = local_10;
  local_14 = s_MojBoardHook_005b4090;
  uVar2 = func_0019B51C(DAT_005b40a8,DAT_005b40a4,*DAT_005b40a0,(int)&local_18,DAT_005b4078,
                        &local_10,0);
  return CONCAT44(DAT_005b40b0,uVar2);
}

