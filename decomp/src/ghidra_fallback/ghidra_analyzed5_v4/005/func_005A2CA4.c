#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a2f10;
extern undefined4 *DAT_005a2f14;
extern undefined4 *DAT_005a2f18;
extern undefined DAT_005a2f1c;
extern undefined4 DAT_005a2f24;
extern undefined DAT_005a2f28;
extern undefined DAT_005a2f2c;
extern undefined DAT_005a2f30;
extern undefined DAT_005a2f34;
extern undefined DAT_005a2f40;
extern undefined DAT_005a2f4c;
extern undefined DAT_005a2f60;
extern undefined DAT_005a2f70;
extern undefined DAT_005a2f80;
extern undefined DAT_005a2f94;
extern undefined DAT_005a2fa0;
extern undefined DAT_005a2fb0;
extern undefined DAT_005a2fc0;
extern undefined DAT_005a2fc8;
extern undefined DAT_005a2fd4;
extern undefined DAT_005a2fe4;
extern undefined DAT_005a2ff0;
extern undefined DAT_005a2ffc;
extern undefined DAT_005a3008;
extern undefined DAT_005a3014;
extern undefined DAT_005a3020;
extern undefined DAT_005a3028;
extern undefined DAT_005a3030;
extern undefined DAT_005a303c;
extern undefined DAT_005a3048;
extern undefined DAT_005a3050;
extern undefined DAT_005a3058;
extern undefined DAT_005a3064;
extern undefined DAT_005a3070;
extern undefined DAT_005a3084;
extern undefined DAT_005a308c;
extern undefined4 DAT_005a3098;
extern undefined4 DAT_005a309c;
extern undefined4 DAT_005a30a0;
extern undefined4 DAT_005a30a4;
extern undefined4 *DAT_005a30a8;
extern undefined4 DAT_005a30ac;
extern undefined4 DAT_005a30b0;
extern undefined4 *DAT_005a30b4;
extern uint *DAT_005a30c4;
extern undefined4 DAT_005a30c8;
extern undefined4 *DAT_005a30cc;
extern undefined4 DAT_005a30d0;
extern char s_ObjIceRod_005a30b8[];

// USA 005A2CA4 <- EU 005A2C7C (Ghidra, non-matching)
// GLOBAL DAT_005a2f10 undefined4 *
// GLOBAL DAT_005a2f14 undefined4 *
// GLOBAL DAT_005a2f18 undefined4 *
// GLOBAL DAT_005a2f1c undefined
// GLOBAL DAT_005a2f24 undefined4
// GLOBAL DAT_005a2f28 undefined
// GLOBAL DAT_005a2f2c undefined
// GLOBAL DAT_005a2f30 undefined
// GLOBAL DAT_005a2f34 undefined
// GLOBAL DAT_005a2f40 undefined
// GLOBAL DAT_005a2f4c undefined
// GLOBAL DAT_005a2f60 undefined
// GLOBAL DAT_005a2f70 undefined
// GLOBAL DAT_005a2f80 undefined
// GLOBAL DAT_005a2f94 undefined
// GLOBAL DAT_005a2fa0 undefined
// GLOBAL DAT_005a2fb0 undefined
// GLOBAL DAT_005a2fc0 undefined
// GLOBAL DAT_005a2fc8 undefined
// GLOBAL DAT_005a2fd4 undefined
// GLOBAL DAT_005a2fe4 undefined
// GLOBAL DAT_005a2ff0 undefined
// GLOBAL DAT_005a2ffc undefined
// GLOBAL DAT_005a3008 undefined
// GLOBAL DAT_005a3014 undefined
// GLOBAL DAT_005a3020 undefined
// GLOBAL DAT_005a3028 undefined
// GLOBAL DAT_005a3030 undefined
// GLOBAL DAT_005a303c undefined
// GLOBAL DAT_005a3048 undefined
// GLOBAL DAT_005a3050 undefined
// GLOBAL DAT_005a3058 undefined
// GLOBAL DAT_005a3064 undefined
// GLOBAL DAT_005a3070 undefined
// GLOBAL DAT_005a3084 undefined
// GLOBAL DAT_005a308c undefined
// GLOBAL DAT_005a3098 undefined4
// GLOBAL DAT_005a309c undefined4
// GLOBAL DAT_005a30a0 undefined4
// GLOBAL DAT_005a30a4 undefined4
// GLOBAL DAT_005a30a8 undefined4 *
// GLOBAL DAT_005a30ac undefined4
// GLOBAL DAT_005a30b0 undefined4
// GLOBAL DAT_005a30b4 undefined4 *
// GLOBAL DAT_005a30c4 uint *
// GLOBAL DAT_005a30c8 undefined4
// GLOBAL DAT_005a30cc undefined4 *
// GLOBAL DAT_005a30d0 undefined4
// GLOBAL s_ObjIceRod_005a30b8 string

