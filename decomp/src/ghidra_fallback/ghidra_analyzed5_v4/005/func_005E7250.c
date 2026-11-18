#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e72bc;
extern undefined4 *DAT_005e72c0;
extern undefined4 *DAT_005e72c4;
extern undefined DAT_005e72c8;
extern undefined4 DAT_005e72d8;
extern uint *DAT_005e72f0;
extern undefined4 DAT_005e72f4;
extern undefined4 *DAT_005e72f8;
extern undefined4 DAT_005e72fc;
extern undefined4 DAT_005e7300;
extern char s_MojSwitchSunlight_005e72dc[];

// USA 005E7250 <- EU 005E7228 (Ghidra, non-matching)
// GLOBAL DAT_005e72bc undefined4 *
// GLOBAL DAT_005e72c0 undefined4 *
// GLOBAL DAT_005e72c4 undefined4 *
// GLOBAL DAT_005e72c8 undefined
// GLOBAL DAT_005e72d8 undefined4
// GLOBAL DAT_005e72f0 uint *
// GLOBAL DAT_005e72f4 undefined4
// GLOBAL DAT_005e72f8 undefined4 *
// GLOBAL DAT_005e72fc undefined4
// GLOBAL DAT_005e7300 undefined4
// GLOBAL s_MojSwitchSunlight_005e72dc string

undefined8 func_005E7250(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e72bc;
  *DAT_005e72bc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e72c0;
  *DAT_005e72c0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e72c4;
  puVar3 = DAT_005e72c4 + 3;
  *DAT_005e72c4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e72d8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e72c8;
  local_18 = local_10;
  local_14 = s_MojSwitchSunlight_005e72dc;
  uVar2 = func_0019B51C(DAT_005e72f8,DAT_005e72f4,*DAT_005e72f0,(int)&local_18,DAT_005e72c4,
                        &local_10,0);
  return CONCAT44(DAT_005e7300,uVar2);
}

