#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00111A64(uint *param_1);
extern undefined8 func_00323DFC(char *param_1,int param_2,int *param_3);
extern undefined4 DAT_00324008;

// USA 00323E88 <- EU 00323E64 (Ghidra, non-matching)
// GLOBAL DAT_00324008 undefined4

undefined8 func_00323E88(char *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((char *)(albw_frame + 0x8))
  #define local_40 ((int *)(albw_frame + 0x10))
  iVar4 = 0;
  do {
    func_00323DFC(param_1,(int)(char)(iVar4 << 1),local_40 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar5 = param_2 - 1;
  lVar9 = func_001104E4(uVar5,4);
  uVar3 = (uint)lVar9;
  if (0 < (int)uVar3) {
    uVar5 = uVar5 + uVar3 * -4;
  }
  uVar6 = uVar3;
  if (uVar3 == 0) {
    uVar6 = uVar5;
  }
  if ((int)uVar6 < 0) {
    uVar5 = (uVar3 + 1) * 4 + uVar5;
  }
  uVar6 = param_2 + 1;
  lVar9 = func_001104E4(uVar6,4);
  uVar2 = DAT_00324008;
  uVar3 = (uint)lVar9;
  if (0 < (int)uVar3) {
    uVar6 = uVar6 + uVar3 * -4;
  }
  uVar1 = uVar3;
  if (uVar3 == 0) {
    uVar1 = uVar6;
  }
  if ((int)uVar1 < 0) {
    uVar3 = uVar3 + 1;
  }
  if ((int)uVar1 < 0) {
    uVar6 = uVar3 * 4 + uVar6;
  }
  if (param_2 < 4) {
    uVar3 = param_2 + 2 & 3;
  }
  else {
    uVar3 = 0xffffffff;
  }
  iVar4 = (int)(char)uVar6;
  if (local_40[(char)uVar5] != 0) {
    iVar4 = local_40[iVar4];
  }
  if (local_40[(char)uVar5] == 0 || iVar4 == 0) {
    local_40[uVar3] = 1;
  }
  uVar3 = (uint)(local_40[0] == 0);
  if (local_40[0] == 0) {
    local_48[0] = '\0';
  }
  if (local_40[1] == 0) {
    local_48[uVar3] = '\x01';
    uVar3 = uVar3 + 1;
  }
  if (local_40[2] == 0) {
    local_48[uVar3] = '\x02';
    uVar3 = uVar3 + 1;
  }
  if (local_40[3] == 0) {
    local_48[uVar3] = '\x03';
    uVar3 = uVar3 + 1;
  }
  if (uVar3 != 0) {
    uVar5 = func_00111A64(param_3);
    return CONCAT44((int)((ulonglong)uVar3 * (ulonglong)uVar5),
                    (int)local_48[(int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20)]);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10c);
  iVar4 = 0;
  do {
    pcVar8 = param_1 + iVar4 * 0x10;
    *pcVar8 = '\0';
    iVar4 = iVar4 + 1;
    *(undefined4 *)(pcVar8 + 4) = uVar2;
    *(undefined4 *)(pcVar8 + 8) = uVar2;
    *(undefined4 *)(pcVar8 + 0xc) = uVar2;
  } while (iVar4 < 8);
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  *(undefined4 *)(param_1 + 0x10c) = uVar7;
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  return CONCAT44(uVar2,param_2);
}

