#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad47c;
extern undefined4 *DAT_005ad480;
extern undefined4 *DAT_005ad484;
extern undefined DAT_005ad488;
extern undefined4 DAT_005ad490;
extern undefined DAT_005ad494;
extern undefined DAT_005ad498;
extern undefined DAT_005ad49c;
extern undefined DAT_005ad4a0;
extern undefined DAT_005ad4ac;
extern undefined DAT_005ad4b8;
extern undefined DAT_005ad4cc;
extern undefined DAT_005ad4dc;
extern undefined DAT_005ad4ec;
extern undefined DAT_005ad500;
extern undefined DAT_005ad50c;
extern undefined DAT_005ad51c;
extern undefined DAT_005ad52c;
extern undefined DAT_005ad534;
extern undefined DAT_005ad540;
extern undefined DAT_005ad550;
extern undefined DAT_005ad55c;
extern undefined DAT_005ad568;
extern undefined DAT_005ad574;
extern undefined DAT_005ad580;
extern undefined DAT_005ad58c;
extern undefined DAT_005ad594;
extern undefined DAT_005ad59c;
extern undefined DAT_005ad5a8;
extern undefined DAT_005ad5b4;
extern undefined DAT_005ad5bc;
extern undefined DAT_005ad5c4;
extern undefined DAT_005ad5d0;
extern undefined DAT_005ad5dc;
extern undefined DAT_005ad5f0;
extern undefined DAT_005ad5f8;
extern undefined4 DAT_005ad604;
extern undefined4 DAT_005ad608;
extern undefined4 *DAT_005ad60c;
extern uint *DAT_005ad61c;
extern undefined4 DAT_005ad620;
extern undefined4 *DAT_005ad624;
extern undefined4 DAT_005ad628;
extern char s_ObjHookShot_005ad610[];

// USA 005AD274 <- EU 005AD24C (Ghidra, non-matching)
// GLOBAL DAT_005ad47c undefined4 *
// GLOBAL DAT_005ad480 undefined4 *
// GLOBAL DAT_005ad484 undefined4 *
// GLOBAL DAT_005ad488 undefined
// GLOBAL DAT_005ad490 undefined4
// GLOBAL DAT_005ad494 undefined
// GLOBAL DAT_005ad498 undefined
// GLOBAL DAT_005ad49c undefined
// GLOBAL DAT_005ad4a0 undefined
// GLOBAL DAT_005ad4ac undefined
// GLOBAL DAT_005ad4b8 undefined
// GLOBAL DAT_005ad4cc undefined
// GLOBAL DAT_005ad4dc undefined
// GLOBAL DAT_005ad4ec undefined
// GLOBAL DAT_005ad500 undefined
// GLOBAL DAT_005ad50c undefined
// GLOBAL DAT_005ad51c undefined
// GLOBAL DAT_005ad52c undefined
// GLOBAL DAT_005ad534 undefined
// GLOBAL DAT_005ad540 undefined
// GLOBAL DAT_005ad550 undefined
// GLOBAL DAT_005ad55c undefined
// GLOBAL DAT_005ad568 undefined
// GLOBAL DAT_005ad574 undefined
// GLOBAL DAT_005ad580 undefined
// GLOBAL DAT_005ad58c undefined
// GLOBAL DAT_005ad594 undefined
// GLOBAL DAT_005ad59c undefined
// GLOBAL DAT_005ad5a8 undefined
// GLOBAL DAT_005ad5b4 undefined
// GLOBAL DAT_005ad5bc undefined
// GLOBAL DAT_005ad5c4 undefined
// GLOBAL DAT_005ad5d0 undefined
// GLOBAL DAT_005ad5dc undefined
// GLOBAL DAT_005ad5f0 undefined
// GLOBAL DAT_005ad5f8 undefined
// GLOBAL DAT_005ad604 undefined4
// GLOBAL DAT_005ad608 undefined4
// GLOBAL DAT_005ad60c undefined4 *
// GLOBAL DAT_005ad61c uint *
// GLOBAL DAT_005ad620 undefined4
// GLOBAL DAT_005ad624 undefined4 *
// GLOBAL DAT_005ad628 undefined4
// GLOBAL s_ObjHookShot_005ad610 string

