#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b81e0;
extern undefined4 *DAT_005b81e4;
extern undefined4 *DAT_005b81e8;
extern undefined DAT_005b81ec;
extern undefined4 DAT_005b8204;
extern uint *DAT_005b8218;
extern undefined4 DAT_005b821c;
extern undefined4 *DAT_005b8220;
extern undefined4 DAT_005b8224;
extern undefined4 DAT_005b8228;
extern undefined4 *DAT_005b822c;
extern undefined DAT_005b8230;
extern uint *DAT_005b825c;
extern undefined4 *DAT_005b8260;
extern char s_ObjGrassLiftDark_005b8248[];
extern char s_ObjGrassLift_005b8208[];

// USA 005B8100 <- EU 005B80D8 (Ghidra, non-matching)
// GLOBAL DAT_005b81e0 undefined4 *
// GLOBAL DAT_005b81e4 undefined4 *
// GLOBAL DAT_005b81e8 undefined4 *
// GLOBAL DAT_005b81ec undefined
// GLOBAL DAT_005b8204 undefined4
// GLOBAL DAT_005b8218 uint *
// GLOBAL DAT_005b821c undefined4
// GLOBAL DAT_005b8220 undefined4 *
// GLOBAL DAT_005b8224 undefined4
// GLOBAL DAT_005b8228 undefined4
// GLOBAL DAT_005b822c undefined4 *
// GLOBAL DAT_005b8230 undefined
// GLOBAL DAT_005b825c uint *
// GLOBAL DAT_005b8260 undefined4 *
// GLOBAL s_ObjGrassLiftDark_005b8248 string
// GLOBAL s_ObjGrassLift_005b8208 string

undefined8 func_005B8100(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005b81e0;
  *DAT_005b81e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b81e4;
  *DAT_005b81e4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b8204;
  puVar1 = DAT_005b81e8;
  puVar3 = DAT_005b81e8 + 3;
  DAT_005b81e8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b81ec;
  local_2c = s_ObjGrassLift_005b8208;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b8220,DAT_005b821c,*DAT_005b8218,(int)&local_30,DAT_005b81e8,&local_28,0);
  puVar1 = DAT_005b822c;
  puVar3 = DAT_005b822c + 3;
  DAT_005b822c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b8230;
  local_1c = s_ObjGrassLiftDark_005b8248;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b8260,DAT_005b821c,*DAT_005b825c,(int)&local_20,DAT_005b822c,
                        &local_18,0);
  return CONCAT44(DAT_005b8228,uVar2);
}

