// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014D1C0(int param_1,uint param_2);
extern int func_0014D1EC(int param_1);
extern int func_0014D5E8(int param_1);
extern int func_0014D644(int param_1,int param_2);
extern int func_0014D668(int param_1,int param_2);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00296D00(int param_1,int *param_2);
extern int func_00297298(int param_1,int param_2);
extern int func_00297618(int param_1,int param_2);
extern int func_0032871C(int param_1);
extern int func_00351D40(int param_1);
extern int func_00556E64(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_002e1f7c;
extern int *DAT_002e1f80;
extern int *DAT_002e1f84;
extern int *DAT_002e1f88;
extern int DAT_002e1f8c;
extern undefined4 DAT_002e1f90;
extern int DAT_002e1fbc;
extern char s_BGM_CROSS_BATTLE_ROLL_002e1fa4[];
extern char s_BGM_CROSS_BATTLE_WIN_002e2000[];
extern char s_FANFARE_CROSS_BATTLE_DRAW_002e2034[];
extern char s_FANFARE_CROSS_BATTLE_LOSE_002e2018[];
extern char s_FANFARE_CROSS_BATTLE_WIN_002e1fe4[];
extern char s_FANFARE_CROSS_BATTLE_WIN_TIME_UP_002e1fc0[];
extern char s_SE_S_TIME_UP_002e1f94[];

// USA 002E1CA4 <- EU 002E1C80 (Ghidra, non-matching)
// GLOBAL DAT_002e1f7c int *
// GLOBAL DAT_002e1f80 int *
// GLOBAL DAT_002e1f84 int *
// GLOBAL DAT_002e1f88 int *
// GLOBAL DAT_002e1f8c int
// GLOBAL DAT_002e1f90 undefined4
// GLOBAL DAT_002e1fbc int
// GLOBAL s_BGM_CROSS_BATTLE_ROLL_002e1fa4 string
// GLOBAL s_BGM_CROSS_BATTLE_WIN_002e2000 string
// GLOBAL s_FANFARE_CROSS_BATTLE_DRAW_002e2034 string
// GLOBAL s_FANFARE_CROSS_BATTLE_LOSE_002e2018 string
// GLOBAL s_FANFARE_CROSS_BATTLE_WIN_002e1fe4 string
// GLOBAL s_FANFARE_CROSS_BATTLE_WIN_TIME_UP_002e1fc0 string
// GLOBAL s_SE_S_TIME_UP_002e1f94 string

void func_002E1CA4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  iVar4 = DAT_002e1f8c;
  piVar3 = DAT_002e1f88;
  piVar2 = DAT_002e1f84;
  piVar1 = DAT_002e1f80;
  local_38 = *(int *)(*DAT_002e1f7c + 300);
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x1c) = DAT_002e1f90;
    puVar7 = *(undefined4 **)(*piVar1 + 0x1c);
    uVar8 = *puVar7;
    uVar9 = puVar7[1];
    *(undefined4 *)(param_1 + 0x30) = puVar7[2];
    *(undefined4 *)(param_1 + 0x28) = uVar8;
    *(undefined4 *)(param_1 + 0x2c) = uVar9;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 0x25) = 1;
    func_0014D1C0(local_38,5);
    local_2c = s_SE_S_TIME_UP_002e1f94;
    local_30 = iVar4;
    func_00587F74(*piVar2,&local_30,0);
    func_00297298(*piVar2,0xf);
    local_2c = s_BGM_CROSS_BATTLE_ROLL_002e1fa4;
    local_30 = iVar4;
    func_00259354(*piVar2,&local_30,0x78);
    func_00297618(*piVar2,0x1e);
    break;
  case 3:
    if (*(char *)(param_1 + 0x25) == '\0') {
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
    puVar6 = (uint *)(*(int *)(param_1 + 0x7c) + 0x24);
    *puVar6 = *puVar6 | 1;
    if (DAT_002e1fbc <= *(int *)(param_1 + 0x1c)) {
      *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) =
           *(uint *)(*(int *)(param_1 + 0x7c) + 0x28) | 0x8000;
    }
    func_00351D40(*(int *)(param_1 + 0x7c));
    func_0014D1EC(local_38);
    func_0014D5E8(local_38);
    local_38 = iVar4;
    if (*(char *)(param_1 + 0x25) == '\0') {
      local_34 = s_FANFARE_CROSS_BATTLE_WIN_002e1fe4;
      func_00296D00(*piVar2,&local_38);
    }
    else {
      local_34 = s_FANFARE_CROSS_BATTLE_WIN_TIME_UP_002e1fc0;
      func_00296D00(*piVar2,&local_38);
    }
    local_2c = s_BGM_CROSS_BATTLE_WIN_002e2000;
    local_30 = iVar4;
    func_00259354(*piVar2,&local_30,0x1e);
    func_00297618(*piVar2,0x1e);
    if (*(char *)(*piVar3 + 0x5ac) == '\x01') {
      *(undefined1 *)(*piVar3 + 0x5ac) = 4;
    }
    bVar5 = func_00556E64(*piVar1);
    if (!bVar5) {
      func_0032871C(*(int *)(param_1 + 0x80));
    }
    break;
  case 4:
    puVar6 = (uint *)(*(int *)(param_1 + 0x7c) + 0x24);
    *puVar6 = *puVar6 | 2;
    func_00351D40(*(int *)(param_1 + 0x7c));
    func_0014D1EC(local_38);
    func_0014D668(local_38,(int)*(char *)(param_1 + 0x25));
    if (*(char *)(param_1 + 0x25) != '\0') {
      local_34 = s_FANFARE_CROSS_BATTLE_LOSE_002e2018;
      local_38 = iVar4;
      func_00296D00(*piVar2,&local_38);
    }
    func_00297618(*piVar2,0x1e);
    if (*(char *)(*piVar3 + 0x5ac) == '\x01') {
      *(undefined1 *)(*piVar3 + 0x5ac) = 2;
    }
    break;
  case 5:
    puVar6 = (uint *)(*(int *)(param_1 + 0x7c) + 0x24);
    *puVar6 = *puVar6 | 4;
    func_00351D40(*(int *)(param_1 + 0x7c));
    func_0014D1EC(local_38);
    func_0014D644(local_38,(int)*(char *)(param_1 + 0x25));
    if (*(char *)(param_1 + 0x25) != '\0') {
      local_34 = s_FANFARE_CROSS_BATTLE_DRAW_002e2034;
      local_38 = iVar4;
      func_00296D00(*piVar2,&local_38);
    }
    func_00297618(*piVar2,0x1e);
    if (*(char *)(*piVar3 + 0x5ac) == '\x01') {
      *(undefined1 *)(*piVar3 + 0x5ac) = 3;
    }
  }
  *(char *)(param_1 + 0x14) = (char)param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