undefined8 func_005AD274(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad47c;
  *DAT_005ad47c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ad490;
  puVar1 = DAT_005ad480;
  *DAT_005ad480 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad484;
  DAT_005ad484[1] = &DAT_005ad488;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005ad494;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005ad498;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005ad49c;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005ad4a0;
  puVar1[8] = local_18;
  puVar1[0xb] = &DAT_005ad4ac;
  puVar1[10] = local_18;
  puVar1[0xd] = &DAT_005ad4b8;
  puVar1[0xc] = local_18;
  puVar1[0xf] = &DAT_005ad4cc;
  puVar1[0xe] = local_18;
  puVar1[0x11] = &DAT_005ad4dc;
  puVar1[0x10] = local_18;
  puVar1[0x13] = &DAT_005ad4ec;
  puVar1[0x12] = local_18;
  puVar1[0x15] = &DAT_005ad500;
  puVar1[0x14] = local_18;
  puVar1[0x17] = &DAT_005ad50c;
  puVar1[0x16] = local_18;
  puVar1[0x19] = &DAT_005ad51c;
  puVar1[0x18] = local_18;
  puVar1[0x1b] = &DAT_005ad52c;
  puVar1[0x1a] = local_18;
  puVar1[0x1d] = &DAT_005ad534;
  puVar1[0x1c] = local_18;
  puVar1[0x1f] = &DAT_005ad540;
  puVar1[0x1e] = local_18;
  puVar1[0x21] = &DAT_005ad550;
  puVar1[0x20] = local_18;
  puVar1[0x23] = &DAT_005ad55c;
  puVar1[0x22] = local_18;
  puVar1[0x25] = &DAT_005ad568;
  puVar1[0x24] = local_18;
  puVar1[0x27] = &DAT_005ad574;
  puVar1[0x26] = local_18;
  puVar1[0x29] = &DAT_005ad580;
  puVar1[0x28] = local_18;
  puVar1[0x2b] = &DAT_005ad58c;
  puVar1[0x2a] = local_18;
  puVar1[0x2d] = &DAT_005ad594;
  puVar1[0x2c] = local_18;
  puVar1[0x2f] = &DAT_005ad59c;
  puVar1[0x2e] = local_18;
  puVar1[0x31] = &DAT_005ad5a8;
  puVar1[0x30] = local_18;
  puVar1[0x33] = &DAT_005ad5b4;
  puVar1[0x32] = local_18;
  puVar1[0x35] = &DAT_005ad5bc;
  puVar1[0x34] = local_18;
  puVar1[0x37] = &DAT_005ad5c4;
  puVar1[0x36] = local_18;
  puVar1[0x39] = &DAT_005ad5d0;
  puVar1[0x38] = local_18;
  puVar1[0x3b] = &DAT_005ad5dc;
  puVar1[0x3a] = local_18;
  puVar1[0x3d] = &DAT_005ad5f0;
  puVar1[0x3c] = local_18;
  puVar1[0x3e] = local_18;
  puVar1[0x3f] = &DAT_005ad5f8;
  puVar1 = DAT_005ad60c;
  puVar3 = DAT_005ad60c + 3;
  *DAT_005ad60c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ad50c;
  uStack_10 = local_18;
  local_c = s_ObjHookShot_005ad610;
  uVar2 = func_0019B51C(DAT_005ad624,DAT_005ad620,*DAT_005ad61c,(int)&uStack_10,DAT_005ad60c,
                        &local_18,0);
  return CONCAT44(DAT_005ad628,uVar2);
}

