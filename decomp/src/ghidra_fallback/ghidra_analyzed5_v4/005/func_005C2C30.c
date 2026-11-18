#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c2c9c;
extern undefined4 *DAT_005c2ca0;
extern undefined4 *DAT_005c2ca4;
extern undefined DAT_005c2ca8;
extern undefined4 DAT_005c2cc0;
extern uint *DAT_005c2cd4;
extern undefined4 DAT_005c2cd8;
extern undefined4 *DAT_005c2cdc;
extern undefined4 DAT_005c2ce0;
extern undefined4 DAT_005c2ce4;
extern char s_AreaChangeClip_005c2cc4[];

// USA 005C2C30 <- EU 005C2C08 (Ghidra, non-matching)
// GLOBAL DAT_005c2c9c undefined4 *
// GLOBAL DAT_005c2ca0 undefined4 *
// GLOBAL DAT_005c2ca4 undefined4 *
// GLOBAL DAT_005c2ca8 undefined
// GLOBAL DAT_005c2cc0 undefined4
// GLOBAL DAT_005c2cd4 uint *
// GLOBAL DAT_005c2cd8 undefined4
// GLOBAL DAT_005c2cdc undefined4 *
// GLOBAL DAT_005c2ce0 undefined4
// GLOBAL DAT_005c2ce4 undefined4
// GLOBAL s_AreaChangeClip_005c2cc4 string

undefined8 func_005C2C30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c2c9c;
  *DAT_005c2c9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2ca0;
  *DAT_005c2ca0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c2ca4;
  puVar3 = DAT_005c2ca4 + 3;
  *DAT_005c2ca4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c2cc0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c2ca8;
  local_18 = local_10;
  local_14 = s_AreaChangeClip_005c2cc4;
  uVar2 = func_0019B51C(DAT_005c2cdc,DAT_005c2cd8,*DAT_005c2cd4,(int)&local_18,DAT_005c2ca4,
                        &local_10,0);
  return CONCAT44(DAT_005c2ce4,uVar2);
}

