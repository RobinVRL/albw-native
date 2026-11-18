#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6474;
extern undefined4 *DAT_005a6478;
extern undefined4 *DAT_005a647c;
extern undefined DAT_005a6480;
extern undefined4 DAT_005a6488;
extern uint *DAT_005a6498;
extern undefined4 DAT_005a649c;
extern undefined4 *DAT_005a64a0;
extern undefined4 DAT_005a64a4;
extern undefined4 DAT_005a64a8;
extern char s_MojMokuzou_005a648c[];

// USA 005A6408 <- EU 005A63E0 (Ghidra, non-matching)
// GLOBAL DAT_005a6474 undefined4 *
// GLOBAL DAT_005a6478 undefined4 *
// GLOBAL DAT_005a647c undefined4 *
// GLOBAL DAT_005a6480 undefined
// GLOBAL DAT_005a6488 undefined4
// GLOBAL DAT_005a6498 uint *
// GLOBAL DAT_005a649c undefined4
// GLOBAL DAT_005a64a0 undefined4 *
// GLOBAL DAT_005a64a4 undefined4
// GLOBAL DAT_005a64a8 undefined4
// GLOBAL s_MojMokuzou_005a648c string

undefined8 func_005A6408(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a6474;
  *DAT_005a6474 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a6478;
  *DAT_005a6478 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a647c;
  puVar3 = DAT_005a647c + 3;
  *DAT_005a647c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a6488;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a6480;
  local_18 = local_10;
  local_14 = s_MojMokuzou_005a648c;
  uVar2 = func_0019B51C(DAT_005a64a0,DAT_005a649c,*DAT_005a6498,(int)&local_18,DAT_005a647c,
                        &local_10,0);
  return CONCAT44(DAT_005a64a8,uVar2);
}

