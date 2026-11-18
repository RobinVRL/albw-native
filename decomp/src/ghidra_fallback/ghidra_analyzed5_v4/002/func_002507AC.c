#include "ghidra_types.h"

extern int func_0024FED0(int param_1);
extern int func_002507E0(int param_1);

// USA 002507AC <- EU 002507C0 (Ghidra, non-matching)

undefined4 func_002507AC(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x495) != param_2) {
    return 0;
  }
  if (*(char *)(param_1 + 0x491) != '\0') {
    *(undefined1 *)(param_1 + 0x49d) = 1;
    return func_002507E0(param_1);
  }
  return func_0024FED0(param_1);
}

