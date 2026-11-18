#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_0036C42C(int param_1);
extern int func_004F9434(int param_1);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int DAT_0035652c;
extern int DAT_00356530;
extern int *DAT_00356534;
extern float DAT_00356538;

// USA 003562BC <- EU 00356298 (Ghidra, non-matching)
// GLOBAL DAT_0035652c int
// GLOBAL DAT_00356530 int
// GLOBAL DAT_00356534 int *
// GLOBAL DAT_00356538 float

uint func_003562BC(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int in_r12;
  bool bVar7;
  bool bVar8;
  
  iVar2 = DAT_00356530;
  iVar4 = DAT_0035652c;
  uVar3 = param_2 & 0xff;
  bVar8 = 0x1d < uVar3;
  bVar7 = uVar3 == 0x1e;
  if (!bVar7) {
    uVar3 = uVar3 - 0xe;
  }
  cVar1 = *(char *)(param_3 + 0x24);
  iVar6 = (int)(short)param_1[0x142];
  if (!bVar7) {
    bVar8 = 2 < uVar3;
  }
  if (!bVar8 || (bVar7 || uVar3 == 3)) {
    in_r12 = 1;
  }
  if (bVar8 && (!bVar7 && uVar3 != 3)) {
    in_r12 = 0;
  }
  if ((iVar6 < 1) && (in_r12 != 0)) {
    param_1[0x167] = param_1[0x167] | 0x4000;
    *(undefined1 *)(param_1 + 0x26f) = 0;
    func_0036C42C((int)(param_1 + 0x232));
    return 0;
  }
  if ((cVar1 == '\a' || cVar1 == '\n') || cVar1 == '\t') {
    func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
    return 0x21;
  }
  if (cVar1 == '\x01') {
    if ((param_1[0x279] - iVar6 < 0x5a) && ((uint)param_1[0x28a] < (uint)param_1[0x28b])) {
      if ((uint)param_1[0x28e] <= (uint)param_1[0x28d]) {
        param_1[0x28e] = 0x3c;
        param_1[0x28f] = iVar2;
        param_1[0x28d] = 0;
        return 0xe;
      }
    }
    else {
      uVar5 = (ushort)*(byte *)(param_1 + 0x298);
      bVar8 = uVar5 == 8;
      if (bVar8) {
        uVar5 = *(ushort *)(param_1 + 0x27a);
      }
      if (bVar8 && uVar5 == 1) {
        param_1[0x28b] = 0;
        param_1[0x28c] = iVar4;
        param_1[0x28a] = 0;
      }
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x9ea) == '\x01') {
      if (param_2 == 3 || param_2 == 0x10) {
        func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
        return 0;
      }
      if (cVar1 == '\x06' || cVar1 == '\x05') {
        return 0xe;
      }
      return param_2;
    }
    if (in_r12 == 0) {
      bVar8 = param_2 == 3 || param_2 == 8;
      if (param_2 == 3 || param_2 == 8) {
        bVar8 = (char)param_1[0x298] == '\b';
      }
      if (!bVar8) {
        return param_2;
      }
    }
    else {
      if ((param_1[0x279] - iVar6 < 0x5a) && ((uint)param_1[0x28a] < (uint)param_1[0x28b])) {
        return 0xe;
      }
      uVar5 = (ushort)*(byte *)(param_1 + 0x298);
      bVar8 = uVar5 == 8;
      if (bVar8) {
        uVar5 = *(ushort *)(param_1 + 0x27a);
      }
      if (bVar8 && uVar5 == 1) {
        param_1[0x28b] = 0;
        param_1[0x28c] = iVar4;
        param_1[0x28a] = 0;
      }
      if (0 < (short)param_1[0x142]) {
        if (*(char *)((int)param_1 + 0x4b5) == '\0') {
          iVar4 = param_1[0x10c];
        }
        else {
          iVar4 = param_1[0x10d];
        }
        uVar3 = func_004F9434(iVar4);
        if (((uVar3 == 7) && ((char)param_1[0x298] != '\b')) && ((char)param_1[0x298] != '\n')) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        func_004F9554(param_1[0x10c],7,0,1);
        func_004F9554(param_1[0x10d],7,0,1);
        if ((bVar8) && (cVar1 == '\x05')) {
          func_002917A4(*DAT_00356534,param_1 + 0xf4,0,DAT_00356538);
        }
      }
    }
  }
  return 0x21;
}

