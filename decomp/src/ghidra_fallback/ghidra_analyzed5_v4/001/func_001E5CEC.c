#include "ghidra_types.h"


// USA 001E5CEC <- EU 001E5CEC (Ghidra, non-matching)

void func_001E5CEC(int param_1)

{
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x480);
  return;
}

