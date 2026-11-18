#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_0058FB28(undefined4 *param_1);

// USA 003D22CC <- EU 003D22A8 (Ghidra, non-matching)

undefined4 * func_003D22CC(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    func_0058FB28(param_1);
  }
  else {
    func_0010BB00(param_1,param_2);
  }
  return param_1;
}

