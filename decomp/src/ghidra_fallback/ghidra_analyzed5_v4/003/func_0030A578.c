#include "ghidra_types.h"


// USA 0030A578 <- EU 0030A554 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1

void func_0030A578(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  if (*(char *)(param_1 + 0xdb) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xda) = 1;
  *(undefined1 *)(param_1 + 0x144) = param_5;
  *(undefined1 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  *(short *)(param_1 + 0x140) = (short)param_4;
  *(char *)(param_1 + 0x142) = (char)((int)param_4 >> 0x1f) + '\x01';
  return;
}

