#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b9bbc;
extern undefined4 *DAT_005b9bc0;
extern undefined4 *DAT_005b9bc4;
extern undefined4 DAT_005b9bd4;
extern undefined4 DAT_005b9bfc;
extern undefined4 DAT_005b9c00;
extern undefined4 *DAT_005b9c04;
extern undefined DAT_005b9c08;
extern uint *DAT_005b9c2c;
extern undefined4 DAT_005b9c30;
extern undefined4 *DAT_005b9c34;
extern undefined4 DAT_005b9c38;
extern char s_AreaFirstSave_005b9c1c[];
extern char s_N_ArrowB_00_005b9bd8[];
extern char s_N_ArrowL_00_005b9be4[];
extern char s_N_ArrowR_00_005b9bf0[];
extern char s_N_ArrowT_00_005b9bc8[];

// USA 005B9B04 <- EU 005B9ADC (Ghidra, non-matching)
// GLOBAL DAT_005b9bbc undefined4 *
// GLOBAL DAT_005b9bc0 undefined4 *
// GLOBAL DAT_005b9bc4 undefined4 *
// GLOBAL DAT_005b9bd4 undefined4
// GLOBAL DAT_005b9bfc undefined4
// GLOBAL DAT_005b9c00 undefined4
// GLOBAL DAT_005b9c04 undefined4 *
// GLOBAL DAT_005b9c08 undefined
// GLOBAL DAT_005b9c2c uint *
// GLOBAL DAT_005b9c30 undefined4
// GLOBAL DAT_005b9c34 undefined4 *
// GLOBAL DAT_005b9c38 undefined4
// GLOBAL s_AreaFirstSave_005b9c1c string
// GLOBAL s_N_ArrowB_00_005b9bd8 string
// GLOBAL s_N_ArrowL_00_005b9be4 string
// GLOBAL s_N_ArrowR_00_005b9bf0 string
// GLOBAL s_N_ArrowT_00_005b9bc8 string

undefined8 func_005B9B04(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b9bbc;
  *DAT_005b9bbc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b9bd4;
  puVar1 = DAT_005b9bc0;
  *DAT_005b9bc0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b9bc4;
  DAT_005b9bc4[1] = s_N_ArrowT_00_005b9bc8;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005b9bd8;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005b9be4;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005b9bf0;
  puVar1 = DAT_005b9c04;
  puVar3 = DAT_005b9c04 + 3;
  *DAT_005b9c04 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b9c08;
  uStack_10 = local_18;
  local_c = s_AreaFirstSave_005b9c1c;
  uVar2 = func_0019B51C(DAT_005b9c34,DAT_005b9c30,*DAT_005b9c2c,(int)&uStack_10,DAT_005b9c04,
                        &local_18,0);
  return CONCAT44(DAT_005b9c38,uVar2);
}

