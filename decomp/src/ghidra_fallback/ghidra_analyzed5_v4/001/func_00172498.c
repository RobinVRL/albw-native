#include "ghidra_types.h"

extern uint DAT_00172548;

// USA 00172498 <- EU 00172498 (Ghidra, non-matching)
// GLOBAL DAT_00172548 uint

void * func_00172498(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 6 || param_2 == 7) {
    if (((uint)*(byte *)(param_1 + 0x34) & 1 << (param_2 & 0xff)) == 0) goto LAB_00172500;
  }
  else {
    if (param_2 != 8) {
      return (void *)param_1;
    }
    if ((*(byte *)(param_1 + 0x36) & 1) == 0) goto LAB_00172500;
  }
  if (param_2 < 9) {
    uVar1 = *(uint *)(param_1 + param_2 * 4 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  if ((uint)((ulonglong)uVar1 * (ulonglong)DAT_00172548 >> 0x25) <=
      (uint)((ulonglong)*(uint *)(param_1 + 0x2d8) * (ulonglong)DAT_00172548 >> 0x25)) {
    return (void *)param_1;
  }
LAB_00172500:
  if (param_2 < 9) {
    *(undefined4 *)(param_1 + param_2 * 4 + 0x10) = *(undefined4 *)(param_1 + 0x2d8);
    if (param_2 < 8) {
      *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (byte)(1 << (param_2 & 0xff));
    }
    else {
      *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) | (byte)(1 << (param_2 - 8 & 0xff));
    }
  }
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  return (void *)param_1;
}

