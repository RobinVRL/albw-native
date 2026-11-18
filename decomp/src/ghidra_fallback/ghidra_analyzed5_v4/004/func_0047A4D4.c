#include "ghidra_types.h"

extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 0047A4D4 <- EU 0047A4AC (Ghidra, non-matching)

undefined4 func_0047A4D4(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x158) + 0xd0) != '\x03') {
    return 0;
  }
  return func_0066E7A0((undefined4 *)(*(int *)(param_1 + 0x158) + 0xf0),'\x0f');
}

