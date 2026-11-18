#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005df0a0;
extern int *DAT_005df0a4;
extern int DAT_005df0b8;
extern undefined4 DAT_005df1dc;
extern undefined4 DAT_005df1e0;
extern int *DAT_005df1e4;
extern undefined4 DAT_005df230;
extern int *DAT_005df234;
extern uint DAT_005df29c;
extern uint DAT_005df2a0;
extern uint DAT_005df2a4;
extern uint DAT_005df2a8;
extern uint DAT_005df2ac;
extern uint DAT_005df2b0;
extern undefined4 DAT_005df2b4;
extern undefined4 *DAT_005df2b8;
extern undefined DAT_005df2bc;
extern int DAT_005df2e0;
extern uint *DAT_005df2e4;
extern undefined4 DAT_005df2e8;
extern undefined4 *DAT_005df2ec;
extern undefined4 DAT_005df2f0;
extern undefined4 *DAT_005df2f4;
extern undefined DAT_005df2f8;
extern int DAT_005df3d4;
extern uint *DAT_005df3d8;
extern undefined4 DAT_005df3dc;
extern undefined4 *DAT_005df3e0;
extern undefined4 *DAT_005df3e4;
extern undefined DAT_005df3e8;
extern int DAT_005df410;
extern uint *DAT_005df414;
extern undefined4 *DAT_005df418;
extern char s_EnemyIronSoldierFire_005df3f8[];
extern char s_EnemyIronSoldierSilver_005df308[];
extern char s_EnemyIronSoldier_005df2cc[];
extern char s_Heishi1_005df1e8[];
extern char s_Heishi_great1_005df238[];
extern char s_Heishi_great_ironball_005df248[];
extern char s_Heishi_great_ironball_chain_005df260[];
extern char s_Heishi_great_ironball_handle_005df27c[];
extern char s_Heishi_ironball_005df1f0[];
extern char s_Heishi_ironball_chain_005df200[];
extern char s_Heishi_ironball_handle_005df218[];
extern char s_ironball_attack00_ed_005df150[];
extern char s_ironball_attack00_md_005df138[];
extern char s_ironball_attack00_st_005df120[];
extern char s_ironball_damge00_005df17c[];
extern char s_ironball_dead_ed00_005df1c8[];
extern char s_ironball_dead_st00_005df1b4[];
extern char s_ironball_fall00_005df190[];
extern char s_ironball_find00_005df0fc[];
extern char s_ironball_guard00_005df168[];
extern char s_ironball_kamae00_005df10c[];
extern char s_ironball_op00_005df0a8[];
extern char s_ironball_piyopiyo00_005df1a0[];
extern char s_ironball_wait00_005df0bc[];
extern char s_ironball_wait01_005df0cc[];
extern char s_ironball_walk00_005df0dc[];
extern char s_ironball_walk01_005df0ec[];

