#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059b594;
extern undefined4 *DAT_0059b598;
extern undefined4 *DAT_0059b59c;
extern undefined DAT_0059b5a0;
extern undefined4 DAT_0059b5b4;
extern uint *DAT_0059b5c8;
extern undefined4 DAT_0059b5cc;
extern undefined4 *DAT_0059b5d0;
extern undefined4 DAT_0059b5d4;
extern undefined4 DAT_0059b5d8;
extern undefined4 *DAT_0059b5dc;
extern undefined DAT_0059b5e0;
extern uint *DAT_0059b604;
extern undefined4 DAT_0059b608;
extern undefined4 *DAT_0059b60c;
extern undefined4 *DAT_0059b610;
extern undefined DAT_0059b614;
extern uint *DAT_0059b638;
extern undefined4 DAT_0059b63c;
extern undefined4 *DAT_0059b640;
extern char s_MapFloatAlways_0059b628[];
extern char s_MapFloatFloor_0059b5f4[];
extern char s_MapFloatRoom_0059b5b8[];

// USA 0059B44C <- EU 0059B424 (Ghidra, non-matching)
// GLOBAL DAT_0059b594 undefined4 *
// GLOBAL DAT_0059b598 undefined4 *
// GLOBAL DAT_0059b59c undefined4 *
// GLOBAL DAT_0059b5a0 undefined
// GLOBAL DAT_0059b5b4 undefined4
// GLOBAL DAT_0059b5c8 uint *
// GLOBAL DAT_0059b5cc undefined4
// GLOBAL DAT_0059b5d0 undefined4 *
// GLOBAL DAT_0059b5d4 undefined4
// GLOBAL DAT_0059b5d8 undefined4
// GLOBAL DAT_0059b5dc undefined4 *
// GLOBAL DAT_0059b5e0 undefined
// GLOBAL DAT_0059b604 uint *
// GLOBAL DAT_0059b608 undefined4
// GLOBAL DAT_0059b60c undefined4 *
// GLOBAL DAT_0059b610 undefined4 *
// GLOBAL DAT_0059b614 undefined
// GLOBAL DAT_0059b638 uint *
// GLOBAL DAT_0059b63c undefined4
// GLOBAL DAT_0059b640 undefined4 *
// GLOBAL s_MapFloatAlways_0059b628 string
// GLOBAL s_MapFloatFloor_0059b5f4 string
// GLOBAL s_MapFloatRoom_0059b5b8 string

undefined8 func_0059B44C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_0059b594;
  *DAT_0059b594 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059b598;
  *DAT_0059b598 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_0059b5b4;
  puVar1 = DAT_0059b59c;
  puVar3 = DAT_0059b59c + 3;
  DAT_0059b59c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_0059b5a0;
  local_3c = s_MapFloatRoom_0059b5b8;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_0059b5d0,DAT_0059b5cc,*DAT_0059b5c8,(int)&local_40,DAT_0059b59c,&local_38,0);
  puVar1 = DAT_0059b5dc;
  puVar3 = DAT_0059b5dc + 3;
  DAT_0059b5dc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_0059b5e0;
  local_2c = s_MapFloatFloor_0059b5f4;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_0059b60c,DAT_0059b608,*DAT_0059b604,(int)&local_30,DAT_0059b5dc,&local_28,0);
  puVar1 = DAT_0059b610;
  puVar3 = DAT_0059b610 + 3;
  DAT_0059b610[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_0059b614;
  local_1c = s_MapFloatAlways_0059b628;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_0059b640,DAT_0059b63c,*DAT_0059b638,(int)&local_20,DAT_0059b610,
                        &local_18,0);
  return CONCAT44(DAT_0059b5d8,uVar2);
}

