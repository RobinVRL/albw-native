#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab270;
extern undefined4 *DAT_005ab274;
extern undefined4 *DAT_005ab278;
extern undefined DAT_005ab27c;
extern undefined4 DAT_005ab290;
extern uint *DAT_005ab2a0;
extern undefined4 DAT_005ab2a4;
extern undefined4 *DAT_005ab2a8;
extern undefined4 DAT_005ab2ac;
extern undefined4 DAT_005ab2b0;
extern char s_MassFloorBg_005ab294[];

// USA 005AB204 <- EU 005AB1DC (Ghidra, non-matching)
// GLOBAL DAT_005ab270 undefined4 *
// GLOBAL DAT_005ab274 undefined4 *
// GLOBAL DAT_005ab278 undefined4 *
// GLOBAL DAT_005ab27c undefined
// GLOBAL DAT_005ab290 undefined4
// GLOBAL DAT_005ab2a0 uint *
// GLOBAL DAT_005ab2a4 undefined4
// GLOBAL DAT_005ab2a8 undefined4 *
// GLOBAL DAT_005ab2ac undefined4
// GLOBAL DAT_005ab2b0 undefined4
// GLOBAL s_MassFloorBg_005ab294 string

undefined8 func_005AB204(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ab270;
  *DAT_005ab270 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab274;
  *DAT_005ab274 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ab278;
  puVar3 = DAT_005ab278 + 3;
  *DAT_005ab278 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ab290;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ab27c;
  local_18 = local_10;
  local_14 = s_MassFloorBg_005ab294;
  uVar2 = func_0019B51C(DAT_005ab2a8,DAT_005ab2a4,*DAT_005ab2a0,(int)&local_18,DAT_005ab278,
                        &local_10,0);
  return CONCAT44(DAT_005ab2b0,uVar2);
}

