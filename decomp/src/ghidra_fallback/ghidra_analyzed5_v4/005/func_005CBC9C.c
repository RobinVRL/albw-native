#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cbd1c;
extern undefined4 *DAT_005cbd20;
extern undefined4 *DAT_005cbd24;
extern undefined DAT_005cbd28;
extern undefined4 DAT_005cbd3c;
extern uint *DAT_005cbd50;
extern undefined4 DAT_005cbd54;
extern undefined4 *DAT_005cbd58;
extern undefined4 DAT_005cbd5c;
extern undefined4 DAT_005cbd60;
extern undefined4 DAT_005cbd64;
extern undefined4 *DAT_005cbd68;
extern char s_AreaGroundColor_005cbd40[];

// USA 005CBC9C <- EU 005CBC74 (Ghidra, non-matching)
// GLOBAL DAT_005cbd1c undefined4 *
// GLOBAL DAT_005cbd20 undefined4 *
// GLOBAL DAT_005cbd24 undefined4 *
// GLOBAL DAT_005cbd28 undefined
// GLOBAL DAT_005cbd3c undefined4
// GLOBAL DAT_005cbd50 uint *
// GLOBAL DAT_005cbd54 undefined4
// GLOBAL DAT_005cbd58 undefined4 *
// GLOBAL DAT_005cbd5c undefined4
// GLOBAL DAT_005cbd60 undefined4
// GLOBAL DAT_005cbd64 undefined4
// GLOBAL DAT_005cbd68 undefined4 *
// GLOBAL s_AreaGroundColor_005cbd40 string

void func_005CBC9C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005cbd1c;
  *DAT_005cbd1c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbd20;
  *DAT_005cbd20 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cbd24;
  puVar3 = DAT_005cbd24 + 3;
  *DAT_005cbd24 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005cbd3c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005cbd28;
  local_18 = local_10;
  local_14 = s_AreaGroundColor_005cbd40;
  func_0019B51C(DAT_005cbd58,DAT_005cbd54,*DAT_005cbd50,(int)&local_18,DAT_005cbd24,&local_10,0);
  puVar1 = DAT_005cbd68;
  uVar2 = DAT_005cbd64;
  *DAT_005cbd68 = DAT_005cbd64;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  return;
}

