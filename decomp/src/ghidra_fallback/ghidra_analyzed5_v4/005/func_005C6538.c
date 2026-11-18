#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c662c;
extern undefined4 *DAT_005c6630;
extern undefined4 DAT_005c6634;
extern undefined4 *DAT_005c6638;
extern undefined4 DAT_005c663c;
extern undefined DAT_005c6640;
extern undefined4 DAT_005c6654;
extern undefined4 DAT_005c6668;
extern uint *DAT_005c666c;
extern undefined4 DAT_005c6670;
extern undefined4 *DAT_005c6674;
extern undefined4 DAT_005c6678;
extern undefined4 DAT_005c667c;
extern undefined4 *DAT_005c6680;
extern undefined DAT_005c6684;
extern uint *DAT_005c66b0;
extern undefined4 *DAT_005c66b4;
extern char s_ObjCreepeeBomb_005c6658[];
extern char s_ObjIceCreepeeBomb_005c669c[];

// USA 005C6538 <- EU 005C6510 (Ghidra, non-matching)
// GLOBAL DAT_005c662c undefined4 *
// GLOBAL DAT_005c6630 undefined4 *
// GLOBAL DAT_005c6634 undefined4
// GLOBAL DAT_005c6638 undefined4 *
// GLOBAL DAT_005c663c undefined4
// GLOBAL DAT_005c6640 undefined
// GLOBAL DAT_005c6654 undefined4
// GLOBAL DAT_005c6668 undefined4
// GLOBAL DAT_005c666c uint *
// GLOBAL DAT_005c6670 undefined4
// GLOBAL DAT_005c6674 undefined4 *
// GLOBAL DAT_005c6678 undefined4
// GLOBAL DAT_005c667c undefined4
// GLOBAL DAT_005c6680 undefined4 *
// GLOBAL DAT_005c6684 undefined
// GLOBAL DAT_005c66b0 uint *
// GLOBAL DAT_005c66b4 undefined4 *
// GLOBAL s_ObjCreepeeBomb_005c6658 string
// GLOBAL s_ObjIceCreepeeBomb_005c669c string

undefined8 func_005C6538(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005c662c;
  *DAT_005c662c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar4 = DAT_005c6634;
  puVar1 = DAT_005c6630;
  *DAT_005c6630 = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005c6654;
  uVar2 = DAT_005c663c;
  puVar1 = DAT_005c6638;
  *DAT_005c6638 = uVar4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  puVar1[-0x133] = 5;
  puVar1[-0x132] = puVar1 + -0x131;
  puVar1[-0x134] = 0;
  local_24 = &DAT_005c6640;
  local_2c = s_ObjCreepeeBomb_005c6658;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_005c6674,DAT_005c6670,*DAT_005c666c,(int)&local_30,DAT_005c6668,&local_28,0);
  puVar1 = DAT_005c6680;
  puVar5 = DAT_005c6680 + 3;
  DAT_005c6680[1] = 5;
  puVar1[2] = puVar5;
  *puVar1 = 0;
  local_14 = &DAT_005c6684;
  local_1c = s_ObjIceCreepeeBomb_005c669c;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar4 = func_0019B51C(DAT_005c66b4,DAT_005c6670,*DAT_005c66b0,(int)&local_20,DAT_005c6680,
                        &local_18,0);
  return CONCAT44(DAT_005c667c,uVar4);
}

