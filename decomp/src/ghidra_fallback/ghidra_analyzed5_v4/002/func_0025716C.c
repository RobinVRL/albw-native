#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_0029740C(int param_1);
extern int func_004B083C(void);
extern int func_0057D86C(int *param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int func_00588174(int param_1,uint param_2);
extern int func_006916F0(int *param_1,int *param_2);
extern int *DAT_002574f8;
extern int DAT_002574fc;
extern int DAT_00257500;
extern int DAT_00257504;
extern undefined4 *DAT_00257508;
extern undefined DAT_00257528;
extern undefined DAT_0025753c;
extern int *DAT_00257544;
extern float DAT_00257548;
extern float DAT_0025754c;
extern char s_BATTLE_ROOM_0025751c[];
extern char s_BATTLE_ROOM_FIN_0025750c[];
extern char s_BOSS_CLEAR_00257530[];

// USA 0025716C <- EU 00257194 (Ghidra, non-matching)
// GLOBAL DAT_002574f8 int *
// GLOBAL DAT_002574fc int
// GLOBAL DAT_00257500 int
// GLOBAL DAT_00257504 int
// GLOBAL DAT_00257508 undefined4 *
// GLOBAL DAT_00257528 undefined
// GLOBAL DAT_0025753c undefined
// GLOBAL DAT_00257544 int *
// GLOBAL DAT_00257548 float
// GLOBAL DAT_0025754c float
// GLOBAL s_BATTLE_ROOM_0025751c string
// GLOBAL s_BATTLE_ROOM_FIN_0025750c string
// GLOBAL s_BOSS_CLEAR_00257530 string

void func_0025716C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(int *)(albw_frame + 0x0))
  #define local_bc (*(uint * *)(albw_frame + 0x4))
  #define local_b8 (*(int *)(albw_frame + 0x8))
  #define local_b4 ((uint *)(albw_frame + 0xc))
  #define uStack_75 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_70 (*(int *)(albw_frame + 0x50))
  #define local_6c (*(uint * *)(albw_frame + 0x54))
  #define local_68 (*(int *)(albw_frame + 0x58))
  #define local_64 (*(char * *)(albw_frame + 0x5c))
  #define local_60 (*(int *)(albw_frame + 0x60))
  #define local_5c (*(char * *)(albw_frame + 0x64))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(undefined * *)(albw_frame + 0x6c))
  #define local_50 (*(int *)(albw_frame + 0x70))
  #define local_4c (*(char * *)(albw_frame + 0x74))
  #define local_48 (*(int *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(int *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(int *)(albw_frame + 0x88))
  #define local_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_30 (*(int *)(albw_frame + 0x90))
  #define local_2c (*(undefined4 *)(albw_frame + 0x94))
  piVar1 = DAT_002574f8;
  local_6c = (uint *)func_00588154(*DAT_002574f8,param_2);
  iVar5 = DAT_002574fc;
  local_70 = DAT_002574fc;
  local_b8 = 0x40;
  iVar7 = 0;
  uStack_75 = 0;
  local_c0 = DAT_00257500;
  local_bc = local_b4;
  (**(code **)(DAT_002574fc + 8))(&local_70);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_6c + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_00257228;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_00257228:
  if (local_b8 <= (int)uVar6) {
    uVar6 = local_b8 - 1;
  }
  (**(code **)(local_70 + 8))(&local_70);
  func_0010E3C4(local_b4,local_6c,uVar6);
  *(undefined1 *)((int)local_b4 + uVar6) = 0;
  puVar2 = DAT_00257508;
  local_c0 = DAT_00257504;
  local_44 = *DAT_00257508;
  local_48 = iVar5;
  iVar4 = func_006916F0(&local_c0,&local_48);
  if (iVar4 == 0) {
    local_3c = puVar2[5];
    local_40 = iVar5;
    bVar3 = func_0057D86C((int *)(param_1 + 0xc));
    if (bVar3) {
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + 0xac);
      }
      if (iVar4 == 0) {
        iVar7 = -1;
      }
      iVar4 = func_00587FCC(*piVar1,&local_40);
      if (iVar7 == iVar4) goto LAB_002572d4;
    }
    bVar3 = false;
  }
  else {
LAB_002572d4:
    bVar3 = true;
  }
  if (bVar3) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    goto code_r0x0025744c;
  }
  local_34 = puVar2[2];
  local_38 = iVar5;
  iVar7 = func_006916F0(&local_c0,&local_38);
  if (iVar7 == 0) {
    local_2c = puVar2[4];
    local_30 = iVar5;
    iVar7 = func_006916F0(&local_c0,&local_30);
    bVar3 = false;
    if (iVar7 != 0) goto LAB_00257344;
  }
  else {
LAB_00257344:
    bVar3 = true;
  }
  if (bVar3) {
    uVar6 = *(uint *)(param_1 + 0x38) | 2;
  }
  else {
    local_64 = s_BATTLE_ROOM_FIN_0025750c;
    local_68 = iVar5;
    iVar7 = func_006916F0(&local_c0,&local_68);
    if (iVar7 == 0) {
      local_5c = s_BATTLE_ROOM_0025751c;
      local_60 = iVar5;
      iVar7 = func_006916F0(&local_c0,&local_60);
      if (iVar7 == 0) {
        local_54 = &DAT_00257528;
        local_58 = iVar5;
        iVar7 = func_006916F0(&local_c0,&local_58);
        if (iVar7 == 0) {
          local_4c = &DAT_0025753c;
          local_50 = iVar5;
          iVar5 = func_006916F0(&local_c0,&local_50);
          if (iVar5 != 0) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40;
            *(undefined1 *)(param_1 + 0x6c) = 1;
            *(undefined2 *)(param_1 + 0x60) = 3;
          }
          goto code_r0x0025744c;
        }
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x10;
        local_4c = s_BOSS_CLEAR_00257530;
        local_50 = iVar5;
        iVar5 = func_006916F0(&local_c0,&local_50);
        if (iVar5 == 0) goto code_r0x0025744c;
        uVar6 = *(uint *)(param_1 + 0x38) | 0x20;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x38) | 4;
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x38) | 8;
    }
  }
  *(uint *)(param_1 + 0x38) = uVar6;
code_r0x0025744c:
  iVar5 = func_004B083C();
  if ((iVar5 != 0) || (*(char *)(*DAT_00257544 + 0x25) == '\x03')) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
  }
  uVar6 = func_00588174(*piVar1,param_2);
  if (((uVar6 & 0xc00000) != 0) && (*(undefined1 *)(param_1 + 0x6c) = 1, (uVar6 & 0x800000) != 0)) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200;
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    func_0029740C(*(int *)(param_1 + 8));
  }
  func_00258038(param_1,(uint)*(ushort *)(param_1 + 0x60),0,DAT_00257548);
  func_00258038(param_1,~(uint)*(ushort *)(param_1 + 0x60) & 0xffff,0,DAT_0025754c);
  *(undefined2 *)(param_1 + 0x60) = 1;
  return;
}

