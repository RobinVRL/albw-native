#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a7c30;
extern undefined4 *DAT_005a7c34;
extern undefined4 *DAT_005a7c38;
extern undefined DAT_005a7c3c;
extern undefined4 DAT_005a7c48;
extern uint *DAT_005a7c58;
extern undefined4 DAT_005a7c5c;
extern undefined4 *DAT_005a7c60;
extern undefined4 DAT_005a7c64;
extern undefined4 DAT_005a7c68;
extern char s_ObjTornade_005a7c4c[];

// USA 005A7BC4 <- EU 005A7B9C (Ghidra, non-matching)
// GLOBAL DAT_005a7c30 undefined4 *
// GLOBAL DAT_005a7c34 undefined4 *
// GLOBAL DAT_005a7c38 undefined4 *
// GLOBAL DAT_005a7c3c undefined
// GLOBAL DAT_005a7c48 undefined4
// GLOBAL DAT_005a7c58 uint *
// GLOBAL DAT_005a7c5c undefined4
// GLOBAL DAT_005a7c60 undefined4 *
// GLOBAL DAT_005a7c64 undefined4
// GLOBAL DAT_005a7c68 undefined4
// GLOBAL s_ObjTornade_005a7c4c string

undefined8 func_005A7BC4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a7c30;
  *DAT_005a7c30 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a7c34;
  *DAT_005a7c34 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a7c38;
  puVar3 = DAT_005a7c38 + 3;
  *DAT_005a7c38 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a7c48;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a7c3c;
  local_18 = local_10;
  local_14 = s_ObjTornade_005a7c4c;
  uVar2 = func_0019B51C(DAT_005a7c60,DAT_005a7c5c,*DAT_005a7c58,(int)&local_18,DAT_005a7c38,
                        &local_10,0);
  return CONCAT44(DAT_005a7c68,uVar2);
}

