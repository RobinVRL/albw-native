#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ea760;
extern undefined4 *DAT_005ea764;
extern undefined4 *DAT_005ea768;
extern undefined DAT_005ea76c;
extern undefined4 DAT_005ea780;
extern uint *DAT_005ea798;
extern undefined4 DAT_005ea79c;
extern undefined4 *DAT_005ea7a0;
extern undefined4 DAT_005ea7a4;
extern undefined4 DAT_005ea7a8;
extern undefined4 DAT_005ea7ac;
extern undefined4 *DAT_005ea7b0;
extern char s_ObjStopGoroNeedle_005ea784[];

// USA 005EA6D0 <- EU 005EA6A8 (Ghidra, non-matching)
// GLOBAL DAT_005ea760 undefined4 *
// GLOBAL DAT_005ea764 undefined4 *
// GLOBAL DAT_005ea768 undefined4 *
// GLOBAL DAT_005ea76c undefined
// GLOBAL DAT_005ea780 undefined4
// GLOBAL DAT_005ea798 uint *
// GLOBAL DAT_005ea79c undefined4
// GLOBAL DAT_005ea7a0 undefined4 *
// GLOBAL DAT_005ea7a4 undefined4
// GLOBAL DAT_005ea7a8 undefined4
// GLOBAL DAT_005ea7ac undefined4
// GLOBAL DAT_005ea7b0 undefined4 *
// GLOBAL s_ObjStopGoroNeedle_005ea784 string

void func_005EA6D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ea760;
  *DAT_005ea760 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea764;
  *DAT_005ea764 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ea768;
  puVar3 = DAT_005ea768 + 3;
  *DAT_005ea768 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ea780;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ea76c;
  local_18 = local_10;
  local_14 = s_ObjStopGoroNeedle_005ea784;
  func_0019B51C(DAT_005ea7a0,DAT_005ea79c,*DAT_005ea798,(int)&local_18,DAT_005ea768,&local_10,0);
  puVar1 = DAT_005ea7b0;
  uVar2 = DAT_005ea7ac;
  *DAT_005ea7b0 = DAT_005ea7ac;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  puVar1[4] = uVar2;
  puVar1[2] = uVar2;
  puVar1[5] = uVar2;
  return;
}

