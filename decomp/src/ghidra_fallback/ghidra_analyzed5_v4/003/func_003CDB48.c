#include "ghidra_types.h"

extern undefined4 DAT_003cdb7c;

// USA 003CDB48 <- EU 003CDB24 (Ghidra, non-matching)
// GLOBAL DAT_003cdb7c undefined4

undefined4 * func_003CDB48(undefined4 *param_1)

{
  *param_1 = DAT_003cdb7c;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      software_interrupt(0x23);
      param_1[1] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    software_interrupt(0x23);
    param_1[1] = 0;
  }
  return param_1;
}

