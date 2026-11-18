#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e64ec;
extern undefined4 *DAT_005e64f0;
extern undefined4 *DAT_005e64f4;
extern undefined DAT_005e64f8;
extern undefined4 DAT_005e6508;
extern uint *DAT_005e651c;
extern undefined4 DAT_005e6520;
extern undefined4 *DAT_005e6524;
extern undefined4 DAT_005e6528;
extern undefined4 DAT_005e652c;
extern undefined4 *DAT_005e6530;
extern undefined DAT_005e6534;
extern uint *DAT_005e6554;
extern undefined4 DAT_005e6558;
extern undefined4 *DAT_005e655c;
extern undefined4 *DAT_005e6560;
extern undefined DAT_005e6564;
extern uint *DAT_005e6598;
extern undefined4 DAT_005e659c;
extern undefined4 *DAT_005e65a0;
extern undefined4 *DAT_005e65a4;
extern undefined DAT_005e65a8;
extern uint *DAT_005e65d8;
extern undefined4 DAT_005e65dc;
extern undefined4 *DAT_005e65e0;
extern undefined4 *DAT_005e65e4;
extern undefined DAT_005e65e8;
extern uint *DAT_005e6618;
extern undefined4 DAT_005e661c;
extern undefined4 *DAT_005e6620;
extern undefined4 *DAT_005e6624;
extern undefined DAT_005e6628;
extern uint *DAT_005e6660;
extern undefined4 DAT_005e6664;
extern undefined4 *DAT_005e6668;
extern char s_MojCandleFloorHyrule_005e6580[];
extern char s_MojCandleFloor_005e650c[];
extern char s_MojCandleWallDokuro_005e65c4[];
extern char s_MojCandleWallWindOutSide_005e6644[];
extern char s_MojCandleWallWind_005e6604[];
extern char s_MojCandleWall_005e6544[];

// USA 005E626C <- EU 005E6244 (Ghidra, non-matching)
// GLOBAL DAT_005e64ec undefined4 *
// GLOBAL DAT_005e64f0 undefined4 *
// GLOBAL DAT_005e64f4 undefined4 *
// GLOBAL DAT_005e64f8 undefined
// GLOBAL DAT_005e6508 undefined4
// GLOBAL DAT_005e651c uint *
// GLOBAL DAT_005e6520 undefined4
// GLOBAL DAT_005e6524 undefined4 *
// GLOBAL DAT_005e6528 undefined4
// GLOBAL DAT_005e652c undefined4
// GLOBAL DAT_005e6530 undefined4 *
// GLOBAL DAT_005e6534 undefined
// GLOBAL DAT_005e6554 uint *
// GLOBAL DAT_005e6558 undefined4
// GLOBAL DAT_005e655c undefined4 *
// GLOBAL DAT_005e6560 undefined4 *
// GLOBAL DAT_005e6564 undefined
// GLOBAL DAT_005e6598 uint *
// GLOBAL DAT_005e659c undefined4
// GLOBAL DAT_005e65a0 undefined4 *
// GLOBAL DAT_005e65a4 undefined4 *
// GLOBAL DAT_005e65a8 undefined
// GLOBAL DAT_005e65d8 uint *
// GLOBAL DAT_005e65dc undefined4
// GLOBAL DAT_005e65e0 undefined4 *
// GLOBAL DAT_005e65e4 undefined4 *
// GLOBAL DAT_005e65e8 undefined
// GLOBAL DAT_005e6618 uint *
// GLOBAL DAT_005e661c undefined4
// GLOBAL DAT_005e6620 undefined4 *
// GLOBAL DAT_005e6624 undefined4 *
// GLOBAL DAT_005e6628 undefined
// GLOBAL DAT_005e6660 uint *
// GLOBAL DAT_005e6664 undefined4
// GLOBAL DAT_005e6668 undefined4 *
// GLOBAL s_MojCandleFloorHyrule_005e6580 string
// GLOBAL s_MojCandleFloor_005e650c string
// GLOBAL s_MojCandleWallDokuro_005e65c4 string
// GLOBAL s_MojCandleWallWindOutSide_005e6644 string
// GLOBAL s_MojCandleWallWind_005e6604 string
// GLOBAL s_MojCandleWall_005e6544 string

undefined8 func_005E626C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined4 *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined * *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined * *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined * *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(char * *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x58))
  #define local_14 (*(undefined * *)(albw_frame + 0x5c))
  puVar1 = DAT_005e64ec;
  *DAT_005e64ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e64f0;
  *DAT_005e64f0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e6508;
  puVar1 = DAT_005e64f4;
  puVar3 = DAT_005e64f4 + 3;
  DAT_005e64f4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_64 = &DAT_005e64f8;
  local_6c = s_MojCandleFloor_005e650c;
  local_68 = uVar2;
  local_70 = uVar2;
  func_0019B51C(DAT_005e6524,DAT_005e6520,*DAT_005e651c,(int)&local_70,DAT_005e64f4,&local_68,0);
  puVar1 = DAT_005e6530;
  puVar3 = DAT_005e6530 + 3;
  DAT_005e6530[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_54 = &DAT_005e6534;
  local_5c = s_MojCandleWall_005e6544;
  local_58 = uVar2;
  local_60 = uVar2;
  func_0019B51C(DAT_005e655c,DAT_005e6558,*DAT_005e6554,(int)&local_60,DAT_005e6530,&local_58,0);
  puVar1 = DAT_005e6560;
  puVar3 = DAT_005e6560 + 3;
  DAT_005e6560[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005e6564;
  local_4c = s_MojCandleFloorHyrule_005e6580;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005e65a0,DAT_005e659c,*DAT_005e6598,(int)&local_50,DAT_005e6560,&local_48,0);
  puVar1 = DAT_005e65a4;
  puVar3 = DAT_005e65a4 + 3;
  DAT_005e65a4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005e65a8;
  local_3c = s_MojCandleWallDokuro_005e65c4;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005e65e0,DAT_005e65dc,*DAT_005e65d8,(int)&local_40,DAT_005e65a4,&local_38,0);
  puVar1 = DAT_005e65e4;
  puVar3 = DAT_005e65e4 + 3;
  DAT_005e65e4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005e65e8;
  local_2c = s_MojCandleWallWind_005e6604;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005e6620,DAT_005e661c,*DAT_005e6618,(int)&local_30,DAT_005e65e4,&local_28,0);
  puVar1 = DAT_005e6624;
  puVar3 = DAT_005e6624 + 3;
  DAT_005e6624[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005e6628;
  local_1c = s_MojCandleWallWindOutSide_005e6644;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005e6668,DAT_005e6664,*DAT_005e6660,(int)&local_20,DAT_005e6624,
                        &local_18,0);
  return CONCAT44(DAT_005e652c,uVar2);
}

