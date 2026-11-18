#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ae7c4;
extern undefined4 *DAT_005ae7c8;
extern undefined4 *DAT_005ae7cc;
extern undefined DAT_005ae7d0;
extern undefined4 DAT_005ae7dc;
extern uint *DAT_005ae7ec;
extern undefined4 DAT_005ae7f0;
extern undefined4 *DAT_005ae7f4;
extern undefined4 DAT_005ae7f8;
extern undefined4 DAT_005ae7fc;
extern char s_ObjZoraFire_005ae7e0[];

// USA 005AE758 <- EU 005AE730 (Ghidra, non-matching)
// GLOBAL DAT_005ae7c4 undefined4 *
// GLOBAL DAT_005ae7c8 undefined4 *
// GLOBAL DAT_005ae7cc undefined4 *
// GLOBAL DAT_005ae7d0 undefined
// GLOBAL DAT_005ae7dc undefined4
// GLOBAL DAT_005ae7ec uint *
// GLOBAL DAT_005ae7f0 undefined4
// GLOBAL DAT_005ae7f4 undefined4 *
// GLOBAL DAT_005ae7f8 undefined4
// GLOBAL DAT_005ae7fc undefined4
// GLOBAL s_ObjZoraFire_005ae7e0 string

undefined8 func_005AE758(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ae7c4;
  *DAT_005ae7c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae7c8;
  *DAT_005ae7c8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ae7cc;
  puVar3 = DAT_005ae7cc + 3;
  *DAT_005ae7cc = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ae7dc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ae7d0;
  local_18 = local_10;
  local_14 = s_ObjZoraFire_005ae7e0;
  uVar2 = func_0019B51C(DAT_005ae7f4,DAT_005ae7f0,*DAT_005ae7ec,(int)&local_18,DAT_005ae7cc,
                        &local_10,0);
  return CONCAT44(DAT_005ae7fc,uVar2);
}

