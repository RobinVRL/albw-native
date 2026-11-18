#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e6cf8;
extern undefined4 *DAT_005e6cfc;
extern undefined DAT_005e6d00;
extern undefined4 DAT_005e6d10;
extern uint *DAT_005e6d28;
extern undefined4 DAT_005e6d2c;
extern undefined4 *DAT_005e6d30;
extern undefined4 DAT_005e6d34;
extern undefined4 DAT_005e6d38;
extern undefined4 *DAT_005e6d3c;
extern undefined DAT_005e6d40;
extern uint *DAT_005e6d74;
extern undefined4 *DAT_005e6d78;
extern char s_MojPushPullLowralStatue_005e6d5c[];
extern char s_MojPushPullStatue_005e6d14[];

// USA 005E6C08 <- EU 005E6BE0 (Ghidra, non-matching)
// GLOBAL DAT_005e6cf8 undefined4 *
// GLOBAL DAT_005e6cfc undefined4 *
// GLOBAL DAT_005e6d00 undefined
// GLOBAL DAT_005e6d10 undefined4
// GLOBAL DAT_005e6d28 uint *
// GLOBAL DAT_005e6d2c undefined4
// GLOBAL DAT_005e6d30 undefined4 *
// GLOBAL DAT_005e6d34 undefined4
// GLOBAL DAT_005e6d38 undefined4
// GLOBAL DAT_005e6d3c undefined4 *
// GLOBAL DAT_005e6d40 undefined
// GLOBAL DAT_005e6d74 uint *
// GLOBAL DAT_005e6d78 undefined4 *
// GLOBAL s_MojPushPullLowralStatue_005e6d5c string
// GLOBAL s_MojPushPullStatue_005e6d14 string

undefined8 func_005E6C08(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005e6cf8;
  DAT_005e6cf8[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = func_00114608(0x4e000000,0xffffffff);
  *puVar1 = (int)uVar4;
  puVar1 = DAT_005e6cfc;
  DAT_005e6cfc[2] = DAT_005e6cfc + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  uVar2 = DAT_005e6d10;
  local_24 = &DAT_005e6d00;
  local_2c = s_MojPushPullStatue_005e6d14;
  local_28 = DAT_005e6d10;
  local_30 = DAT_005e6d10;
  func_0019B51C(DAT_005e6d30,DAT_005e6d2c,*DAT_005e6d28,(int)&local_30,DAT_005e6cfc,&local_28,0);
  puVar1 = DAT_005e6d3c;
  puVar3 = DAT_005e6d3c + 3;
  DAT_005e6d3c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005e6d40;
  local_1c = s_MojPushPullLowralStatue_005e6d5c;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005e6d78,DAT_005e6d2c,*DAT_005e6d74,(int)&local_20,DAT_005e6d3c,
                        &local_18,0);
  return CONCAT44(DAT_005e6d38,uVar2);
}

