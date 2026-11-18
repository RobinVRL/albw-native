#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6c64;
extern undefined4 *DAT_005a6c68;
extern undefined4 *DAT_005a6c6c;
extern undefined DAT_005a6c70;
extern undefined4 DAT_005a6c78;
extern uint *DAT_005a6c88;
extern undefined4 DAT_005a6c8c;
extern undefined4 *DAT_005a6c90;
extern undefined4 DAT_005a6c94;
extern undefined4 DAT_005a6c98;
extern char s_ObjEyeBall_005a6c7c[];

// USA 005A6BF8 <- EU 005A6BD0 (Ghidra, non-matching)
// GLOBAL DAT_005a6c64 undefined4 *
// GLOBAL DAT_005a6c68 undefined4 *
// GLOBAL DAT_005a6c6c undefined4 *
// GLOBAL DAT_005a6c70 undefined
// GLOBAL DAT_005a6c78 undefined4
// GLOBAL DAT_005a6c88 uint *
// GLOBAL DAT_005a6c8c undefined4
// GLOBAL DAT_005a6c90 undefined4 *
// GLOBAL DAT_005a6c94 undefined4
// GLOBAL DAT_005a6c98 undefined4
// GLOBAL s_ObjEyeBall_005a6c7c string

undefined8 func_005A6BF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a6c64;
  *DAT_005a6c64 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a6c68;
  *DAT_005a6c68 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a6c6c;
  puVar3 = DAT_005a6c6c + 3;
  *DAT_005a6c6c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a6c78;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a6c70;
  local_18 = local_10;
  local_14 = s_ObjEyeBall_005a6c7c;
  uVar2 = func_0019B51C(DAT_005a6c90,DAT_005a6c8c,*DAT_005a6c88,(int)&local_18,DAT_005a6c6c,
                        &local_10,0);
  return CONCAT44(DAT_005a6c98,uVar2);
}

