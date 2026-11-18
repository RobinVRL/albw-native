#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_00231340(short *param_1);
extern int func_002C00A8(int param_1);
extern int func_0066C19C(undefined4 *param_1,undefined1 param_2);

// USA 00425CC8 <- EU 00425CA8 (Ghidra, non-matching)

void func_00425CC8(int param_1)

{
  ushort *puVar1;
  
  func_002C00A8(*(int *)(param_1 + 0x14));
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xfffd;
  *(undefined1 *)(param_1 + 0x79) = 0;
  func_0066C19C((undefined4 *)(param_1 + 0x38),0);
  func_00231340((short *)(param_1 + 0x5c));
  func_0066C19C((undefined4 *)(param_1 + 0x38),1);
  func_001B6DE0(param_1);
  return;
}

