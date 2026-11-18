#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a79ec;
extern undefined4 *DAT_005a79f0;
extern undefined4 *DAT_005a79f4;
extern undefined DAT_005a79f8;
extern undefined4 DAT_005a7a00;
extern undefined DAT_005a7a04;
extern undefined DAT_005a7a08;
extern undefined DAT_005a7a0c;
extern undefined DAT_005a7a10;
extern undefined DAT_005a7a1c;
extern undefined DAT_005a7a28;
extern undefined DAT_005a7a3c;
extern undefined DAT_005a7a4c;
extern undefined DAT_005a7a5c;
extern undefined DAT_005a7a70;
extern undefined DAT_005a7a7c;
extern undefined DAT_005a7a8c;
extern undefined DAT_005a7a9c;
extern undefined DAT_005a7aa4;
extern undefined DAT_005a7ab0;
extern undefined DAT_005a7ac0;
extern undefined DAT_005a7acc;
extern undefined DAT_005a7ad8;
extern undefined DAT_005a7ae4;
extern undefined DAT_005a7af0;
extern undefined DAT_005a7afc;
extern undefined DAT_005a7b04;
extern undefined DAT_005a7b0c;
extern undefined DAT_005a7b18;
extern undefined DAT_005a7b24;
extern undefined DAT_005a7b2c;
extern undefined DAT_005a7b34;
extern undefined DAT_005a7b40;
extern undefined DAT_005a7b4c;
extern undefined DAT_005a7b60;
extern undefined DAT_005a7b68;
extern undefined4 DAT_005a7b74;
extern undefined4 DAT_005a7b78;
extern undefined4 *DAT_005a7b7c;
extern uint *DAT_005a7b8c;
extern undefined4 DAT_005a7b90;
extern undefined4 *DAT_005a7b94;
extern undefined4 DAT_005a7b98;
extern char s_ObjSandRod_005a7b80[];

// USA 005A77E4 <- EU 005A77BC (Ghidra, non-matching)
// GLOBAL DAT_005a79ec undefined4 *
// GLOBAL DAT_005a79f0 undefined4 *
// GLOBAL DAT_005a79f4 undefined4 *
// GLOBAL DAT_005a79f8 undefined
// GLOBAL DAT_005a7a00 undefined4
// GLOBAL DAT_005a7a04 undefined
// GLOBAL DAT_005a7a08 undefined
// GLOBAL DAT_005a7a0c undefined
// GLOBAL DAT_005a7a10 undefined
// GLOBAL DAT_005a7a1c undefined
// GLOBAL DAT_005a7a28 undefined
// GLOBAL DAT_005a7a3c undefined
// GLOBAL DAT_005a7a4c undefined
// GLOBAL DAT_005a7a5c undefined
// GLOBAL DAT_005a7a70 undefined
// GLOBAL DAT_005a7a7c undefined
// GLOBAL DAT_005a7a8c undefined
// GLOBAL DAT_005a7a9c undefined
// GLOBAL DAT_005a7aa4 undefined
// GLOBAL DAT_005a7ab0 undefined
// GLOBAL DAT_005a7ac0 undefined
// GLOBAL DAT_005a7acc undefined
// GLOBAL DAT_005a7ad8 undefined
// GLOBAL DAT_005a7ae4 undefined
// GLOBAL DAT_005a7af0 undefined
// GLOBAL DAT_005a7afc undefined
// GLOBAL DAT_005a7b04 undefined
// GLOBAL DAT_005a7b0c undefined
// GLOBAL DAT_005a7b18 undefined
// GLOBAL DAT_005a7b24 undefined
// GLOBAL DAT_005a7b2c undefined
// GLOBAL DAT_005a7b34 undefined
// GLOBAL DAT_005a7b40 undefined
// GLOBAL DAT_005a7b4c undefined
// GLOBAL DAT_005a7b60 undefined
// GLOBAL DAT_005a7b68 undefined
// GLOBAL DAT_005a7b74 undefined4
// GLOBAL DAT_005a7b78 undefined4
// GLOBAL DAT_005a7b7c undefined4 *
// GLOBAL DAT_005a7b8c uint *
// GLOBAL DAT_005a7b90 undefined4
// GLOBAL DAT_005a7b94 undefined4 *
// GLOBAL DAT_005a7b98 undefined4
// GLOBAL s_ObjSandRod_005a7b80 string

