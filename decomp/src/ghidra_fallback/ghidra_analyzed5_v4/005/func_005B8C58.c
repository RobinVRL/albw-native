#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b8d10;
extern undefined4 *DAT_005b8d14;
extern undefined4 *DAT_005b8d18;
extern undefined4 DAT_005b8d28;
extern undefined4 DAT_005b8d50;
extern undefined4 DAT_005b8d54;
extern undefined4 *DAT_005b8d58;
extern undefined DAT_005b8d5c;
extern uint *DAT_005b8d78;
extern undefined4 DAT_005b8d7c;
extern undefined4 *DAT_005b8d80;
extern undefined4 DAT_005b8d84;
extern char s_N_ArrowB_00_005b8d2c[];
extern char s_N_ArrowL_00_005b8d38[];
extern char s_N_ArrowR_00_005b8d44[];
extern char s_N_ArrowT_00_005b8d1c[];
extern char s_TagEventTalk_005b8d68[];

// USA 005B8C58 <- EU 005B8C30 (Ghidra, non-matching)
// GLOBAL DAT_005b8d10 undefined4 *
// GLOBAL DAT_005b8d14 undefined4 *
// GLOBAL DAT_005b8d18 undefined4 *
// GLOBAL DAT_005b8d28 undefined4
// GLOBAL DAT_005b8d50 undefined4
// GLOBAL DAT_005b8d54 undefined4
// GLOBAL DAT_005b8d58 undefined4 *
// GLOBAL DAT_005b8d5c undefined
// GLOBAL DAT_005b8d78 uint *
// GLOBAL DAT_005b8d7c undefined4
// GLOBAL DAT_005b8d80 undefined4 *
// GLOBAL DAT_005b8d84 undefined4
// GLOBAL s_N_ArrowB_00_005b8d2c string
// GLOBAL s_N_ArrowL_00_005b8d38 string
// GLOBAL s_N_ArrowR_00_005b8d44 string
// GLOBAL s_N_ArrowT_00_005b8d1c string
// GLOBAL s_TagEventTalk_005b8d68 string

undefined8 func_005B8C58(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b8d10;
  *DAT_005b8d10 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b8d28;
  puVar1 = DAT_005b8d14;
  *DAT_005b8d14 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b8d18;
  DAT_005b8d18[1] = s_N_ArrowT_00_005b8d1c;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005b8d2c;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005b8d38;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005b8d44;
  puVar1 = DAT_005b8d58;
  puVar3 = DAT_005b8d58 + 3;
  *DAT_005b8d58 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b8d5c;
  uStack_10 = local_18;
  local_c = s_TagEventTalk_005b8d68;
  uVar2 = func_0019B51C(DAT_005b8d80,DAT_005b8d7c,*DAT_005b8d78,(int)&uStack_10,DAT_005b8d58,
                        &local_18,0);
  return CONCAT44(DAT_005b8d84,uVar2);
}

