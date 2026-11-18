#include "ghidra_types.h"

extern int func_00100186(uint *param_1,undefined1 *param_2,uint param_3);
extern int func_00100994(uint *param_1,int param_2,int param_3);

// USA 00100542 <- EU 00100542 (Ghidra, function missing from the decomp table)

undefined4 func_00100542(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[5] == 0) {
    func_00100186(param_1,(undefined1 *)*param_3,0xffffffff);
  }
  else {
    func_00100994(param_1,(int)*param_3,-1);
  }
  return 1;
}

