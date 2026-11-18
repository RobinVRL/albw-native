#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001329C4(int param_1,int param_2);
extern int func_002C1754(undefined4 *param_1);
extern int func_002C4098(undefined4 *param_1);
extern int func_004D08D4(undefined4 *param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00522E1C(int param_1,byte *param_2,int *param_3);
extern int func_00522E7C(int param_1,uint *param_2,int *param_3,int *param_4);
extern int func_00533400(int param_1,int *param_2);
extern undefined4 *DAT_002c2f5c;
extern int *DAT_002c2f60;

// USA 002C2D00 <- EU 002C2CDC (Ghidra, non-matching)
// GLOBAL DAT_002c2f5c undefined4 *
// GLOBAL DAT_002c2f60 int *

int * func_002C2D00(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  float in_s0;
  
  iVar2 = param_1[5];
  if (iVar2 == 0) {
    iVar7 = param_1[4];
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x50);
  }
  if (iVar2 == 0 && iVar7 == 0) {
    puVar3 = func_00504CC0(*DAT_002c2f5c,param_1,0xffffffff);
    if (*(char *)param_1[3] == '\0') {
      iVar7 = func_00533400((int)puVar3,param_1);
    }
    else {
      iVar7 = func_00533400((int)puVar3,param_1 + 2);
    }
  }
  puVar4 = (uint *)param_1[0xd];
  puVar5 = puVar4;
  if (puVar4 == (uint *)0x0) {
    if (param_1[5] == 0) {
      puVar5 = *(uint **)(iVar7 + 0x24);
    }
    else {
      puVar5 = *(uint **)(param_1[5] + 0x20);
    }
  }
  if ((puVar4 == (uint *)0x0) && (((char)param_1[0xe] == '\0' || ((param_1[6] & 1U) != 0)))) {
    puVar5 = (uint *)func_0010CF28(8,(int *)param_1[8],4);
    if (puVar5 != (uint *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    func_00522E7C(iVar7,puVar5,(int *)param_1[8],(int *)param_1[9]);
  }
  else if (*(uint **)(iVar7 + 0x24) == puVar5) {
    param_1[6] = param_1[6] | 0x40000000;
  }
  pbVar8 = (byte *)param_1[0xc];
  if (pbVar8 == (byte *)0x0) {
    pbVar8 = (byte *)func_0010BAB4(0x24);
    if (pbVar8 != (byte *)0x0) {
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8[0x10] = 0;
      pbVar8[0x11] = 0;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0;
      pbVar8[0x14] = 0;
      pbVar8[0x15] = 0;
      pbVar8[0x16] = 0;
      pbVar8[0x17] = 0;
      pbVar8[0x18] = 0;
      pbVar8[0x19] = 0;
      pbVar8[0x1a] = 0;
      pbVar8[0x1b] = 0;
      pbVar8[0x1c] = 0;
      pbVar8[0x1d] = 0;
      pbVar8[0x1e] = 0;
      pbVar8[0x1f] = 0;
      pbVar8[0x20] = 0;
      pbVar8[0x21] = 0;
      pbVar8[0x22] = 0;
      pbVar8[0x23] = 0;
    }
    func_00522E1C(iVar7,pbVar8,(int *)0x0);
  }
  cVar1 = (char)param_1[7];
  piVar6 = (int *)0x0;
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)func_0010BAB4(400);
    if (puVar3 != (undefined4 *)0x0) {
      piVar6 = func_002C4098(puVar3);
      goto LAB_002c2ec4;
    }
  }
  else if (cVar1 == '\x01') {
    puVar3 = (undefined4 *)func_0010BAB4(0x178);
    if (puVar3 != (undefined4 *)0x0) {
      piVar6 = func_004D08D4(puVar3);
      goto LAB_002c2ec4;
    }
  }
  else {
    if (cVar1 != '\x02') goto LAB_002c2ec4;
    puVar3 = (undefined4 *)func_0010BAB4(0x220);
    if (puVar3 != (undefined4 *)0x0) {
      piVar6 = func_002C1754(puVar3);
      goto LAB_002c2ec4;
    }
  }
  piVar6 = (int *)0x0;
LAB_002c2ec4:
  (**(code **)(*piVar6 + 0x1c))(piVar6,iVar7,puVar5,pbVar8,param_1);
  (**(code **)(*piVar6 + 0x10))(piVar6,*(undefined1 *)((int)param_1 + 0x39));
  func_001329C4(*DAT_002c2f60,(int)piVar6);
  iVar2 = piVar6[0x14];
  iVar7 = piVar6[0x12];
  if (iVar7 != 0) {
    piVar6[0x12] = 0;
    func_0010F1F8(piVar6 + 0xf,in_s0);
    *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
  }
  piVar6[0x12] = iVar2 + 0xc4;
  func_0010F1DC((int *)(iVar2 + 0xc4),piVar6 + 0xf);
  *(int *)(iVar2 + 0xcc) = *(int *)(iVar2 + 0xcc) + 1;
  return piVar6;
}

