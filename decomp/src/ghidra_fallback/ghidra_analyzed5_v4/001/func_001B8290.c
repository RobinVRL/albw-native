#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001B8114(int param_1);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_00561060(int param_1,undefined4 param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_001b8ab4;
extern int *DAT_001b8ab8;
extern uint *DAT_001b8abc;
extern int DAT_001b8ac0;
extern int DAT_001b8ac4;
extern int DAT_001b8ac8;
extern int *DAT_001b8acc;
extern int *DAT_001b8ad0;
extern uint *DAT_001b8ad4;
extern uint *DAT_001b8ad8;
extern int DAT_001b8adc;
extern int *DAT_001b8ae0;
extern int *DAT_001b8ae4;
extern int *DAT_001b8ae8;
extern int *DAT_001b8aec;
extern int *DAT_001b8af0;

// USA 001B8290 <- EU 001B8290 (Ghidra, non-matching)
// GLOBAL DAT_001b8ab4 int
// GLOBAL DAT_001b8ab8 int *
// GLOBAL DAT_001b8abc uint *
// GLOBAL DAT_001b8ac0 int
// GLOBAL DAT_001b8ac4 int
// GLOBAL DAT_001b8ac8 int
// GLOBAL DAT_001b8acc int *
// GLOBAL DAT_001b8ad0 int *
// GLOBAL DAT_001b8ad4 uint *
// GLOBAL DAT_001b8ad8 uint *
// GLOBAL DAT_001b8adc int
// GLOBAL DAT_001b8ae0 int *
// GLOBAL DAT_001b8ae4 int *
// GLOBAL DAT_001b8ae8 int *
// GLOBAL DAT_001b8aec int *
// GLOBAL DAT_001b8af0 int *

