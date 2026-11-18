#include "ghidra_types.h"

extern int func_003E67D8(int param_1,uint param_2);
extern int func_003E6D50(uint param_1);
extern int func_0041D908(int param_1,undefined4 param_2,int param_3);

// USA 0041DD0C <- EU 0041DCEC (Ghidra, non-matching)

uint * func_0041DD0C(uint *param_1,undefined4 param_2,int param_3)

{
  if (*param_1 != 0) {
    func_0041D908((int)param_1,param_2,param_3);
    func_003E67D8(*param_1,3);
    func_003E6D50(*param_1);
    *param_1 = 0;
  }
  return param_1;
}

