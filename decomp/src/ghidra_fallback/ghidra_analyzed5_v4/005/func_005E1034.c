#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e1168;
extern undefined4 *DAT_005e116c;
extern undefined4 DAT_005e117c;
extern undefined4 DAT_005e11a4;
extern undefined4 DAT_005e11a8;
extern undefined4 *DAT_005e11ac;
extern uint DAT_005e11cc;
extern undefined4 DAT_005e11d0;
extern undefined4 *DAT_005e11d4;
extern uint DAT_005e11d8;
extern undefined4 *DAT_005e11dc;
extern undefined4 DAT_005e11e0;
extern undefined4 DAT_005e11e4;
extern undefined DAT_005e11e8;
extern undefined4 DAT_005e120c;
extern uint *DAT_005e1210;
extern undefined4 DAT_005e1214;
extern undefined4 *DAT_005e1218;
extern undefined4 DAT_005e121c;
extern char s_BarrierRowral_005e11b0[];
extern char s_Disappear_005e11c0[];
extern char s_MojLoruleBarrier_005e11f8[];
extern char s_N_ArrowB_00_005e1180[];
extern char s_N_ArrowL_00_005e118c[];
extern char s_N_ArrowR_00_005e1198[];
extern char s_N_ArrowT_00_005e1170[];

// USA 005E1034 <- EU 005E100C (Ghidra, non-matching)
// GLOBAL DAT_005e1168 undefined4 *
// GLOBAL DAT_005e116c undefined4 *
// GLOBAL DAT_005e117c undefined4
// GLOBAL DAT_005e11a4 undefined4
// GLOBAL DAT_005e11a8 undefined4
// GLOBAL DAT_005e11ac undefined4 *
// GLOBAL DAT_005e11cc uint
// GLOBAL DAT_005e11d0 undefined4
// GLOBAL DAT_005e11d4 undefined4 *
// GLOBAL DAT_005e11d8 uint
// GLOBAL DAT_005e11dc undefined4 *
// GLOBAL DAT_005e11e0 undefined4
// GLOBAL DAT_005e11e4 undefined4
// GLOBAL DAT_005e11e8 undefined
// GLOBAL DAT_005e120c undefined4
// GLOBAL DAT_005e1210 uint *
// GLOBAL DAT_005e1214 undefined4
// GLOBAL DAT_005e1218 undefined4 *
// GLOBAL DAT_005e121c undefined4
// GLOBAL s_BarrierRowral_005e11b0 string
// GLOBAL s_Disappear_005e11c0 string
// GLOBAL s_MojLoruleBarrier_005e11f8 string
// GLOBAL s_N_ArrowB_00_005e1180 string
// GLOBAL s_N_ArrowL_00_005e118c string
// GLOBAL s_N_ArrowR_00_005e1198 string
// GLOBAL s_N_ArrowT_00_005e1170 string

undefined8 func_005E1034(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e1168;
  DAT_005e1168[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar6 = DAT_005e117c;
  puVar2 = DAT_005e116c;
  DAT_005e116c[1] = s_N_ArrowT_00_005e1170;
  *puVar2 = uVar6;
  puVar2[3] = s_N_ArrowB_00_005e1180;
  puVar2[2] = uVar6;
  puVar2[5] = s_N_ArrowL_00_005e118c;
  puVar2[4] = uVar6;
  puVar2[6] = uVar6;
  puVar2[7] = s_N_ArrowR_00_005e1198;
  puVar2 = DAT_005e11ac;
  DAT_005e11ac[1] = s_BarrierRowral_005e11b0;
  *puVar2 = uVar6;
  puVar2[2] = uVar6;
  puVar2[3] = s_Disappear_005e11c0;
  puVar2 = DAT_005e11d4;
  uVar7 = DAT_005e11d0;
  uVar3 = DAT_005e11cc;
  *DAT_005e11d4 = DAT_005e11d0;
  puVar2[1] = uVar7;
  puVar2[2] = uVar7;
  uVar8 = func_00114608(DAT_005e11d8,uVar3);
  *puVar1 = (int)uVar8;
  uVar8 = func_00114608(0,(uint)((ulonglong)uVar8 >> 0x20));
  puVar1[1] = (int)uVar8;
  uVar5 = DAT_005e11e4;
  uVar4 = DAT_005e11e0;
  puVar1 = DAT_005e11dc;
  *DAT_005e11dc = uVar7;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[-0xa9] = 0;
  puVar1[-0xa8] = 5;
  puVar1[-0xa7] = puVar1 + -0xa6;
  local_28 = uVar6;
  puStack_24 = &DAT_005e11e8;
  uStack_20 = uVar6;
  local_1c = s_MojLoruleBarrier_005e11f8;
  uVar6 = func_0019B51C(DAT_005e1218,DAT_005e1214,*DAT_005e1210,(int)&uStack_20,DAT_005e120c,
                        &local_28,0);
  return CONCAT44(DAT_005e121c,uVar6);
}

