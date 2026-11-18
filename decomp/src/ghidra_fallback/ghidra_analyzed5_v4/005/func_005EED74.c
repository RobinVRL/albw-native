#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005eede0;
extern undefined4 *DAT_005eede4;
extern undefined4 *DAT_005eede8;
extern undefined DAT_005eedec;
extern undefined4 DAT_005eee00;
extern uint *DAT_005eee18;
extern undefined4 DAT_005eee1c;
extern undefined4 *DAT_005eee20;
extern undefined4 DAT_005eee24;
extern undefined4 DAT_005eee28;
extern char s_TagCaveBombEntrance_005eee04[];

// USA 005EED74 <- EU 005EED4C (Ghidra, non-matching)
// GLOBAL DAT_005eede0 undefined4 *
// GLOBAL DAT_005eede4 undefined4 *
// GLOBAL DAT_005eede8 undefined4 *
// GLOBAL DAT_005eedec undefined
// GLOBAL DAT_005eee00 undefined4
// GLOBAL DAT_005eee18 uint *
// GLOBAL DAT_005eee1c undefined4
// GLOBAL DAT_005eee20 undefined4 *
// GLOBAL DAT_005eee24 undefined4
// GLOBAL DAT_005eee28 undefined4
// GLOBAL s_TagCaveBombEntrance_005eee04 string

undefined8 func_005EED74(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005eede0;
  *DAT_005eede0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eede4;
  *DAT_005eede4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eede8;
  puVar3 = DAT_005eede8 + 3;
  *DAT_005eede8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005eee00;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005eedec;
  local_18 = local_10;
  local_14 = s_TagCaveBombEntrance_005eee04;
  uVar2 = func_0019B51C(DAT_005eee20,DAT_005eee1c,*DAT_005eee18,(int)&local_18,DAT_005eede8,
                        &local_10,0);
  return CONCAT44(DAT_005eee28,uVar2);
}

