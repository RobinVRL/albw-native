#include "ghidra_types.h"

extern int func_0043D634(int param_1);

// USA 0051B06C <- EU 0051B044 (Ghidra, non-matching)

void func_0051B06C(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    func_0043D634(*(int *)(param_1 + 0x80));
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(uint *)(*(int *)(param_1 + 0x84) + 0x18) =
         *(uint *)(*(int *)(param_1 + 0x84) + 0x18) & 0xfffffffb;
    *(ushort *)(param_1 + 0x33e) = *(ushort *)(param_1 + 0x33e) | 8;
  }
  return;
}

