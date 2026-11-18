#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b8e68;
extern undefined4 *DAT_005b8e6c;
extern undefined4 *DAT_005b8e70;
extern undefined4 DAT_005b8e80;
extern undefined4 DAT_005b8ea8;
extern undefined4 DAT_005b8eac;
extern undefined4 *DAT_005b8eb0;
extern undefined DAT_005b8eb4;
extern uint *DAT_005b8edc;
extern undefined4 DAT_005b8ee0;
extern undefined4 *DAT_005b8ee4;
extern undefined4 DAT_005b8ee8;
extern char s_N_ArrowB_00_005b8e84[];
extern char s_N_ArrowL_00_005b8e90[];
extern char s_N_ArrowR_00_005b8e9c[];
extern char s_N_ArrowT_00_005b8e74[];
extern char s_TagItemEvent_005b8ecc[];

// USA 005B8DB0 <- EU 005B8D88 (Ghidra, non-matching)
// GLOBAL DAT_005b8e68 undefined4 *
// GLOBAL DAT_005b8e6c undefined4 *
// GLOBAL DAT_005b8e70 undefined4 *
// GLOBAL DAT_005b8e80 undefined4
// GLOBAL DAT_005b8ea8 undefined4
// GLOBAL DAT_005b8eac undefined4
// GLOBAL DAT_005b8eb0 undefined4 *
// GLOBAL DAT_005b8eb4 undefined
// GLOBAL DAT_005b8edc uint *
// GLOBAL DAT_005b8ee0 undefined4
// GLOBAL DAT_005b8ee4 undefined4 *
// GLOBAL DAT_005b8ee8 undefined4
// GLOBAL s_N_ArrowB_00_005b8e84 string
// GLOBAL s_N_ArrowL_00_005b8e90 string
// GLOBAL s_N_ArrowR_00_005b8e9c string
// GLOBAL s_N_ArrowT_00_005b8e74 string
// GLOBAL s_TagItemEvent_005b8ecc string

undefined8 func_005B8DB0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b8e68;
  *DAT_005b8e68 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b8e80;
  puVar1 = DAT_005b8e6c;
  *DAT_005b8e6c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b8e70;
  DAT_005b8e70[1] = s_N_ArrowT_00_005b8e74;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005b8e84;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005b8e90;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005b8e9c;
  puVar1 = DAT_005b8eb0;
  puVar3 = DAT_005b8eb0 + 3;
  *DAT_005b8eb0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b8eb4;
  uStack_10 = local_18;
  local_c = s_TagItemEvent_005b8ecc;
  uVar2 = func_0019B51C(DAT_005b8ee4,DAT_005b8ee0,*DAT_005b8edc,(int)&uStack_10,DAT_005b8eb0,
                        &local_18,0);
  return CONCAT44(DAT_005b8ee8,uVar2);
}

