#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce6c4;
extern undefined4 *DAT_005ce6c8;
extern undefined4 *DAT_005ce6cc;
extern undefined DAT_005ce6d0;
extern undefined4 DAT_005ce6e0;
extern uint *DAT_005ce6f4;
extern undefined4 DAT_005ce6f8;
extern undefined4 *DAT_005ce6fc;
extern undefined4 DAT_005ce700;
extern undefined4 DAT_005ce704;
extern char s_MojSwitchCandle_005ce6e4[];

// USA 005CE658 <- EU 005CE630 (Ghidra, non-matching)
// GLOBAL DAT_005ce6c4 undefined4 *
// GLOBAL DAT_005ce6c8 undefined4 *
// GLOBAL DAT_005ce6cc undefined4 *
// GLOBAL DAT_005ce6d0 undefined
// GLOBAL DAT_005ce6e0 undefined4
// GLOBAL DAT_005ce6f4 uint *
// GLOBAL DAT_005ce6f8 undefined4
// GLOBAL DAT_005ce6fc undefined4 *
// GLOBAL DAT_005ce700 undefined4
// GLOBAL DAT_005ce704 undefined4
// GLOBAL s_MojSwitchCandle_005ce6e4 string

undefined8 func_005CE658(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce6c4;
  *DAT_005ce6c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ce6c8;
  *DAT_005ce6c8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce6cc;
  puVar3 = DAT_005ce6cc + 3;
  *DAT_005ce6cc = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ce6e0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ce6d0;
  local_18 = local_10;
  local_14 = s_MojSwitchCandle_005ce6e4;
  uVar2 = func_0019B51C(DAT_005ce6fc,DAT_005ce6f8,*DAT_005ce6f4,(int)&local_18,DAT_005ce6cc,
                        &local_10,0);
  return CONCAT44(DAT_005ce704,uVar2);
}

