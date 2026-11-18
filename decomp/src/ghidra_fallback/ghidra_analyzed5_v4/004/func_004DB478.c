#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern int func_00634924(int param_1);
extern undefined4 DAT_004db4b4;

// USA 004DB478 <- EU 004DB450 (Ghidra, non-matching)
// GLOBAL DAT_004db4b4 undefined4

undefined4 func_004DB478(int param_1)

{
  if (*(char *)(param_1 + 0x9bc) != '\x02') {
    *(undefined1 *)(param_1 + 0x919) = 1;
    if (*(int *)(param_1 + 0x7a4) != 0) {
      func_004CF478(*(int *)(param_1 + 0x7a4),0);
    }
  }
  *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffeff;
  *(undefined1 *)(param_1 + 0x856) = 3;
  *(undefined4 *)(param_1 + 0x8b4) = DAT_004db4b4;
  return func_00634924(param_1);
}

