#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ee74c;
extern undefined4 *DAT_005ee750;
extern undefined4 *DAT_005ee754;
extern undefined4 DAT_005ee758;
extern undefined4 DAT_005ee75c;
extern undefined4 DAT_005ee760;
extern undefined4 *DAT_005ee764;
extern undefined DAT_005ee768;
extern undefined4 DAT_005ee780;
extern uint *DAT_005ee798;
extern undefined4 DAT_005ee79c;
extern undefined4 *DAT_005ee7a0;
extern undefined4 DAT_005ee7a4;
extern undefined4 DAT_005ee7a8;
extern char s_ObjEventStoneBeauty_005ee784[];

// USA 005EE6B8 <- EU 005EE690 (Ghidra, non-matching)
// GLOBAL DAT_005ee74c undefined4 *
// GLOBAL DAT_005ee750 undefined4 *
// GLOBAL DAT_005ee754 undefined4 *
// GLOBAL DAT_005ee758 undefined4
// GLOBAL DAT_005ee75c undefined4
// GLOBAL DAT_005ee760 undefined4
// GLOBAL DAT_005ee764 undefined4 *
// GLOBAL DAT_005ee768 undefined
// GLOBAL DAT_005ee780 undefined4
// GLOBAL DAT_005ee798 uint *
// GLOBAL DAT_005ee79c undefined4
// GLOBAL DAT_005ee7a0 undefined4 *
// GLOBAL DAT_005ee7a4 undefined4
// GLOBAL DAT_005ee7a8 undefined4
// GLOBAL s_ObjEventStoneBeauty_005ee784 string

undefined8 func_005EE6B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ee74c;
  DAT_005ee74c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar4 = DAT_005ee758;
  puVar1 = DAT_005ee750;
  *DAT_005ee750 = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005ee760;
  uVar2 = DAT_005ee75c;
  puVar5 = DAT_005ee754;
  puVar1 = DAT_005ee74c;
  *DAT_005ee754 = uVar4;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  uVar6 = func_00114608(0x4e000000,0);
  *puVar1 = (int)uVar6;
  puVar1 = DAT_005ee764;
  puVar5 = DAT_005ee764 + 3;
  *DAT_005ee764 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ee780;
  puVar1[2] = puVar5;
  puStack_c = &DAT_005ee768;
  local_18 = local_10;
  local_14 = s_ObjEventStoneBeauty_005ee784;
  uVar4 = func_0019B51C(DAT_005ee7a0,DAT_005ee79c,*DAT_005ee798,(int)&local_18,DAT_005ee764,
                        &local_10,0);
  return CONCAT44(DAT_005ee7a8,uVar4);
}

