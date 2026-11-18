#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e3670;
extern undefined4 *DAT_005e3674;
extern undefined4 *DAT_005e3678;
extern undefined DAT_005e367c;
extern undefined4 DAT_005e3690;
extern uint *DAT_005e36a8;
extern undefined4 DAT_005e36ac;
extern undefined4 *DAT_005e36b0;
extern undefined4 DAT_005e36b4;
extern undefined4 DAT_005e36b8;
extern char s_TagDisableWallIn_005e3694[];

// USA 005E3604 <- EU 005E35DC (Ghidra, non-matching)
// GLOBAL DAT_005e3670 undefined4 *
// GLOBAL DAT_005e3674 undefined4 *
// GLOBAL DAT_005e3678 undefined4 *
// GLOBAL DAT_005e367c undefined
// GLOBAL DAT_005e3690 undefined4
// GLOBAL DAT_005e36a8 uint *
// GLOBAL DAT_005e36ac undefined4
// GLOBAL DAT_005e36b0 undefined4 *
// GLOBAL DAT_005e36b4 undefined4
// GLOBAL DAT_005e36b8 undefined4
// GLOBAL s_TagDisableWallIn_005e3694 string

undefined8 func_005E3604(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e3670;
  *DAT_005e3670 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e3674;
  *DAT_005e3674 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e3678;
  puVar3 = DAT_005e3678 + 3;
  *DAT_005e3678 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e3690;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e367c;
  local_18 = local_10;
  local_14 = s_TagDisableWallIn_005e3694;
  uVar2 = func_0019B51C(DAT_005e36b0,DAT_005e36ac,*DAT_005e36a8,(int)&local_18,DAT_005e3678,
                        &local_10,0);
  return CONCAT44(DAT_005e36b8,uVar2);
}

