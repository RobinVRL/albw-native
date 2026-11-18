#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f5b14;
extern undefined4 *DAT_005f5b18;
extern undefined4 *DAT_005f5b1c;
extern undefined4 DAT_005f5b2c;
extern undefined4 DAT_005f5b54;
extern undefined4 DAT_005f5b58;
extern undefined4 *DAT_005f5b5c;
extern undefined DAT_005f5b60;
extern uint *DAT_005f5b94;
extern undefined4 DAT_005f5b98;
extern undefined4 *DAT_005f5b9c;
extern undefined4 DAT_005f5ba0;
extern char s_N_ArrowB_00_005f5b30[];
extern char s_N_ArrowL_00_005f5b3c[];
extern char s_N_ArrowR_00_005f5b48[];
extern char s_N_ArrowT_00_005f5b20[];
extern char s_TagMiniGameTowerStart_005f5b7c[];

// USA 005F5A5C <- EU 005F5A34 (Ghidra, non-matching)
// GLOBAL DAT_005f5b14 undefined4 *
// GLOBAL DAT_005f5b18 undefined4 *
// GLOBAL DAT_005f5b1c undefined4 *
// GLOBAL DAT_005f5b2c undefined4
// GLOBAL DAT_005f5b54 undefined4
// GLOBAL DAT_005f5b58 undefined4
// GLOBAL DAT_005f5b5c undefined4 *
// GLOBAL DAT_005f5b60 undefined
// GLOBAL DAT_005f5b94 uint *
// GLOBAL DAT_005f5b98 undefined4
// GLOBAL DAT_005f5b9c undefined4 *
// GLOBAL DAT_005f5ba0 undefined4
// GLOBAL s_N_ArrowB_00_005f5b30 string
// GLOBAL s_N_ArrowL_00_005f5b3c string
// GLOBAL s_N_ArrowR_00_005f5b48 string
// GLOBAL s_N_ArrowT_00_005f5b20 string
// GLOBAL s_TagMiniGameTowerStart_005f5b7c string

undefined8 func_005F5A5C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005f5b14;
  *DAT_005f5b14 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005f5b2c;
  puVar1 = DAT_005f5b18;
  *DAT_005f5b18 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f5b1c;
  DAT_005f5b1c[1] = s_N_ArrowT_00_005f5b20;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005f5b30;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005f5b3c;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005f5b48;
  puVar1 = DAT_005f5b5c;
  puVar3 = DAT_005f5b5c + 3;
  *DAT_005f5b5c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005f5b60;
  uStack_10 = local_18;
  local_c = s_TagMiniGameTowerStart_005f5b7c;
  uVar2 = func_0019B51C(DAT_005f5b9c,DAT_005f5b98,*DAT_005f5b94,(int)&uStack_10,DAT_005f5b5c,
                        &local_18,0);
  return CONCAT44(DAT_005f5ba0,uVar2);
}

