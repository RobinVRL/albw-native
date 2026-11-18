#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059e2e0;
extern undefined4 *DAT_0059e2e4;
extern undefined4 *DAT_0059e2e8;
extern undefined DAT_0059e2ec;
extern undefined4 DAT_0059e2f4;
extern undefined DAT_0059e2f8;
extern undefined DAT_0059e2fc;
extern undefined DAT_0059e300;
extern undefined DAT_0059e304;
extern undefined DAT_0059e310;
extern undefined DAT_0059e31c;
extern undefined DAT_0059e330;
extern undefined DAT_0059e340;
extern undefined DAT_0059e350;
extern undefined DAT_0059e364;
extern undefined DAT_0059e370;
extern undefined DAT_0059e380;
extern undefined DAT_0059e390;
extern undefined DAT_0059e398;
extern undefined DAT_0059e3a4;
extern undefined DAT_0059e3b4;
extern undefined DAT_0059e3c0;
extern undefined DAT_0059e3cc;
extern undefined DAT_0059e3d8;
extern undefined DAT_0059e3e4;
extern undefined DAT_0059e3f0;
extern undefined DAT_0059e3f8;
extern undefined DAT_0059e400;
extern undefined DAT_0059e40c;
extern undefined DAT_0059e418;
extern undefined DAT_0059e420;
extern undefined DAT_0059e428;
extern undefined DAT_0059e434;
extern undefined DAT_0059e440;
extern undefined DAT_0059e454;
extern undefined DAT_0059e45c;
extern undefined4 DAT_0059e468;
extern uint DAT_0059e46c;
extern uint DAT_0059e470;
extern undefined4 DAT_0059e474;
extern uint DAT_0059e478;
extern uint DAT_0059e47c;
extern uint DAT_0059e480;
extern uint DAT_0059e484;
extern undefined4 *DAT_0059e488;
extern undefined4 DAT_0059e48c;
extern undefined4 DAT_0059e490;
extern undefined4 DAT_0059e494;
extern undefined4 DAT_0059e498;
extern undefined4 DAT_0059e49c;
extern undefined DAT_0059e4a8;
extern undefined4 DAT_0059e4b0;
extern undefined4 *DAT_0059e4b4;
extern uint *DAT_0059e4c4;
extern undefined4 DAT_0059e4c8;
extern undefined4 *DAT_0059e4cc;
extern undefined4 DAT_0059e4d0;
extern char s_Fairy_0059e4a0[];
extern char s_ObjFairy_0059e4b8[];

// USA 0059E00C <- EU 0059DFE4 (Ghidra, non-matching)
// GLOBAL DAT_0059e2e0 undefined4 *
// GLOBAL DAT_0059e2e4 undefined4 *
// GLOBAL DAT_0059e2e8 undefined4 *
// GLOBAL DAT_0059e2ec undefined
// GLOBAL DAT_0059e2f4 undefined4
// GLOBAL DAT_0059e2f8 undefined
// GLOBAL DAT_0059e2fc undefined
// GLOBAL DAT_0059e300 undefined
// GLOBAL DAT_0059e304 undefined
// GLOBAL DAT_0059e310 undefined
// GLOBAL DAT_0059e31c undefined
// GLOBAL DAT_0059e330 undefined
// GLOBAL DAT_0059e340 undefined
// GLOBAL DAT_0059e350 undefined
// GLOBAL DAT_0059e364 undefined
// GLOBAL DAT_0059e370 undefined
// GLOBAL DAT_0059e380 undefined
// GLOBAL DAT_0059e390 undefined
// GLOBAL DAT_0059e398 undefined
// GLOBAL DAT_0059e3a4 undefined
// GLOBAL DAT_0059e3b4 undefined
// GLOBAL DAT_0059e3c0 undefined
// GLOBAL DAT_0059e3cc undefined
// GLOBAL DAT_0059e3d8 undefined
// GLOBAL DAT_0059e3e4 undefined
// GLOBAL DAT_0059e3f0 undefined
// GLOBAL DAT_0059e3f8 undefined
// GLOBAL DAT_0059e400 undefined
// GLOBAL DAT_0059e40c undefined
// GLOBAL DAT_0059e418 undefined
// GLOBAL DAT_0059e420 undefined
// GLOBAL DAT_0059e428 undefined
// GLOBAL DAT_0059e434 undefined
// GLOBAL DAT_0059e440 undefined
// GLOBAL DAT_0059e454 undefined
// GLOBAL DAT_0059e45c undefined
// GLOBAL DAT_0059e468 undefined4
// GLOBAL DAT_0059e46c uint
// GLOBAL DAT_0059e470 uint
// GLOBAL DAT_0059e474 undefined4
// GLOBAL DAT_0059e478 uint
// GLOBAL DAT_0059e47c uint
// GLOBAL DAT_0059e480 uint
// GLOBAL DAT_0059e484 uint
// GLOBAL DAT_0059e488 undefined4 *
// GLOBAL DAT_0059e48c undefined4
// GLOBAL DAT_0059e490 undefined4
// GLOBAL DAT_0059e494 undefined4
// GLOBAL DAT_0059e498 undefined4
// GLOBAL DAT_0059e49c undefined4
// GLOBAL DAT_0059e4a8 undefined
// GLOBAL DAT_0059e4b0 undefined4
// GLOBAL DAT_0059e4b4 undefined4 *
// GLOBAL DAT_0059e4c4 uint *
// GLOBAL DAT_0059e4c8 undefined4
// GLOBAL DAT_0059e4cc undefined4 *
// GLOBAL DAT_0059e4d0 undefined4
// GLOBAL s_Fairy_0059e4a0 string
// GLOBAL s_ObjFairy_0059e4b8 string

