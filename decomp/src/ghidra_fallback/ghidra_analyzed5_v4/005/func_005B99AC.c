#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b9a64;
extern undefined4 *DAT_005b9a68;
extern undefined4 *DAT_005b9a6c;
extern undefined4 DAT_005b9a7c;
extern undefined4 DAT_005b9aa4;
extern undefined4 DAT_005b9aa8;
extern undefined4 *DAT_005b9aac;
extern undefined DAT_005b9ab0;
extern uint *DAT_005b9acc;
extern undefined4 DAT_005b9ad0;
extern undefined4 *DAT_005b9ad4;
extern undefined4 DAT_005b9ad8;
extern char s_AreaEventTalk_005b9abc[];
extern char s_N_ArrowB_00_005b9a80[];
extern char s_N_ArrowL_00_005b9a8c[];
extern char s_N_ArrowR_00_005b9a98[];
extern char s_N_ArrowT_00_005b9a70[];

// USA 005B99AC <- EU 005B9984 (Ghidra, non-matching)
// GLOBAL DAT_005b9a64 undefined4 *
// GLOBAL DAT_005b9a68 undefined4 *
// GLOBAL DAT_005b9a6c undefined4 *
// GLOBAL DAT_005b9a7c undefined4
// GLOBAL DAT_005b9aa4 undefined4
// GLOBAL DAT_005b9aa8 undefined4
// GLOBAL DAT_005b9aac undefined4 *
// GLOBAL DAT_005b9ab0 undefined
// GLOBAL DAT_005b9acc uint *
// GLOBAL DAT_005b9ad0 undefined4
// GLOBAL DAT_005b9ad4 undefined4 *
// GLOBAL DAT_005b9ad8 undefined4
// GLOBAL s_AreaEventTalk_005b9abc string
// GLOBAL s_N_ArrowB_00_005b9a80 string
// GLOBAL s_N_ArrowL_00_005b9a8c string
// GLOBAL s_N_ArrowR_00_005b9a98 string
// GLOBAL s_N_ArrowT_00_005b9a70 string

undefined8 func_005B99AC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b9a64;
  *DAT_005b9a64 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b9a7c;
  puVar1 = DAT_005b9a68;
  *DAT_005b9a68 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b9a6c;
  DAT_005b9a6c[1] = s_N_ArrowT_00_005b9a70;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005b9a80;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005b9a8c;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005b9a98;
  puVar1 = DAT_005b9aac;
  puVar3 = DAT_005b9aac + 3;
  *DAT_005b9aac = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b9ab0;
  uStack_10 = local_18;
  local_c = s_AreaEventTalk_005b9abc;
  uVar2 = func_0019B51C(DAT_005b9ad4,DAT_005b9ad0,*DAT_005b9acc,(int)&uStack_10,DAT_005b9aac,
                        &local_18,0);
  return CONCAT44(DAT_005b9ad8,uVar2);
}

