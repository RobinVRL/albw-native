#include "ghidra_types.h"

extern undefined4 DAT_0010978c;

// USA 00109758 <- EU 00109758 (Ghidra, non-matching)
// GLOBAL DAT_0010978c undefined4

undefined4 * func_00109758(undefined4 *param_1)

{
  *param_1 = DAT_0010978c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  param_1[8] = 4;
  return param_1;
}

