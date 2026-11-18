#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6998;
extern undefined4 *DAT_005c699c;
extern undefined4 *DAT_005c69a0;
extern undefined DAT_005c69a4;
extern undefined4 DAT_005c69b4;
extern uint *DAT_005c69c8;
extern undefined4 DAT_005c69cc;
extern undefined4 *DAT_005c69d0;
extern undefined4 DAT_005c69d4;
extern undefined4 DAT_005c69d8;
extern char s_ObjDemonYellow_005c69b8[];

// USA 005C692C <- EU 005C6904 (Ghidra, non-matching)
// GLOBAL DAT_005c6998 undefined4 *
// GLOBAL DAT_005c699c undefined4 *
// GLOBAL DAT_005c69a0 undefined4 *
// GLOBAL DAT_005c69a4 undefined
// GLOBAL DAT_005c69b4 undefined4
// GLOBAL DAT_005c69c8 uint *
// GLOBAL DAT_005c69cc undefined4
// GLOBAL DAT_005c69d0 undefined4 *
// GLOBAL DAT_005c69d4 undefined4
// GLOBAL DAT_005c69d8 undefined4
// GLOBAL s_ObjDemonYellow_005c69b8 string

undefined8 func_005C692C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6998;
  *DAT_005c6998 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c699c;
  *DAT_005c699c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c69a0;
  puVar3 = DAT_005c69a0 + 3;
  *DAT_005c69a0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c69b4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c69a4;
  local_18 = local_10;
  local_14 = s_ObjDemonYellow_005c69b8;
  uVar2 = func_0019B51C(DAT_005c69d0,DAT_005c69cc,*DAT_005c69c8,(int)&local_18,DAT_005c69a0,
                        &local_10,0);
  return CONCAT44(DAT_005c69d8,uVar2);
}