undefined8 func_005A2CA4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005a2f10;
  *DAT_005a2f10 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005a2f24;
  puVar1 = DAT_005a2f14;
  *DAT_005a2f14 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a2f18;
  DAT_005a2f18[1] = &DAT_005a2f1c;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005a2f28;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005a2f2c;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005a2f30;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005a2f34;
  puVar1[8] = local_18;
  puVar1[0xb] = &DAT_005a2f40;
  puVar1[10] = local_18;
  puVar1[0xd] = &DAT_005a2f4c;
  puVar1[0xc] = local_18;
  puVar1[0xf] = &DAT_005a2f60;
  puVar1[0xe] = local_18;
  puVar1[0x11] = &DAT_005a2f70;
  puVar1[0x10] = local_18;
  puVar1[0x13] = &DAT_005a2f80;
  puVar1[0x12] = local_18;
  puVar1[0x15] = &DAT_005a2f94;
  puVar1[0x14] = local_18;
  puVar1[0x17] = &DAT_005a2fa0;
  puVar1[0x16] = local_18;
  puVar1[0x19] = &DAT_005a2fb0;
  puVar1[0x18] = local_18;
  puVar1[0x1b] = &DAT_005a2fc0;
  puVar1[0x1a] = local_18;
  puVar1[0x1d] = &DAT_005a2fc8;
  puVar1[0x1c] = local_18;
  puVar1[0x1f] = &DAT_005a2fd4;
  puVar1[0x1e] = local_18;
  puVar1[0x21] = &DAT_005a2fe4;
  puVar1[0x20] = local_18;
  puVar1[0x23] = &DAT_005a2ff0;
  puVar1[0x22] = local_18;
  puVar1[0x25] = &DAT_005a2ffc;
  puVar1[0x24] = local_18;
  puVar1[0x27] = &DAT_005a3008;
  puVar1[0x26] = local_18;
  puVar1[0x29] = &DAT_005a3014;
  puVar1[0x28] = local_18;
  puVar1[0x2b] = &DAT_005a3020;
  puVar1[0x2a] = local_18;
  puVar1[0x2d] = &DAT_005a3028;
  puVar1[0x2c] = local_18;
  puVar1[0x2f] = &DAT_005a3030;
  puVar1[0x2e] = local_18;
  puVar1[0x31] = &DAT_005a303c;
  puVar1[0x30] = local_18;
  puVar1[0x33] = &DAT_005a3048;
  puVar1[0x32] = local_18;
  puVar1[0x35] = &DAT_005a3050;
  puVar1[0x34] = local_18;
  puVar1[0x37] = &DAT_005a3058;
  puVar1[0x36] = local_18;
  puVar1[0x39] = &DAT_005a3064;
  puVar1[0x38] = local_18;
  puVar1[0x3b] = &DAT_005a3070;
  puVar1[0x3a] = local_18;
  puVar1[0x3d] = &DAT_005a3084;
  puVar1[0x3c] = local_18;
  puVar1[0x3e] = local_18;
  puVar1[0x3f] = &DAT_005a308c;
  puVar1 = DAT_005a30a8;
  uVar2 = DAT_005a30a4;
  uVar5 = DAT_005a30a0;
  *DAT_005a30a8 = DAT_005a30a0;
  puVar1[1] = uVar2;
  uVar4 = DAT_005a30b0;
  uVar3 = DAT_005a30ac;
  puVar1[3] = DAT_005a30ac;
  puVar1[4] = uVar2;
  puVar1[6] = uVar5;
  puVar1[7] = uVar4;
  puVar1[9] = uVar3;
  puVar1[10] = uVar4;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = uVar2;
  puVar1[0xf] = uVar2;
  puVar1[0x10] = uVar4;
  puVar1[0x12] = uVar4;
  puVar1[0x13] = uVar2;
  puVar1[0x15] = uVar4;
  puVar1[0x16] = uVar4;
  puVar1 = DAT_005a30b4;
  puVar6 = DAT_005a30b4 + 3;
  *DAT_005a30b4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar6;
  puStack_14 = &DAT_005a2f60;
  uStack_10 = local_18;
  local_c = s_ObjIceRod_005a30b8;
  uVar5 = func_0019B51C(DAT_005a30cc,DAT_005a30c8,*DAT_005a30c4,(int)&uStack_10,DAT_005a30b4,
                        &local_18,0);
  return CONCAT44(DAT_005a30d0,uVar5);
}

