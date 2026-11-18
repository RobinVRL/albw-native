#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a9810;
extern int *DAT_005a9814;
extern int DAT_005a9820;
extern undefined DAT_005a9824;
extern undefined DAT_005a9848;
extern undefined4 DAT_005a9850;
extern undefined4 DAT_005a9854;
extern undefined4 *DAT_005a9858;
extern undefined4 DAT_005a985c;
extern undefined4 DAT_005a9860;
extern undefined4 DAT_005a9864;
extern undefined4 *DAT_005a9870;
extern undefined4 DAT_005a9874;
extern undefined4 *DAT_005a9878;
extern undefined DAT_005a987c;
extern int DAT_005a9894;
extern uint *DAT_005a9898;
extern undefined4 DAT_005a989c;
extern undefined4 *DAT_005a98a0;
extern undefined4 DAT_005a98a4;
extern char s_Clione_005a9868[];
extern char s_EnemyClione_005a9888[];
extern char s_appear_005a9818[];
extern char s_bomb_end_005a9834[];
extern char s_bomb_st_005a982c[];
extern char s_damage_005a9840[];

// USA 005A96C4 <- EU 005A969C (Ghidra, non-matching)
// GLOBAL DAT_005a9810 int *
// GLOBAL DAT_005a9814 int *
// GLOBAL DAT_005a9820 int
// GLOBAL DAT_005a9824 undefined
// GLOBAL DAT_005a9848 undefined
// GLOBAL DAT_005a9850 undefined4
// GLOBAL DAT_005a9854 undefined4
// GLOBAL DAT_005a9858 undefined4 *
// GLOBAL DAT_005a985c undefined4
// GLOBAL DAT_005a9860 undefined4
// GLOBAL DAT_005a9864 undefined4
// GLOBAL DAT_005a9870 undefined4 *
// GLOBAL DAT_005a9874 undefined4
// GLOBAL DAT_005a9878 undefined4 *
// GLOBAL DAT_005a987c undefined
// GLOBAL DAT_005a9894 int
// GLOBAL DAT_005a9898 uint *
// GLOBAL DAT_005a989c undefined4
// GLOBAL DAT_005a98a0 undefined4 *
// GLOBAL DAT_005a98a4 undefined4
// GLOBAL s_Clione_005a9868 string
// GLOBAL s_EnemyClione_005a9888 string
// GLOBAL s_appear_005a9818 string
// GLOBAL s_bomb_end_005a9834 string
// GLOBAL s_bomb_st_005a982c string
// GLOBAL s_damage_005a9840 string

undefined8 func_005A96C4(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 *)(albw_frame + 0x0))
  #define local_2f (*(undefined1 *)(albw_frame + 0x1))
  #define local_2e (*(undefined1 *)(albw_frame + 0x2))
  #define local_2d (*(undefined1 *)(albw_frame + 0x3))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a9810;
  DAT_005a9810[2] = -1;
  piVar1[3] = -1;
  iVar6 = DAT_005a9820;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005a9814;
  DAT_005a9814[1] = (int)s_appear_005a9818;
  *piVar2 = iVar6;
  piVar2[3] = (int)&DAT_005a9824;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_bomb_st_005a982c;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_bomb_end_005a9834;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_damage_005a9840;
  piVar2[8] = iVar6;
  piVar2[10] = iVar6;
  piVar2[0xb] = (int)&DAT_005a9848;
  uVar4 = DAT_005a9864;
  uVar5 = DAT_005a9860;
  puVar3 = DAT_005a9858;
  *DAT_005a9858 = DAT_005a985c;
  puVar3[1] = uVar5;
  puVar3[2] = uVar4;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2c = 0xff;
  local_24 = s_Clione_005a9868;
  local_2d = 0xff;
  local_28 = iVar6;
  func_004FC5F8(DAT_005a9870,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005a9878;
  DAT_005a9878[2] = DAT_005a9878 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_20 = iVar6;
  puStack_1c = &DAT_005a987c;
  iStack_18 = iVar6;
  local_14 = s_EnemyClione_005a9888;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005a9894;
  }
  uVar5 = func_0019B51C(DAT_005a98a0,DAT_005a989c,*DAT_005a9898,(int)&iStack_18,DAT_005a9878,
                        &local_20,iVar6);
  return CONCAT44(DAT_005a98a4,uVar5);
}

