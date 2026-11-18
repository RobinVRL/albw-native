#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059ef7c;
extern undefined4 *DAT_0059ef80;
extern undefined4 *DAT_0059ef84;
extern undefined4 DAT_0059ef94;
extern undefined4 DAT_0059efbc;
extern undefined4 DAT_0059efc0;
extern undefined4 *DAT_0059efc4;
extern undefined DAT_0059efc8;
extern undefined4 DAT_0059efec;
extern undefined4 *DAT_0059eff0;
extern uint DAT_0059eff4;
extern uint DAT_0059eff8;
extern undefined4 DAT_0059effc;
extern undefined4 *DAT_0059f000;
extern undefined4 DAT_0059f004;
extern undefined4 DAT_0059f008;
extern uint DAT_0059f00c;
extern uint DAT_0059f010;
extern uint DAT_0059f014;
extern uint DAT_0059f018;
extern undefined4 *DAT_0059f01c;
extern undefined4 DAT_0059f020;
extern undefined4 DAT_0059f024;
extern undefined4 DAT_0059f028;
extern undefined DAT_0059f02c;
extern undefined4 DAT_0059f04c;
extern uint *DAT_0059f050;
extern undefined4 DAT_0059f054;
extern undefined4 *DAT_0059f058;
extern undefined4 DAT_0059f05c;
extern char s_N_ArrowB_00_0059ef98[];
extern char s_N_ArrowL_00_0059efa4[];
extern char s_N_ArrowR_00_0059efb0[];
extern char s_N_ArrowT_00_0059ef88[];
extern char s_ObjMaple_0059f040[];
extern char s_fly_talk_0059efcc[];
extern char s_fly_wait_0059efd8[];
extern char s_lower_0059efe4[];

// USA 0059ED90 <- EU 0059ED68 (Ghidra, non-matching)
// GLOBAL DAT_0059ef7c undefined4 *
// GLOBAL DAT_0059ef80 undefined4 *
// GLOBAL DAT_0059ef84 undefined4 *
// GLOBAL DAT_0059ef94 undefined4
// GLOBAL DAT_0059efbc undefined4
// GLOBAL DAT_0059efc0 undefined4
// GLOBAL DAT_0059efc4 undefined4 *
// GLOBAL DAT_0059efc8 undefined
// GLOBAL DAT_0059efec undefined4
// GLOBAL DAT_0059eff0 undefined4 *
// GLOBAL DAT_0059eff4 uint
// GLOBAL DAT_0059eff8 uint
// GLOBAL DAT_0059effc undefined4
// GLOBAL DAT_0059f000 undefined4 *
// GLOBAL DAT_0059f004 undefined4
// GLOBAL DAT_0059f008 undefined4
// GLOBAL DAT_0059f00c uint
// GLOBAL DAT_0059f010 uint
// GLOBAL DAT_0059f014 uint
// GLOBAL DAT_0059f018 uint
// GLOBAL DAT_0059f01c undefined4 *
// GLOBAL DAT_0059f020 undefined4
// GLOBAL DAT_0059f024 undefined4
// GLOBAL DAT_0059f028 undefined4
// GLOBAL DAT_0059f02c undefined
// GLOBAL DAT_0059f04c undefined4
// GLOBAL DAT_0059f050 uint *
// GLOBAL DAT_0059f054 undefined4
// GLOBAL DAT_0059f058 undefined4 *
// GLOBAL DAT_0059f05c undefined4
// GLOBAL s_N_ArrowB_00_0059ef98 string
// GLOBAL s_N_ArrowL_00_0059efa4 string
// GLOBAL s_N_ArrowR_00_0059efb0 string
// GLOBAL s_N_ArrowT_00_0059ef88 string
// GLOBAL s_ObjMaple_0059f040 string
// GLOBAL s_fly_talk_0059efcc string
// GLOBAL s_fly_wait_0059efd8 string
// GLOBAL s_lower_0059efe4 string

undefined8 func_0059ED90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_0059ef7c;
  DAT_0059ef7c[8] = 0xffffffff;
  puVar1[9] = 0xffffffff;
  uVar5 = DAT_0059ef94;
  puVar1 = DAT_0059ef80;
  *DAT_0059ef80 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059ef84;
  DAT_0059ef84[1] = s_N_ArrowT_00_0059ef88;
  *puVar1 = uVar5;
  puVar1[3] = s_N_ArrowB_00_0059ef98;
  puVar1[2] = uVar5;
  puVar1[5] = s_N_ArrowL_00_0059efa4;
  puVar1[4] = uVar5;
  puVar1[6] = uVar5;
  puVar1[7] = s_N_ArrowR_00_0059efb0;
  puVar1 = DAT_0059efc4;
  DAT_0059efc4[1] = &DAT_0059efc8;
  *puVar1 = uVar5;
  puVar1[3] = s_fly_talk_0059efcc;
  puVar1[2] = uVar5;
  puVar1[5] = s_fly_wait_0059efd8;
  puVar1[4] = uVar5;
  puVar1[6] = uVar5;
  puVar1[7] = s_lower_0059efe4;
  puVar1 = DAT_0059eff0;
  DAT_0059eff0[1] = s_fly_wait_0059efd8;
  *puVar1 = uVar5;
  puVar1[2] = uVar5;
  puVar1[3] = s_lower_0059efe4;
  puVar1 = DAT_0059ef7c;
  uVar7 = func_00114608(DAT_0059eff8,DAT_0059eff4);
  *puVar1 = (int)uVar7;
  uVar4 = DAT_0059f008;
  uVar3 = DAT_0059f004;
  puVar2 = DAT_0059f000;
  uVar6 = DAT_0059effc;
  DAT_0059f000[2] = DAT_0059effc;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar7 = func_00114608(DAT_0059f00c,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[1] = (int)uVar7;
  uVar7 = func_00114608(DAT_0059f010,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[2] = (int)uVar7;
  puVar1[3] = (int)uVar7;
  uVar7 = func_00114608(DAT_0059f014,(uint)(puVar1 + 3));
  puVar1[4] = (int)uVar7;
  uVar7 = func_00114608(0xce000000,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[5] = (int)uVar7;
  uVar7 = func_00114608(0,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[6] = (int)uVar7;
  uVar7 = func_00114608(DAT_0059f018,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[7] = (int)uVar7;
  uVar4 = DAT_0059f028;
  uVar3 = DAT_0059f020;
  puVar1 = DAT_0059f01c;
  *DAT_0059f01c = uVar6;
  puVar1[1] = uVar3;
  puVar1[2] = uVar6;
  uVar3 = DAT_0059f024;
  puVar1[5] = uVar6;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[-0xb1] = 0;
  puVar1[-0xb0] = 5;
  puVar1[-0xaf] = puVar1 + -0xae;
  local_28 = uVar5;
  puStack_24 = &DAT_0059f02c;
  uStack_20 = uVar5;
  local_1c = s_ObjMaple_0059f040;
  uVar5 = func_0019B51C(DAT_0059f058,DAT_0059f054,*DAT_0059f050,(int)&uStack_20,DAT_0059f04c,
                        &local_28,0);
  return CONCAT44(DAT_0059f05c,uVar5);
}

