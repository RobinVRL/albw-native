#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ea368;
extern uint DAT_005ea36c;
extern uint DAT_005ea370;
extern uint DAT_005ea374;
extern undefined4 *DAT_005ea378;
extern undefined4 DAT_005ea37c;
extern undefined4 DAT_005ea380;
extern undefined4 DAT_005ea384;
extern undefined DAT_005ea388;
extern undefined4 DAT_005ea3a4;
extern undefined4 DAT_005ea3bc;
extern uint *DAT_005ea3c0;
extern undefined4 DAT_005ea3c4;
extern undefined4 *DAT_005ea3c8;
extern undefined4 DAT_005ea3cc;
extern undefined4 DAT_005ea3d0;
extern char s_ObjDropRentalItem_005ea3a8[];

// USA 005EA2B8 <- EU 005EA290 (Ghidra, non-matching)
// GLOBAL DAT_005ea368 undefined4 *
// GLOBAL DAT_005ea36c uint
// GLOBAL DAT_005ea370 uint
// GLOBAL DAT_005ea374 uint
// GLOBAL DAT_005ea378 undefined4 *
// GLOBAL DAT_005ea37c undefined4
// GLOBAL DAT_005ea380 undefined4
// GLOBAL DAT_005ea384 undefined4
// GLOBAL DAT_005ea388 undefined
// GLOBAL DAT_005ea3a4 undefined4
// GLOBAL DAT_005ea3bc undefined4
// GLOBAL DAT_005ea3c0 uint *
// GLOBAL DAT_005ea3c4 undefined4
// GLOBAL DAT_005ea3c8 undefined4 *
// GLOBAL DAT_005ea3cc undefined4
// GLOBAL DAT_005ea3d0 undefined4
// GLOBAL s_ObjDropRentalItem_005ea3a8 string

undefined8 func_005EA2B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  puVar1 = DAT_005ea368;
  DAT_005ea368[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar5 = func_00114608(DAT_005ea36c,0xffffffff);
  *puVar1 = (int)uVar5;
  uVar6 = func_00114608(DAT_005ea370,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ea374,(uint)((ulonglong)uVar6 >> 0x20));
  uVar4 = DAT_005ea37c;
  puVar1[2] = (int)uVar6;
  puVar1[3] = (int)uVar5;
  uVar3 = DAT_005ea384;
  uVar2 = DAT_005ea380;
  puVar1 = DAT_005ea378;
  *DAT_005ea378 = uVar4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[-0x9a] = 0;
  puVar1[-0x99] = 5;
  local_18 = DAT_005ea3a4;
  puVar1[-0x98] = puVar1 + -0x97;
  puStack_14 = &DAT_005ea388;
  local_20 = local_18;
  local_1c = s_ObjDropRentalItem_005ea3a8;
  uVar4 = func_0019B51C(DAT_005ea3c8,DAT_005ea3c4,*DAT_005ea3c0,(int)&local_20,DAT_005ea3bc,
                        &local_18,0);
  return CONCAT44(DAT_005ea3d0,uVar4);
}

