#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005d023c;
extern undefined4 *DAT_005d0240;
extern undefined4 *DAT_005d0244;
extern undefined DAT_005d0248;
extern undefined4 DAT_005d0260;
extern uint *DAT_005d0274;
extern undefined4 DAT_005d0278;
extern undefined4 *DAT_005d027c;
extern undefined4 DAT_005d0280;
extern undefined4 DAT_005d0284;
extern char s_TagCameraOffset_005d0264[];

// USA 005D01D0 <- EU 005D01A8 (Ghidra, non-matching)
// GLOBAL DAT_005d023c undefined4 *
// GLOBAL DAT_005d0240 undefined4 *
// GLOBAL DAT_005d0244 undefined4 *
// GLOBAL DAT_005d0248 undefined
// GLOBAL DAT_005d0260 undefined4
// GLOBAL DAT_005d0274 uint *
// GLOBAL DAT_005d0278 undefined4
// GLOBAL DAT_005d027c undefined4 *
// GLOBAL DAT_005d0280 undefined4
// GLOBAL DAT_005d0284 undefined4
// GLOBAL s_TagCameraOffset_005d0264 string

undefined8 func_005D01D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005d023c;
  *DAT_005d023c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0240;
  *DAT_005d0240 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005d0244;
  puVar3 = DAT_005d0244 + 3;
  *DAT_005d0244 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005d0260;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005d0248;
  local_18 = local_10;
  local_14 = s_TagCameraOffset_005d0264;
  uVar2 = func_0019B51C(DAT_005d027c,DAT_005d0278,*DAT_005d0274,(int)&local_18,DAT_005d0244,
                        &local_10,0);
  return CONCAT44(DAT_005d0284,uVar2);
}

