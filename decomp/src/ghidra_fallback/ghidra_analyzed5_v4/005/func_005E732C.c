#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e7398;
extern undefined4 *DAT_005e739c;
extern undefined4 *DAT_005e73a0;
extern undefined DAT_005e73a4;
extern undefined4 DAT_005e73b0;
extern uint *DAT_005e73c8;
extern undefined4 DAT_005e73cc;
extern undefined4 *DAT_005e73d0;
extern undefined4 DAT_005e73d4;
extern undefined4 DAT_005e73d8;
extern char s_MojWindowSunlight_005e73b4[];

// USA 005E732C <- EU 005E7304 (Ghidra, non-matching)
// GLOBAL DAT_005e7398 undefined4 *
// GLOBAL DAT_005e739c undefined4 *
// GLOBAL DAT_005e73a0 undefined4 *
// GLOBAL DAT_005e73a4 undefined
// GLOBAL DAT_005e73b0 undefined4
// GLOBAL DAT_005e73c8 uint *
// GLOBAL DAT_005e73cc undefined4
// GLOBAL DAT_005e73d0 undefined4 *
// GLOBAL DAT_005e73d4 undefined4
// GLOBAL DAT_005e73d8 undefined4
// GLOBAL s_MojWindowSunlight_005e73b4 string

undefined8 func_005E732C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e7398;
  *DAT_005e7398 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e739c;
  *DAT_005e739c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e73a0;
  puVar3 = DAT_005e73a0 + 3;
  *DAT_005e73a0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e73b0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e73a4;
  local_18 = local_10;
  local_14 = s_MojWindowSunlight_005e73b4;
  uVar2 = func_0019B51C(DAT_005e73d0,DAT_005e73cc,*DAT_005e73c8,(int)&local_18,DAT_005e73a0,
                        &local_10,0);
  return CONCAT44(DAT_005e73d8,uVar2);
}

