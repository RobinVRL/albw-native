#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ae6f0;
extern undefined4 *DAT_005ae6f4;
extern undefined4 *DAT_005ae6f8;
extern undefined DAT_005ae6fc;
extern undefined4 DAT_005ae70c;
extern uint *DAT_005ae71c;
extern undefined4 DAT_005ae720;
extern undefined4 *DAT_005ae724;
extern undefined4 DAT_005ae728;
extern undefined4 DAT_005ae72c;
extern char s_ObjWirtBeam_005ae710[];

// USA 005AE684 <- EU 005AE65C (Ghidra, non-matching)
// GLOBAL DAT_005ae6f0 undefined4 *
// GLOBAL DAT_005ae6f4 undefined4 *
// GLOBAL DAT_005ae6f8 undefined4 *
// GLOBAL DAT_005ae6fc undefined
// GLOBAL DAT_005ae70c undefined4
// GLOBAL DAT_005ae71c uint *
// GLOBAL DAT_005ae720 undefined4
// GLOBAL DAT_005ae724 undefined4 *
// GLOBAL DAT_005ae728 undefined4
// GLOBAL DAT_005ae72c undefined4
// GLOBAL s_ObjWirtBeam_005ae710 string

undefined8 func_005AE684(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ae6f0;
  *DAT_005ae6f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae6f4;
  *DAT_005ae6f4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ae6f8;
  puVar3 = DAT_005ae6f8 + 3;
  *DAT_005ae6f8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ae70c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ae6fc;
  local_18 = local_10;
  local_14 = s_ObjWirtBeam_005ae710;
  uVar2 = func_0019B51C(DAT_005ae724,DAT_005ae720,*DAT_005ae71c,(int)&local_18,DAT_005ae6f8,
                        &local_10,0);
  return CONCAT44(DAT_005ae72c,uVar2);
}

