#include "ghidra_types.h"

extern int func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0036B708(int param_1);
extern int func_0036BE78();
extern int func_004E9CD4(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern undefined4 uRam002ea2d0;
extern int *DAT_002ea2bc;
extern int *DAT_002ea2c0;
extern float DAT_002ea2c4;
extern float DAT_002ea2c8;
extern float DAT_002ea2cc;

// USA 002EA150 <- EU 002EA12C (Ghidra, non-matching)
// GLOBAL DAT_002ea2bc int *
// GLOBAL DAT_002ea2c0 int *
// GLOBAL DAT_002ea2c4 float
// GLOBAL DAT_002ea2c8 float
// GLOBAL DAT_002ea2cc float
// GLOBAL UNK_002ea2d0 undefined4

void func_002EA150(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar2 = func_0052FBA0(*DAT_002ea2bc + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x2e0) = *(uint *)(iVar2 + 0x2e0) | 2;
  }
  if (*(int *)(param_1 + 0x8c8) == 10) {
    func_004E9CD4(*DAT_002ea2c0);
  }
  uVar5 = func_0058AB74(param_1);
  if (((int)uVar5 == 2) &&
     (in_s0 = DAT_002ea2c4, lVar6 = func_0058ACC8(param_1,DAT_002ea2c4), (int)lVar6 != 0)) {
    in_s0 = DAT_002ea2cc;
    func_002F14EC(param_1,0x41,DAT_002ea2cc,DAT_002ea2c8);
  }
  iVar3 = func_0036BE78(param_1 + 0x964);
  iVar4 = *(int *)(param_1 + 0xb7c);
  if (iVar4 == 0) {
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      func_004FABDC(param_1,0,0xffffffff,0);
      uVar1 = uRam002ea2d0;
      *(undefined4 *)(param_1 + 0xb10) = 0x3c;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return;
    }
  }
  else if (iVar4 == 1) {
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      func_0036B708(param_1 + 0x964);
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return;
    }
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  else if ((iVar4 == 2) && (iVar3 != 0)) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x2e0) = *(uint *)(iVar2 + 0x2e0) & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
    func_006640EC((undefined4 *)(param_1 + 0x8c8),2,in_s0);
  }
  return;
}

