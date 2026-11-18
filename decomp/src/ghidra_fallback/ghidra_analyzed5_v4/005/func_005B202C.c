#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005b225c;
extern int *DAT_005b2260;
extern int DAT_005b226c;
extern undefined DAT_005b2288;
extern undefined DAT_005b2290;
extern undefined4 DAT_005b22cc;
extern undefined4 DAT_005b22d0;
extern uint DAT_005b22dc;
extern uint DAT_005b22e0;
extern undefined4 *DAT_005b22e4;
extern undefined4 DAT_005b22e8;
extern undefined4 DAT_005b22ec;
extern undefined4 DAT_005b22f0;
extern undefined4 *DAT_005b22f4;
extern undefined4 DAT_005b22f8;
extern undefined4 *DAT_005b22fc;
extern undefined DAT_005b2300;
extern int DAT_005b2320;
extern uint *DAT_005b2324;
extern undefined4 DAT_005b2328;
extern undefined4 *DAT_005b232c;
extern undefined4 DAT_005b2330;
extern undefined4 *DAT_005b2334;
extern undefined DAT_005b2338;
extern int DAT_005b2358;
extern uint *DAT_005b235c;
extern undefined4 *DAT_005b2360;
extern char s_EnemyZazakkuRed_005b2348[];
extern char s_EnemyZazakku_005b2310[];
extern char s_Zazakku_005b22d4[];
extern char s_appear_005b22bc[];
extern char s_catch_005b22c4[];
extern char s_damage_005b22a4[];
extern char s_dead_ed_005b22b4[];
extern char s_dead_st_005b22ac[];
extern char s_piyopiyo_005b2298[];
extern char s_wait0_005b2264[];
extern char s_wait1_005b2270[];
extern char s_walk0_005b2278[];
extern char s_walk1_005b2280[];

// USA 005B202C <- EU 005B2004 (Ghidra, non-matching)
// GLOBAL DAT_005b225c int *
// GLOBAL DAT_005b2260 int *
// GLOBAL DAT_005b226c int
// GLOBAL DAT_005b2288 undefined
// GLOBAL DAT_005b2290 undefined
// GLOBAL DAT_005b22cc undefined4
// GLOBAL DAT_005b22d0 undefined4
// GLOBAL DAT_005b22dc uint
// GLOBAL DAT_005b22e0 uint
// GLOBAL DAT_005b22e4 undefined4 *
// GLOBAL DAT_005b22e8 undefined4
// GLOBAL DAT_005b22ec undefined4
// GLOBAL DAT_005b22f0 undefined4
// GLOBAL DAT_005b22f4 undefined4 *
// GLOBAL DAT_005b22f8 undefined4
// GLOBAL DAT_005b22fc undefined4 *
// GLOBAL DAT_005b2300 undefined
// GLOBAL DAT_005b2320 int
// GLOBAL DAT_005b2324 uint *
// GLOBAL DAT_005b2328 undefined4
// GLOBAL DAT_005b232c undefined4 *
// GLOBAL DAT_005b2330 undefined4
// GLOBAL DAT_005b2334 undefined4 *
// GLOBAL DAT_005b2338 undefined
// GLOBAL DAT_005b2358 int
// GLOBAL DAT_005b235c uint *
// GLOBAL DAT_005b2360 undefined4 *
// GLOBAL s_EnemyZazakkuRed_005b2348 string
// GLOBAL s_EnemyZazakku_005b2310 string
// GLOBAL s_Zazakku_005b22d4 string
// GLOBAL s_appear_005b22bc string
// GLOBAL s_catch_005b22c4 string
// GLOBAL s_damage_005b22a4 string
// GLOBAL s_dead_ed_005b22b4 string
// GLOBAL s_dead_st_005b22ac string
// GLOBAL s_piyopiyo_005b2298 string
// GLOBAL s_wait0_005b2264 string
// GLOBAL s_wait1_005b2270 string
// GLOBAL s_walk0_005b2278 string
// GLOBAL s_walk1_005b2280 string

undefined8 func_005B202C(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005b225c;
  DAT_005b225c[4] = -1;
  piVar1[5] = -1;
  iVar7 = DAT_005b226c;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar2 = DAT_005b2260;
  DAT_005b2260[1] = (int)s_wait0_005b2264;
  *piVar2 = iVar7;
  piVar2[3] = (int)s_wait1_005b2270;
  piVar2[2] = iVar7;
  piVar2[5] = (int)s_walk0_005b2278;
  piVar2[4] = iVar7;
  piVar2[7] = (int)s_walk1_005b2280;
  piVar2[6] = iVar7;
  piVar2[9] = (int)&DAT_005b2288;
  piVar2[8] = iVar7;
  piVar2[0xb] = (int)&DAT_005b2290;
  piVar2[10] = iVar7;
  piVar2[0xd] = (int)s_piyopiyo_005b2298;
  piVar2[0xc] = iVar7;
  piVar2[0xf] = (int)s_damage_005b22a4;
  piVar2[0xe] = iVar7;
  piVar2[0x11] = (int)s_dead_st_005b22ac;
  piVar2[0x10] = iVar7;
  piVar2[0x13] = (int)s_dead_ed_005b22b4;
  piVar2[0x12] = iVar7;
  piVar2[0x15] = (int)s_appear_005b22bc;
  piVar2[0x14] = iVar7;
  piVar2[0x16] = iVar7;
  piVar2[0x17] = (int)s_catch_005b22c4;
  piVar1[9] = (int)s_Zazakku_005b22d4;
  piVar1[8] = iVar7;
  uVar9 = func_00114608(DAT_005b22e0,DAT_005b22dc);
  piVar1[2] = (int)uVar9;
  uVar9 = func_00114608(0x4e000000,(uint)((ulonglong)uVar9 >> 0x20));
  piVar1[3] = (int)uVar9;
  uVar4 = DAT_005b22f0;
  uVar5 = DAT_005b22ec;
  puVar3 = DAT_005b22e4;
  *DAT_005b22e4 = DAT_005b22e8;
  puVar3[1] = uVar5;
  puVar3[2] = uVar4;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005b22f4,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar3 = DAT_005b22fc;
  puVar8 = DAT_005b22fc + 3;
  DAT_005b22fc[1] = 5;
  puVar3[2] = puVar8;
  *puVar3 = 0;
  local_24 = &DAT_005b2300;
  local_28 = iVar7;
  local_2c = s_EnemyZazakku_005b2310;
  local_30 = iVar7;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005b2320;
  }
  func_0019B51C(DAT_005b232c,DAT_005b2328,*DAT_005b2324,(int)&local_30,DAT_005b22fc,&local_28,iVar6)
  ;
  puVar3 = DAT_005b2334;
  puVar8 = DAT_005b2334 + 3;
  DAT_005b2334[1] = 5;
  puVar3[2] = puVar8;
  *puVar3 = 0;
  local_14 = &DAT_005b2338;
  local_18 = iVar7;
  local_1c = s_EnemyZazakkuRed_005b2348;
  local_20 = iVar7;
  iVar7 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar7 = DAT_005b2358;
  }
  uVar5 = func_0019B51C(DAT_005b2360,DAT_005b2328,*DAT_005b235c,(int)&local_20,DAT_005b2334,
                        &local_18,iVar7);
  return CONCAT44(DAT_005b2330,uVar5);
}

