#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce7c4;
extern undefined4 *DAT_005ce7c8;
extern undefined4 DAT_005ce7dc;
extern undefined4 DAT_005ce7e0;
extern undefined4 DAT_005ce7e4;
extern undefined4 *DAT_005ce7e8;
extern undefined DAT_005ce7ec;
extern uint *DAT_005ce810;
extern undefined4 DAT_005ce814;
extern undefined4 *DAT_005ce818;
extern undefined4 DAT_005ce81c;
extern char s_MojSwitchTongue_005ce800[];
extern char s_SwitchTongue_005ce7cc[];

// USA 005CE730 <- EU 005CE708 (Ghidra, non-matching)
// GLOBAL DAT_005ce7c4 undefined4 *
// GLOBAL DAT_005ce7c8 undefined4 *
// GLOBAL DAT_005ce7dc undefined4
// GLOBAL DAT_005ce7e0 undefined4
// GLOBAL DAT_005ce7e4 undefined4
// GLOBAL DAT_005ce7e8 undefined4 *
// GLOBAL DAT_005ce7ec undefined
// GLOBAL DAT_005ce810 uint *
// GLOBAL DAT_005ce814 undefined4
// GLOBAL DAT_005ce818 undefined4 *
// GLOBAL DAT_005ce81c undefined4
// GLOBAL s_MojSwitchTongue_005ce800 string
// GLOBAL s_SwitchTongue_005ce7cc string

undefined8 func_005CE730(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce7c4;
  *DAT_005ce7c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ce7dc;
  puVar1 = DAT_005ce7c8;
  *DAT_005ce7c8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_SwitchTongue_005ce7cc;
  puVar1[2] = local_18;
  puVar1 = DAT_005ce7e8;
  puVar3 = DAT_005ce7e8 + 3;
  *DAT_005ce7e8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ce7ec;
  uStack_10 = local_18;
  local_c = s_MojSwitchTongue_005ce800;
  uVar2 = func_0019B51C(DAT_005ce818,DAT_005ce814,*DAT_005ce810,(int)&uStack_10,DAT_005ce7e8,
                        &local_18,0);
  return CONCAT44(DAT_005ce81c,uVar2);
}

