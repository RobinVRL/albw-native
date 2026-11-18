#include "ghidra_types.h"

extern int func_00567904(int param_1,int *param_2,uint param_3,int param_4);
extern int func_00567AFC(int param_1,int *param_2,uint param_3,int param_4,float *param_5,float *param_6);

// USA 002FEB78 <- EU 002FEB54 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:8 undefined8
// PARAM param_7 Stack[0xc]:1 byte

void func_002FEB78(int param_1,uint param_2,int *param_3,int param_4,undefined4 *param_5,
                  undefined8 param_6,byte param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x29) != '\0';
  *(byte *)(param_1 + 0x29) = param_7 & bVar3;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(undefined4 *)(param_1 + 0x24) = param_5[2];
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  func_00567904(param_1,param_3,param_2,param_4);
  func_00567AFC(param_1,param_3,param_2,param_4,(float *)param_6,
                (float *)((ulonglong)param_6 >> 0x20));
  *(bool *)(param_1 + 0x29) = bVar3;
  return;
}

