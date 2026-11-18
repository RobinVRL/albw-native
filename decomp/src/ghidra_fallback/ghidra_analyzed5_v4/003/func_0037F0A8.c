#include "ghidra_types.h"


// USA 0037F0A8 <- EU 0037F084 (Ghidra, non-matching)

undefined4 func_0037F0A8(int param_1)

{
  if (((*(char *)(param_1 + 0xb2d) != '\0') && (*(char *)(param_1 + 0xa4c) == '\a')) &&
     (*(char *)(param_1 + 0xb24) == '\x02')) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
    *(undefined1 *)(param_1 + 0xb24) = 3;
  }
  return 1;
}

