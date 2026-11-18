#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce070;
extern undefined4 *DAT_005ce074;
extern undefined4 *DAT_005ce078;
extern undefined DAT_005ce07c;
extern undefined4 DAT_005ce090;
extern uint *DAT_005ce0a4;
extern undefined4 DAT_005ce0a8;
extern undefined4 *DAT_005ce0ac;
extern undefined4 DAT_005ce0b0;
extern undefined4 DAT_005ce0b4;
extern char s_MojBarrierIbara_005ce094[];

// USA 005CE004 <- EU 005CDFDC (Ghidra, non-matching)
// GLOBAL DAT_005ce070 undefined4 *
// GLOBAL DAT_005ce074 undefined4 *
// GLOBAL DAT_005ce078 undefined4 *
// GLOBAL DAT_005ce07c undefined
// GLOBAL DAT_005ce090 undefined4
// GLOBAL DAT_005ce0a4 uint *
// GLOBAL DAT_005ce0a8 undefined4
// GLOBAL DAT_005ce0ac undefined4 *
// GLOBAL DAT_005ce0b0 undefined4
// GLOBAL DAT_005ce0b4 undefined4
// GLOBAL s_MojBarrierIbara_005ce094 string

undefined8 func_005CE004(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce070;
  *DAT_005ce070 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ce074;
  *DAT_005ce074 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce078;
  puVar3 = DAT_005ce078 + 3;
  *DAT_005ce078 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ce090;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ce07c;
  local_18 = local_10;
  local_14 = s_MojBarrierIbara_005ce094;
  uVar2 = func_0019B51C(DAT_005ce0ac,DAT_005ce0a8,*DAT_005ce0a4,(int)&local_18,DAT_005ce078,
                        &local_10,0);
  return CONCAT44(DAT_005ce0b4,uVar2);
}

