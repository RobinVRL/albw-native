#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059360c;
extern undefined4 *DAT_00593610;
extern undefined4 *DAT_00593614;
extern undefined DAT_00593618;
extern undefined4 DAT_00593628;
extern uint *DAT_00593638;
extern undefined4 DAT_0059363c;
extern undefined4 *DAT_00593640;
extern undefined4 DAT_00593644;
extern undefined4 DAT_00593648;
extern undefined4 *DAT_0059364c;
extern undefined DAT_00593650;
extern uint *DAT_00593670;
extern undefined4 *DAT_00593674;
extern char s_ObjPotLight_0059362c[];
extern char s_ObjPotSkull_00593664[];

// USA 0059352C <- EU 00593504 (Ghidra, non-matching)
// GLOBAL DAT_0059360c undefined4 *
// GLOBAL DAT_00593610 undefined4 *
// GLOBAL DAT_00593614 undefined4 *
// GLOBAL DAT_00593618 undefined
// GLOBAL DAT_00593628 undefined4
// GLOBAL DAT_00593638 uint *
// GLOBAL DAT_0059363c undefined4
// GLOBAL DAT_00593640 undefined4 *
// GLOBAL DAT_00593644 undefined4
// GLOBAL DAT_00593648 undefined4
// GLOBAL DAT_0059364c undefined4 *
// GLOBAL DAT_00593650 undefined
// GLOBAL DAT_00593670 uint *
// GLOBAL DAT_00593674 undefined4 *
// GLOBAL s_ObjPotLight_0059362c string
// GLOBAL s_ObjPotSkull_00593664 string

undefined8 func_0059352C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_0059360c;
  *DAT_0059360c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_00593610;
  *DAT_00593610 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_00593628;
  puVar1 = DAT_00593614;
  puVar3 = DAT_00593614 + 3;
  DAT_00593614[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_00593618;
  local_2c = s_ObjPotLight_0059362c;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_00593640,DAT_0059363c,*DAT_00593638,(int)&local_30,DAT_00593614,&local_28,0);
  puVar1 = DAT_0059364c;
  puVar3 = DAT_0059364c + 3;
  DAT_0059364c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_00593650;
  local_1c = s_ObjPotSkull_00593664;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_00593674,DAT_0059363c,*DAT_00593670,(int)&local_20,DAT_0059364c,
                        &local_18,0);
  return CONCAT44(DAT_00593648,uVar2);
}

