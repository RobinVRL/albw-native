#include "ghidra_types.h"

extern int func_001139F8(int param_1);

// USA 0042128C <- EU 0042126C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// PARAM param_6 Stack[0x4]:2 undefined2
// PARAM param_7 Stack[0x8]:2 undefined2
// PARAM param_8 Stack[0xc]:4 uint
// PARAM param_9 Stack[0x10]:1 undefined1

void func_0042128C(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,uint param_8,
                  undefined1 param_9)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = param_3 == 0;
  if (bVar2) {
    param_3 = 0;
  }
  *param_1 = param_2;
  if (!bVar2) {
    uVar1 = func_001139F8(param_3);
    param_3 = uVar1 >> 3;
  }
  *(undefined1 *)((int)param_1 + 0xe) = param_4;
  param_1[1] = param_3;
  param_1[4] = param_8 >> 3;
  *(undefined2 *)((int)param_1 + 10) = param_5;
  *(undefined2 *)(param_1 + 2) = param_6;
  *(undefined2 *)(param_1 + 3) = param_7;
  *(undefined1 *)((int)param_1 + 0xf) = param_9;
  return;
}

