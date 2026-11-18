#include "ghidra_types.h"

extern int func_0030DAA0(int param_1,int param_2);
extern undefined4 DAT_0035d6d4;

// USA 0035D6D0 <- EU 0035D6AC (Ghidra, non-matching)
// GLOBAL DAT_0035d6d4 undefined4

undefined4 * func_0035D6D0(undefined4 *param_1)

{
  *param_1 = DAT_0035d6d4;
  if (param_1[5] != 0) {
    func_0030DAA0(param_1[5],(int)param_1);
  }
  return param_1;
}

