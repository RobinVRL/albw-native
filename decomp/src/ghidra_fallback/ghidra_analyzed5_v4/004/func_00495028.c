#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);

// USA 00495028 <- EU 00495000 (Ghidra, non-matching)

undefined4 func_00495028(int param_1,undefined4 *param_2)

{
  return func_001151EC((undefined4 *)(param_1 + 0x24),param_2);
}

