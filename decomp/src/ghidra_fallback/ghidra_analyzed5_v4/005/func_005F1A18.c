#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f1a84;
extern undefined4 *DAT_005f1a88;
extern undefined4 *DAT_005f1a8c;
extern undefined DAT_005f1a90;
extern undefined4 DAT_005f1aa4;
extern uint *DAT_005f1ac0;
extern undefined4 DAT_005f1ac4;
extern undefined4 *DAT_005f1ac8;
extern undefined4 DAT_005f1acc;
extern undefined4 DAT_005f1ad0;
extern char s_ObjGtEvBottleMessage_005f1aa8[];

// USA 005F1A18 <- EU 005F19F0 (Ghidra, non-matching)
// GLOBAL DAT_005f1a84 undefined4 *
// GLOBAL DAT_005f1a88 undefined4 *
// GLOBAL DAT_005f1a8c undefined4 *
// GLOBAL DAT_005f1a90 undefined
// GLOBAL DAT_005f1aa4 undefined4
// GLOBAL DAT_005f1ac0 uint *
// GLOBAL DAT_005f1ac4 undefined4
// GLOBAL DAT_005f1ac8 undefined4 *
// GLOBAL DAT_005f1acc undefined4
// GLOBAL DAT_005f1ad0 undefined4
// GLOBAL s_ObjGtEvBottleMessage_005f1aa8 string

undefined8 func_005F1A18(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f1a84;
  *DAT_005f1a84 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1a88;
  *DAT_005f1a88 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f1a8c;
  puVar3 = DAT_005f1a8c + 3;
  *DAT_005f1a8c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f1aa4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f1a90;
  local_18 = local_10;
  local_14 = s_ObjGtEvBottleMessage_005f1aa8;
  uVar2 = func_0019B51C(DAT_005f1ac8,DAT_005f1ac4,*DAT_005f1ac0,(int)&local_18,DAT_005f1a8c,
                        &local_10,0);
  return CONCAT44(DAT_005f1ad0,uVar2);
}

