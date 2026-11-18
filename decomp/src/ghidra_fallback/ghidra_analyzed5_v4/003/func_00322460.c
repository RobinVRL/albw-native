#include "ghidra_types.h"

extern int func_001022F4(void);
extern int func_00104914(undefined4 param_1);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_0010EE40(void);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_00601390(void);
extern undefined4 *DAT_00322570;
extern int DAT_00322574;

// USA 00322460 <- EU 0032243C (Ghidra, non-matching)
// GLOBAL DAT_00322570 undefined4 *
// GLOBAL DAT_00322574 int

void func_00322460(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  bool bVar6;
  
  puVar1 = DAT_00322570;
  func_0010E0E0((int *)*DAT_00322570);
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1,param_3);
  (**(code **)(*param_1 + 0x6c))(param_1);
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x78))(param_1);
  func_0010E15C((int *)*puVar1);
  if ((char)param_1[0x56] != '\0') {
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  (**(code **)(*param_1 + 0x7c))(param_1);
  func_0010E0E0((int *)*puVar1);
  if ((char)param_1[0x56] == '\0') {
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1_00,param_3);
  uVar2 = func_001022F4();
  uVar3 = func_0010EE40();
  func_003E35DC(uVar3,uVar2);
  func_00601390();
  iVar4 = param_1[0x52];
  param_1[0x52] = -iVar4 + 1;
  func_005FF418(param_1[-iVar4 + 0x4b],extraout_r1_01,param_3);
  iVar4 = (int)((ulonglong)((longlong)DAT_00322574 * (longlong)(param_1[0x49] + 1)) >> 0x20);
  param_1[0x49] = param_1[0x49] + 1 + (iVar4 - (iVar4 >> 0x1f)) * -3;
  func_0010E15C((int *)*puVar1);
  uVar5 = (uint)*(byte *)(param_1 + 10);
  bVar6 = uVar5 == 1;
  if (bVar6) {
    uVar5 = param_1[0x53];
  }
  if (bVar6 && uVar5 == 2) {
    func_00104914(uVar5);
    *(undefined1 *)(param_1 + 10) = 2;
  }
  if (param_1[0x53] < 3) {
    param_1[0x53] = param_1[0x53] + 1;
  }
  return;
}

