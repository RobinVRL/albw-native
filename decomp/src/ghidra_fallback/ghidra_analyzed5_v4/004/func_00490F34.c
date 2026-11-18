#include "ghidra_types.h"

extern int func_00490CD0(int *param_1,undefined1 *param_2);

// USA 00490F34 <- EU 00490F0C (Ghidra, non-matching)

void func_00490F34(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_28 ((undefined1 *)(albw_frame + 0x8))
  if ((*param_1 != 0) && (*(undefined1 *)(param_1 + 4) = 0, param_1[2] < param_1[3])) {
    do {
      func_00490CD0(param_1,auStack_28);
    } while (param_1[2] < param_1[3]);
  }
  return;
}

