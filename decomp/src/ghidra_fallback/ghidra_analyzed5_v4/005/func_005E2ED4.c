#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e2ff8;
extern undefined4 *DAT_005e2ffc;
extern undefined4 *DAT_005e3000;
extern undefined4 DAT_005e3010;
extern undefined4 DAT_005e3038;
extern undefined4 DAT_005e303c;
extern undefined4 *DAT_005e3040;
extern undefined DAT_005e3044;
extern undefined DAT_005e3048;
extern undefined DAT_005e3050;
extern undefined4 DAT_005e3054;
extern undefined4 *DAT_005e3058;
extern undefined4 DAT_005e3070;
extern undefined4 DAT_005e3074;
extern undefined4 *DAT_005e3078;
extern undefined DAT_005e307c;
extern undefined4 DAT_005e30a0;
extern uint *DAT_005e30a4;
extern undefined4 DAT_005e30a8;
extern undefined4 *DAT_005e30ac;
extern undefined4 DAT_005e30b0;
extern char s_N_ArrowB_00_005e3014[];
extern char s_N_ArrowL_00_005e3020[];
extern char s_N_ArrowR_00_005e302c[];
extern char s_N_ArrowT_00_005e3004[];
extern char s_ObjTriForceBrave_005e308c[];
extern char s_TriForce_get_event_005e305c[];

// USA 005E2ED4 <- EU 005E2EAC (Ghidra, non-matching)
// GLOBAL DAT_005e2ff8 undefined4 *
// GLOBAL DAT_005e2ffc undefined4 *
// GLOBAL DAT_005e3000 undefined4 *
// GLOBAL DAT_005e3010 undefined4
// GLOBAL DAT_005e3038 undefined4
// GLOBAL DAT_005e303c undefined4
// GLOBAL DAT_005e3040 undefined4 *
// GLOBAL DAT_005e3044 undefined
// GLOBAL DAT_005e3048 undefined
// GLOBAL DAT_005e3050 undefined
// GLOBAL DAT_005e3054 undefined4
// GLOBAL DAT_005e3058 undefined4 *
// GLOBAL DAT_005e3070 undefined4
// GLOBAL DAT_005e3074 undefined4
// GLOBAL DAT_005e3078 undefined4 *
// GLOBAL DAT_005e307c undefined
// GLOBAL DAT_005e30a0 undefined4
// GLOBAL DAT_005e30a4 uint *
// GLOBAL DAT_005e30a8 undefined4
// GLOBAL DAT_005e30ac undefined4 *
// GLOBAL DAT_005e30b0 undefined4
// GLOBAL s_N_ArrowB_00_005e3014 string
// GLOBAL s_N_ArrowL_00_005e3020 string
// GLOBAL s_N_ArrowR_00_005e302c string
// GLOBAL s_N_ArrowT_00_005e3004 string
// GLOBAL s_ObjTriForceBrave_005e308c string
// GLOBAL s_TriForce_get_event_005e305c string

undefined8 func_005E2ED4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e2ff8;
  *DAT_005e2ff8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e3010;
  puVar1 = DAT_005e2ffc;
  *DAT_005e2ffc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e3000;
  DAT_005e3000[1] = s_N_ArrowT_00_005e3004;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005e3014;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005e3020;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005e302c;
  puVar1 = DAT_005e3040;
  DAT_005e3040[1] = &DAT_005e3044;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005e3048;
  puVar1[2] = local_18;
  puVar1[4] = local_18;
  puVar1[5] = &DAT_005e3050;
  puVar1 = DAT_005e3058;
  DAT_005e3058[1] = s_TriForce_get_event_005e305c;
  *puVar1 = local_18;
  puVar1 = DAT_005e3078;
  uVar2 = DAT_005e3074;
  *DAT_005e3078 = DAT_005e3074;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  puVar1[-0xa8] = 0;
  puVar1[-0xa7] = 5;
  puVar1[-0xa6] = puVar1 + -0xa5;
  puStack_14 = &DAT_005e307c;
  uStack_10 = local_18;
  local_c = s_ObjTriForceBrave_005e308c;
  uVar2 = func_0019B51C(DAT_005e30ac,DAT_005e30a8,*DAT_005e30a4,(int)&uStack_10,DAT_005e30a0,
                        &local_18,0);
  return CONCAT44(DAT_005e30b0,uVar2);
}

