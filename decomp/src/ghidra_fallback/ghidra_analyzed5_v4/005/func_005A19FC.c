#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a1a88;
extern uint DAT_005a1a8c;
extern uint DAT_005a1a90;
extern undefined4 *DAT_005a1a94;
extern undefined DAT_005a1a98;
extern undefined4 DAT_005a1aa4;
extern uint *DAT_005a1ab8;
extern undefined4 DAT_005a1abc;
extern undefined4 *DAT_005a1ac0;
extern undefined4 DAT_005a1ac4;
extern undefined4 DAT_005a1ac8;
extern char s_MassShrubLight_005a1aa8[];

// USA 005A19FC <- EU 005A19D4 (Ghidra, non-matching)
// GLOBAL DAT_005a1a88 undefined4 *
// GLOBAL DAT_005a1a8c uint
// GLOBAL DAT_005a1a90 uint
// GLOBAL DAT_005a1a94 undefined4 *
// GLOBAL DAT_005a1a98 undefined
// GLOBAL DAT_005a1aa4 undefined4
// GLOBAL DAT_005a1ab8 uint *
// GLOBAL DAT_005a1abc undefined4
// GLOBAL DAT_005a1ac0 undefined4 *
// GLOBAL DAT_005a1ac4 undefined4
// GLOBAL DAT_005a1ac8 undefined4
// GLOBAL s_MassShrubLight_005a1aa8 string

undefined8 func_005A19FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a1a88;
  DAT_005a1a88[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = func_00114608(DAT_005a1a8c,0xffffffff);
  *puVar1 = (int)uVar4;
  uVar4 = func_00114608(DAT_005a1a90,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[1] = (int)uVar4;
  puVar1 = DAT_005a1a94;
  puVar3 = DAT_005a1a94 + 3;
  *DAT_005a1a94 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_10 = DAT_005a1aa4;
  puStack_c = &DAT_005a1a98;
  local_18 = DAT_005a1aa4;
  local_14 = s_MassShrubLight_005a1aa8;
  uVar2 = func_0019B51C(DAT_005a1ac0,DAT_005a1abc,*DAT_005a1ab8,(int)&local_18,DAT_005a1a94,
                        &local_10,0);
  return CONCAT44(DAT_005a1ac8,uVar2);
}

