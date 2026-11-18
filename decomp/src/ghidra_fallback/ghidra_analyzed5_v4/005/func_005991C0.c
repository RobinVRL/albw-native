#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_00599328;
extern undefined4 *DAT_0059932c;
extern undefined4 *DAT_00599330;
extern undefined DAT_00599334;
extern undefined4 DAT_00599340;
extern uint *DAT_00599354;
extern undefined4 DAT_00599358;
extern undefined4 *DAT_0059935c;
extern undefined4 DAT_00599360;
extern undefined4 DAT_00599364;
extern undefined4 *DAT_00599368;
extern undefined DAT_0059936c;
extern uint *DAT_00599388;
extern undefined4 DAT_0059938c;
extern undefined4 *DAT_00599390;
extern undefined4 *DAT_00599394;
extern undefined DAT_00599398;
extern uint *DAT_005993b4;
extern undefined4 DAT_005993b8;
extern undefined4 *DAT_005993bc;
extern undefined4 *DAT_005993c0;
extern uint DAT_005993d0;
extern char s_MojTombBoneA_00599378[];
extern char s_MojTombNormal_00599344[];
extern char s_MojTombStairs_005993a4[];
extern char s_TombOpen_005993c4[];

// USA 005991C0 <- EU 00599198 (Ghidra, non-matching)
// GLOBAL DAT_00599328 undefined4 *
// GLOBAL DAT_0059932c undefined4 *
// GLOBAL DAT_00599330 undefined4 *
// GLOBAL DAT_00599334 undefined
// GLOBAL DAT_00599340 undefined4
// GLOBAL DAT_00599354 uint *
// GLOBAL DAT_00599358 undefined4
// GLOBAL DAT_0059935c undefined4 *
// GLOBAL DAT_00599360 undefined4
// GLOBAL DAT_00599364 undefined4
// GLOBAL DAT_00599368 undefined4 *
// GLOBAL DAT_0059936c undefined
// GLOBAL DAT_00599388 uint *
// GLOBAL DAT_0059938c undefined4
// GLOBAL DAT_00599390 undefined4 *
// GLOBAL DAT_00599394 undefined4 *
// GLOBAL DAT_00599398 undefined
// GLOBAL DAT_005993b4 uint *
// GLOBAL DAT_005993b8 undefined4
// GLOBAL DAT_005993bc undefined4 *
// GLOBAL DAT_005993c0 undefined4 *
// GLOBAL DAT_005993d0 uint
// GLOBAL s_MojTombBoneA_00599378 string
// GLOBAL s_MojTombNormal_00599344 string
// GLOBAL s_MojTombStairs_005993a4 string
// GLOBAL s_TombOpen_005993c4 string

longlong func_005991C0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_00599328;
  *DAT_00599328 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059932c;
  *DAT_0059932c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_00599340;
  puVar1 = DAT_00599330;
  puVar3 = DAT_00599330 + 3;
  DAT_00599330[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_00599334;
  local_3c = s_MojTombNormal_00599344;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_0059935c,DAT_00599358,*DAT_00599354,(int)&local_40,DAT_00599330,&local_38,0);
  puVar1 = DAT_00599368;
  puVar3 = DAT_00599368 + 3;
  DAT_00599368[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_0059936c;
  local_2c = s_MojTombBoneA_00599378;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_00599390,DAT_0059938c,*DAT_00599388,(int)&local_30,DAT_00599368,&local_28,0);
  puVar1 = DAT_00599394;
  puVar3 = DAT_00599394 + 3;
  DAT_00599394[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_00599398;
  local_1c = s_MojTombStairs_005993a4;
  local_18 = uVar2;
  local_20 = uVar2;
  func_0019B51C(DAT_005993bc,DAT_005993b8,*DAT_005993b4,(int)&local_20,DAT_00599394,&local_18,0);
  puVar1 = DAT_005993c0;
  DAT_005993c0[1] = s_TombOpen_005993c4;
  *puVar1 = uVar2;
  return (ulonglong)DAT_005993d0 << 0x20;
}

