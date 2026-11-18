#include "ghidra_types.h"

extern int func_00127004(int param_1,uint param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F68AC();
extern int *DAT_00126d40;

// USA 00126CF4 <- EU 00126CF4 (Ghidra, non-matching)
// GLOBAL DAT_00126d40 int *

undefined4 func_00126CF4(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  if ((param_2 == 0) && (*(int *)(*DAT_00126d40 + 0x44) != 0)) {
    func_00127004(param_1,0);
    param_3 = 0;
    func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,param_4);
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}

