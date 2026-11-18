#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a3168;
extern undefined4 *DAT_005a316c;
extern undefined4 *DAT_005a3170;
extern undefined DAT_005a3174;
extern undefined4 DAT_005a317c;
extern uint *DAT_005a318c;
extern undefined4 DAT_005a3190;
extern undefined4 *DAT_005a3194;
extern undefined4 DAT_005a3198;
extern undefined4 DAT_005a319c;
extern char s_ObjIcicle_005a3180[];

// USA 005A30FC <- EU 005A30D4 (Ghidra, non-matching)
// GLOBAL DAT_005a3168 undefined4 *
// GLOBAL DAT_005a316c undefined4 *
// GLOBAL DAT_005a3170 undefined4 *
// GLOBAL DAT_005a3174 undefined
// GLOBAL DAT_005a317c undefined4
// GLOBAL DAT_005a318c uint *
// GLOBAL DAT_005a3190 undefined4
// GLOBAL DAT_005a3194 undefined4 *
// GLOBAL DAT_005a3198 undefined4
// GLOBAL DAT_005a319c undefined4
// GLOBAL s_ObjIcicle_005a3180 string

undefined8 func_005A30FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a3168;
  *DAT_005a3168 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a316c;
  *DAT_005a316c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a3170;
  puVar3 = DAT_005a3170 + 3;
  *DAT_005a3170 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a317c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a3174;
  local_18 = local_10;
  local_14 = s_ObjIcicle_005a3180;
  uVar2 = func_0019B51C(DAT_005a3194,DAT_005a3190,*DAT_005a318c,(int)&local_18,DAT_005a3170,
                        &local_10,0);
  return CONCAT44(DAT_005a319c,uVar2);
}

