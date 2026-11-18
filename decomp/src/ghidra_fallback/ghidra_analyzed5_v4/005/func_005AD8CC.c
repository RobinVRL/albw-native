#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad9a4;
extern undefined4 *DAT_005ad9a8;
extern undefined4 *DAT_005ad9ac;
extern undefined4 DAT_005ad9bc;
extern undefined4 DAT_005ad9e4;
extern undefined4 DAT_005ad9e8;
extern undefined4 *DAT_005ad9ec;
extern undefined4 DAT_005ad9fc;
extern undefined4 *DAT_005ada00;
extern undefined DAT_005ada04;
extern uint *DAT_005ada1c;
extern undefined4 DAT_005ada20;
extern undefined4 *DAT_005ada24;
extern undefined4 DAT_005ada28;
extern char s_KinStaTen_005ad9f0[];
extern char s_N_ArrowB_00_005ad9c0[];
extern char s_N_ArrowL_00_005ad9cc[];
extern char s_N_ArrowR_00_005ad9d8[];
extern char s_N_ArrowT_00_005ad9b0[];
extern char s_ObjKinSta10_005ada10[];

// USA 005AD8CC <- EU 005AD8A4 (Ghidra, non-matching)
// GLOBAL DAT_005ad9a4 undefined4 *
// GLOBAL DAT_005ad9a8 undefined4 *
// GLOBAL DAT_005ad9ac undefined4 *
// GLOBAL DAT_005ad9bc undefined4
// GLOBAL DAT_005ad9e4 undefined4
// GLOBAL DAT_005ad9e8 undefined4
// GLOBAL DAT_005ad9ec undefined4 *
// GLOBAL DAT_005ad9fc undefined4
// GLOBAL DAT_005ada00 undefined4 *
// GLOBAL DAT_005ada04 undefined
// GLOBAL DAT_005ada1c uint *
// GLOBAL DAT_005ada20 undefined4
// GLOBAL DAT_005ada24 undefined4 *
// GLOBAL DAT_005ada28 undefined4
// GLOBAL s_KinStaTen_005ad9f0 string
// GLOBAL s_N_ArrowB_00_005ad9c0 string
// GLOBAL s_N_ArrowL_00_005ad9cc string
// GLOBAL s_N_ArrowR_00_005ad9d8 string
// GLOBAL s_N_ArrowT_00_005ad9b0 string
// GLOBAL s_ObjKinSta10_005ada10 string

undefined8 func_005AD8CC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad9a4;
  *DAT_005ad9a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ad9bc;
  puVar1 = DAT_005ad9a8;
  *DAT_005ad9a8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad9ac;
  DAT_005ad9ac[1] = s_N_ArrowT_00_005ad9b0;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005ad9c0;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005ad9cc;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005ad9d8;
  puVar1 = DAT_005ad9ec;
  DAT_005ad9ec[1] = s_KinStaTen_005ad9f0;
  *puVar1 = local_18;
  puVar1 = DAT_005ada00;
  puVar3 = DAT_005ada00 + 3;
  *DAT_005ada00 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ada04;
  uStack_10 = local_18;
  local_c = s_ObjKinSta10_005ada10;
  uVar2 = func_0019B51C(DAT_005ada24,DAT_005ada20,*DAT_005ada1c,(int)&uStack_10,DAT_005ada00,
                        &local_18,0);
  return CONCAT44(DAT_005ada28,uVar2);
}