undefined8 func_0059E00C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_0059e2e0;
  DAT_0059e2e0[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  uVar3 = DAT_0059e2f4;
  puVar1 = DAT_0059e2e4;
  *DAT_0059e2e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059e2e8;
  DAT_0059e2e8[1] = &DAT_0059e2ec;
  *puVar1 = uVar3;
  puVar1[3] = &DAT_0059e2f8;
  puVar1[2] = uVar3;
  puVar1[5] = &DAT_0059e2fc;
  puVar1[4] = uVar3;
  puVar1[7] = &DAT_0059e300;
  puVar1[6] = uVar3;
  puVar1[9] = &DAT_0059e304;
  puVar1[8] = uVar3;
  puVar1[0xb] = &DAT_0059e310;
  puVar1[10] = uVar3;
  puVar1[0xd] = &DAT_0059e31c;
  puVar1[0xc] = uVar3;
  puVar1[0xf] = &DAT_0059e330;
  puVar1[0xe] = uVar3;
  puVar1[0x11] = &DAT_0059e340;
  puVar1[0x10] = uVar3;
  puVar1[0x13] = &DAT_0059e350;
  puVar1[0x12] = uVar3;
  puVar1[0x15] = &DAT_0059e364;
  puVar1[0x14] = uVar3;
  puVar1[0x17] = &DAT_0059e370;
  puVar1[0x16] = uVar3;
  puVar1[0x19] = &DAT_0059e380;
  puVar1[0x18] = uVar3;
  puVar1[0x1b] = &DAT_0059e390;
  puVar1[0x1a] = uVar3;
  puVar1[0x1d] = &DAT_0059e398;
  puVar1[0x1c] = uVar3;
  puVar1[0x1f] = &DAT_0059e3a4;
  puVar1[0x1e] = uVar3;
  puVar1[0x21] = &DAT_0059e3b4;
  puVar1[0x20] = uVar3;
  puVar1[0x23] = &DAT_0059e3c0;
  puVar1[0x22] = uVar3;
  puVar1[0x25] = &DAT_0059e3cc;
  puVar1[0x24] = uVar3;
  puVar1[0x27] = &DAT_0059e3d8;
  puVar1[0x26] = uVar3;
  puVar1[0x29] = &DAT_0059e3e4;
  puVar1[0x28] = uVar3;
  puVar1[0x2b] = &DAT_0059e3f0;
  puVar1[0x2a] = uVar3;
  puVar1[0x2d] = &DAT_0059e3f8;
  puVar1[0x2c] = uVar3;
  puVar1[0x2f] = &DAT_0059e400;
  puVar1[0x2e] = uVar3;
  puVar1[0x31] = &DAT_0059e40c;
  puVar1[0x30] = uVar3;
  puVar1[0x33] = &DAT_0059e418;
  puVar1[0x32] = uVar3;
  puVar1[0x35] = &DAT_0059e420;
  puVar1[0x34] = uVar3;
  puVar1[0x37] = &DAT_0059e428;
  puVar1[0x36] = uVar3;
  puVar1[0x39] = &DAT_0059e434;
  puVar1[0x38] = uVar3;
  puVar1[0x3b] = &DAT_0059e440;
  puVar1[0x3a] = uVar3;
  puVar1[0x3d] = &DAT_0059e454;
  puVar1[0x3c] = uVar3;
  puVar1[0x3e] = uVar3;
  puVar1[0x3f] = &DAT_0059e45c;
  puVar1 = DAT_0059e2e0;
  uVar6 = func_00114608(DAT_0059e470,DAT_0059e46c);
  *puVar1 = (int)uVar6;
  uVar5 = DAT_0059e474;
  uVar6 = func_00114608(DAT_0059e478,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059e47c,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[2] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059e480,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[3] = (int)uVar6;
  uVar6 = func_00114608(DAT_0059e484,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[4] = (int)uVar6;
  uVar2 = DAT_0059e490;
  puVar1 = DAT_0059e488;
  *DAT_0059e488 = DAT_0059e48c;
  puVar1[1] = uVar5;
  puVar1[2] = uVar2;
  uVar5 = DAT_0059e498;
  uVar2 = DAT_0059e494;
  puVar1[3] = DAT_0059e494;
  puVar1[4] = uVar2;
  puVar1[5] = uVar5;
  uVar2 = DAT_0059e49c;
  puVar1[6] = DAT_0059e49c;
  puVar1[7] = uVar2;
  puVar1[8] = uVar5;
  puVar1[10] = s_Fairy_0059e4a0;
  puVar1[9] = uVar3;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = &DAT_0059e4a8;
  puVar1 = DAT_0059e4b4;
  puVar4 = DAT_0059e4b4 + 3;
  *DAT_0059e4b4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar4;
  local_28 = uVar3;
  puStack_24 = &DAT_0059e3f0;
  uStack_20 = uVar3;
  local_1c = s_ObjFairy_0059e4b8;
  uVar3 = func_0019B51C(DAT_0059e4cc,DAT_0059e4c8,*DAT_0059e4c4,(int)&uStack_20,DAT_0059e4b4,
                        &local_28,0);
  return CONCAT44(DAT_0059e4d0,uVar3);
}

