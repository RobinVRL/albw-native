#include "ghidra_types.h"

extern int func_00104914(undefined4 param_1);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_005808BC(int *param_1,undefined4 *param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_00601390(void);
extern undefined4 *DAT_0049aa60;
extern int DAT_0049aa64;

// USA 0049A944 <- EU 0049A91C (Ghidra, non-matching)
// GLOBAL DAT_0049aa60 undefined4 *
// GLOBAL DAT_0049aa64 int

void func_0049A944(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  puVar1 = DAT_0049aa60;
  func_0010E0E0((int *)*DAT_0049aa60);
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1,param_3);
  (**(code **)(*param_1 + 0x6c))(param_1);
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x78))(param_1);
  func_0010E15C((int *)*puVar1);
  if ((char)param_1[0x56] != '\0') {
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  func_005808BC(&local_18,param_1 + 0x2c);
  param_1[0x2a] = local_18;
  param_1[0x2b] = iStack_14;
  software_interrupt(0x28);
  param_1[0x2c] = local_18;
  param_1[0x2d] = iStack_14;
  (**(code **)(*param_1 + 0x7c))(param_1);
  func_0010E0E0((int *)*puVar1);
  if ((char)param_1[0x56] == '\0') {
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  func_005FF418(param_1[param_1[0x52] + 0x4a],extraout_r1_00,param_3);
  func_00601390();
  iVar2 = param_1[0x52];
  param_1[0x52] = -iVar2 + 1;
  func_005FF418(param_1[-iVar2 + 0x4b],extraout_r1_01,param_3);
  iVar2 = (int)((ulonglong)((longlong)DAT_0049aa64 * (longlong)(param_1[0x49] + 1)) >> 0x20);
  param_1[0x49] = param_1[0x49] + 1 + (iVar2 - (iVar2 >> 0x1f)) * -3;
  func_0010E15C((int *)*puVar1);
  uVar3 = (uint)*(byte *)(param_1 + 10);
  bVar4 = uVar3 == 1;
  if (bVar4) {
    uVar3 = param_1[0x53];
  }
  if (bVar4 && uVar3 == 2) {
    func_00104914(uVar3);
    *(undefined1 *)(param_1 + 10) = 2;
  }
  if (param_1[0x53] < 3) {
    param_1[0x53] = param_1[0x53] + 1;
  }
  return;
}

