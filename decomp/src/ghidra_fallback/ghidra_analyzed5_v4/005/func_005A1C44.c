#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a1d6c;
extern undefined4 *DAT_005a1d70;
extern undefined4 *DAT_005a1d74;
extern undefined DAT_005a1d78;
extern undefined4 DAT_005a1d7c;
extern undefined DAT_005a1d80;
extern undefined4 DAT_005a1d88;
extern undefined4 DAT_005a1d8c;
extern undefined4 *DAT_005a1d90;
extern undefined DAT_005a1d94;
extern undefined4 DAT_005a1db4;
extern undefined4 DAT_005a1db8;
extern undefined4 DAT_005a1dbc;
extern undefined4 *DAT_005a1dc0;
extern undefined4 DAT_005a1dc4;
extern undefined4 DAT_005a1dc8;
extern undefined4 DAT_005a1dcc;
extern undefined4 DAT_005a1dd0;
extern undefined DAT_005a1dd4;
extern undefined4 DAT_005a1df4;
extern uint *DAT_005a1df8;
extern undefined4 DAT_005a1dfc;
extern undefined4 *DAT_005a1e00;
extern undefined4 DAT_005a1e04;
extern char s_MojLavaUp_005a1de8[];
extern char s_solid_off_005a1da8[];
extern char s_solid_on_005a1d9c[];

// USA 005A1C44 <- EU 005A1C1C (Ghidra, non-matching)
// GLOBAL DAT_005a1d6c undefined4 *
// GLOBAL DAT_005a1d70 undefined4 *
// GLOBAL DAT_005a1d74 undefined4 *
// GLOBAL DAT_005a1d78 undefined
// GLOBAL DAT_005a1d7c undefined4
// GLOBAL DAT_005a1d80 undefined
// GLOBAL DAT_005a1d88 undefined4
// GLOBAL DAT_005a1d8c undefined4
// GLOBAL DAT_005a1d90 undefined4 *
// GLOBAL DAT_005a1d94 undefined
// GLOBAL DAT_005a1db4 undefined4
// GLOBAL DAT_005a1db8 undefined4
// GLOBAL DAT_005a1dbc undefined4
// GLOBAL DAT_005a1dc0 undefined4 *
// GLOBAL DAT_005a1dc4 undefined4
// GLOBAL DAT_005a1dc8 undefined4
// GLOBAL DAT_005a1dcc undefined4
// GLOBAL DAT_005a1dd0 undefined4
// GLOBAL DAT_005a1dd4 undefined
// GLOBAL DAT_005a1df4 undefined4
// GLOBAL DAT_005a1df8 uint *
// GLOBAL DAT_005a1dfc undefined4
// GLOBAL DAT_005a1e00 undefined4 *
// GLOBAL DAT_005a1e04 undefined4
// GLOBAL s_MojLavaUp_005a1de8 string
// GLOBAL s_solid_off_005a1da8 string
// GLOBAL s_solid_on_005a1d9c string

undefined8 func_005A1C44(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005a1d6c;
  *DAT_005a1d6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005a1d7c;
  puVar1 = DAT_005a1d70;
  *DAT_005a1d70 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a1d74;
  DAT_005a1d74[1] = &DAT_005a1d78;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = &DAT_005a1d80;
  puVar1 = DAT_005a1d90;
  DAT_005a1d90[1] = &DAT_005a1d94;
  *puVar1 = local_18;
  puVar1[3] = s_solid_on_005a1d9c;
  puVar1[2] = local_18;
  puVar1[4] = local_18;
  puVar1[5] = s_solid_off_005a1da8;
  uVar3 = DAT_005a1dc4;
  puVar1 = DAT_005a1dc0;
  uVar2 = DAT_005a1dbc;
  uVar4 = DAT_005a1db8;
  *DAT_005a1dc0 = DAT_005a1db8;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  uVar2 = DAT_005a1dc8;
  puVar1[6] = uVar4;
  puVar1[7] = uVar2;
  puVar1[8] = uVar4;
  uVar2 = DAT_005a1dd0;
  uVar4 = DAT_005a1dcc;
  puVar1[9] = DAT_005a1dcc;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar4;
  puVar1[-0xa4] = 0;
  puVar1[-0xa3] = 5;
  puVar1[-0xa2] = puVar1 + -0xa1;
  puStack_14 = &DAT_005a1dd4;
  uStack_10 = local_18;
  local_c = s_MojLavaUp_005a1de8;
  uVar4 = func_0019B51C(DAT_005a1e00,DAT_005a1dfc,*DAT_005a1df8,(int)&uStack_10,DAT_005a1df4,
                        &local_18,0);
  return CONCAT44(DAT_005a1e04,uVar4);
}

