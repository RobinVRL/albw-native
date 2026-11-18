#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b3834;
extern undefined4 *DAT_005b3838;
extern undefined4 *DAT_005b383c;
extern undefined DAT_005b3840;
extern undefined4 DAT_005b3850;
extern uint *DAT_005b3864;
extern undefined4 DAT_005b3868;
extern undefined4 *DAT_005b386c;
extern undefined4 DAT_005b3870;
extern undefined4 DAT_005b3874;
extern char s_MassIceBlock_005b3854[];

// USA 005B37C8 <- EU 005B37A0 (Ghidra, non-matching)
// GLOBAL DAT_005b3834 undefined4 *
// GLOBAL DAT_005b3838 undefined4 *
// GLOBAL DAT_005b383c undefined4 *
// GLOBAL DAT_005b3840 undefined
// GLOBAL DAT_005b3850 undefined4
// GLOBAL DAT_005b3864 uint *
// GLOBAL DAT_005b3868 undefined4
// GLOBAL DAT_005b386c undefined4 *
// GLOBAL DAT_005b3870 undefined4
// GLOBAL DAT_005b3874 undefined4
// GLOBAL s_MassIceBlock_005b3854 string

undefined8 func_005B37C8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b3834;
  *DAT_005b3834 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3838;
  *DAT_005b3838 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b383c;
  puVar3 = DAT_005b383c + 3;
  *DAT_005b383c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b3850;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b3840;
  local_18 = local_10;
  local_14 = s_MassIceBlock_005b3854;
  uVar2 = func_0019B51C(DAT_005b386c,DAT_005b3868,*DAT_005b3864,(int)&local_18,DAT_005b383c,
                        &local_10,0);
  return CONCAT44(DAT_005b3874,uVar2);
}