// USA 005DEDA0 <- EU 005DED78 (Ghidra, non-matching)
// GLOBAL DAT_005df0a0 int *
// GLOBAL DAT_005df0a4 int *
// GLOBAL DAT_005df0b8 int
// GLOBAL DAT_005df1dc undefined4
// GLOBAL DAT_005df1e0 undefined4
// GLOBAL DAT_005df1e4 int *
// GLOBAL DAT_005df230 undefined4
// GLOBAL DAT_005df234 int *
// GLOBAL DAT_005df29c uint
// GLOBAL DAT_005df2a0 uint
// GLOBAL DAT_005df2a4 uint
// GLOBAL DAT_005df2a8 uint
// GLOBAL DAT_005df2ac uint
// GLOBAL DAT_005df2b0 uint
// GLOBAL DAT_005df2b4 undefined4
// GLOBAL DAT_005df2b8 undefined4 *
// GLOBAL DAT_005df2bc undefined
// GLOBAL DAT_005df2e0 int
// GLOBAL DAT_005df2e4 uint *
// GLOBAL DAT_005df2e8 undefined4
// GLOBAL DAT_005df2ec undefined4 *
// GLOBAL DAT_005df2f0 undefined4
// GLOBAL DAT_005df2f4 undefined4 *
// GLOBAL DAT_005df2f8 undefined
// GLOBAL DAT_005df3d4 int
// GLOBAL DAT_005df3d8 uint *
// GLOBAL DAT_005df3dc undefined4
// GLOBAL DAT_005df3e0 undefined4 *
// GLOBAL DAT_005df3e4 undefined4 *
// GLOBAL DAT_005df3e8 undefined
// GLOBAL DAT_005df410 int
// GLOBAL DAT_005df414 uint *
// GLOBAL DAT_005df418 undefined4 *
// GLOBAL s_EnemyIronSoldierFire_005df3f8 string
// GLOBAL s_EnemyIronSoldierSilver_005df308 string
// GLOBAL s_EnemyIronSoldier_005df2cc string
// GLOBAL s_Heishi1_005df1e8 string
// GLOBAL s_Heishi_great1_005df238 string
// GLOBAL s_Heishi_great_ironball_005df248 string
// GLOBAL s_Heishi_great_ironball_chain_005df260 string
// GLOBAL s_Heishi_great_ironball_handle_005df27c string
// GLOBAL s_Heishi_ironball_005df1f0 string
// GLOBAL s_Heishi_ironball_chain_005df200 string
// GLOBAL s_Heishi_ironball_handle_005df218 string
// GLOBAL s_ironball_attack00_ed_005df150 string
// GLOBAL s_ironball_attack00_md_005df138 string
// GLOBAL s_ironball_attack00_st_005df120 string
// GLOBAL s_ironball_damge00_005df17c string
// GLOBAL s_ironball_dead_ed00_005df1c8 string
// GLOBAL s_ironball_dead_st00_005df1b4 string
// GLOBAL s_ironball_fall00_005df190 string
// GLOBAL s_ironball_find00_005df0fc string
// GLOBAL s_ironball_guard00_005df168 string
// GLOBAL s_ironball_kamae00_005df10c string
// GLOBAL s_ironball_op00_005df0a8 string
// GLOBAL s_ironball_piyopiyo00_005df1a0 string
// GLOBAL s_ironball_wait00_005df0bc string
// GLOBAL s_ironball_wait01_005df0cc string
// GLOBAL s_ironball_walk00_005df0dc string
// GLOBAL s_ironball_walk01_005df0ec string

