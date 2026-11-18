#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cce08;
extern int *DAT_005cce0c;
extern undefined DAT_005cce10;
extern int DAT_005cce18;
extern undefined DAT_005cce58;
extern undefined4 DAT_005cce60;
extern uint DAT_005cce64;
extern uint DAT_005cce68;
extern undefined4 *DAT_005cce74;
extern undefined4 DAT_005cce78;
extern undefined4 *DAT_005cce7c;
extern undefined DAT_005cce80;
extern int DAT_005ccea0;
extern uint *DAT_005ccea4;
extern undefined4 DAT_005ccea8;
extern undefined4 *DAT_005cceac;
extern undefined4 DAT_005cceb0;
extern char s_EnemyJellyGiibo_005cce90[];
extern char s_Giibo_005cce6c[];
extern char s_damage_005cce38[];
extern char s_division_005cce1c[];
extern char s_jitabata_005cce40[];
extern char s_piyopiyo_005cce4c[];
extern char s_rebound_005cce30[];
extern char s_union_005cce28[];

// USA 005CCCAC <- EU 005CCC84 (Ghidra, non-matching)
// GLOBAL DAT_005cce08 int *
// GLOBAL DAT_005cce0c int *
// GLOBAL DAT_005cce10 undefined
// GLOBAL DAT_005cce18 int
// GLOBAL DAT_005cce58 undefined
// GLOBAL DAT_005cce60 undefined4
// GLOBAL DAT_005cce64 uint
// GLOBAL DAT_005cce68 uint
// GLOBAL DAT_005cce74 undefined4 *
// GLOBAL DAT_005cce78 undefined4
// GLOBAL DAT_005cce7c undefined4 *
// GLOBAL DAT_005cce80 undefined
// GLOBAL DAT_005ccea0 int
// GLOBAL DAT_005ccea4 uint *
// GLOBAL DAT_005ccea8 undefined4
// GLOBAL DAT_005cceac undefined4 *
// GLOBAL DAT_005cceb0 undefined4
// GLOBAL s_EnemyJellyGiibo_005cce90 string
// GLOBAL s_Giibo_005cce6c string
// GLOBAL s_damage_005cce38 string
// GLOBAL s_division_005cce1c string
// GLOBAL s_jitabata_005cce40 string
// GLOBAL s_piyopiyo_005cce4c string
// GLOBAL s_rebound_005cce30 string
// GLOBAL s_union_005cce28 string

undefined8 func_005CCCAC(void)

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
  piVar1 = DAT_005cce08;
  DAT_005cce08[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005cce18;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005cce0c;
  DAT_005cce0c[1] = (int)&DAT_005cce10;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_division_005cce1c;
  piVar2[2] = iVar5;
  piVar2[5] = (int)s_union_005cce28;
  piVar2[4] = iVar5;
  piVar2[7] = (int)s_rebound_005cce30;
  piVar2[6] = iVar5;
  piVar2[9] = (int)s_damage_005cce38;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_jitabata_005cce40;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_piyopiyo_005cce4c;
  piVar2[0xc] = iVar5;
  piVar2[0xe] = iVar5;
  piVar2[0xf] = (int)&DAT_005cce58;
  uVar7 = func_00114608(DAT_005cce68,DAT_005cce64);
  piVar1[1] = (int)uVar7;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2c = 0xff;
  local_24 = s_Giibo_005cce6c;
  local_2d = 0xff;
  local_28 = iVar5;
  func_004FC5F8(DAT_005cce74,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005cce7c;
  puVar6 = DAT_005cce7c + 3;
  DAT_005cce7c[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005cce80;
  local_18 = iVar5;
  local_1c = s_EnemyJellyGiibo_005cce90;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005ccea0;
  }
  uVar4 = func_0019B51C(DAT_005cceac,DAT_005ccea8,*DAT_005ccea4,(int)&local_20,DAT_005cce7c,
                        &local_18,iVar5);
  return CONCAT44(DAT_005cceb0,uVar4);
}

