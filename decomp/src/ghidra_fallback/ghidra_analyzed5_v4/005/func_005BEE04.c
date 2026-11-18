#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bf084;
extern undefined4 *DAT_005bf088;
extern undefined4 *DAT_005bf08c;
extern undefined DAT_005bf090;
extern undefined4 DAT_005bf0b4;
extern uint *DAT_005bf0d4;
extern undefined4 DAT_005bf0d8;
extern undefined4 *DAT_005bf0dc;
extern undefined4 DAT_005bf0e0;
extern undefined4 DAT_005bf0e4;
extern undefined4 *DAT_005bf0e8;
extern undefined DAT_005bf0ec;
extern uint *DAT_005bf12c;
extern undefined4 DAT_005bf130;
extern undefined4 *DAT_005bf134;
extern undefined4 *DAT_005bf138;
extern undefined DAT_005bf13c;
extern uint *DAT_005bf178;
extern undefined4 DAT_005bf17c;
extern undefined4 *DAT_005bf180;
extern undefined4 *DAT_005bf184;
extern undefined DAT_005bf188;
extern uint *DAT_005bf1c8;
extern undefined4 DAT_005bf1cc;
extern undefined4 *DAT_005bf1d0;
extern undefined4 *DAT_005bf1d4;
extern undefined DAT_005bf1d8;
extern uint *DAT_005bf218;
extern undefined4 DAT_005bf21c;
extern undefined4 *DAT_005bf220;
extern undefined4 *DAT_005bf224;
extern undefined DAT_005bf228;
extern uint *DAT_005bf270;
extern undefined4 DAT_005bf274;
extern undefined4 *DAT_005bf278;
extern char s_MojSwitchTileDokuroOctagon_005bf0b8[];
extern char s_MojSwitchTileEastOctagon_005bf110[];
extern char s_MojSwitchTileEastSquare_005bf160[];
extern char s_MojSwitchTileGanonOctagon_005bf1fc[];
extern char s_MojSwitchTileHagureOctagon_005bf254[];
extern char s_MojSwitchTileSandOctagon_005bf1ac[];

// USA 005BEE04 <- EU 005BEDDC (Ghidra, non-matching)
// GLOBAL DAT_005bf084 undefined4 *
// GLOBAL DAT_005bf088 undefined4 *
// GLOBAL DAT_005bf08c undefined4 *
// GLOBAL DAT_005bf090 undefined
// GLOBAL DAT_005bf0b4 undefined4
// GLOBAL DAT_005bf0d4 uint *
// GLOBAL DAT_005bf0d8 undefined4
// GLOBAL DAT_005bf0dc undefined4 *
// GLOBAL DAT_005bf0e0 undefined4
// GLOBAL DAT_005bf0e4 undefined4
// GLOBAL DAT_005bf0e8 undefined4 *
// GLOBAL DAT_005bf0ec undefined
// GLOBAL DAT_005bf12c uint *
// GLOBAL DAT_005bf130 undefined4
// GLOBAL DAT_005bf134 undefined4 *
// GLOBAL DAT_005bf138 undefined4 *
// GLOBAL DAT_005bf13c undefined
// GLOBAL DAT_005bf178 uint *
// GLOBAL DAT_005bf17c undefined4
// GLOBAL DAT_005bf180 undefined4 *
// GLOBAL DAT_005bf184 undefined4 *
// GLOBAL DAT_005bf188 undefined
// GLOBAL DAT_005bf1c8 uint *
// GLOBAL DAT_005bf1cc undefined4
// GLOBAL DAT_005bf1d0 undefined4 *
// GLOBAL DAT_005bf1d4 undefined4 *
// GLOBAL DAT_005bf1d8 undefined
// GLOBAL DAT_005bf218 uint *
// GLOBAL DAT_005bf21c undefined4
// GLOBAL DAT_005bf220 undefined4 *
// GLOBAL DAT_005bf224 undefined4 *
// GLOBAL DAT_005bf228 undefined
// GLOBAL DAT_005bf270 uint *
// GLOBAL DAT_005bf274 undefined4
// GLOBAL DAT_005bf278 undefined4 *
// GLOBAL s_MojSwitchTileDokuroOctagon_005bf0b8 string
// GLOBAL s_MojSwitchTileEastOctagon_005bf110 string
// GLOBAL s_MojSwitchTileEastSquare_005bf160 string
// GLOBAL s_MojSwitchTileGanonOctagon_005bf1fc string
// GLOBAL s_MojSwitchTileHagureOctagon_005bf254 string
// GLOBAL s_MojSwitchTileSandOctagon_005bf1ac string

undefined8 func_005BEE04(void)

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
  puVar1 = DAT_005bf084;
  *DAT_005bf084 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bf088;
  *DAT_005bf088 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005bf0b4;
  puVar1 = DAT_005bf08c;
  puVar3 = DAT_005bf08c + 3;
  DAT_005bf08c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_64 = &DAT_005bf090;
  local_6c = s_MojSwitchTileDokuroOctagon_005bf0b8;
  local_68 = uVar2;
  local_70 = uVar2;
  func_0019B51C(DAT_005bf0dc,DAT_005bf0d8,*DAT_005bf0d4,(int)&local_70,DAT_005bf08c,&local_68,0);
  puVar1 = DAT_005bf0e8;
  puVar3 = DAT_005bf0e8 + 3;
  DAT_005bf0e8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_54 = &DAT_005bf0ec;
  local_5c = s_MojSwitchTileEastOctagon_005bf110;
  local_58 = uVar2;
  local_60 = uVar2;
  func_0019B51C(DAT_005bf134,DAT_005bf130,*DAT_005bf12c,(int)&local_60,DAT_005bf0e8,&local_58,0);
  puVar1 = DAT_005bf138;
  puVar3 = DAT_005bf138 + 3;
  DAT_005bf138[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005bf13c;
  local_4c = s_MojSwitchTileEastSquare_005bf160;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005bf180,DAT_005bf17c,*DAT_005bf178,(int)&local_50,DAT_005bf138,&local_48,0);
  puVar1 = DAT_005bf184;
  puVar3 = DAT_005bf184 + 3;
  DAT_005bf184[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005bf188;
  local_3c = s_MojSwitchTileSandOctagon_005bf1ac;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005bf1d0,DAT_005bf1cc,*DAT_005bf1c8,(int)&local_40,DAT_005bf184,&local_38,0);
  puVar1 = DAT_005bf1d4;
  puVar3 = DAT_005bf1d4 + 3;
  DAT_005bf1d4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005bf1d8;
  local_2c = s_MojSwitchTileGanonOctagon_005bf1fc;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005bf220,DAT_005bf21c,*DAT_005bf218,(int)&local_30,DAT_005bf1d4,&local_28,0);
  puVar1 = DAT_005bf224;
  puVar3 = DAT_005bf224 + 3;
  DAT_005bf224[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005bf228;
  local_1c = s_MojSwitchTileHagureOctagon_005bf254;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005bf278,DAT_005bf274,*DAT_005bf270,(int)&local_20,DAT_005bf224,
                        &local_18,0);
  return CONCAT44(DAT_005bf0e4,uVar2);
}

