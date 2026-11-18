#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad7a0;
extern undefined4 *DAT_005ad7a4;
extern undefined4 *DAT_005ad7a8;
extern undefined DAT_005ad7ac;
extern undefined4 DAT_005ad7b4;
extern uint *DAT_005ad7c4;
extern undefined4 DAT_005ad7c8;
extern undefined4 *DAT_005ad7cc;
extern undefined4 DAT_005ad7d0;
extern undefined4 DAT_005ad7d4;
extern char s_ObjIceFloor_005ad7b8[];

// USA 005AD734 <- EU 005AD70C (Ghidra, non-matching)
// GLOBAL DAT_005ad7a0 undefined4 *
// GLOBAL DAT_005ad7a4 undefined4 *
// GLOBAL DAT_005ad7a8 undefined4 *
// GLOBAL DAT_005ad7ac undefined
// GLOBAL DAT_005ad7b4 undefined4
// GLOBAL DAT_005ad7c4 uint *
// GLOBAL DAT_005ad7c8 undefined4
// GLOBAL DAT_005ad7cc undefined4 *
// GLOBAL DAT_005ad7d0 undefined4
// GLOBAL DAT_005ad7d4 undefined4
// GLOBAL s_ObjIceFloor_005ad7b8 string

undefined8 func_005AD734(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad7a0;
  *DAT_005ad7a0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ad7a4;
  *DAT_005ad7a4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad7a8;
  puVar3 = DAT_005ad7a8 + 3;
  *DAT_005ad7a8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ad7b4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ad7ac;
  local_18 = local_10;
  local_14 = s_ObjIceFloor_005ad7b8;
  uVar2 = func_0019B51C(DAT_005ad7cc,DAT_005ad7c8,*DAT_005ad7c4,(int)&local_18,DAT_005ad7a8,
                        &local_10,0);
  return CONCAT44(DAT_005ad7d4,uVar2);
}

