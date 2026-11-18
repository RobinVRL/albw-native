#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bea94;
extern undefined4 *DAT_005bea98;
extern undefined4 *DAT_005bea9c;
extern undefined DAT_005beaa0;
extern undefined4 DAT_005beab0;
extern uint *DAT_005beac4;
extern undefined4 DAT_005beac8;
extern undefined4 *DAT_005beacc;
extern undefined4 DAT_005bead0;
extern undefined4 DAT_005bead4;
extern undefined4 *DAT_005bead8;
extern uint DAT_005beb10;
extern char s_MojRupeePaint_005beab4[];
extern char s_RupeePaint_blue_005beaf0[];
extern char s_RupeePaint_green_005beadc[];
extern char s_RupeePaint_red_005beb00[];

// USA 005BE9E8 <- EU 005BE9C0 (Ghidra, non-matching)
// GLOBAL DAT_005bea94 undefined4 *
// GLOBAL DAT_005bea98 undefined4 *
// GLOBAL DAT_005bea9c undefined4 *
// GLOBAL DAT_005beaa0 undefined
// GLOBAL DAT_005beab0 undefined4
// GLOBAL DAT_005beac4 uint *
// GLOBAL DAT_005beac8 undefined4
// GLOBAL DAT_005beacc undefined4 *
// GLOBAL DAT_005bead0 undefined4
// GLOBAL DAT_005bead4 undefined4
// GLOBAL DAT_005bead8 undefined4 *
// GLOBAL DAT_005beb10 uint
// GLOBAL s_MojRupeePaint_005beab4 string
// GLOBAL s_RupeePaint_blue_005beaf0 string
// GLOBAL s_RupeePaint_green_005beadc string
// GLOBAL s_RupeePaint_red_005beb00 string

longlong func_005BE9E8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bea94;
  *DAT_005bea94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005beab0;
  puVar1 = DAT_005bea98;
  *DAT_005bea98 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bea9c;
  puVar3 = DAT_005bea9c + 3;
  *DAT_005bea9c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005beaa0;
  local_14 = s_MojRupeePaint_005beab4;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005beacc,DAT_005beac8,*DAT_005beac4,(int)&uStack_18,DAT_005bea9c,&local_10,0);
  puVar1 = DAT_005bead8;
  DAT_005bead8[1] = s_RupeePaint_green_005beadc;
  *puVar1 = uVar2;
  puVar1[3] = s_RupeePaint_blue_005beaf0;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_RupeePaint_red_005beb00;
  return (ulonglong)DAT_005beb10 << 0x20;
}

