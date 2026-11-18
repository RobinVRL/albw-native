#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005e37dc;
extern undefined4 *DAT_005e37e0;
extern uint DAT_005e37e4;
extern uint DAT_005e37e8;
extern undefined4 *DAT_005e37ec;
extern undefined DAT_005e37f0;
extern undefined4 DAT_005e37fc;
extern undefined DAT_005e3800;
extern undefined DAT_005e380c;
extern undefined DAT_005e3818;
extern undefined DAT_005e3824;
extern undefined4 DAT_005e3830;
extern undefined4 DAT_005e3834;
extern undefined4 *DAT_005e3838;
extern undefined DAT_005e383c;
extern uint *DAT_005e3864;
extern undefined4 DAT_005e3868;
extern undefined4 *DAT_005e386c;
extern undefined4 DAT_005e3870;
extern char s_TagRupeeFountain_005e3850[];

// USA 005E36E4 <- EU 005E36BC (Ghidra, non-matching)
// GLOBAL DAT_005e37dc int
// GLOBAL DAT_005e37e0 undefined4 *
// GLOBAL DAT_005e37e4 uint
// GLOBAL DAT_005e37e8 uint
// GLOBAL DAT_005e37ec undefined4 *
// GLOBAL DAT_005e37f0 undefined
// GLOBAL DAT_005e37fc undefined4
// GLOBAL DAT_005e3800 undefined
// GLOBAL DAT_005e380c undefined
// GLOBAL DAT_005e3818 undefined
// GLOBAL DAT_005e3824 undefined
// GLOBAL DAT_005e3830 undefined4
// GLOBAL DAT_005e3834 undefined4
// GLOBAL DAT_005e3838 undefined4 *
// GLOBAL DAT_005e383c undefined
// GLOBAL DAT_005e3864 uint *
// GLOBAL DAT_005e3868 undefined4
// GLOBAL DAT_005e386c undefined4 *
// GLOBAL DAT_005e3870 undefined4
// GLOBAL s_TagRupeeFountain_005e3850 string

undefined8 func_005E36E4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_005e37dc;
  *(undefined4 *)(DAT_005e37dc + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005e37e0;
  puVar4 = DAT_005e37e0 + -6;
  *DAT_005e37e0 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005e37e4,0);
  *puVar4 = (int)uVar5;
  uVar6 = func_00114608(DAT_005e37e8,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-5] = (int)uVar6;
  puVar2[-4] = (int)uVar5;
  local_20 = DAT_005e37fc;
  puVar2[-3] = (int)uVar6;
  puVar2 = DAT_005e37ec;
  DAT_005e37ec[1] = &DAT_005e37f0;
  *puVar2 = local_20;
  puVar2[3] = &DAT_005e3800;
  puVar2[2] = local_20;
  puVar2[5] = &DAT_005e380c;
  puVar2[4] = local_20;
  puVar2[7] = &DAT_005e3818;
  puVar2[6] = local_20;
  puVar2[8] = local_20;
  puVar2[9] = &DAT_005e3824;
  puVar2 = DAT_005e3838;
  puVar4 = DAT_005e3838 + 3;
  *DAT_005e3838 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  puStack_1c = &DAT_005e383c;
  uStack_18 = local_20;
  local_14 = s_TagRupeeFountain_005e3850;
  uVar3 = func_0019B51C(DAT_005e386c,DAT_005e3868,*DAT_005e3864,(int)&uStack_18,DAT_005e3838,
                        &local_20,0);
  return CONCAT44(DAT_005e3870,uVar3);
}

