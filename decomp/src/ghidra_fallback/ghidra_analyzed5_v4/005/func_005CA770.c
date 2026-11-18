#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca7dc;
extern undefined4 *DAT_005ca7e0;
extern undefined4 *DAT_005ca7e4;
extern undefined DAT_005ca7e8;
extern undefined4 DAT_005ca7fc;
extern uint *DAT_005ca810;
extern undefined4 DAT_005ca814;
extern undefined4 *DAT_005ca818;
extern undefined4 DAT_005ca81c;
extern undefined4 DAT_005ca820;
extern char s_TagSwitchPause_005ca800[];

// USA 005CA770 <- EU 005CA748 (Ghidra, non-matching)
// GLOBAL DAT_005ca7dc undefined4 *
// GLOBAL DAT_005ca7e0 undefined4 *
// GLOBAL DAT_005ca7e4 undefined4 *
// GLOBAL DAT_005ca7e8 undefined
// GLOBAL DAT_005ca7fc undefined4
// GLOBAL DAT_005ca810 uint *
// GLOBAL DAT_005ca814 undefined4
// GLOBAL DAT_005ca818 undefined4 *
// GLOBAL DAT_005ca81c undefined4
// GLOBAL DAT_005ca820 undefined4
// GLOBAL s_TagSwitchPause_005ca800 string

undefined8 func_005CA770(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca7dc;
  *DAT_005ca7dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca7e0;
  *DAT_005ca7e0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca7e4;
  puVar3 = DAT_005ca7e4 + 3;
  *DAT_005ca7e4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca7fc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca7e8;
  local_18 = local_10;
  local_14 = s_TagSwitchPause_005ca800;
  uVar2 = func_0019B51C(DAT_005ca818,DAT_005ca814,*DAT_005ca810,(int)&local_18,DAT_005ca7e4,
                        &local_10,0);
  return CONCAT44(DAT_005ca820,uVar2);
}

