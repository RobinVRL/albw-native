#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f1c10;
extern undefined4 *DAT_005f1c14;
extern undefined4 *DAT_005f1c18;
extern undefined4 DAT_005f1c28;
extern undefined4 DAT_005f1c50;
extern undefined4 DAT_005f1c54;
extern undefined4 *DAT_005f1c58;
extern undefined DAT_005f1c64;
extern undefined4 DAT_005f1c78;
extern undefined4 *DAT_005f1c7c;
extern undefined4 DAT_005f1c88;
extern undefined4 *DAT_005f1c8c;
extern undefined DAT_005f1c90;
extern uint *DAT_005f1cb8;
extern undefined4 DAT_005f1cbc;
extern undefined4 *DAT_005f1cc0;
extern undefined4 DAT_005f1cc4;
extern char s_N_ArrowB_00_005f1c2c[];
extern char s_N_ArrowL_00_005f1c38[];
extern char s_N_ArrowR_00_005f1c44[];
extern char s_N_ArrowT_00_005f1c1c[];
extern char s_ObjPictureSahasPupil_005f1ca0[];
extern char s_appear_005f1c5c[];
extern char s_paint_005f1c80[];
extern char s_put_picture_005f1c6c[];

// USA 005F1AFC <- EU 005F1AD4 (Ghidra, non-matching)
// GLOBAL DAT_005f1c10 undefined4 *
// GLOBAL DAT_005f1c14 undefined4 *
// GLOBAL DAT_005f1c18 undefined4 *
// GLOBAL DAT_005f1c28 undefined4
// GLOBAL DAT_005f1c50 undefined4
// GLOBAL DAT_005f1c54 undefined4
// GLOBAL DAT_005f1c58 undefined4 *
// GLOBAL DAT_005f1c64 undefined
// GLOBAL DAT_005f1c78 undefined4
// GLOBAL DAT_005f1c7c undefined4 *
// GLOBAL DAT_005f1c88 undefined4
// GLOBAL DAT_005f1c8c undefined4 *
// GLOBAL DAT_005f1c90 undefined
// GLOBAL DAT_005f1cb8 uint *
// GLOBAL DAT_005f1cbc undefined4
// GLOBAL DAT_005f1cc0 undefined4 *
// GLOBAL DAT_005f1cc4 undefined4
// GLOBAL s_N_ArrowB_00_005f1c2c string
// GLOBAL s_N_ArrowL_00_005f1c38 string
// GLOBAL s_N_ArrowR_00_005f1c44 string
// GLOBAL s_N_ArrowT_00_005f1c1c string
// GLOBAL s_ObjPictureSahasPupil_005f1ca0 string
// GLOBAL s_appear_005f1c5c string
// GLOBAL s_paint_005f1c80 string
// GLOBAL s_put_picture_005f1c6c string

undefined8 func_005F1AFC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005f1c10;
  *DAT_005f1c10 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005f1c28;
  puVar1 = DAT_005f1c14;
  *DAT_005f1c14 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f1c18;
  DAT_005f1c18[1] = s_N_ArrowT_00_005f1c1c;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005f1c2c;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005f1c38;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005f1c44;
  puVar1 = DAT_005f1c58;
  DAT_005f1c58[1] = s_appear_005f1c5c;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005f1c64;
  puVar1[2] = local_18;
  puVar1[4] = local_18;
  puVar1[5] = s_put_picture_005f1c6c;
  puVar1 = DAT_005f1c7c;
  DAT_005f1c7c[1] = s_paint_005f1c80;
  *puVar1 = local_18;
  puVar1 = DAT_005f1c8c;
  puVar3 = DAT_005f1c8c + 3;
  *DAT_005f1c8c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005f1c90;
  uStack_10 = local_18;
  local_c = s_ObjPictureSahasPupil_005f1ca0;
  uVar2 = func_0019B51C(DAT_005f1cc0,DAT_005f1cbc,*DAT_005f1cb8,(int)&uStack_10,DAT_005f1c8c,
                        &local_18,0);
  return CONCAT44(DAT_005f1cc4,uVar2);
}

