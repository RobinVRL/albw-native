#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a355c;
extern undefined4 *DAT_005a3560;
extern undefined4 DAT_005a3564;
extern undefined4 *DAT_005a3568;
extern undefined4 DAT_005a356c;
extern uint DAT_005a3570;
extern undefined4 *DAT_005a3574;
extern undefined DAT_005a3578;
extern undefined4 DAT_005a3588;
extern uint *DAT_005a3598;
extern undefined4 DAT_005a359c;
extern undefined4 *DAT_005a35a0;
extern undefined4 DAT_005a35a4;
extern undefined4 DAT_005a35a8;
extern char s_ObjMedusa_005a358c[];

// USA 005A34C8 <- EU 005A34A0 (Ghidra, non-matching)
// GLOBAL DAT_005a355c undefined4 *
// GLOBAL DAT_005a3560 undefined4 *
// GLOBAL DAT_005a3564 undefined4
// GLOBAL DAT_005a3568 undefined4 *
// GLOBAL DAT_005a356c undefined4
// GLOBAL DAT_005a3570 uint
// GLOBAL DAT_005a3574 undefined4 *
// GLOBAL DAT_005a3578 undefined
// GLOBAL DAT_005a3588 undefined4
// GLOBAL DAT_005a3598 uint *
// GLOBAL DAT_005a359c undefined4
// GLOBAL DAT_005a35a0 undefined4 *
// GLOBAL DAT_005a35a4 undefined4
// GLOBAL DAT_005a35a8 undefined4
// GLOBAL s_ObjMedusa_005a358c string

undefined8 func_005A34C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a355c;
  DAT_005a355c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar3 = DAT_005a3564;
  puVar1 = DAT_005a3560;
  *DAT_005a3560 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a356c;
  puVar4 = DAT_005a3568;
  puVar1 = DAT_005a355c;
  *DAT_005a3568 = uVar3;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  uVar5 = func_00114608(DAT_005a3570,0);
  *puVar1 = (int)uVar5;
  puVar1 = DAT_005a3574;
  puVar4 = DAT_005a3574 + 3;
  *DAT_005a3574 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar4;
  local_10 = DAT_005a3588;
  puStack_c = &DAT_005a3578;
  local_18 = DAT_005a3588;
  local_14 = s_ObjMedusa_005a358c;
  uVar3 = func_0019B51C(DAT_005a35a0,DAT_005a359c,*DAT_005a3598,(int)&local_18,DAT_005a3574,
                        &local_10,0);
  return CONCAT44(DAT_005a35a8,uVar3);
}

