#include "ghidra_types.h"

extern int func_002F3D28(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int DAT_002f2ca8;
extern int *DAT_002f2cac;
extern int DAT_002f2cb0;

// USA 002F2C18 <- EU 002F2BF4 (Ghidra, non-matching)
// GLOBAL DAT_002f2ca8 int
// GLOBAL DAT_002f2cac int *
// GLOBAL DAT_002f2cb0 int

void func_002F2C18(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_002f2ca8;
  param_1[0xf9] = DAT_002f2ca8;
  param_1[0xf8] = iVar2;
  param_1[0xf7] = iVar2;
  func_002F3D28(param_1);
  param_1[0x167] = param_1[0x167] | 7;
  *(undefined1 *)((int)param_1 + 0xe0e) = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = iVar2;
  piVar1 = DAT_002f2cac;
  param_1[0x2d5] = 0;
  iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,param_1[0x324]);
  if (iVar2 != 0) {
    func_00668934((undefined4 *)(iVar2 + 0x40c),0);
  }
  iVar2 = DAT_002f2cb0;
  iVar3 = *(int *)(DAT_002f2cb0 + 0x37c);
  iVar4 = *(int *)(DAT_002f2cb0 + 0x380);
  param_1[0x32f] = (int)param_1;
  param_1[0x330] = iVar3;
  param_1[0x331] = iVar4;
  iVar3 = *(int *)(iVar2 + 900);
  iVar2 = *(int *)(iVar2 + 0x388);
  param_1[0x333] = (int)param_1;
  param_1[0x334] = iVar3;
  param_1[0x335] = iVar2;
  return;
}

