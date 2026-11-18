#include "ghidra_types.h"


// USA 00653DA4 <- EU 00653D7C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:2 undefined2

void func_00653DA4(int *param_1,int *param_2,int *param_3,undefined1 param_4,uint param_5,
                  undefined2 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (iVar1 != 0) {
    param_5 = param_5 >> 1;
  }
  param_1[0x26f] = *param_2;
  param_1[0x270] = *param_3;
  param_1[0x271] = param_3[1];
  param_1[0x272] = param_3[2];
  *(undefined1 *)(param_1 + 0x274) = param_4;
  *(short *)(param_1 + 0x273) = (short)param_5;
  *(undefined2 *)((int)param_1 + 0x9ce) = param_6;
  *(undefined1 *)(param_1 + 0x26e) = param_4;
  *(short *)(param_1 + 0x26d) = (short)param_5;
  *(undefined2 *)((int)param_1 + 0x9b6) = param_6;
  *(undefined1 *)((int)param_1 + 0x9b9) = *(undefined1 *)((int)param_1 + 0x9d2);
  *(undefined1 *)((int)param_1 + 0x9bb) = 0;
  *(undefined1 *)((int)param_1 + 0x9d3) = 1;
  return;
}

