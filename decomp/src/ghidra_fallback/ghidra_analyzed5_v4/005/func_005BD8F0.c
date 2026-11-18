#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bd95c;
extern undefined4 *DAT_005bd960;
extern undefined4 *DAT_005bd964;
extern undefined DAT_005bd968;
extern undefined4 DAT_005bd97c;
extern uint *DAT_005bd990;
extern undefined4 DAT_005bd994;
extern undefined4 *DAT_005bd998;
extern undefined4 DAT_005bd99c;
extern undefined4 DAT_005bd9a0;
extern char s_MapPartsFixed_005bd980[];

// USA 005BD8F0 <- EU 005BD8C8 (Ghidra, non-matching)
// GLOBAL DAT_005bd95c undefined4 *
// GLOBAL DAT_005bd960 undefined4 *
// GLOBAL DAT_005bd964 undefined4 *
// GLOBAL DAT_005bd968 undefined
// GLOBAL DAT_005bd97c undefined4
// GLOBAL DAT_005bd990 uint *
// GLOBAL DAT_005bd994 undefined4
// GLOBAL DAT_005bd998 undefined4 *
// GLOBAL DAT_005bd99c undefined4
// GLOBAL DAT_005bd9a0 undefined4
// GLOBAL s_MapPartsFixed_005bd980 string

undefined8 func_005BD8F0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bd95c;
  *DAT_005bd95c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bd960;
  *DAT_005bd960 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bd964;
  puVar3 = DAT_005bd964 + 3;
  *DAT_005bd964 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005bd97c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005bd968;
  local_18 = local_10;
  local_14 = s_MapPartsFixed_005bd980;
  uVar2 = func_0019B51C(DAT_005bd998,DAT_005bd994,*DAT_005bd990,(int)&local_18,DAT_005bd964,
                        &local_10,0);
  return CONCAT44(DAT_005bd9a0,uVar2);
}

