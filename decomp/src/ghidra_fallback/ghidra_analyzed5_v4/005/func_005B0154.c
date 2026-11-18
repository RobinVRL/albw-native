#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b0328;
extern int *DAT_005b032c;
extern undefined DAT_005b0330;
extern int DAT_005b0338;
extern undefined DAT_005b033c;
extern undefined DAT_005b0344;
extern undefined4 DAT_005b039c;
extern uint DAT_005b03a0;
extern uint DAT_005b03a4;
extern uint DAT_005b03a8;
extern uint DAT_005b03ac;
extern uint DAT_005b03b0;
extern undefined DAT_005b03b4;
extern undefined4 *DAT_005b03c0;
extern undefined4 DAT_005b03c4;
extern undefined4 *DAT_005b03c8;
extern undefined DAT_005b03cc;
extern int DAT_005b03ec;
extern uint *DAT_005b03f0;
extern undefined4 DAT_005b03f4;
extern undefined4 *DAT_005b03f8;
extern undefined4 DAT_005b03fc;
extern char s_6LHipLoop_005b03b6[];
extern char s_EnemyHipLoop_005b03dc[];
extern char s_approach_005b0390[];
extern char s_crash_005b0358[];
extern char s_damage_005b0360[];
extern char s_dead_ed_005b0370[];
extern char s_dead_st_005b0368[];
extern char s_guard_005b0350[];
extern char s_jitabata_005b0384[];
extern char s_piyopiyo_005b0378[];
extern char s_shock_005b0348[];
extern undefined4 _DAT_005b03b4;

// USA 005B0154 <- EU 005B012C (Ghidra, non-matching)
// GLOBAL DAT_005b0328 int *
// GLOBAL DAT_005b032c int *
// GLOBAL DAT_005b0330 undefined
// GLOBAL DAT_005b0338 int
// GLOBAL DAT_005b033c undefined
// GLOBAL DAT_005b0344 undefined
// GLOBAL DAT_005b039c undefined4
// GLOBAL DAT_005b03a0 uint
// GLOBAL DAT_005b03a4 uint
// GLOBAL DAT_005b03a8 uint
// GLOBAL DAT_005b03ac uint
// GLOBAL DAT_005b03b0 uint
// GLOBAL DAT_005b03b4 undefined
// GLOBAL DAT_005b03c0 undefined4 *
// GLOBAL DAT_005b03c4 undefined4
// GLOBAL DAT_005b03c8 undefined4 *
// GLOBAL DAT_005b03cc undefined
// GLOBAL DAT_005b03ec int
// GLOBAL DAT_005b03f0 uint *
// GLOBAL DAT_005b03f4 undefined4
// GLOBAL DAT_005b03f8 undefined4 *
// GLOBAL DAT_005b03fc undefined4
// GLOBAL s_6LHipLoop_005b03b6 string
// GLOBAL s_EnemyHipLoop_005b03dc string
// GLOBAL s_approach_005b0390 string
// GLOBAL s_crash_005b0358 string
// GLOBAL s_damage_005b0360 string
// GLOBAL s_dead_ed_005b0370 string
// GLOBAL s_dead_st_005b0368 string
// GLOBAL s_guard_005b0350 string
// GLOBAL s_jitabata_005b0384 string
// GLOBAL s_piyopiyo_005b0378 string
// GLOBAL s_shock_005b0348 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 func_005B0154(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 *)(albw_frame + 0x0))
  #define local_2f (*(undefined1 *)(albw_frame + 0x1))
  #define local_2e (*(undefined1 *)(albw_frame + 0x2))
  #define local_2d (*(undefined1 *)(albw_frame + 0x3))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005b0328;
  DAT_005b0328[8] = -1;
  piVar1[9] = -1;
  iVar5 = DAT_005b0338;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar2 = DAT_005b032c;
  DAT_005b032c[1] = (int)&DAT_005b0330;
  *piVar2 = iVar5;
  piVar2[3] = (int)&DAT_005b033c;
  piVar2[2] = iVar5;
  piVar2[5] = (int)&DAT_005b0344;
  piVar2[4] = iVar5;
  piVar2[7] = (int)s_shock_005b0348;
  piVar2[6] = iVar5;
  piVar2[9] = (int)s_guard_005b0350;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_crash_005b0358;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_damage_005b0360;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_dead_st_005b0368;
  piVar2[0xe] = iVar5;
  piVar2[0x11] = (int)s_dead_ed_005b0370;
  piVar2[0x10] = iVar5;
  piVar2[0x13] = (int)s_piyopiyo_005b0378;
  piVar2[0x12] = iVar5;
  piVar2[0x15] = (int)s_jitabata_005b0384;
  piVar2[0x14] = iVar5;
  piVar2[0x16] = iVar5;
  piVar2[0x17] = (int)s_approach_005b0390;
  uVar7 = func_00114608(DAT_005b03a4,DAT_005b03a0);
  piVar1[1] = (int)uVar7;
  uVar7 = func_00114608(DAT_005b03a8,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[2] = (int)uVar7;
  uVar7 = func_00114608(DAT_005b03ac,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[3] = (int)uVar7;
  piVar1[4] = (int)uVar7;
  uVar7 = func_00114608(DAT_005b03b0,(uint)(piVar1 + 4));
  piVar1[5] = (int)uVar7;
  uVar7 = func_00114608(_DAT_005b03b4,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[6] = (int)uVar7;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2c = 0xff;
  local_24 = s_6LHipLoop_005b03b6 + 2;
  local_2d = 0xff;
  local_28 = iVar5;
  func_004FC5F8(DAT_005b03c0,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005b03c8;
  puVar6 = DAT_005b03c8 + 3;
  DAT_005b03c8[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005b03cc;
  local_18 = iVar5;
  local_1c = s_EnemyHipLoop_005b03dc;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005b03ec;
  }
  uVar4 = func_0019B51C(DAT_005b03f8,DAT_005b03f4,*DAT_005b03f0,(int)&local_20,DAT_005b03c8,
                        &local_18,iVar5);
  return CONCAT44(DAT_005b03fc,uVar4);
}

