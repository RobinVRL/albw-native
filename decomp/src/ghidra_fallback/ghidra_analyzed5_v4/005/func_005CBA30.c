#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cbb20;
extern undefined4 *DAT_005cbb24;
extern undefined DAT_005cbb28;
extern undefined4 DAT_005cbb40;
extern uint *DAT_005cbb54;
extern undefined4 DAT_005cbb58;
extern undefined4 *DAT_005cbb5c;
extern undefined4 DAT_005cbb60;
extern uint DAT_005cbb64;
extern undefined4 *DAT_005cbb68;
extern undefined DAT_005cbb6c;
extern uint *DAT_005cbb88;
extern undefined4 DAT_005cbb8c;
extern undefined4 *DAT_005cbb90;
extern uint DAT_005cbb94;
extern char s_AreaChangeScene_005cbb44[];
extern char s_AreaLoad_005cbb7c[];

// USA 005CBA30 <- EU 005CBA08 (Ghidra, non-matching)
// GLOBAL DAT_005cbb20 undefined4 *
// GLOBAL DAT_005cbb24 undefined4 *
// GLOBAL DAT_005cbb28 undefined
// GLOBAL DAT_005cbb40 undefined4
// GLOBAL DAT_005cbb54 uint *
// GLOBAL DAT_005cbb58 undefined4
// GLOBAL DAT_005cbb5c undefined4 *
// GLOBAL DAT_005cbb60 undefined4
// GLOBAL DAT_005cbb64 uint
// GLOBAL DAT_005cbb68 undefined4 *
// GLOBAL DAT_005cbb6c undefined
// GLOBAL DAT_005cbb88 uint *
// GLOBAL DAT_005cbb8c undefined4
// GLOBAL DAT_005cbb90 undefined4 *
// GLOBAL DAT_005cbb94 uint
// GLOBAL s_AreaChangeScene_005cbb44 string
// GLOBAL s_AreaLoad_005cbb7c string

void func_005CBA30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005cbb20;
  DAT_005cbb20[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar3 = DAT_005cbb40;
  puVar2 = DAT_005cbb24;
  puVar4 = DAT_005cbb24 + 3;
  DAT_005cbb24[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_005cbb28;
  local_2c = s_AreaChangeScene_005cbb44;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_005cbb5c,DAT_005cbb58,*DAT_005cbb54,(int)&local_30,DAT_005cbb24,&local_28,0);
  puVar2 = DAT_005cbb68;
  DAT_005cbb68[2] = DAT_005cbb68 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005cbb6c;
  local_1c = s_AreaLoad_005cbb7c;
  local_18 = uVar3;
  local_20 = uVar3;
  func_0019B51C(DAT_005cbb90,DAT_005cbb8c,*DAT_005cbb88,(int)&local_20,DAT_005cbb68,&local_18,0);
  uVar5 = func_00114608(DAT_005cbb94,DAT_005cbb64);
  *puVar1 = (int)uVar5;
  return;
}

