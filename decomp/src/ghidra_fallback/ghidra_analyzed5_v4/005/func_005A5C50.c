#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a5d98;
extern undefined4 *DAT_005a5d9c;
extern undefined4 *DAT_005a5da0;
extern undefined DAT_005a5da4;
extern undefined4 DAT_005a5db8;
extern uint *DAT_005a5dcc;
extern undefined4 DAT_005a5dd0;
extern undefined4 *DAT_005a5dd4;
extern undefined4 DAT_005a5dd8;
extern undefined4 DAT_005a5ddc;
extern undefined4 *DAT_005a5de0;
extern undefined DAT_005a5de4;
extern uint *DAT_005a5e08;
extern undefined4 DAT_005a5e0c;
extern undefined4 *DAT_005a5e10;
extern undefined4 *DAT_005a5e14;
extern undefined DAT_005a5e18;
extern uint *DAT_005a5e34;
extern undefined4 DAT_005a5e38;
extern undefined4 *DAT_005a5e3c;
extern char s_MapSurfaceFixed_005a5e24[];
extern char s_MapSurfaceFloor_005a5df8[];
extern char s_MapSurfaceRoom_005a5dbc[];

// USA 005A5C50 <- EU 005A5C28 (Ghidra, non-matching)
// GLOBAL DAT_005a5d98 undefined4 *
// GLOBAL DAT_005a5d9c undefined4 *
// GLOBAL DAT_005a5da0 undefined4 *
// GLOBAL DAT_005a5da4 undefined
// GLOBAL DAT_005a5db8 undefined4
// GLOBAL DAT_005a5dcc uint *
// GLOBAL DAT_005a5dd0 undefined4
// GLOBAL DAT_005a5dd4 undefined4 *
// GLOBAL DAT_005a5dd8 undefined4
// GLOBAL DAT_005a5ddc undefined4
// GLOBAL DAT_005a5de0 undefined4 *
// GLOBAL DAT_005a5de4 undefined
// GLOBAL DAT_005a5e08 uint *
// GLOBAL DAT_005a5e0c undefined4
// GLOBAL DAT_005a5e10 undefined4 *
// GLOBAL DAT_005a5e14 undefined4 *
// GLOBAL DAT_005a5e18 undefined
// GLOBAL DAT_005a5e34 uint *
// GLOBAL DAT_005a5e38 undefined4
// GLOBAL DAT_005a5e3c undefined4 *
// GLOBAL s_MapSurfaceFixed_005a5e24 string
// GLOBAL s_MapSurfaceFloor_005a5df8 string
// GLOBAL s_MapSurfaceRoom_005a5dbc string

undefined8 func_005A5C50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005a5d98;
  *DAT_005a5d98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a5d9c;
  *DAT_005a5d9c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005a5db8;
  puVar1 = DAT_005a5da0;
  puVar3 = DAT_005a5da0 + 3;
  DAT_005a5da0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005a5da4;
  local_3c = s_MapSurfaceRoom_005a5dbc;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005a5dd4,DAT_005a5dd0,*DAT_005a5dcc,(int)&local_40,DAT_005a5da0,&local_38,0);
  puVar1 = DAT_005a5de0;
  puVar3 = DAT_005a5de0 + 3;
  DAT_005a5de0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005a5de4;
  local_2c = s_MapSurfaceFloor_005a5df8;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005a5e10,DAT_005a5e0c,*DAT_005a5e08,(int)&local_30,DAT_005a5de0,&local_28,0);
  puVar1 = DAT_005a5e14;
  puVar3 = DAT_005a5e14 + 3;
  DAT_005a5e14[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005a5e18;
  local_1c = s_MapSurfaceFixed_005a5e24;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005a5e3c,DAT_005a5e38,*DAT_005a5e34,(int)&local_20,DAT_005a5e14,
                        &local_18,0);
  return CONCAT44(DAT_005a5ddc,uVar2);
}

