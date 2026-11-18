#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b8be8;
extern undefined4 *DAT_005b8bec;
extern undefined4 *DAT_005b8bf0;
extern undefined DAT_005b8bf4;
extern undefined4 DAT_005b8c08;
extern uint *DAT_005b8c1c;
extern undefined4 DAT_005b8c20;
extern undefined4 *DAT_005b8c24;
extern undefined4 DAT_005b8c28;
extern undefined4 DAT_005b8c2c;
extern char s_TagEnvEffect_005b8c0c[];

// USA 005B8B7C <- EU 005B8B54 (Ghidra, non-matching)
// GLOBAL DAT_005b8be8 undefined4 *
// GLOBAL DAT_005b8bec undefined4 *
// GLOBAL DAT_005b8bf0 undefined4 *
// GLOBAL DAT_005b8bf4 undefined
// GLOBAL DAT_005b8c08 undefined4
// GLOBAL DAT_005b8c1c uint *
// GLOBAL DAT_005b8c20 undefined4
// GLOBAL DAT_005b8c24 undefined4 *
// GLOBAL DAT_005b8c28 undefined4
// GLOBAL DAT_005b8c2c undefined4
// GLOBAL s_TagEnvEffect_005b8c0c string

undefined8 func_005B8B7C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b8be8;
  *DAT_005b8be8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8bec;
  *DAT_005b8bec = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b8bf0;
  puVar3 = DAT_005b8bf0 + 3;
  *DAT_005b8bf0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b8c08;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b8bf4;
  local_18 = local_10;
  local_14 = s_TagEnvEffect_005b8c0c;
  uVar2 = func_0019B51C(DAT_005b8c24,DAT_005b8c20,*DAT_005b8c1c,(int)&local_18,DAT_005b8bf0,
                        &local_10,0);
  return CONCAT44(DAT_005b8c2c,uVar2);
}