undefined8 func_005A77E4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005a79ec;
  *DAT_005a79ec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005a7a00;
  puVar1 = DAT_005a79f0;
  *DAT_005a79f0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a79f4;
  DAT_005a79f4[1] = &DAT_005a79f8;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005a7a04;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005a7a08;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005a7a0c;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005a7a10;
  puVar1[8] = local_18;
  puVar1[0xb] = &DAT_005a7a1c;
  puVar1[10] = local_18;
  puVar1[0xd] = &DAT_005a7a28;
  puVar1[0xc] = local_18;
  puVar1[0xf] = &DAT_005a7a3c;
  puVar1[0xe] = local_18;
  puVar1[0x11] = &DAT_005a7a4c;
  puVar1[0x10] = local_18;
  puVar1[0x13] = &DAT_005a7a5c;
  puVar1[0x12] = local_18;
  puVar1[0x15] = &DAT_005a7a70;
  puVar1[0x14] = local_18;
  puVar1[0x17] = &DAT_005a7a7c;
  puVar1[0x16] = local_18;
  puVar1[0x19] = &DAT_005a7a8c;
  puVar1[0x18] = local_18;
  puVar1[0x1b] = &DAT_005a7a9c;
  puVar1[0x1a] = local_18;
  puVar1[0x1d] = &DAT_005a7aa4;
  puVar1[0x1c] = local_18;
  puVar1[0x1f] = &DAT_005a7ab0;
  puVar1[0x1e] = local_18;
  puVar1[0x21] = &DAT_005a7ac0;
  puVar1[0x20] = local_18;
  puVar1[0x23] = &DAT_005a7acc;
  puVar1[0x22] = local_18;
  puVar1[0x25] = &DAT_005a7ad8;
  puVar1[0x24] = local_18;
  puVar1[0x27] = &DAT_005a7ae4;
  puVar1[0x26] = local_18;
  puVar1[0x29] = &DAT_005a7af0;
  puVar1[0x28] = local_18;
  puVar1[0x2b] = &DAT_005a7afc;
  puVar1[0x2a] = local_18;
  puVar1[0x2d] = &DAT_005a7b04;
  puVar1[0x2c] = local_18;
  puVar1[0x2f] = &DAT_005a7b0c;
  puVar1[0x2e] = local_18;
  puVar1[0x31] = &DAT_005a7b18;
  puVar1[0x30] = local_18;
  puVar1[0x33] = &DAT_005a7b24;
  puVar1[0x32] = local_18;
  puVar1[0x35] = &DAT_005a7b2c;
  puVar1[0x34] = local_18;
  puVar1[0x37] = &DAT_005a7b34;
  puVar1[0x36] = local_18;
  puVar1[0x39] = &DAT_005a7b40;
  puVar1[0x38] = local_18;
  puVar1[0x3b] = &DAT_005a7b4c;
  puVar1[0x3a] = local_18;
  puVar1[0x3d] = &DAT_005a7b60;
  puVar1[0x3c] = local_18;
  puVar1[0x3e] = local_18;
  puVar1[0x3f] = &DAT_005a7b68;
  puVar1 = DAT_005a7b7c;
  puVar3 = DAT_005a7b7c + 3;
  *DAT_005a7b7c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005a7a4c;
  uStack_10 = local_18;
  local_c = s_ObjSandRod_005a7b80;
  uVar2 = func_0019B51C(DAT_005a7b94,DAT_005a7b90,*DAT_005a7b8c,(int)&uStack_10,DAT_005a7b7c,
                        &local_18,0);
  return CONCAT44(DAT_005a7b98,uVar2);
}

