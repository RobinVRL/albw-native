#include "ghidra_types.h"

extern int func_00218798(int param_1,uint param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F68AC();
extern int *DAT_00218744;

// USA 002186EC <- EU 002186EC (Ghidra, non-matching)
// GLOBAL DAT_00218744 int *

undefined4 func_002186EC(int param_1,uint param_2,undefined4 param_3,float *param_4)

{
  if ((*(char *)(param_1 + 0x8fd) == '\x01' && param_2 == 0) &&
     (*(int *)(*DAT_00218744 + 0x44) != 0)) {
    func_00218798(param_1,param_2);
    param_3 = 0;
    func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,param_4);
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}

