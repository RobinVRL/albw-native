#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b3d54;
extern undefined4 *DAT_005b3d58;
extern undefined4 *DAT_005b3d5c;
extern undefined DAT_005b3d60;
extern undefined4 DAT_005b3d74;
extern uint *DAT_005b3d8c;
extern undefined4 DAT_005b3d90;
extern undefined4 *DAT_005b3d94;
extern undefined4 DAT_005b3d98;
extern undefined4 DAT_005b3d9c;
extern undefined4 *DAT_005b3da0;
extern undefined DAT_005b3da4;
extern uint *DAT_005b3dcc;
extern undefined4 DAT_005b3dd0;
extern undefined4 *DAT_005b3dd4;
extern char s_MassYukaPeraDark_005b3db8[];
extern char s_MassYukaPeraWind_005b3d78[];

// USA 005B3C74 <- EU 005B3C4C (Ghidra, non-matching)
// GLOBAL DAT_005b3d54 undefined4 *
// GLOBAL DAT_005b3d58 undefined4 *
// GLOBAL DAT_005b3d5c undefined4 *
// GLOBAL DAT_005b3d60 undefined
// GLOBAL DAT_005b3d74 undefined4
// GLOBAL DAT_005b3d8c uint *
// GLOBAL DAT_005b3d90 undefined4
// GLOBAL DAT_005b3d94 undefined4 *
// GLOBAL DAT_005b3d98 undefined4
// GLOBAL DAT_005b3d9c undefined4
// GLOBAL DAT_005b3da0 undefined4 *
// GLOBAL DAT_005b3da4 undefined
// GLOBAL DAT_005b3dcc uint *
// GLOBAL DAT_005b3dd0 undefined4
// GLOBAL DAT_005b3dd4 undefined4 *
// GLOBAL s_MassYukaPeraDark_005b3db8 string
// GLOBAL s_MassYukaPeraWind_005b3d78 string

undefined8 func_005B3C74(void)

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
  puVar1 = DAT_005b3d54;
  *DAT_005b3d54 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3d58;
  *DAT_005b3d58 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005b3d74;
  puVar1 = DAT_005b3d5c;
  puVar3 = DAT_005b3d5c + 3;
  DAT_005b3d5c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005b3d60;
  local_2c = s_MassYukaPeraWind_005b3d78;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005b3d94,DAT_005b3d90,*DAT_005b3d8c,(int)&local_30,DAT_005b3d5c,&local_28,0);
  puVar1 = DAT_005b3da0;
  puVar3 = DAT_005b3da0 + 3;
  DAT_005b3da0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005b3da4;
  local_1c = s_MassYukaPeraDark_005b3db8;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005b3dd4,DAT_005b3dd0,*DAT_005b3dcc,(int)&local_20,DAT_005b3da0,
                        &local_18,0);
  return CONCAT44(DAT_005b3d9c,uVar2);
}

