#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059f640;
extern undefined4 *DAT_0059f644;
extern undefined4 *DAT_0059f648;
extern undefined DAT_0059f64c;
extern undefined4 DAT_0059f658;
extern uint *DAT_0059f668;
extern undefined4 DAT_0059f66c;
extern undefined4 *DAT_0059f670;
extern undefined4 DAT_0059f674;
extern undefined4 DAT_0059f678;
extern char s_TagDummy_0059f65c[];

// USA 0059F5D4 <- EU 0059F5AC (Ghidra, non-matching)
// GLOBAL DAT_0059f640 undefined4 *
// GLOBAL DAT_0059f644 undefined4 *
// GLOBAL DAT_0059f648 undefined4 *
// GLOBAL DAT_0059f64c undefined
// GLOBAL DAT_0059f658 undefined4
// GLOBAL DAT_0059f668 uint *
// GLOBAL DAT_0059f66c undefined4
// GLOBAL DAT_0059f670 undefined4 *
// GLOBAL DAT_0059f674 undefined4
// GLOBAL DAT_0059f678 undefined4
// GLOBAL s_TagDummy_0059f65c string

undefined8 func_0059F5D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059f640;
  *DAT_0059f640 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f644;
  *DAT_0059f644 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059f648;
  puVar3 = DAT_0059f648 + 3;
  *DAT_0059f648 = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059f658;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059f64c;
  local_18 = local_10;
  local_14 = s_TagDummy_0059f65c;
  uVar2 = func_0019B51C(DAT_0059f670,DAT_0059f66c,*DAT_0059f668,(int)&local_18,DAT_0059f648,
                        &local_10,0);
  return CONCAT44(DAT_0059f678,uVar2);
}

