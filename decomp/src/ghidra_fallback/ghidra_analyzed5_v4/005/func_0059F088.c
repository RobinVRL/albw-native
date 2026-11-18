#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059f0f4;
extern undefined4 *DAT_0059f0f8;
extern undefined4 *DAT_0059f0fc;
extern undefined DAT_0059f100;
extern undefined4 DAT_0059f108;
extern uint *DAT_0059f118;
extern undefined4 DAT_0059f11c;
extern undefined4 *DAT_0059f120;
extern undefined4 DAT_0059f124;
extern undefined4 DAT_0059f128;
extern char s_ObjPouch_0059f10c[];

// USA 0059F088 <- EU 0059F060 (Ghidra, non-matching)
// GLOBAL DAT_0059f0f4 undefined4 *
// GLOBAL DAT_0059f0f8 undefined4 *
// GLOBAL DAT_0059f0fc undefined4 *
// GLOBAL DAT_0059f100 undefined
// GLOBAL DAT_0059f108 undefined4
// GLOBAL DAT_0059f118 uint *
// GLOBAL DAT_0059f11c undefined4
// GLOBAL DAT_0059f120 undefined4 *
// GLOBAL DAT_0059f124 undefined4
// GLOBAL DAT_0059f128 undefined4
// GLOBAL s_ObjPouch_0059f10c string

undefined8 func_0059F088(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059f0f4;
  *DAT_0059f0f4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f0f8;
  *DAT_0059f0f8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059f0fc;
  puVar3 = DAT_0059f0fc + 3;
  *DAT_0059f0fc = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059f108;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059f100;
  local_18 = local_10;
  local_14 = s_ObjPouch_0059f10c;
  uVar2 = func_0019B51C(DAT_0059f120,DAT_0059f11c,*DAT_0059f118,(int)&local_18,DAT_0059f0fc,
                        &local_10,0);
  return CONCAT44(DAT_0059f128,uVar2);
}

