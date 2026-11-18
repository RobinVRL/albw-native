#include "ghidra_types.h"

extern int func_0049FF98(undefined4 *param_1);
extern undefined4 DAT_0014cf98;
extern undefined4 *DAT_0014cf9c;

// USA 0014CF70 <- EU 0014CF70 (Ghidra, non-matching)
// GLOBAL DAT_0014cf98 undefined4
// GLOBAL DAT_0014cf9c undefined4 *

undefined4 func_0014CF70(undefined4 *param_1)

{
  *param_1 = DAT_0014cf98;
  if (*(char *)(param_1 + 0x6b) != '\0') {
    *DAT_0014cf9c = 0;
  }
  return func_0049FF98(param_1);
}

