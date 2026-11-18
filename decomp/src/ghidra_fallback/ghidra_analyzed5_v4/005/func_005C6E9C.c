#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6f08;
extern undefined4 *DAT_005c6f0c;
extern undefined4 *DAT_005c6f10;
extern undefined DAT_005c6f14;
extern undefined4 DAT_005c6f24;
extern uint *DAT_005c6f38;
extern undefined4 DAT_005c6f3c;
extern undefined4 *DAT_005c6f40;
extern undefined4 DAT_005c6f44;
extern undefined4 DAT_005c6f48;
extern char s_ObjRupeeSilver_005c6f28[];

// USA 005C6E9C <- EU 005C6E74 (Ghidra, non-matching)
// GLOBAL DAT_005c6f08 undefined4 *
// GLOBAL DAT_005c6f0c undefined4 *
// GLOBAL DAT_005c6f10 undefined4 *
// GLOBAL DAT_005c6f14 undefined
// GLOBAL DAT_005c6f24 undefined4
// GLOBAL DAT_005c6f38 uint *
// GLOBAL DAT_005c6f3c undefined4
// GLOBAL DAT_005c6f40 undefined4 *
// GLOBAL DAT_005c6f44 undefined4
// GLOBAL DAT_005c6f48 undefined4
// GLOBAL s_ObjRupeeSilver_005c6f28 string

undefined8 func_005C6E9C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6f08;
  *DAT_005c6f08 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c6f0c;
  *DAT_005c6f0c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c6f10;
  puVar3 = DAT_005c6f10 + 3;
  *DAT_005c6f10 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c6f24;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c6f14;
  local_18 = local_10;
  local_14 = s_ObjRupeeSilver_005c6f28;
  uVar2 = func_0019B51C(DAT_005c6f40,DAT_005c6f3c,*DAT_005c6f38,(int)&local_18,DAT_005c6f10,
                        &local_10,0);
  return CONCAT44(DAT_005c6f48,uVar2);
}

