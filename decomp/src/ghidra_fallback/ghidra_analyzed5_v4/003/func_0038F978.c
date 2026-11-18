#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_004E97BC(int param_1,int *param_2,int param_3,int *param_4);
extern int func_00667F14(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0038fa20;
extern int DAT_0038fa44;
extern int *DAT_0038fa48;
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_0038fa24[];
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa4c[];
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa70[];
extern char s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa94[];

// USA 0038F978 <- EU 0038F954 (Ghidra, non-matching)
// GLOBAL DAT_0038fa20 int *
// GLOBAL DAT_0038fa44 int
// GLOBAL DAT_0038fa48 int *
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_0038fa24 string
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa4c string
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa70 string
// GLOBAL s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa94 string

undefined4 func_0038F978(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(int *)(*DAT_0038fa20 + 0x44) == 0) {
    func_00667F14((undefined4 *)(param_1 + 0x40c),2);
    piVar2 = DAT_0038fa48;
    iVar1 = DAT_0038fa44;
    local_1c = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_0038fa24;
    local_20 = DAT_0038fa44;
    func_002DF0B0(*DAT_0038fa48,&local_20,0);
    if (*(short *)(param_1 + 0x2c) == 1) {
      local_14 = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa70;
      local_18 = iVar1;
      return func_004E97BC(*piVar2,&local_18,0,param_4);
    }
    local_18 = iVar1;
    if (*(short *)(param_1 + 0x2c) == 2) {
      local_14 = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa94;
      return func_004E97BC(*piVar2,&local_18,0,param_4);
    }
    local_14 = s_SE_ENV_ENEMY_ATTACK_AUDIENCE_LAS_0038fa4c;
    func_004E97BC(*piVar2,&local_18,0,param_4);
  }
  return 0;
}