undefined8 func_005DEDA0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(undefined1 *)(albw_frame + 0x4))
  #define local_5b (*(undefined1 *)(albw_frame + 0x5))
  #define local_5a (*(undefined1 *)(albw_frame + 0x6))
  #define local_59 (*(undefined1 *)(albw_frame + 0x7))
  #define local_58 (*(undefined1 *)(albw_frame + 0x8))
  #define local_50 (*(undefined1 *)(albw_frame + 0x10))
  #define local_4f (*(undefined1 *)(albw_frame + 0x11))
  #define local_4e (*(undefined1 *)(albw_frame + 0x12))
  #define local_4d (*(undefined1 *)(albw_frame + 0x13))
  #define local_4c (*(undefined1 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined * *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(undefined * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(undefined * *)(albw_frame + 0x44))
  iVar6 = DAT_005df0b8;
  piVar1 = DAT_005df0a0;
  DAT_005df0a0[10] = -1;
  piVar1[0xb] = -1;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar2 = DAT_005df0a4;
  DAT_005df0a4[1] = (int)s_ironball_op00_005df0a8;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_ironball_wait00_005df0bc;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_ironball_wait01_005df0cc;
  piVar2[4] = iVar6;
  piVar2[7] = (int)s_ironball_walk00_005df0dc;
  piVar2[6] = iVar6;
  piVar2[9] = (int)s_ironball_walk01_005df0ec;
  piVar2[8] = iVar6;
  piVar2[0xb] = (int)s_ironball_find00_005df0fc;
  piVar2[10] = iVar6;
  piVar2[0xd] = (int)s_ironball_kamae00_005df10c;
  piVar2[0xc] = iVar6;
  piVar2[0xf] = (int)s_ironball_attack00_st_005df120;
  piVar2[0xe] = iVar6;
  piVar2[0x11] = (int)s_ironball_attack00_md_005df138;
  piVar2[0x10] = iVar6;
  piVar2[0x13] = (int)s_ironball_attack00_ed_005df150;
  piVar2[0x12] = iVar6;
  piVar2[0x15] = (int)s_ironball_guard00_005df168;
  piVar2[0x14] = iVar6;
  piVar2[0x17] = (int)s_ironball_damge00_005df17c;
  piVar2[0x16] = iVar6;
  piVar2[0x19] = (int)s_ironball_fall00_005df190;
  piVar2[0x18] = iVar6;
  piVar2[0x1b] = (int)s_ironball_piyopiyo00_005df1a0;
  piVar2[0x1a] = iVar6;
  piVar2[0x1d] = (int)s_ironball_dead_st00_005df1b4;
  piVar2[0x1c] = iVar6;
  piVar2[0x1e] = iVar6;
  piVar2[0x1f] = (int)s_ironball_dead_ed00_005df1c8;
  piVar2 = DAT_005df1e4;
  DAT_005df1e4[1] = (int)s_Heishi1_005df1e8;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_Heishi_ironball_005df1f0;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_Heishi_ironball_chain_005df200;
  piVar2[4] = iVar6;
  piVar2[6] = iVar6;
  piVar2[7] = (int)s_Heishi_ironball_handle_005df218;
  piVar2 = DAT_005df234;
  DAT_005df234[1] = (int)s_Heishi_great1_005df238;
  *piVar2 = iVar6;
  piVar2[3] = (int)s_Heishi_great_ironball_005df248;
  piVar2[2] = iVar6;
  piVar2[5] = (int)s_Heishi_great_ironball_chain_005df260;
  piVar2[4] = iVar6;
  piVar2[6] = iVar6;
  piVar2[7] = (int)s_Heishi_great_ironball_handle_005df27c;
  uVar8 = func_00114608(0x4e000000,DAT_005df29c);
  piVar1[3] = (int)uVar8;
  uVar8 = func_00114608(DAT_005df2a0,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[4] = (int)uVar8;
  uVar8 = func_00114608(DAT_005df2a4,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[5] = (int)uVar8;
  uVar8 = func_00114608(DAT_005df2a8,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[6] = (int)uVar8;
  uVar8 = func_00114608(DAT_005df2ac,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[7] = (int)uVar8;
  uVar8 = func_00114608(DAT_005df2b0,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[8] = (int)uVar8;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0xff;
  local_4c = 0xff;
  func_004FC5F8(DAT_005df1e4 + 0x10,DAT_005df1e4,0,0,0,(undefined4 *)&local_50,0xb);
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0xff;
  local_58 = 0xff;
  func_004FC5F8(DAT_005df234 + 0x1a,DAT_005df234,0,0,0,(undefined4 *)&local_5c,0xb);
  puVar3 = DAT_005df2b8;
  puVar7 = DAT_005df2b8 + 3;
  DAT_005df2b8[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_3c = &DAT_005df2bc;
  local_40 = iVar6;
  local_44 = s_EnemyIronSoldier_005df2cc;
  local_48 = iVar6;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005df2e0;
  }
  func_0019B51C(DAT_005df2ec,DAT_005df2e8,*DAT_005df2e4,(int)&local_48,DAT_005df2b8,&local_40,iVar5)
  ;
  puVar3 = DAT_005df2f4;
  DAT_005df2f4[2] = DAT_005df2f4 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_2c = &DAT_005df2f8;
  local_30 = iVar6;
  local_34 = s_EnemyIronSoldierSilver_005df308;
  local_38 = iVar6;
  iVar5 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar5 = DAT_005df3d4;
  }
  func_0019B51C(DAT_005df3e0,DAT_005df3dc,*DAT_005df3d8,(int)&local_38,DAT_005df2f4,&local_30,iVar5)
  ;
  puVar3 = DAT_005df3e4;
  puVar7 = DAT_005df3e4 + 3;
  DAT_005df3e4[1] = 5;
  puVar3[2] = puVar7;
  *puVar3 = 0;
  local_1c = &DAT_005df3e8;
  local_20 = iVar6;
  local_24 = s_EnemyIronSoldierFire_005df3f8;
  local_28 = iVar6;
  iVar6 = piVar1[2];
  if (piVar1[2] == 0) {
    iVar6 = DAT_005df410;
  }
  uVar4 = func_0019B51C(DAT_005df418,DAT_005df2e8,*DAT_005df414,(int)&local_28,DAT_005df3e4,
                        &local_20,iVar6);
  return CONCAT44(DAT_005df2f0,uVar4);
}

