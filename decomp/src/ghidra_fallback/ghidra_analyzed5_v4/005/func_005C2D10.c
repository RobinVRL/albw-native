#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c2dc8;
extern undefined4 *DAT_005c2dcc;
extern undefined4 *DAT_005c2dd0;
extern undefined4 DAT_005c2de0;
extern undefined4 DAT_005c2e08;
extern undefined4 DAT_005c2e0c;
extern undefined4 *DAT_005c2e10;
extern undefined DAT_005c2e14;
extern uint *DAT_005c2e38;
extern undefined4 DAT_005c2e3c;
extern undefined4 *DAT_005c2e40;
extern undefined4 DAT_005c2e44;
extern char s_AreaSimpleTalk_005c2e28[];
extern char s_N_ArrowB_00_005c2de4[];
extern char s_N_ArrowL_00_005c2df0[];
extern char s_N_ArrowR_00_005c2dfc[];
extern char s_N_ArrowT_00_005c2dd4[];

// USA 005C2D10 <- EU 005C2CE8 (Ghidra, non-matching)
// GLOBAL DAT_005c2dc8 undefined4 *
// GLOBAL DAT_005c2dcc undefined4 *
// GLOBAL DAT_005c2dd0 undefined4 *
// GLOBAL DAT_005c2de0 undefined4
// GLOBAL DAT_005c2e08 undefined4
// GLOBAL DAT_005c2e0c undefined4
// GLOBAL DAT_005c2e10 undefined4 *
// GLOBAL DAT_005c2e14 undefined
// GLOBAL DAT_005c2e38 uint *
// GLOBAL DAT_005c2e3c undefined4
// GLOBAL DAT_005c2e40 undefined4 *
// GLOBAL DAT_005c2e44 undefined4
// GLOBAL s_AreaSimpleTalk_005c2e28 string
// GLOBAL s_N_ArrowB_00_005c2de4 string
// GLOBAL s_N_ArrowL_00_005c2df0 string
// GLOBAL s_N_ArrowR_00_005c2dfc string
// GLOBAL s_N_ArrowT_00_005c2dd4 string

undefined8 func_005C2D10(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c2dc8;
  *DAT_005c2dc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c2de0;
  puVar1 = DAT_005c2dcc;
  *DAT_005c2dcc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c2dd0;
  DAT_005c2dd0[1] = s_N_ArrowT_00_005c2dd4;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005c2de4;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005c2df0;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005c2dfc;
  puVar1 = DAT_005c2e10;
  puVar3 = DAT_005c2e10 + 3;
  *DAT_005c2e10 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c2e14;
  uStack_10 = local_18;
  local_c = s_AreaSimpleTalk_005c2e28;
  uVar2 = func_0019B51C(DAT_005c2e40,DAT_005c2e3c,*DAT_005c2e38,(int)&uStack_10,DAT_005c2e10,
                        &local_18,0);
  return CONCAT44(DAT_005c2e44,uVar2);
}