void func_001B8290(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_68 (*(uint * *)(albw_frame + 0x8))
  #define local_64 (*(uint * *)(albw_frame + 0xc))
  #define local_60 (*(uint * *)(albw_frame + 0x10))
  #define local_5c (*(uint * *)(albw_frame + 0x14))
  #define local_58 ((uint * *)(albw_frame + 0x18))
  #define local_50 ((uint * *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  #define local_28 (*(int * *)(albw_frame + 0x48))
  iVar3 = DAT_001b8ab4;
  local_50[0] = (uint *)0x0;
  iStack_2c = param_1;
  local_28 = param_2;
  if (*(char *)(param_1 + 0x581) < '\0') {
    iVar9 = 0;
    do {
      piVar6 = (int *)(iVar3 + iVar9 * 8);
      (**(code **)(*piVar6 + 8))(piVar6);
      iVar2 = func_00560E74(local_28,(uint *)&local_60,(uint *)piVar6[1]);
      if (iVar2 != 0) {
        *(char *)(param_1 + 0x581) = (char)iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
  }
  func_003C7A70(&local_68);
  piVar6 = DAT_001b8ab8;
  (**(code **)(*DAT_001b8ab8 + 8))(DAT_001b8ab8);
  bVar1 = func_00560EF8(local_28,(int *)&local_68,(uint *)piVar6[1]);
  if (bVar1) {
    iVar3 = func_00560FA0((int)&local_68,(uint *)&local_60,0);
    if (iVar3 != 0) {
      if ((int)local_60 < -1) {
        puVar4 = (uint *)0xffffffff;
      }
      else {
        puVar4 = local_60;
        if (5 < (int)local_60) {
          puVar4 = (uint *)0x5;
        }
      }
      *(char *)(param_1 + 0x578) = (char)puVar4;
    }
    iVar3 = func_00560FA0((int)&local_68,(uint *)&local_60,1);
    if (iVar3 != 0) {
      *(short *)(param_1 + 0x576) = (short)local_60;
    }
    iVar3 = func_00560FA0((int)&local_68,(uint *)&local_60,2);
    if (iVar3 != 0) {
      *(short *)(param_1 + 0x574) = (short)local_60;
    }
    iVar3 = func_00561060((int)&local_68,&local_5c,3);
    if (iVar3 != 0) {
      *(char *)(param_1 + 0x579) = (char)local_5c;
    }
  }
  puVar4 = DAT_001b8abc;
  uVar7 = 0;
  do {
    piVar6 = (int *)(DAT_001b8ac0 + uVar7 * 8);
    (**(code **)(*piVar6 + 8))(piVar6);
    iVar3 = func_00561114(local_28,(int *)local_50,(uint *)piVar6[1]);
    if (iVar3 != 0) {
      iVar3 = param_1 + 0x50;
      if (uVar7 < 3) {
        iVar3 = iVar3 + uVar7 * 0x4c;
      }
      local_60 = puVar4;
      local_5c = local_50[0];
      puVar11 = *(uint **)(iVar3 + 4);
      (*(code *)puVar4[2])(&local_60);
      uVar10 = 0;
      do {
        if (*(char *)((int)local_5c + uVar10) == '\0') {
          if ((int)uVar10 < 0x40001) goto LAB_001b8474;
          break;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x40001);
      uVar10 = 0;
LAB_001b8474:
      if (*(int *)(iVar3 + 8) <= (int)uVar10) {
        uVar10 = *(int *)(iVar3 + 8) - 1;
      }
      (*(code *)local_60[2])(&local_60);
      func_0010E3C4(puVar11,local_5c,uVar10);
      *(undefined1 *)((int)puVar11 + uVar10) = 0;
      *(undefined1 *)(param_1 + 0x57d) = 1;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 3);
  uVar7 = 0;
  do {
    piVar6 = (int *)(DAT_001b8ac4 + uVar7 * 8);
    (**(code **)(*piVar6 + 8))(piVar6);
    iVar3 = func_00561114(local_28,(int *)local_50,(uint *)piVar6[1]);
    if (iVar3 != 0) {
      iVar3 = param_1 + 0x134;
      if (uVar7 < 3) {
        iVar3 = iVar3 + uVar7 * 0x4c;
      }
      local_60 = puVar4;
      local_5c = local_50[0];
      puVar11 = *(uint **)(iVar3 + 4);
      (*(code *)puVar4[2])(&local_60);
      uVar10 = 0;
      do {
        if (*(char *)((int)local_5c + uVar10) == '\0') {
          if ((int)uVar10 < 0x40001) goto LAB_001b8560;
          break;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x40001);
      uVar10 = 0;
LAB_001b8560:
      if (*(int *)(iVar3 + 8) <= (int)uVar10) {
        uVar10 = *(int *)(iVar3 + 8) - 1;
      }
      (*(code *)local_60[2])(&local_60);
      func_0010E3C4(puVar11,local_5c,uVar10);
      *(undefined1 *)((int)puVar11 + uVar10) = 0;
      *(undefined1 *)(param_1 + 0x57d) = 1;
    }
    iVar3 = DAT_001b8ac8;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 3);
  if (*(char *)(param_1 + 0x581) != '\x03') {
    uVar7 = 0;
    do {
      piVar6 = (int *)(iVar3 + uVar7 * 8);
      (**(code **)(*piVar6 + 8))(piVar6);
      iVar9 = func_00561114(local_28,(int *)local_50,(uint *)piVar6[1]);
      if (iVar9 != 0) {
        iVar9 = param_1 + 0x218;
        if (uVar7 < 2) {
          iVar9 = iVar9 + uVar7 * 0x4c;
        }
        local_60 = puVar4;
        local_5c = local_50[0];
        puVar11 = *(uint **)(iVar9 + 4);
        (*(code *)puVar4[2])(&local_60);
        uVar10 = 0;
        do {
          if (*(char *)((int)local_5c + uVar10) == '\0') {
            if ((int)uVar10 < 0x40001) goto LAB_001b8654;
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < 0x40001);
        uVar10 = 0;
LAB_001b8654:
        if (*(int *)(iVar9 + 8) <= (int)uVar10) {
          uVar10 = *(int *)(iVar9 + 8) - 1;
        }
        (*(code *)local_60[2])(&local_60);
        func_0010E3C4(puVar11,local_5c,uVar10);
        *(undefined1 *)((int)puVar11 + uVar10) = 0;
        *(undefined1 *)(param_1 + 0x57d) = 1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 2);
  }
  piVar6 = DAT_001b8acc;
  (**(code **)(*DAT_001b8acc + 8))(DAT_001b8acc);
  iVar3 = func_00561114(local_28,(int *)local_50,(uint *)piVar6[1]);
  if (iVar3 != 0) {
    local_64 = local_50[0];
    local_68 = puVar4;
    func_00689894(param_1 + 0x2b0,(int *)&local_68,0xffffffff);
    func_001B8114(param_1);
    *(undefined1 *)(param_1 + 0x57d) = 1;
  }
  func_003C7A70(aiStack_70);
  piVar6 = DAT_001b8ad0;
  (**(code **)(*DAT_001b8ad0 + 8))(DAT_001b8ad0);
  bVar1 = func_00560EF8(local_28,aiStack_70,(uint *)piVar6[1]);
  puVar11 = DAT_001b8ad4;
  if (bVar1) {
    func_00561184((int)aiStack_70,(uint *)&local_68,0);
    puVar5 = DAT_001b8ad8;
    puVar12 = puVar11;
    if ((ALBW_AS_F32(puVar11) <= ALBW_AS_F32(local_68)) &&
       (puVar12 = local_68, ALBW_AS_F32(DAT_001b8ad8) < ALBW_AS_F32(local_68))) {
      puVar12 = DAT_001b8ad8;
    }
    *(uint **)(param_1 + 0x358) = puVar12;
    func_00561184((int)aiStack_70,(uint *)&local_68,1);
    puVar12 = puVar11;
    if ((ALBW_AS_F32(puVar11) <= ALBW_AS_F32(local_68)) && (puVar12 = local_68, ALBW_AS_F32(puVar5) < ALBW_AS_F32(local_68))
       ) {
      puVar12 = puVar5;
    }
    *(uint **)(param_1 + 0x35c) = puVar12;
    puVar12 = puVar11;
    func_00561184((int)aiStack_70,(uint *)&local_68,2);
    if ((ALBW_AS_F32(puVar12) <= ALBW_AS_F32(local_68)) && (puVar12 = local_68, ALBW_AS_F32(puVar5) < ALBW_AS_F32(local_68))
       ) {
      puVar12 = puVar5;
    }
    *(uint **)(param_1 + 0x360) = puVar12;
    *(uint **)(param_1 + 0x364) = puVar5;
    *(undefined1 *)(param_1 + 0x57d) = 1;
  }
  iVar3 = DAT_001b8adc;
  *(undefined1 *)(param_1 + 0x580) = 0;
  uVar7 = 0;
  *(undefined1 *)(param_1 + 0x57b) = 0;
  do {
    piVar6 = (int *)(iVar3 + uVar7 * 8);
    (**(code **)(*piVar6 + 8))(piVar6);
    bVar1 = func_00560EF8(local_28,aiStack_70,(uint *)piVar6[1]);
    if (bVar1) {
      *(byte *)(param_1 + 0x57b) = *(byte *)(param_1 + 0x57b) | (byte)(1 << (uVar7 & 0xff));
      puVar5 = (uint *)(param_1 + 0x368);
      if (uVar7 < 2) {
        puVar5 = (uint *)(param_1 + 0x368 + uVar7 * 0xc);
      }
      func_00561184((int)aiStack_70,puVar5,0);
      iVar9 = param_1 + 0x368;
      if (uVar7 < 2) {
        iVar9 = param_1 + 0x368 + uVar7 * 0xc;
      }
      func_00561184((int)aiStack_70,(uint *)(iVar9 + 4),1);
      iVar9 = param_1 + 0x368;
      if (uVar7 < 2) {
        iVar9 = param_1 + 0x368 + uVar7 * 0xc;
      }
      func_00561184((int)aiStack_70,(uint *)(iVar9 + 8),2);
      *(undefined1 *)(param_1 + 0x57d) = 1;
    }
    piVar6 = DAT_001b8ae0;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  (**(code **)(*DAT_001b8ae0 + 8))(DAT_001b8ae0);
  iVar3 = func_00560E74(local_28,(uint *)&local_64,(uint *)piVar6[1]);
  piVar6 = DAT_001b8ae4;
  if (iVar3 != 0) {
    *(char *)(param_1 + 0x580) = (char)local_64;
  }
  *(undefined1 *)(param_1 + 0x57a) = 0;
  pbVar8 = (byte *)(param_1 + 0x57a);
  **(undefined1 **)(param_1 + 0x300) = 0;
  local_5c = (uint *)0x0;
  (**(code **)(*piVar6 + 8))(piVar6);
  iVar3 = func_00561114(local_28,(int *)local_50,(uint *)piVar6[1]);
  piVar6 = DAT_001b8ae8;
  if (iVar3 == 0) {
    (**(code **)(*DAT_001b8ae8 + 8))(DAT_001b8ae8);
    iVar3 = func_00560E74(local_28,(uint *)&local_5c,(uint *)piVar6[1]);
    if (iVar3 == 0) goto LAB_001b899c;
    *pbVar8 = *pbVar8 | 1;
  }
  else {
    local_64 = local_50[0];
    local_68 = puVar4;
    func_00689894(param_1 + 0x2fc,(int *)&local_68,0xffffffff);
  }
  *(undefined1 *)(param_1 + 0x57d) = 1;
LAB_001b899c:
  piVar6 = DAT_001b8aec;
  (**(code **)(*DAT_001b8aec + 8))(DAT_001b8aec);
  bVar1 = func_00560EF8(local_28,aiStack_70,(uint *)piVar6[1]);
  if (bVar1) {
    *pbVar8 = *pbVar8 | 2;
    func_00561184((int)aiStack_70,(uint *)(param_1 + 0x348),0);
    func_00561184((int)aiStack_70,(uint *)(param_1 + 0x34c),1);
    func_00561184((int)aiStack_70,(uint *)(param_1 + 0x350),2);
    func_00561184((int)aiStack_70,(uint *)(param_1 + 0x354),3);
    *(undefined1 *)(param_1 + 0x57d) = 1;
  }
  piVar6 = DAT_001b8af0;
  *(float *)(param_1 + 0x568) = ALBW_AS_F32(puVar11);
  *(uint **)(param_1 + 0x56c) = puVar11;
  *(uint **)(param_1 + 0x570) = puVar11;
  local_60 = puVar11;
  local_5c = puVar11;
  local_58[0] = puVar11;
  (**(code **)(*piVar6 + 8))(piVar6);
  bVar1 = func_00560EF8(local_28,aiStack_70,(uint *)piVar6[1]);
  if (bVar1) {
    func_00561184((int)aiStack_70,(uint *)&local_60,0);
    func_00561184((int)aiStack_70,(uint *)&local_5c,1);
    func_00561184((int)aiStack_70,(uint *)local_58,2);
    if (ALBW_AS_F32(local_58[0]) != ALBW_AS_F32(puVar11)) {
      *(float *)(param_1 + 0x568) = ALBW_AS_F32(local_60);
      *(uint **)(param_1 + 0x56c) = local_5c;
      *(uint **)(param_1 + 0x570) = local_58[0];
    }
  }
  return;
}

