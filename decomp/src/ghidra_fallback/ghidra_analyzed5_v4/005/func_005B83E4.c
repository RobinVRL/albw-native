#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b8450;
extern undefined4 *DAT_005b8454;
extern undefined4 *DAT_005b8458;
extern undefined DAT_005b845c;
extern undefined4 DAT_005b8468;
extern uint *DAT_005b847c;
extern undefined4 DAT_005b8480;
extern undefined4 *DAT_005b8484;
extern undefined4 DAT_005b8488;
extern undefined4 DAT_005b848c;
extern char s_ObjLynelFire_005b846c[];

// USA 005B83E4 <- EU 005B83BC (Ghidra, non-matching)
// GLOBAL DAT_005b8450 undefined4 *
// GLOBAL DAT_005b8454 undefined4 *
// GLOBAL DAT_005b8458 undefined4 *
// GLOBAL DAT_005b845c undefined
// GLOBAL DAT_005b8468 undefined4
// GLOBAL DAT_005b847c uint *
// GLOBAL DAT_005b8480 undefined4
// GLOBAL DAT_005b8484 undefined4 *
// GLOBAL DAT_005b8488 undefined4
// GLOBAL DAT_005b848c undefined4
// GLOBAL s_ObjLynelFire_005b846c string

undefined8 func_005B83E4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b8450;
  *DAT_005b8450 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8454;
  *DAT_005b8454 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b8458;
  puVar3 = DAT_005b8458 + 3;
  *DAT_005b8458 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b8468;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b845c;
  local_18 = local_10;
  local_14 = s_ObjLynelFire_005b846c;
  uVar2 = func_0019B51C(DAT_005b8484,DAT_005b8480,*DAT_005b847c,(int)&local_18,DAT_005b8458,
                        &local_10,0);
  return CONCAT44(DAT_005b848c,uVar2);
}

